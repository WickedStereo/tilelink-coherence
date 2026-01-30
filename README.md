# TileLink Multi-Core Cache System

## Overview

This project implements a multi-core cache hierarchy using the TileLink protocol. It features 4 CPU cores, each with a private L1 cache, connected to a shared inclusive L2 cache via a TileLink crossbar interconnect.

## Features

- **4 CPU Cores** with private 16KB, 8-way set associative L1 data caches
- **256KB, 16-way set associative L2 cache** (inclusive)
- **TileLink Coherence Protocol** (MESI variant)
- **Directory-based coherence** in L2
- **Vector LSU support** with 8 parallel lanes
- **Atomic operations** (LR/SC, AMO)
- **Comprehensive testbenches** (Verilator + cocotb)

## Quick Start

### Prerequisites

| Tool | Version |
|------|---------|
| Verilator | 5.006+ (5.020+ recommended) |
| Python | 3.8+ |
| cocotb | 2.0+ |

### Install Dependencies

```bash
# Install cocotb
pip install cocotb cocotb-test
```

### Run Tests

```bash
# Run L1 Verilator tests
make sim_verilator_l1_all

# Run L1 cocotb smoke tests
make sim_cocotb_l1

# Run full system stress test
make sim_verilator_system_stress

# Show all targets
make help
```

## Directory Structure

```
rtl/                    # Design RTL
├── params.vh           # Global parameters
├── l1/                 # L1 Cache modules
├── l2/                 # L2 Cache modules
├── system/             # Top-level system wrapper
└── xbar/               # TileLink interconnect

tb/                     # Testbench structure
├── rtl/                # Shared DUT wrappers
├── cocotb/             # Cocotb verification
│   ├── run_sim.py      # Simulation runner
│   ├── tests/          # Test modules
│   └── model/          # Packaged verification model
└── verilator/          # Verilator testbenches
    ├── l1/             # L1 unit/integration tests
    ├── l2/             # L2 unit tests
    ├── system/         # System tests
    └── xbar/           # Interconnect tests

docs/                   # Documentation
├── architecture.md     # System architecture
├── INTERFACE.md        # Port/protocol specification
├── USAGE.md            # How to run tests
├── VERSIONS.md         # Tool versions
└── DESIGN_HANDOFF_PROCEDURE.md
```

## Simulation Targets

### Verilator Tests

| Target | Description |
|--------|-------------|
| `sim_verilator_l1_sram` | L1 SRAM bank test |
| `sim_verilator_l1_banked` | L1 banked arrays test |
| `sim_verilator_l1_scalar` | L1 scalar operations |
| `sim_verilator_l1_probe` | L1 probe handling |
| `sim_verilator_l1_all` | All L1 Verilator tests |
| `sim_verilator_system_stress` | Full system stress test |

### Cocotb Tests

| Target | Description |
|--------|-------------|
| `sim_cocotb_l1` | L1 DCache smoke tests |
| `sim_cocotb_l1_trace` | L1 tests with VCD trace |
| `sim_cocotb_l2` | L2 Cache cocotb tests |
| `sim_cocotb_l2_trace` | L2 tests with VCD trace |
| `sim_cocotb_coherence` | Multi-core coherence tests |
| `sim_cocotb_all` | All cocotb tests |

### Utility Targets

| Target | Description |
|--------|-------------|
| `lint` | Lint all RTL |
| `clean` | Remove all build outputs |
| `help` | Show available targets |

## Documentation

| Document | Description |
|----------|-------------|
| [docs/architecture.md](docs/architecture.md) | System architecture and protocol |
| [docs/INTERFACE.md](docs/INTERFACE.md) | Port and interface specification |
| [docs/USAGE.md](docs/USAGE.md) | Detailed usage guide |
| [docs/VERSIONS.md](docs/VERSIONS.md) | Tool versions and compatibility |

## License

See LICENSE file for details.

