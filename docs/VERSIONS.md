# Tool Versions and Compatibility

## 1. Required Tools

| Tool | Minimum Version | Recommended | Notes |
|------|-----------------|-------------|-------|
| Verilator | 5.006 | 5.020+ | `--timing` support required |
| Python | 3.8 | 3.10+ | For cocotb tests |
| cocotb | 2.0 | 2.0+ | Python-based verification |
| GNU Make | 4.0 | 4.3+ | Build system |
| GCC/Clang | 9.0 / 10.0 | Latest | C++ compilation |

## 2. Tested Configurations

### 2.1 Development Environment

| Component | Version | OS |
|-----------|---------|-----|
| Verilator | 5.020 | Ubuntu 22.04 |
| Python | 3.10.12 | Ubuntu 22.04 |
| cocotb | 2.0.0 | pip |
| GCC | 11.4.0 | Ubuntu 22.04 |

### 2.2 CI Environment

| Component | Version |
|-----------|---------|
| Verilator | 5.020 |
| Python | 3.10 |
| cocotb | 2.0.0 |

## 3. Installation

### 3.1 Verilator

```bash
# Ubuntu/Debian
sudo apt-get install verilator

# From source (for latest)
git clone https://github.com/verilator/verilator
cd verilator
autoconf
./configure
make -j$(nproc)
sudo make install
```

### 3.2 Python and cocotb

```bash
# Create virtual environment
python3 -m venv venv
source venv/bin/activate

# Install cocotb
pip install cocotb cocotb-test
```

## 4. Build Flags

### 4.1 Verilator Flags

| Flag | Purpose |
|------|---------|
| `-cc` | Generate C++ |
| `-exe` | Create executable |
| `-Wall` | Enable all warnings |
| `-Wno-fatal` | Warnings not fatal |
| `--trace` | Enable VCD tracing |
| `--timing` | Enable timing support |
| `-O3` | Optimization level |

### 4.2 Cocotb Build Flags

| Flag | Purpose |
|------|---------|
| `-Wall` | Enable warnings |
| `-Wno-fatal` | Warnings not fatal |
| `--trace` | VCD trace (optional) |
| `-O3` / `-O0` | Optimization / Debug |

## 5. Known Issues

### 5.1 Verilator < 5.006

The `--timing` flag is not available. Remove it from Makefile if using older versions (timing-dependent tests may fail).

### 5.2 cocotb 1.x

Tests are written for cocotb 2.0 API. For 1.x compatibility:
- Replace `cocotb.start_soon()` with `cocotb.fork()`
- Adjust signal access patterns

### 5.3 macOS

On macOS with Apple Silicon:
```bash
# May need Rosetta for some tools
arch -x86_64 /bin/bash
```

## 6. Version History

| Date | Change |
|------|--------|
| 2026-01-29 | Initial cocotb support added |
| 2026-01-15 | L1 VLSU support added |
| 2025-12-01 | Initial release with Verilator support |
