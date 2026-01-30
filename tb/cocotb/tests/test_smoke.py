"""
test_smoke.py - Basic smoke tests for rv64g_l1_dcache

This module provides basic verification tests for the L1 DCache including:
- Reset sequence
- Simple read/write operations
- TileLink transaction handling
"""

import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, FallingEdge, Timer, ClockCycles
from cocotb.handle import Force, Release
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

# TileLink D Channel Opcodes
TL_D_ACCESS_ACK = 0
TL_D_ACCESS_ACK_DATA = 1
TL_D_GRANT = 4
TL_D_GRANT_DATA = 5
TL_D_RELEASE_ACK = 6

# TileLink Permissions (Cap/Grow parameters)
TL_PERM_NONE = 0      # No permissions
TL_PERM_BRANCH = 1    # Read-only (Shared)
TL_PERM_TRUNK = 2     # Read/Write (Exclusive/Modified)

# Cache line size
LINE_BYTES = 64
WORDS_PER_LINE = LINE_BYTES // 8


# =============================================================================
# Helper Classes
# =============================================================================

class TileLinkResponder:
    """
    Simple TileLink responder that handles A channel requests and responds on D channel.
    Simulates a memory/L2 cache for the L1 DCache.
    """
    
    def __init__(self, dut):
        self.dut = dut
        self.memory = {}  # Address -> data dictionary
        self.running = False
        self.pending_grants = []
        self.sink_counter = 0
    
    async def start(self):
        """Start the responder coroutine."""
        self.running = True
        cocotb.start_soon(self._run())
    
    def stop(self):
        """Stop the responder."""
        self.running = False
    
    def write_memory(self, addr, data):
        """Pre-load memory with data."""
        self.memory[addr & ~0x3F] = self.memory.get(addr & ~0x3F, [0] * WORDS_PER_LINE)
        word_idx = (addr >> 3) & 0x7
        self.memory[addr & ~0x3F][word_idx] = data
    
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
            
            # Always keep E channel ready for GrantAck
            self.dut.tl_e_ready_i.value = 1
            
            # Check for E channel (GrantAck) - just consume it
            if self.dut.tl_e_valid_o.value == 1:
                logger.debug(f"TL-E: GrantAck sink={int(self.dut.tl_e_sink_o.value)}")
            
            # Check for A channel requests
            if self.dut.tl_a_valid_o.value == 1 and self.dut.tl_a_ready_i.value == 1:
                opcode = int(self.dut.tl_a_opcode_o.value)
                param = int(self.dut.tl_a_param_o.value)
                size = int(self.dut.tl_a_size_o.value)
                source = int(self.dut.tl_a_source_o.value)
                address = int(self.dut.tl_a_address_o.value)
                mask = int(self.dut.tl_a_mask_o.value)
                data = int(self.dut.tl_a_data_o.value)
                
                logger.info(f"TL-A: opcode={opcode} addr=0x{address:016x} source={source} param={param}")
                
                # Handle different opcodes
                if opcode == TL_A_ACQUIRE_BLOCK:
                    # Send GrantData for cache line
                    line_addr = address & ~0x3F
                    sink = self.sink_counter
                    self.sink_counter = (self.sink_counter + 1) & 0xF
                    
                    # Queue up cache line words
                    for i in range(WORDS_PER_LINE):
                        word_data = self.read_memory(line_addr + i * 8)
                        self.pending_grants.append({
                            'opcode': TL_D_GRANT_DATA,
                            'param': TL_PERM_TRUNK,  # Grant exclusive access
                            'size': size,
                            'source': source,
                            'sink': sink,
                            'data': word_data,
                            'last': (i == WORDS_PER_LINE - 1),
                        })
                
                elif opcode == TL_A_ACQUIRE_PERM:
                    # Permission upgrade (e.g., Shared -> Exclusive)
                    sink = self.sink_counter
                    self.sink_counter = (self.sink_counter + 1) & 0xF
                    
                    # Send Grant (no data for permission upgrade)
                    self.pending_grants.append({
                        'opcode': TL_D_GRANT,
                        'param': TL_PERM_TRUNK,  # Grant exclusive access
                        'size': size,
                        'source': source,
                        'sink': sink,
                        'data': 0,
                        'last': True,
                    })
                
                elif opcode == TL_A_GET:
                    # Simple get - return data
                    data = self.read_memory(address)
                    self.pending_grants.append({
                        'opcode': TL_D_ACCESS_ACK_DATA,
                        'param': 0,
                        'size': size,
                        'source': source,
                        'sink': 0,
                        'data': data,
                        'last': True,
                    })
                
                elif opcode in [TL_A_PUT_FULL, TL_A_PUT_PARTIAL]:
                    # Write to memory
                    self.write_memory(address, data)
                    self.pending_grants.append({
                        'opcode': TL_D_ACCESS_ACK,
                        'param': 0,
                        'size': size,
                        'source': source,
                        'sink': 0,
                        'data': 0,
                        'last': True,
                    })
            
            # Send D channel responses
            if self.pending_grants and self.dut.tl_d_ready_o.value == 1:
                grant = self.pending_grants.pop(0)
                self.dut.tl_d_valid_i.value = 1
                self.dut.tl_d_opcode_i.value = grant['opcode']
                self.dut.tl_d_param_i.value = grant['param']
                self.dut.tl_d_size_i.value = grant['size']
                self.dut.tl_d_source_i.value = grant['source']
                self.dut.tl_d_sink_i.value = grant['sink']
                self.dut.tl_d_data_i.value = grant['data']
                self.dut.tl_d_denied_i.value = 0
                self.dut.tl_d_corrupt_i.value = 0
            else:
                self.dut.tl_d_valid_i.value = 0


async def reset_dut(dut, cycles=10):
    """Apply reset to the DUT."""
    logger.info("Applying reset...")
    dut.rst_ni.value = 0
    
    # Initialize all inputs
    dut.invalidate_all_i.value = 0
    dut.req_i.value = 0
    dut.we_i.value = 0
    dut.be_i.value = 0
    dut.addr_i.value = 0
    dut.wdata_i.value = 0
    dut.amo_i.value = 0
    dut.lr_i.value = 0
    dut.sc_i.value = 0
    dut.amo_op_i.value = 0
    dut.amo_word_i.value = 0
    
    # VLSU inputs
    dut.vlsu_req_i.value = 0
    dut.vlsu_lane_valid_i.value = 0
    dut.vlsu_lane_we_i.value = 0
    dut.vlsu_lane_addr_i.value = 0
    dut.vlsu_lane_wdata_i.value = 0
    dut.vlsu_lane_be_i.value = 0
    
    # TileLink inputs
    dut.tl_a_ready_i.value = 1
    dut.tl_b_valid_i.value = 0
    dut.tl_b_opcode_i.value = 0
    dut.tl_b_param_i.value = 0
    dut.tl_b_size_i.value = 0
    dut.tl_b_source_i.value = 0
    dut.tl_b_address_i.value = 0
    dut.tl_b_mask_i.value = 0
    dut.tl_b_data_i.value = 0
    dut.tl_b_corrupt_i.value = 0
    dut.tl_c_ready_i.value = 1
    dut.tl_d_valid_i.value = 0
    dut.tl_d_opcode_i.value = 0
    dut.tl_d_param_i.value = 0
    dut.tl_d_size_i.value = 0
    dut.tl_d_source_i.value = 0
    dut.tl_d_sink_i.value = 0
    dut.tl_d_denied_i.value = 0
    dut.tl_d_data_i.value = 0
    dut.tl_d_corrupt_i.value = 0
    dut.tl_e_ready_i.value = 1
    
    await ClockCycles(dut.clk_i, cycles)
    dut.rst_ni.value = 1
    await ClockCycles(dut.clk_i, 2)
    logger.info("Reset complete")


async def scalar_read(dut, addr, timeout_cycles=1000):
    """Perform a scalar read operation."""
    logger.info(f"Scalar read: addr=0x{addr:016x}")
    
    # Assert request
    dut.req_i.value = 1
    dut.we_i.value = 0
    dut.be_i.value = 0xFF
    dut.addr_i.value = addr
    
    # Wait for grant
    for _ in range(timeout_cycles):
        await RisingEdge(dut.clk_i)
        if dut.gnt_o.value == 1:
            break
    else:
        raise TimeoutError(f"Timeout waiting for grant on read to 0x{addr:016x}")
    
    # Deassert request
    dut.req_i.value = 0
    
    # Wait for response
    for _ in range(timeout_cycles):
        await RisingEdge(dut.clk_i)
        if dut.rvalid_o.value == 1:
            data = int(dut.rdata_o.value)
            logger.info(f"Scalar read complete: data=0x{data:016x}")
            return data
    
    raise TimeoutError(f"Timeout waiting for rvalid on read to 0x{addr:016x}")


async def scalar_write(dut, addr, data, be=0xFF, timeout_cycles=1000):
    """Perform a scalar write operation."""
    logger.info(f"Scalar write: addr=0x{addr:016x} data=0x{data:016x}")
    
    # Assert request
    dut.req_i.value = 1
    dut.we_i.value = 1
    dut.be_i.value = be
    dut.addr_i.value = addr
    dut.wdata_i.value = data
    
    # Wait for grant
    for _ in range(timeout_cycles):
        await RisingEdge(dut.clk_i)
        if dut.gnt_o.value == 1:
            break
    else:
        raise TimeoutError(f"Timeout waiting for grant on write to 0x{addr:016x}")
    
    # Deassert request
    dut.req_i.value = 0
    dut.we_i.value = 0
    
    # Wait for response
    for _ in range(timeout_cycles):
        await RisingEdge(dut.clk_i)
        if dut.rvalid_o.value == 1:
            logger.info("Scalar write complete")
            return
    
    raise TimeoutError(f"Timeout waiting for rvalid on write to 0x{addr:016x}")


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
    
    # Cache should not be asserting any TileLink requests
    assert dut.tl_a_valid_o.value == 0, "tl_a_valid should be 0 after reset"
    assert dut.tl_c_valid_o.value == 0, "tl_c_valid should be 0 after reset"
    assert dut.tl_e_valid_o.value == 0, "tl_e_valid should be 0 after reset"
    
    logger.info("Reset test PASSED")


@cocotb.test()
async def test_read_miss(dut):
    """Test a read miss that triggers a cache line fill."""
    logger.info("=== Test: Read Miss ===")
    
    # Start clock
    clock = Clock(dut.clk_i, 10, unit="ns")
    cocotb.start_soon(clock.start())
    
    # Apply reset
    await reset_dut(dut)
    
    # Start TileLink responder
    responder = TileLinkResponder(dut)
    
    # Pre-load memory with test data
    test_addr = 0x80001000
    test_data = 0xDEADBEEF_CAFEBABE
    responder.write_memory(test_addr, test_data)
    
    await responder.start()
    
    # Perform read (will miss and fetch from memory)
    try:
        data = await scalar_read(dut, test_addr, timeout_cycles=500)
        
        # Verify data
        assert data == test_data, f"Expected 0x{test_data:016x}, got 0x{data:016x}"
        logger.info("Read miss test PASSED")
        
    except TimeoutError as e:
        logger.error(f"Read miss test FAILED: {e}")
        raise
    
    finally:
        responder.stop()


@cocotb.test()
async def test_write_then_read(dut):
    """Test write followed by read to same address (hit)."""
    logger.info("=== Test: Write Then Read ===")
    
    # Start clock
    clock = Clock(dut.clk_i, 10, unit="ns")
    cocotb.start_soon(clock.start())
    
    # Apply reset
    await reset_dut(dut)
    
    # Start TileLink responder
    responder = TileLinkResponder(dut)
    await responder.start()
    
    test_addr = 0x80002000
    test_data = 0x1234567890ABCDEF
    
    try:
        # First, do a read to bring line into cache
        await scalar_read(dut, test_addr, timeout_cycles=500)
        
        # Write new data
        await scalar_write(dut, test_addr, test_data, timeout_cycles=500)
        
        # Read back (should hit)
        data = await scalar_read(dut, test_addr, timeout_cycles=500)
        
        # Verify
        assert data == test_data, f"Expected 0x{test_data:016x}, got 0x{data:016x}"
        logger.info("Write then read test PASSED")
        
    except TimeoutError as e:
        logger.error(f"Write then read test FAILED: {e}")
        raise
    
    finally:
        responder.stop()


@cocotb.test()
async def test_multiple_addresses(dut):
    """Test accessing multiple different addresses."""
    logger.info("=== Test: Multiple Addresses ===")
    
    # Start clock
    clock = Clock(dut.clk_i, 10, unit="ns")
    cocotb.start_soon(clock.start())
    
    # Apply reset
    await reset_dut(dut)
    
    # Start TileLink responder
    responder = TileLinkResponder(dut)
    
    # Pre-load different addresses
    test_data = [
        (0x80003000, 0x1111111111111111),
        (0x80003040, 0x2222222222222222),  # Different cache line
        (0x80004000, 0x3333333333333333),  # Different set
    ]
    
    for addr, data in test_data:
        responder.write_memory(addr, data)
    
    await responder.start()
    
    try:
        # Read all addresses
        for addr, expected in test_data:
            data = await scalar_read(dut, addr, timeout_cycles=500)
            assert data == expected, f"At 0x{addr:016x}: expected 0x{expected:016x}, got 0x{data:016x}"
            logger.info(f"  Read 0x{addr:016x} OK")
        
        logger.info("Multiple addresses test PASSED")
        
    except (TimeoutError, AssertionError) as e:
        logger.error(f"Multiple addresses test FAILED: {e}")
        raise
    
    finally:
        responder.stop()


@cocotb.test()
async def test_read_hit(dut):
    """Test cache hit on second read to same address."""
    logger.info("=== Test: Read Hit ===")
    
    # Start clock
    clock = Clock(dut.clk_i, 10, unit="ns")
    cocotb.start_soon(clock.start())
    
    # Apply reset
    await reset_dut(dut)
    
    # Start TileLink responder
    responder = TileLinkResponder(dut)
    test_addr = 0x80005000
    test_data = 0xCAFEBABEDEADBEEF
    responder.write_memory(test_addr, test_data)
    await responder.start()
    
    try:
        # First read - miss, fetch from memory
        data1 = await scalar_read(dut, test_addr, timeout_cycles=500)
        assert data1 == test_data, f"First read: expected 0x{test_data:016x}, got 0x{data1:016x}"
        logger.info("  First read (miss) OK")
        
        # Second read - should be a hit (no TL-A request)
        data2 = await scalar_read(dut, test_addr, timeout_cycles=100)
        assert data2 == test_data, f"Second read: expected 0x{test_data:016x}, got 0x{data2:016x}"
        logger.info("  Second read (hit) OK")
        
        # Third read to same line, different word offset
        test_addr2 = test_addr + 8  # Next word in same line
        data3 = await scalar_read(dut, test_addr2, timeout_cycles=100)
        logger.info(f"  Third read (same line, different word) = 0x{data3:016x}")
        
        logger.info("Read hit test PASSED")
        
    except (TimeoutError, AssertionError) as e:
        logger.error(f"Read hit test FAILED: {e}")
        raise
    
    finally:
        responder.stop()


@cocotb.test()
async def test_cache_line_fill(dut):
    """Test that full cache line is fetched on miss."""
    logger.info("=== Test: Cache Line Fill ===")
    
    # Start clock
    clock = Clock(dut.clk_i, 10, unit="ns")
    cocotb.start_soon(clock.start())
    
    # Apply reset
    await reset_dut(dut)
    
    # Start TileLink responder
    responder = TileLinkResponder(dut)
    
    # Pre-load entire cache line (8 words)
    base_addr = 0x80006000
    line_data = [0x1000000000000000 + i for i in range(WORDS_PER_LINE)]
    
    for i, data in enumerate(line_data):
        responder.write_memory(base_addr + i * 8, data)
    
    await responder.start()
    
    try:
        # Read first word - triggers line fill
        data0 = await scalar_read(dut, base_addr, timeout_cycles=500)
        assert data0 == line_data[0], f"Word 0: expected 0x{line_data[0]:016x}, got 0x{data0:016x}"
        logger.info("  Word 0 (miss) OK")
        
        # Read all other words - should be hits
        for i in range(1, WORDS_PER_LINE):
            addr = base_addr + i * 8
            data = await scalar_read(dut, addr, timeout_cycles=100)
            assert data == line_data[i], f"Word {i}: expected 0x{line_data[i]:016x}, got 0x{data:016x}"
            logger.info(f"  Word {i} (hit) OK")
        
        logger.info("Cache line fill test PASSED")
        
    except (TimeoutError, AssertionError) as e:
        logger.error(f"Cache line fill test FAILED: {e}")
        raise
    
    finally:
        responder.stop()
