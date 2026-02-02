"""
test_l2_smoke.py - Basic smoke tests for rv64g_l2_cache

This module provides basic verification tests for the L2 Cache including:
- Reset sequence
- Simple AcquireBlock handling
- Directory operations
- Memory interface transactions
"""

import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, FallingEdge, Timer, ClockCycles
import logging

# Configure logging
logging.basicConfig(level=logging.INFO)
logger = logging.getLogger(__name__)


# =============================================================================
# TileLink Constants
# =============================================================================

# TileLink A Channel Opcodes
TL_A_GET = 4
TL_A_PUT_FULL = 0
TL_A_PUT_PARTIAL = 1
TL_A_ACQUIRE_BLOCK = 6
TL_A_ACQUIRE_PERM = 7

# TileLink B Channel Opcodes (Probes)
TL_B_PROBE_BLOCK = 6
TL_B_PROBE_PERM = 7

# TileLink C Channel Opcodes
TL_C_PROBE_ACK = 4
TL_C_PROBE_ACK_DATA = 5
TL_C_RELEASE = 6
TL_C_RELEASE_DATA = 7

# TileLink D Channel Opcodes
TL_D_ACCESS_ACK = 0
TL_D_ACCESS_ACK_DATA = 1
TL_D_GRANT = 4
TL_D_GRANT_DATA = 5
TL_D_RELEASE_ACK = 6

# TileLink Permissions
TL_PERM_NONE = 0       # toN - No permissions
TL_PERM_BRANCH = 1     # toB - Read-only (Shared)
TL_PERM_TRUNK = 2      # toT - Read/Write (Exclusive)

# Probe param (TtoB, TtoN, etc.)
PROBE_TO_N = 0    # Invalidate (toN)
PROBE_TO_B = 1    # Downgrade to shared (toB)
PROBE_TO_T = 2    # Keep exclusive (toT) - rare

# Cache line size
LINE_BYTES = 64
WORDS_PER_LINE = LINE_BYTES // 8


# =============================================================================
# Helper Classes
# =============================================================================

class MemoryResponder:
    """
    Simple memory responder for L2 cache mem_* interface.
    Simulates downstream memory (L3 or DRAM).
    """
    
    def __init__(self, dut):
        self.dut = dut
        self.memory = {}  # Address -> data dictionary
        self.running = False
        self.pending_responses = []
    
    async def start(self):
        """Start the responder coroutine."""
        self.running = True
        cocotb.start_soon(self._run())
    
    def stop(self):
        """Stop the responder."""
        self.running = False
    
    def write_memory(self, addr, data):
        """Pre-load memory with data."""
        line_addr = addr & ~0x3F
        if line_addr not in self.memory:
            self.memory[line_addr] = [0] * WORDS_PER_LINE
        word_idx = (addr >> 3) & 0x7
        self.memory[line_addr][word_idx] = data
    
    def read_memory(self, addr):
        """Read from memory."""
        line_addr = addr & ~0x3F
        word_idx = (addr >> 3) & 0x7
        if line_addr in self.memory:
            return self.memory[line_addr][word_idx]
        return 0
    
    async def _run(self):
        """Main responder loop."""
        while self.running:
            await RisingEdge(self.dut.clk_i)
            
            # Check for memory A channel requests
            if hasattr(self.dut, 'mem_a_valid_o'):
                if self.dut.mem_a_valid_o.value == 1 and self.dut.mem_a_ready_i.value == 1:
                    opcode = int(self.dut.mem_a_opcode_o.value)
                    size = int(self.dut.mem_a_size_o.value)
                    source = int(self.dut.mem_a_source_o.value)
                    address = int(self.dut.mem_a_address_o.value)
                    
                    logger.info(f"MEM-A: opcode={opcode} addr=0x{address:016x} source={source}")
                    
                    # Handle Get - return cache line
                    if opcode == TL_A_GET:
                        line_addr = address & ~0x3F
                        for i in range(WORDS_PER_LINE):
                            word_data = self.read_memory(line_addr + i * 8)
                            self.pending_responses.append({
                                'opcode': TL_D_ACCESS_ACK_DATA,
                                'param': 0,
                                'size': size,
                                'source': source,
                                'sink': 0,
                                'data': word_data,
                            })
                    
                    # Handle Put - acknowledge write
                    elif opcode in [TL_A_PUT_FULL, TL_A_PUT_PARTIAL]:
                        data = int(self.dut.mem_a_data_o.value)
                        self.write_memory(address, data)
                        self.pending_responses.append({
                            'opcode': TL_D_ACCESS_ACK,
                            'param': 0,
                            'size': size,
                            'source': source,
                            'sink': 0,
                            'data': 0,
                        })
            
            # Send D channel responses
            if self.pending_responses and hasattr(self.dut, 'mem_d_ready_o'):
                if self.dut.mem_d_ready_o.value == 1:
                    resp = self.pending_responses.pop(0)
                    self.dut.mem_d_valid_i.value = 1
                    self.dut.mem_d_opcode_i.value = resp['opcode']
                    self.dut.mem_d_param_i.value = resp['param']
                    self.dut.mem_d_size_i.value = resp['size']
                    self.dut.mem_d_source_i.value = resp['source']
                    self.dut.mem_d_sink_i.value = resp['sink']
                    self.dut.mem_d_data_i.value = resp['data']
                    self.dut.mem_d_denied_i.value = 0
                    self.dut.mem_d_corrupt_i.value = 0
                else:
                    self.dut.mem_d_valid_i.value = 0
            else:
                if hasattr(self.dut, 'mem_d_valid_i'):
                    self.dut.mem_d_valid_i.value = 0


async def reset_dut(dut, cycles=10):
    """Apply reset to the DUT."""
    logger.info("Applying reset...")
    dut.rst_ni.value = 0
    
    # Initialize TileLink A Channel inputs
    dut.tl_a_opcode_i.value = 0
    dut.tl_a_param_i.value = 0
    dut.tl_a_source_i.value = 0
    dut.tl_a_address_i.value = 0
    dut.tl_a_valid_i.value = 0
    
    # Initialize TileLink B Channel inputs
    dut.tl_b_ready_i.value = 1
    
    # Initialize TileLink C Channel inputs
    dut.tl_c_opcode_i.value = 0
    dut.tl_c_param_i.value = 0
    dut.tl_c_source_i.value = 0
    dut.tl_c_address_i.value = 0
    dut.tl_c_data_i.value = 0
    dut.tl_c_valid_i.value = 0
    
    # Initialize TileLink D Channel inputs
    dut.tl_d_ready_i.value = 1
    
    # Initialize TileLink E Channel inputs
    dut.tl_e_valid_i.value = 0
    dut.tl_e_sink_i.value = 0
    
    # Initialize Memory Interface inputs
    dut.mem_a_ready_i.value = 1
    dut.mem_d_opcode_i.value = 0
    dut.mem_d_param_i.value = 0
    dut.mem_d_size_i.value = 0
    dut.mem_d_source_i.value = 0
    dut.mem_d_sink_i.value = 0
    dut.mem_d_denied_i.value = 0
    dut.mem_d_data_i.value = 0
    dut.mem_d_corrupt_i.value = 0
    dut.mem_d_valid_i.value = 0
    
    await ClockCycles(dut.clk_i, cycles)
    dut.rst_ni.value = 1
    await ClockCycles(dut.clk_i, 2)
    logger.info("Reset complete")


async def send_acquire_block(dut, address, source, param=TL_PERM_TRUNK, timeout_cycles=100):
    """Send an AcquireBlock request on TileLink A channel."""
    logger.info(f"TL-A: AcquireBlock addr=0x{address:016x} source={source}")
    
    dut.tl_a_opcode_i.value = TL_A_ACQUIRE_BLOCK
    dut.tl_a_param_i.value = param
    dut.tl_a_source_i.value = source
    dut.tl_a_address_i.value = address
    dut.tl_a_valid_i.value = 1
    
    # Wait for ready
    for _ in range(timeout_cycles):
        await RisingEdge(dut.clk_i)
        if dut.tl_a_ready_o.value == 1:
            break
    else:
        raise TimeoutError(f"Timeout waiting for tl_a_ready on AcquireBlock to 0x{address:016x}")
    
    # Deassert valid after handshake
    await RisingEdge(dut.clk_i)
    dut.tl_a_valid_i.value = 0
    
    logger.info("AcquireBlock sent")


async def wait_for_grant(dut, timeout_cycles=500):
    """Wait for Grant/GrantData on TileLink D channel."""
    logger.info("Waiting for Grant...")
    
    grants_received = []
    
    for _ in range(timeout_cycles):
        await RisingEdge(dut.clk_i)
        if dut.tl_d_valid_o.value == 1 and dut.tl_d_ready_i.value == 1:
            opcode = int(dut.tl_d_opcode_o.value)
            param = int(dut.tl_d_param_o.value)
            source = int(dut.tl_d_source_o.value)
            sink = int(dut.tl_d_sink_o.value)
            data = int(dut.tl_d_data_o.value)
            
            logger.info(f"TL-D: opcode={opcode} param={param} source={source} sink={sink} data=0x{data:016x}")
            
            grants_received.append({
                'opcode': opcode,
                'param': param,
                'source': source,
                'sink': sink,
                'data': data,
            })
            
            # For GrantData, collect all beats
            if opcode == TL_D_GRANT_DATA:
                if len(grants_received) >= WORDS_PER_LINE:
                    break
            elif opcode == TL_D_GRANT:
                break
    
    if not grants_received:
        raise TimeoutError("Timeout waiting for Grant")
    
    return grants_received


async def send_grant_ack(dut, sink):
    """Send GrantAck on TileLink E channel."""
    logger.info(f"TL-E: GrantAck sink={sink}")
    
    dut.tl_e_valid_i.value = 1
    dut.tl_e_sink_i.value = sink
    
    await RisingEdge(dut.clk_i)
    while dut.tl_e_ready_o.value != 1:
        await RisingEdge(dut.clk_i)
    
    await RisingEdge(dut.clk_i)
    dut.tl_e_valid_i.value = 0


# =============================================================================
# Tests
# =============================================================================

@cocotb.test()
async def test_reset(dut):
    """Test that reset works correctly."""
    logger.info("=== Test: Reset ===")
    
    # Start clock
    clock = Clock(dut.clk_i, 10, unit="ns")
    cocotb.start_soon(clock.start())
    
    # Apply reset
    await reset_dut(dut)
    
    # Check outputs are in expected state after reset
    await RisingEdge(dut.clk_i)
    
    # L2 should be ready to accept requests
    assert dut.tl_a_ready_o.value == 1, "tl_a_ready should be 1 after reset"
    
    # No probes should be pending
    assert dut.tl_b_valid_o.value == 0, "tl_b_valid should be 0 after reset"
    
    # No grants pending
    assert dut.tl_d_valid_o.value == 0, "tl_d_valid should be 0 after reset"
    
    # No memory requests
    assert dut.mem_a_valid_o.value == 0, "mem_a_valid should be 0 after reset"
    
    logger.info("Reset test PASSED")


@cocotb.test()
async def test_acquire_miss(dut):
    """Test AcquireBlock that misses in L2 (fetches from memory)."""
    logger.info("=== Test: AcquireBlock Miss ===")
    
    # Start clock
    clock = Clock(dut.clk_i, 10, unit="ns")
    cocotb.start_soon(clock.start())
    
    # Apply reset
    await reset_dut(dut)
    
    # Start memory responder
    mem_responder = MemoryResponder(dut)
    
    # Pre-load memory with test data
    test_addr = 0x80001000
    test_data = [0x1000000000000000 + i for i in range(WORDS_PER_LINE)]
    for i, data in enumerate(test_data):
        mem_responder.write_memory(test_addr + i * 8, data)
    
    await mem_responder.start()
    
    try:
        # Send AcquireBlock
        await send_acquire_block(dut, test_addr, source=0)
        
        # Wait for Grant/GrantData
        grants = await wait_for_grant(dut, timeout_cycles=1000)
        
        # Send GrantAck
        if grants:
            await send_grant_ack(dut, grants[0]['sink'])
        
        logger.info(f"Received {len(grants)} grant beats")
        logger.info("AcquireBlock miss test PASSED")
        
    except TimeoutError as e:
        logger.error(f"AcquireBlock miss test FAILED: {e}")
        raise
    
    finally:
        mem_responder.stop()


@cocotb.test()
async def test_acquire_hit(dut):
    """Test AcquireBlock that hits in L2 after previous fill."""
    logger.info("=== Test: AcquireBlock Hit ===")
    
    # Start clock
    clock = Clock(dut.clk_i, 10, unit="ns")
    cocotb.start_soon(clock.start())
    
    # Apply reset
    await reset_dut(dut)
    
    # Start memory responder
    mem_responder = MemoryResponder(dut)
    
    test_addr = 0x80002000
    test_data = 0xDEADBEEFCAFEBABE
    mem_responder.write_memory(test_addr, test_data)
    
    await mem_responder.start()
    
    try:
        # First AcquireBlock - miss, fetch from memory
        await send_acquire_block(dut, test_addr, source=1)
        grants1 = await wait_for_grant(dut, timeout_cycles=1000)
        if grants1:
            await send_grant_ack(dut, grants1[0]['sink'])
        
        logger.info("First acquire (miss) complete")
        await ClockCycles(dut.clk_i, 10)
        
        # Second AcquireBlock - should hit in L2 (different source = different L1)
        await send_acquire_block(dut, test_addr, source=2)
        grants2 = await wait_for_grant(dut, timeout_cycles=1000)
        if grants2:
            await send_grant_ack(dut, grants2[0]['sink'])
        
        logger.info("Second acquire (should hit) complete")
        logger.info("AcquireBlock hit test PASSED")
        
    except TimeoutError as e:
        logger.error(f"AcquireBlock hit test FAILED: {e}")
        raise
    
    finally:
        mem_responder.stop()


@cocotb.test()
async def test_multiple_lines(dut):
    """Test fetching multiple different cache lines."""
    logger.info("=== Test: Multiple Lines ===")
    
    # Start clock
    clock = Clock(dut.clk_i, 10, unit="ns")
    cocotb.start_soon(clock.start())
    
    # Apply reset
    await reset_dut(dut)
    
    # Start memory responder
    mem_responder = MemoryResponder(dut)
    
    # Pre-load multiple addresses
    test_addrs = [
        0x80003000,
        0x80003040,  # Different line, same set
        0x80004000,  # Different set
    ]
    
    for addr in test_addrs:
        mem_responder.write_memory(addr, addr)  # Store addr as data for easy checking
    
    await mem_responder.start()
    
    try:
        for i, addr in enumerate(test_addrs):
            await send_acquire_block(dut, addr, source=i)
            grants = await wait_for_grant(dut, timeout_cycles=1000)
            if grants:
                await send_grant_ack(dut, grants[0]['sink'])
            logger.info(f"  Line {i} (addr=0x{addr:016x}) fetched")
            await ClockCycles(dut.clk_i, 5)
        
        logger.info("Multiple lines test PASSED")
        
    except TimeoutError as e:
        logger.error(f"Multiple lines test FAILED: {e}")
        raise
    
    finally:
        mem_responder.stop()
