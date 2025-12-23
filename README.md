# TileLink Multi-Core Cache System

## Overview
This project implements a multi-core cache hierarchy using the TileLink protocol. It features 4 CPU cores, each with a private L1 cache, connected to a shared inclusive L2 cache via a TileLink crossbar interconnect.

## Features
- **4 CPU Cores** with private 16KB, 8-way set associative L1 data caches
- **256KB, 16-way set associative L2 cache** (inclusive)
- **TileLink Coherence Protocol** (MESI variant)
- **Directory-based coherence** in L2
- **Deadlock-free L1 FSM** with probe interruption
- **Configurable parameters** in `rtl/params.vh`
- **Comprehensive testbenches** for L1, L2, and full system

## Directory Structure
```
rtl/
  params.vh          # Global parameters
  l1/                # L1 Cache RTL
  l2/                # L2 Cache RTL
  system/            # Top-level system wrapper
  xbar/              # TileLink Interconnect components
testbench/
  l1/                # L1 Unit Tests
  l2/                # L2 Unit Tests
  system/            # Full System Tests (Stress tests)
  xbar/              # Interconnect Tests
docs/
  architecture.md    # System architecture and protocol description
  plan.md            # Implementation plan and progress
```

## How to Build and Run
1. **Build**: Run `make` to build the RTL and testbenches (requires Verilator).
2. **Run Tests**: Use `make run_system_stress` to run the full-system stress test.
3. **Clean**: Use `make clean` or `make clean_verilator` to remove build artifacts.

## Documentation
- See `docs/architecture.md` for a detailed explanation of the system architecture and protocol.
- See `docs/plan.md` for the implementation plan and progress tracking.

