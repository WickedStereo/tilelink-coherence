#!/usr/bin/env python3
"""
run_l2_sim.py - Cocotb test runner for rv64g_l2_cache

Usage:
    python3 run_l2_sim.py [--test TEST_NAME] [--trace] [--debug] [--clean] [--gui]
"""

import os
import sys
import argparse
import shutil
from pathlib import Path

# Add cocotb_test to path if needed
try:
    from cocotb_test.simulator import run
except ImportError:
    print("ERROR: cocotb_test not found. Install with: pip install cocotb cocotb-test")
    sys.exit(1)


def main():
    parser = argparse.ArgumentParser(description="Run L2 Cache cocotb tests")
    parser.add_argument("--test", "-t", help="Run specific test (e.g., test_reset)")
    parser.add_argument("--module", "-m", default="test_l2_smoke", 
                        help="Test module to run (test_l2_smoke, test_coherence)")
    parser.add_argument("--trace", action="store_true", help="Enable VCD trace generation")
    parser.add_argument("--debug", "-d", action="store_true", help="Enable debug output")
    parser.add_argument("--clean", action="store_true", help="Clean sim_build before running")
    parser.add_argument("--gui", "-g", action="store_true", help="Open GTKWave after simulation")
    args = parser.parse_args()

    # Get paths
    script_dir = Path(__file__).parent.resolve()
    repo_root = script_dir.parent.parent
    rtl_dir = repo_root / "rtl"
    tb_rtl_dir = repo_root / "tb" / "rtl"
    sim_build = script_dir / "sim_build_l2"

    # Clean if requested
    if args.clean and sim_build.exists():
        print(f"Cleaning {sim_build}...")
        shutil.rmtree(sim_build)

    # RTL sources for L2 cache
    verilog_sources = [
        str(tb_rtl_dir / "rv64g_l2_cache_tb_top.sv"),
        str(rtl_dir / "l2" / "rv64g_l2_cache.v"),
        str(rtl_dir / "l2" / "rv64g_l2_fsm.v"),
        str(rtl_dir / "l2" / "rv64g_l2_directory.v"),
        str(rtl_dir / "l2" / "rv64g_l2_arrays.v"),
        str(rtl_dir / "l2" / "rv64g_l2_mshr.v"),
        str(rtl_dir / "l2" / "rv64g_l2_plru.v"),
    ]

    # Verify all files exist
    for src in verilog_sources:
        if not Path(src).exists():
            print(f"ERROR: Source file not found: {src}")
            sys.exit(1)

    # Build extra args
    extra_args = ["-Wall", "-Wno-fatal"]
    
    # Add include path for params.vh
    extra_args.append(f"-I{rtl_dir}")
    
    # Enable timing for Verilator
    extra_args.append("--timing")
    
    # Optimization
    extra_args.append("-O3")

    # Plusargs for simulation
    plusargs = []
    if args.trace:
        plusargs.append("+trace")

    # Environment for cocotb
    extra_env = {}
    if args.debug:
        extra_env["COCOTB_LOG_LEVEL"] = "DEBUG"
    
    # Test module
    test_module = f"tests.{args.module}"
    
    # Specific test function
    testcase = args.test if args.test else None

    print(f"Running L2 cache cocotb tests...")
    print(f"  Module: {test_module}")
    print(f"  RTL sources: {len(verilog_sources)} files")
    print(f"  Trace: {'enabled' if args.trace else 'disabled'}")
    if testcase:
        print(f"  Test: {testcase}")

    try:
        run(
            verilog_sources=verilog_sources,
            toplevel="rv64g_l2_cache_tb_top",
            module=test_module,
            simulator="verilator",
            sim_build=str(sim_build),
            extra_args=extra_args,
            plusargs=plusargs,
            extra_env=extra_env,
            testcase=testcase,
        )
    except Exception as e:
        print(f"Simulation failed: {e}")
        sys.exit(1)

    # Open GTKWave if requested and trace exists
    if args.gui:
        vcd_file = script_dir / "l2_cache_test.vcd"
        if vcd_file.exists():
            os.system(f"gtkwave {vcd_file} &")
        else:
            print("No VCD file found. Run with --trace to generate.")


if __name__ == "__main__":
    main()
