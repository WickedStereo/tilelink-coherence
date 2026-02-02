#!/bin/bash
# run.sh - Run cocotb simulation for L1 DCache
#
# Usage:
#   ./run.sh              # Run smoke tests
#   ./run.sh --trace      # Run with VCD dump
#   ./run.sh --test NAME  # Run specific test

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
cd "$SCRIPT_DIR/.."

python3 run_sim.py "$@"
