#!/usr/bin/env python3
"""
run_sim.py - Cocotb simulation runner for rv64g_l1_dcache

Usage:
    python run_sim.py [options]

Options:
    --test TEST     Run specific test (default: all tests)
    --trace         Enable VCD waveform dump
    --debug         Build with debug symbols (-O0)
    --clean         Clean build directory before running
    --gui           Open waveform viewer after simulation
"""

import argparse
import os
import sys
import subprocess
import shutil
from pathlib import Path


def get_project_root():
    """Get the project root directory."""
    # This script is in tb/cocotb/, project root is two levels up
    return Path(__file__).resolve().parent.parent.parent


def get_rtl_sources(project_root):
    """Get list of RTL source files."""
    rtl_dir = project_root / "rtl"
    tb_rtl_dir = project_root / "tb" / "rtl"
    
    sources = [
        # Testbench wrapper
        tb_rtl_dir / "rv64g_l1_dcache_tb_top.sv",
        # L1 RTL
        rtl_dir / "l1" / "rv64g_l1_dcache.v",
        rtl_dir / "l1" / "rv64g_l1_arrays.v",
        rtl_dir / "l1" / "rv64g_l1_plru.v",
        rtl_dir / "l1" / "rv64g_atomic_alu.v",
        rtl_dir / "l1" / "rv64g_l1_banked_arrays.v",
        rtl_dir / "l1" / "rv64g_l1_sram_bank.v",
        rtl_dir / "l1" / "rv64g_l1_crossbar.v",
        rtl_dir / "l1" / "rv64g_l1_bank_arbiter.v",
        rtl_dir / "l1" / "rv64g_l1_vlsu_hit_detect.v",
        rtl_dir / "l1" / "rv64g_l1_vlsu_miss_handler.v",
    ]
    
    return [str(s) for s in sources]


def run_simulation(args):
    """Run the cocotb simulation using Verilator."""
    project_root = get_project_root()
    cocotb_dir = project_root / "tb" / "cocotb"
    sim_build = cocotb_dir / "sim_build"
    tests_dir = cocotb_dir / "tests"
    
    # Clean if requested
    if args.clean and sim_build.exists():
        print(f"Cleaning {sim_build}...")
        shutil.rmtree(sim_build)
    
    # Create sim_build directory
    sim_build.mkdir(parents=True, exist_ok=True)
    
    # Get RTL sources
    sources = get_rtl_sources(project_root)
    
    # Determine test module
    test_module = args.test if args.test else "test_smoke"
    
    # Build Verilator flags
    verilator_flags = [
        "-Wall",
        "-Wno-fatal",
        f"-I{project_root / 'rtl'}",
        "--timing",
    ]
    
    if args.trace:
        verilator_flags.append("--trace")
    
    if args.debug:
        verilator_flags.extend(["-O0", "-g"])
    else:
        verilator_flags.append("-O3")
    
    # Set up environment
    env = os.environ.copy()
    env["COCOTB_TEST_MODULES"] = test_module
    env["TOPLEVEL"] = "rv64g_l1_dcache_tb_top"
    env["TOPLEVEL_LANG"] = "verilog"
    env["SIM"] = "verilator"
    env["PYTHONPATH"] = str(tests_dir) + ":" + env.get("PYTHONPATH", "")
    
    if args.trace:
        env["COCOTB_RESULTS_FILE"] = str(sim_build / "results.xml")
        env["PLUSARGS"] = "+trace"
    
    # Build command using cocotb-test's runner
    try:
        from cocotb_test.simulator import run
        
        run(
            verilog_sources=sources,
            toplevel="rv64g_l1_dcache_tb_top",
            module=test_module,
            sim_build=str(sim_build),
            simulator="verilator",
            extra_args=verilator_flags,
            plusargs=["+trace"] if args.trace else [],
            python_search=[str(tests_dir)],
        )
        
    except ImportError:
        # Fallback: manual Verilator + cocotb invocation
        print("cocotb-test not found, using manual build...")
        
        # Build with Verilator
        verilator_cmd = [
            "verilator",
            "--cc",
            "--exe",
            "--build",
            "-j", "0",
            "--top-module", "rv64g_l1_dcache_tb_top",
            "--Mdir", str(sim_build),
            "-CFLAGS", "-fPIC",
            "-LDFLAGS", f"-Wl,-rpath,{sys.prefix}/lib -L{sys.prefix}/lib -lpython{sys.version_info.major}.{sys.version_info.minor}",
        ] + verilator_flags + sources
        
        print(f"Running: {' '.join(verilator_cmd)}")
        result = subprocess.run(verilator_cmd, cwd=str(cocotb_dir), env=env)
        
        if result.returncode != 0:
            print("Verilator build failed!")
            sys.exit(1)
        
        # Run simulation
        sim_exe = sim_build / f"Vrv64g_l1_dcache_tb_top"
        if sim_exe.exists():
            print(f"Running simulation: {sim_exe}")
            subprocess.run([str(sim_exe)], env=env)
    
    # Open waveform viewer if requested
    if args.gui and args.trace:
        vcd_file = sim_build / "dump.vcd"
        if vcd_file.exists():
            print(f"Opening waveform: {vcd_file}")
            subprocess.Popen(["gtkwave", str(vcd_file)])


def main():
    parser = argparse.ArgumentParser(
        description="Run cocotb simulation for L1 DCache"
    )
    parser.add_argument(
        "--test",
        type=str,
        default=None,
        help="Test module to run (default: test_smoke)"
    )
    parser.add_argument(
        "--trace",
        action="store_true",
        help="Enable VCD waveform dump"
    )
    parser.add_argument(
        "--debug",
        action="store_true",
        help="Build with debug symbols"
    )
    parser.add_argument(
        "--clean",
        action="store_true",
        help="Clean build directory before running"
    )
    parser.add_argument(
        "--gui",
        action="store_true",
        help="Open waveform viewer after simulation"
    )
    
    args = parser.parse_args()
    run_simulation(args)


if __name__ == "__main__":
    main()
