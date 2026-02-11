# Design Handoff Procedure

## 1. Overview

This document describes the procedure for handing off the TileLink Cache System design to verification teams or other stakeholders.

## 2. Handoff Package Contents

### 2.1 Required Files

| Directory | Contents | Purpose |
|-----------|----------|---------|
| `rtl/` | All RTL source files | Design implementation |
| `tb/rtl/` | DUT wrappers | Testbench integration |
| `tb/cocotb/` | Cocotb tests and runner | Verification |
| `docs/` | Documentation | Reference |

### 2.2 Documentation Checklist

- [x] `README.md` - Project overview and quick start
- [x] `docs/INTERFACE.md` - Complete port specification
- [x] `docs/USAGE.md` - How to run tests
- [x] `docs/VERSIONS.md` - Tool requirements
- [x] `docs/architecture.md` - System architecture
- [x] `docs/DESIGN_HANDOFF_PROCEDURE.md` - This document
- [x] `docs/REVIEW_FINDINGS.md` - RTL review findings and recommendations

## 3. Pre-Handoff Verification

### 3.1 Run All Tests

```bash
# Run all L1 tests
make sim_verilator_l1_all

# Run L2 tests
make sim_verilator_l2_dir sim_verilator_l2_arrays sim_verilator_l2_mshr sim_verilator_l2_fsm

# Run interconnect tests
make sim_verilator_xbar sim_verilator_demux sim_verilator_socket

# Run system tests
make sim_verilator_system sim_verilator_system_stress

# Run cocotb tests
make sim_cocotb_all
```

### 3.2 Lint Check

```bash
make lint
```

### 3.3 Verify Documentation

1. Ensure all ports in `INTERFACE.md` match RTL
2. Verify all test targets in `USAGE.md` work
3. Check tool versions in `VERSIONS.md` are current

## 4. Handoff Procedure

### 4.1 Step-by-Step

1. **Create Release Branch**
   ```bash
   git checkout -b release/v1.0.0
   ```

2. **Run Full Verification**
   ```bash
   make clean
   make sim_verilator_l1_all
   make sim_cocotb_all
   make sim_verilator_system_stress
   ```

3. **Update Version Information**
   - Update `docs/VERSIONS.md` with current tool versions
   - Tag release: `git tag v1.0.0`

4. **Generate Package**
   ```bash
   make clean
   tar -czvf tilelink-cache-v1.0.0.tar.gz \
       rtl/ tb/rtl/ tb/cocotb/ docs/ Makefile README.md
   ```

5. **Verify Package**
   ```bash
   mkdir /tmp/verify && cd /tmp/verify
   tar -xzf tilelink-cache-v1.0.0.tar.gz
   make sim_cocotb_l1
   ```

### 4.2 Recipient Instructions

Provide recipients with:
1. The release tarball
2. Quick start guide (see `README.md`)
3. Tool installation instructions (see `docs/VERSIONS.md`)

## 5. Support

### 5.1 Contact Information

- **Design Team**: Contact your project lead for design team information
- **Issue Tracker**: File issues through the project's version control system

### 5.2 Known Limitations

| Limitation | Description | Workaround |
|------------|-------------|------------|
| Single MSHR | L2 processes one miss at a time (blocking) | Future multi-entry MSHR |
| VLSU Ordering | VLSU does not guarantee memory ordering | Use fences |
| Probe Timing | Probe during refill adds latency | Expected behavior |
| Stress Test | `sim_verilator_system_stress` uses hierarchical refs incompatible with Verilator | Use VCS/Questa or refactor `stimulus.v` |

## 6. Change Log

| Version | Date | Changes |
|---------|------|---------|
| 1.0.0 | 2026-01-29 | Initial handoff with cocotb support |
| 1.0.1 | 2026-02-11 | RTL review fixes — see `docs/REVIEW_FINDINGS.md` |
