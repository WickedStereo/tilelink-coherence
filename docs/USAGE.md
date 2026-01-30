# Usage Guide

## 1. Quick Start

### 1.1 Prerequisites

- **Verilator**: Version 5.006 or later (5.020+ recommended)
- **Python**: Version 3.8 or later
- **cocotb**: Version 2.0 or later
- **Make**: GNU Make

### 1.2 Install cocotb

```bash
pip install cocotb cocotb-test
```

### 1.3 Run Tests

```bash
# Run all L1 Verilator tests
make sim_verilator_l1_all

# Run L1 cocotb smoke test
make sim_cocotb_l1

# Run full system stress test
make sim_verilator_system_stress
```

## 2. Directory Structure

```
rtl/                    # Design RTL
  params.vh             # Global parameters
  l1/                   # L1 Cache modules
  l2/                   # L2 Cache modules
  system/               # Top-level system
  xbar/                 # TileLink interconnect

tb/                     # Testbench structure
  rtl/                  # Shared DUT wrappers
  verilator/            # Verilator testbenches
    l1/                 # L1 unit tests
    l2/                 # L2 unit tests
    system/             # System tests
    xbar/               # Interconnect tests
  cocotb/               # Cocotb verification
    run_sim.py          # Cocotb runner script
    tests/              # Test modules
    model/              # Packaged verification model

docs/                   # Documentation
  INTERFACE.md          # Port/protocol specification
  USAGE.md              # This file
  VERSIONS.md           # Tool versions
  architecture.md       # System architecture
```

## 3. Simulation Targets

### 3.1 Verilator Targets

| Target | Description |
|--------|-------------|
| `sim_verilator_l1_sram` | L1 SRAM bank test |
| `sim_verilator_l1_banked` | L1 banked arrays test |
| `sim_verilator_l1_hit` | L1 hit detection test |
| `sim_verilator_l1_miss_handler` | L1 miss handler test |
| `sim_verilator_l1_scalar` | L1 scalar operations |
| `sim_verilator_l1_probe` | L1 probe handling |
| `sim_verilator_l1_vlsu` | L1 VLSU integration |
| `sim_verilator_l1_vlsu_gating` | L1 VLSU miss gating |
| `sim_verilator_l1_all` | All L1 tests |
| `sim_verilator_l2_dir` | L2 directory test |
| `sim_verilator_l2_arrays` | L2 arrays test |
| `sim_verilator_l2_mshr` | L2 MSHR test |
| `sim_verilator_l2_fsm` | L2 FSM test |
| `sim_verilator_xbar` | Crossbar arbiter test |
| `sim_verilator_demux` | Demux test |
| `sim_verilator_socket` | Socket test |
| `sim_verilator_system` | System integration test |
| `sim_verilator_system_stress` | System stress test |

### 3.2 Cocotb Targets

| Target | Description |
|--------|-------------|
| `sim_cocotb_l1` | L1 DCache cocotb tests |
| `sim_cocotb_l1_trace` | L1 tests with VCD trace |
| `sim_cocotb_l2` | L2 Cache cocotb tests |
| `sim_cocotb_l2_trace` | L2 tests with VCD trace |
| `sim_cocotb_coherence` | Multi-core coherence tests |
| `sim_cocotb_all` | All cocotb tests |

### 3.3 Utility Targets

| Target | Description |
|--------|-------------|
| `lint` | Lint all RTL |
| `clean` | Remove build artifacts |
| `clean_verilator` | Remove Verilator outputs |
| `help` | Show available targets |

## 4. Cocotb Test Development

### 4.1 Running Cocotb Tests

```bash
# Basic run
make sim_cocotb_l1

# With VCD trace
make sim_cocotb_l1_trace

# Run specific test
cd tb/cocotb && python run_sim.py --test test_read_hit
```

### 4.2 Test Structure

Tests are located in `tb/cocotb/tests/`. Each test module uses the `@cocotb.test()` decorator:

```python
import cocotb
from cocotb.triggers import RisingEdge, Timer
from cocotb.clock import Clock

@cocotb.test()
async def test_example(dut):
    """Example test description."""
    # Start clock
    cocotb.start_soon(Clock(dut.clk_i, 10, units="ns").start())
    
    # Reset
    dut.rst_ni.value = 0
    await Timer(100, units="ns")
    dut.rst_ni.value = 1
    
    # Test logic here
    await RisingEdge(dut.clk_i)
    assert dut.some_signal.value == expected_value
```

### 4.3 Adding New Tests

1. Create a new test file in `tb/cocotb/tests/` (e.g., `test_new_feature.py`)
2. Import cocotb and write test functions
3. Run with: `python tb/cocotb/run_sim.py --test test_new_feature`

## 5. Waveform Viewing

### 5.1 Generate VCD

```bash
# Verilator (automatic)
make run_l1_scalar_test
# VCD at: obj_dir/wave.vcd

# Cocotb
make sim_cocotb_l1_trace
# VCD at: tb/cocotb/sim_build/dump.vcd
```

### 5.2 View with GTKWave

```bash
gtkwave obj_dir/wave.vcd &
```

## 6. Configuration

### 6.1 Global Parameters (`rtl/params.vh`)

| Parameter | Default | Description |
|-----------|---------|-------------|
| `LINE_BYTES` | 64 | Cache line size in bytes |
| `L1_SETS` | 32 | Number of L1 sets |
| `L1_WAYS` | 8 | L1 associativity |
| `L2_SETS` | 256 | Number of L2 sets |
| `L2_WAYS` | 16 | L2 associativity |

### 6.2 Test Selection

Some Verilator tests use `TEST_SELECT` to choose specific test cases:

```bash
# Run specific test case
make run_l1_scalar_test  # TEST_SELECT=0 (default)
```

## 7. Debugging

### 7.1 Enable Debug Output

For Verilator tests, add `-DDEBUG` to get verbose output:

```makefile
VERILATOR_FLAGS += -DDEBUG
```

### 7.2 Cocotb Logging

```python
import logging
logging.getLogger("cocotb").setLevel(logging.DEBUG)
```

## 8. Common Issues

### 8.1 Verilator Version

Ensure Verilator 5.006+:
```bash
verilator --version
```

### 8.2 Python Environment

Use a virtual environment for cocotb:
```bash
python -m venv venv
source venv/bin/activate
pip install cocotb cocotb-test
```

### 8.3 Missing Include

If `params.vh` not found, ensure you're running from the project root:
```bash
cd /path/to/tilelink-coherence
make run_l1_scalar_test
```
