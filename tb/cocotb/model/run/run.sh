#!/bin/bash
# =============================================================================
# run.sh - Run packaged cocotb model
# =============================================================================
# This script runs the pre-built verification model without requiring
# Verilator or RTL source. Used for verification handoff.
#
# Usage:
#   ./run.sh                    # Run all tests
#   ./run.sh test_smoke         # Run specific module
#   ./run.sh test_smoke::test_reset  # Run specific test
#   WAVES=1 ./run.sh            # Enable waveform dump
# =============================================================================

set -e

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
MODEL_DIR="$(dirname "$SCRIPT_DIR")"
BIN_DIR="$MODEL_DIR/bin"
TESTS_DIR="$MODEL_DIR/tests"

# Check for model binary
if [ ! -f "$BIN_DIR/tilelink_cache_model" ]; then
    echo "ERROR: Model binary not found: $BIN_DIR/tilelink_cache_model"
    echo "This script is intended for packaged models only."
    echo "For development, use: make sim_cocotb_l1 or make sim_cocotb_l2"
    exit 1
fi

MODEL_EXE="$BIN_DIR/tilelink_cache_model"

# Module/test selection
MODULE="${1:-tests.test_smoke}"
TESTCASE=""
if [[ "$MODULE" == *"::"* ]]; then
    TESTCASE="${MODULE#*::}"
    MODULE="${MODULE%%::*}"
fi

# Build environment
export MODULE
export COCOTB_RESOLVE_X=ZEROS
export COCOTB_REDUCED_LOG_FMT=1

if [ -n "$TESTCASE" ]; then
    export TESTCASE
fi

if [ "${WAVES:-0}" = "1" ]; then
    export WAVES=1
    echo "Waveforms enabled"
fi

if [ "${DEBUG:-0}" = "1" ]; then
    export COCOTB_LOG_LEVEL=DEBUG
fi

echo "========================================"
echo "TileLink Cache Verification Model"
echo "========================================"
echo "Module: $MODULE"
[ -n "$TESTCASE" ] && echo "Test: $TESTCASE"
echo ""

# Run
cd "$MODEL_DIR"
exec "$MODEL_EXE"
