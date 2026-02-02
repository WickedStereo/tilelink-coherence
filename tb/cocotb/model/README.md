# TileLink Cache Verification Model

Pre-built verification model for TileLink L1/L2 cache coherence system.

## Contents

```
model/
├── bin/           # Pre-built simulation executable
├── docs/          # Interface and usage documentation  
├── run/           # Run scripts
│   └── run.sh     # Main execution script
└── tests/         # Reference test files
```

## Quick Start

```bash
cd run/
./run.sh                           # Run all smoke tests
./run.sh tests.test_smoke          # Run L1 smoke tests
./run.sh tests.test_l2_smoke       # Run L2 smoke tests
./run.sh tests.test_coherence      # Run coherence tests
WAVES=1 ./run.sh                   # Enable waveform dump
```

## Requirements

- Python 3.8+
- cocotb 2.0+
- No Verilator or RTL source required

## Documentation

See `docs/` for:
- `INTERFACE.md` - Port and signal descriptions
- `USAGE.md` - Detailed usage instructions
- `VERSIONS.md` - Tool version requirements
- `BUILD_INFO.txt` - Build timestamp and versions
