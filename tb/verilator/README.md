# Verilator Testbenches

This directory contains standalone Verilator testbenches for individual module testing.

## Directory Structure

```
tb/verilator/
├── l1/        # L1 DCache unit and integration tests
├── l2/        # L2 Cache component tests
├── system/    # Full cache system tests
└── xbar/      # TileLink crossbar tests
```

## L1 Tests (`l1/`)

| File | Description |
|------|-------------|
| `rv64g_l1_unit_tb.v` | Unit tests for SRAM, banked arrays, hit detection, miss handler |
| `rv64g_l1_dcache_full_tb.v` | Integration tests: scalar ops, probe, VLSU |
| `rv64g_l1_mem_model.v` | Simple memory model for L1 testing |
| `sim_l1_unit.cpp` | Verilator driver for unit tests |
| `sim_l1_full.cpp` | Verilator driver for integration tests |

## L2 Tests (`l2/`)

| File | Description |
|------|-------------|
| `rv64g_l2_arrays_tb.v` | L2 tag/data array tests |
| `rv64g_l2_directory_tb.v` | Directory sharer tracking tests |
| `rv64g_l2_fsm_tb.v` | L2 FSM state transition tests |
| `rv64g_l2_mshr_tb.v` | MSHR allocation/deallocation tests |

## System Tests (`system/`)

| File | Description |
|------|-------------|
| `rv64g_cache_system_tb.v` | Full L1+L2+xbar integration |
| `rv64g_cache_system_stress_tb.v` | Stress test with random traffic |
| `simple_ram.v` | Memory model |
| `stimulus.v` | Test stimulus generator |
| `tl_monitor.v` | TileLink protocol monitor |

## Xbar Tests (`xbar/`)

| File | Description |
|------|-------------|
| `tl_arbiter_tb.v` | TileLink arbiter tests |
| `tl_demux_tb.v` | TileLink demux tests |
| `tl_socket_m1_tb.v` | M:1 socket tests |

## Running Tests

Use the top-level Makefile targets:

```bash
# L1 Tests
make sim_verilator_l1_sram
make sim_verilator_l1_banked
make sim_verilator_l1_hit
make sim_verilator_l1_miss_handler
make sim_verilator_l1_scalar
make sim_verilator_l1_probe
make sim_verilator_l1_vlsu
make sim_verilator_l1_all

# L2 Tests
make sim_verilator_l2_dir
make sim_verilator_l2_arrays
make sim_verilator_l2_mshr
make sim_verilator_l2_fsm

# Xbar Tests
make sim_verilator_xbar
make sim_verilator_demux
make sim_verilator_socket

# System Tests
make sim_verilator_system
make sim_verilator_system_stress
```

## Note

For Python-based testing with cocotb, see `tb/cocotb/`.
