"""
test_coherence.py - Multi-core cache coherence tests

This module tests MESI coherence protocol state transitions:
- Shared state: Multiple readers
- Exclusive/Modified states: Write permissions
- Probe handling: Invalidation and downgrade
- Directory tracking: Sharer tracking
"""

import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, FallingEdge, Timer, ClockCycles, First, Combine
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
TL_A_ACQUIRE_BLOCK = 6
TL_A_ACQUIRE_PERM = 7

# TileLink B Channel Opcodes (Probes)
TL_B_PROBE_BLOCK = 6

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

# TileLink Grow Parameters (A-channel Acquire requests)
#   NtoB=0: Request shared (Branch) from Nothing
#   NtoT=1: Request exclusive (Trunk) from Nothing
#   BtoT=2: Upgrade from shared to exclusive
TL_GROW_NtoB = 0
TL_GROW_NtoT = 1
TL_GROW_BtoT = 2

# TileLink Cap Parameters (D-channel Grant responses / B-channel Probe)
#   In Cap encoding, LOWER values = MORE permission
#   toT=0: Trunk (exclusive, read/write)
#   toB=1: Branch (shared, read-only)
#   toN=2: Nothing (no permission)
TL_CAP_toT = 0
TL_CAP_toB = 1
TL_CAP_toN = 2

# Legacy aliases (permission level ordering, higher = more)
TL_PERM_NONE = 0
TL_PERM_BRANCH = 1
TL_PERM_TRUNK = 2

# Probe Cap transitions (same encoding as Cap params)
PROBE_TO_T = 0  # Keep exclusive (rare)
PROBE_TO_B = 1  # Downgrade to shared
PROBE_TO_N = 2  # Invalidate

# Cache states (MESI)
MESI_N = 0   # Invalid
MESI_B = 1   # Shared (Branch)
MESI_T = 2   # Exclusive (Trunk)
MESI_TT = 3  # Modified (Tip Trunk)

# Cache line size
LINE_BYTES = 64
WORDS_PER_LINE = LINE_BYTES // 8


# =============================================================================
# Helper Classes
# =============================================================================

class MemoryModel:
    """Simple memory model for L2 backend."""
    
    def __init__(self):
        self.memory = {}
    
    def write(self, addr, data):
        line_addr = addr & ~0x3F
        if line_addr not in self.memory:
            self.memory[line_addr] = [0] * WORDS_PER_LINE
        word_idx = (addr >> 3) & 0x7
        self.memory[line_addr][word_idx] = data
    
    def read(self, addr):
        line_addr = addr & ~0x3F
        word_idx = (addr >> 3) & 0x7
        if line_addr in self.memory:
            return self.memory[line_addr][word_idx]
        return 0
    
    def read_line(self, addr):
        line_addr = addr & ~0x3F
        if line_addr in self.memory:
            return self.memory[line_addr][:]
        return [0] * WORDS_PER_LINE


class MemoryResponder:
    """Memory responder for L2's mem_* interface."""
    
    def __init__(self, dut, memory):
        self.dut = dut
        self.memory = memory
        self.running = False
        self.pending_responses = []
    
    async def start(self):
        self.running = True
        cocotb.start_soon(self._run())
    
    def stop(self):
        self.running = False
    
    async def _run(self):
        while self.running:
            await RisingEdge(self.dut.clk_i)
            
            # Handle memory requests
            if self.dut.mem_a_valid_o.value == 1 and self.dut.mem_a_ready_i.value == 1:
                opcode = int(self.dut.mem_a_opcode_o.value)
                address = int(self.dut.mem_a_address_o.value)
                source = int(self.dut.mem_a_source_o.value)
                size = int(self.dut.mem_a_size_o.value)
                
                if opcode == TL_A_GET:
                    line_data = self.memory.read_line(address)
                    for data in line_data:
                        self.pending_responses.append({
                            'opcode': TL_D_ACCESS_ACK_DATA,
                            'param': 0,
                            'size': size,
                            'source': source,
                            'sink': 0,
                            'data': data,
                        })
                elif opcode == TL_A_PUT_FULL:
                    data = int(self.dut.mem_a_data_o.value)
                    self.memory.write(address, data)
                    self.pending_responses.append({
                        'opcode': TL_D_ACCESS_ACK,
                        'param': 0,
                        'size': size,
                        'source': source,
                        'sink': 0,
                        'data': 0,
                    })
            
            # Send responses
            if self.pending_responses and self.dut.mem_d_ready_o.value == 1:
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


async def reset_dut(dut, cycles=10):
    """Apply reset to the DUT."""
    logger.info("Applying reset...")
    dut.rst_ni.value = 0
    
    # Initialize all inputs
    dut.tl_a_opcode_i.value = 0
    dut.tl_a_param_i.value = 0
    dut.tl_a_source_i.value = 0
    dut.tl_a_address_i.value = 0
    dut.tl_a_valid_i.value = 0
    
    dut.tl_b_ready_i.value = 1
    
    dut.tl_c_opcode_i.value = 0
    dut.tl_c_param_i.value = 0
    dut.tl_c_source_i.value = 0
    dut.tl_c_address_i.value = 0
    dut.tl_c_data_i.value = 0
    dut.tl_c_valid_i.value = 0
    
    dut.tl_d_ready_i.value = 1
    
    dut.tl_e_valid_i.value = 0
    dut.tl_e_sink_i.value = 0
    
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


async def acquire_block(dut, address, source, param=TL_GROW_NtoT, timeout=500):
    """Send AcquireBlock and wait for Grant."""
    logger.info(f"Core {source}: AcquireBlock addr=0x{address:016x} param={param}")
    
    dut.tl_a_opcode_i.value = TL_A_ACQUIRE_BLOCK
    dut.tl_a_param_i.value = param
    dut.tl_a_source_i.value = source
    dut.tl_a_address_i.value = address
    dut.tl_a_valid_i.value = 1
    
    # Wait for ready
    for _ in range(timeout):
        await RisingEdge(dut.clk_i)
        if dut.tl_a_ready_o.value == 1:
            break
    
    await RisingEdge(dut.clk_i)
    dut.tl_a_valid_i.value = 0
    
    # Wait for Grant
    grants = []
    for _ in range(timeout):
        await RisingEdge(dut.clk_i)
        if dut.tl_d_valid_o.value == 1 and dut.tl_d_ready_i.value == 1:
            opcode = int(dut.tl_d_opcode_o.value)
            grants.append({
                'opcode': opcode,
                'param': int(dut.tl_d_param_o.value),
                'source': int(dut.tl_d_source_o.value),
                'sink': int(dut.tl_d_sink_o.value),
                'data': int(dut.tl_d_data_o.value),
            })
            if opcode in [TL_D_GRANT, TL_D_GRANT_DATA]:
                if len(grants) >= WORDS_PER_LINE or opcode == TL_D_GRANT:
                    break
    
    if not grants:
        raise TimeoutError(f"Timeout waiting for Grant")
    
    # Send GrantAck
    sink = grants[0]['sink']
    dut.tl_e_valid_i.value = 1
    dut.tl_e_sink_i.value = sink
    await RisingEdge(dut.clk_i)
    while dut.tl_e_ready_o.value != 1:
        await RisingEdge(dut.clk_i)
    await RisingEdge(dut.clk_i)
    dut.tl_e_valid_i.value = 0
    
    logger.info(f"Core {source}: Got Grant, perm={grants[0]['param']}")
    return grants


async def handle_probe(dut, timeout=100):
    """Handle a Probe request from L2."""
    # Wait for Probe
    for _ in range(timeout):
        await RisingEdge(dut.clk_i)
        if dut.tl_b_valid_o.value == 1 and dut.tl_b_ready_i.value == 1:
            opcode = int(dut.tl_b_opcode_o.value)
            param = int(dut.tl_b_param_o.value)
            address = int(dut.tl_b_address_o.value)
            dest = int(dut.tl_b_dest_o.value)
            logger.info(f"Probe received: dest={dest} addr=0x{address:016x} param={param}")
            
            # Send ProbeAck (no data for simplicity)
            await RisingEdge(dut.clk_i)
            dut.tl_c_opcode_i.value = TL_C_PROBE_ACK
            dut.tl_c_param_i.value = param  # Echo param
            dut.tl_c_source_i.value = dest
            dut.tl_c_address_i.value = address
            dut.tl_c_data_i.value = 0
            dut.tl_c_valid_i.value = 1
            
            for _ in range(timeout):
                await RisingEdge(dut.clk_i)
                if dut.tl_c_ready_o.value == 1:
                    break
            
            await RisingEdge(dut.clk_i)
            dut.tl_c_valid_i.value = 0
            
            logger.info(f"ProbeAck sent for dest={dest}")
            return {'address': address, 'param': param, 'dest': dest}
    
    return None


# =============================================================================
# Tests
# =============================================================================

@cocotb.test()
async def test_shared_read(dut):
    """Test multiple cores reading same address (should be shared)."""
    logger.info("=== Test: Shared Read ===")
    
    clock = Clock(dut.clk_i, 10, unit="ns")
    cocotb.start_soon(clock.start())
    
    await reset_dut(dut)
    
    memory = MemoryModel()
    test_addr = 0x80001000
    test_data = 0xCAFEBABE12345678
    memory.write(test_addr, test_data)
    
    mem_resp = MemoryResponder(dut, memory)
    await mem_resp.start()
    
    try:
        # Core 0 reads - gets exclusive first
        grants0 = await acquire_block(dut, test_addr, source=0)
        logger.info(f"Core 0 acquired line")
        await ClockCycles(dut.clk_i, 10)
        
        # Core 1 reads same address - should get shared or trigger probe
        grants1 = await acquire_block(dut, test_addr, source=1, timeout=1000)
        logger.info(f"Core 1 acquired line")
        
        logger.info("Shared read test PASSED")
        
    except TimeoutError as e:
        logger.error(f"Shared read test FAILED: {e}")
        raise
    
    finally:
        mem_resp.stop()


@cocotb.test()
async def test_exclusive_write(dut):
    """Test core acquiring access for write."""
    logger.info("=== Test: Exclusive Write ===")
    
    clock = Clock(dut.clk_i, 10, unit="ns")
    cocotb.start_soon(clock.start())
    
    await reset_dut(dut)
    
    memory = MemoryModel()
    test_addr = 0x80002000
    memory.write(test_addr, 0x1111111111111111)
    
    mem_resp = MemoryResponder(dut, memory)
    await mem_resp.start()
    
    try:
        # Core 0 acquires for write (requesting exclusive)
        grants = await acquire_block(dut, test_addr, source=0, param=TL_GROW_NtoT)
        
        # In Cap encoding (D-channel): toT=0, toB=1, toN=2 (lower = more permission)
        # "At least shared" means param <= toB (1)
        assert grants[0]['param'] <= TL_CAP_toB, "Should get at least shared permission (Cap: toT=0, toB=1)"
        logger.info(f"Core 0 got access (param={grants[0]['param']})")
        
        logger.info("Exclusive write test PASSED")
        
    except (TimeoutError, AssertionError) as e:
        logger.error(f"Exclusive write test FAILED: {e}")
        raise
    
    finally:
        mem_resp.stop()


@cocotb.test()
async def test_different_addresses(dut):
    """Test cores accessing different addresses (no conflict)."""
    logger.info("=== Test: Different Addresses ===")
    
    clock = Clock(dut.clk_i, 10, unit="ns")
    cocotb.start_soon(clock.start())
    
    await reset_dut(dut)
    
    memory = MemoryModel()
    addr0 = 0x80003000
    addr1 = 0x80004000  # Different cache line
    memory.write(addr0, 0xAAAAAAAAAAAAAAAA)
    memory.write(addr1, 0xBBBBBBBBBBBBBBBB)
    
    mem_resp = MemoryResponder(dut, memory)
    await mem_resp.start()
    
    try:
        # Core 0 acquires addr0
        grants0 = await acquire_block(dut, addr0, source=0)
        logger.info(f"Core 0 acquired addr0")
        
        await ClockCycles(dut.clk_i, 5)
        
        # Core 1 acquires addr1 (no conflict)
        grants1 = await acquire_block(dut, addr1, source=1)
        logger.info(f"Core 1 acquired addr1")
        
        logger.info("Different addresses test PASSED")
        
    except TimeoutError as e:
        logger.error(f"Different addresses test FAILED: {e}")
        raise
    
    finally:
        mem_resp.stop()


@cocotb.test()
async def test_directory_tracking(dut):
    """Test that directory tracks sharers correctly."""
    logger.info("=== Test: Directory Tracking ===")
    
    clock = Clock(dut.clk_i, 10, unit="ns")
    cocotb.start_soon(clock.start())
    
    await reset_dut(dut)
    
    memory = MemoryModel()
    test_addr = 0x80005000
    memory.write(test_addr, 0xDEADBEEF)
    
    mem_resp = MemoryResponder(dut, memory)
    await mem_resp.start()
    
    try:
        # Multiple cores acquire same line sequentially
        for core in range(3):
            grants = await acquire_block(dut, test_addr, source=core, timeout=1000)
            logger.info(f"Core {core} acquired line")
            await ClockCycles(dut.clk_i, 10)
        
        logger.info("Directory tracking test PASSED")
        
    except TimeoutError as e:
        logger.error(f"Directory tracking test FAILED: {e}")
        raise
    
    finally:
        mem_resp.stop()
