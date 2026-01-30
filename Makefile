# Tool configuration
VERILATOR ?= verilator

# Directories
RTL_DIR = rtl
TB_DIR = testbench

# Verilator flags
VERILATOR_FLAGS := -cc -exe -Wall -Wno-fatal -trace --timing -I$(RTL_DIR) $(DBG_DEFINE)

# Parameters file
L1_PARAMS := $(RTL_DIR)/params.vh

# L1 RTL sources
L1_TB_DIR := $(TB_DIR)/l1
L1_RTL := \
	$(RTL_DIR)/l1/rv64g_l1_dcache.v \
	$(RTL_DIR)/l1/rv64g_l1_arrays.v \
	$(RTL_DIR)/l1/rv64g_l1_plru.v \
	$(RTL_DIR)/l1/rv64g_atomic_alu.v \
	$(RTL_DIR)/l1/rv64g_l1_banked_arrays.v \
	$(RTL_DIR)/l1/rv64g_l1_sram_bank.v \
	$(RTL_DIR)/l1/rv64g_l1_crossbar.v \
	$(RTL_DIR)/l1/rv64g_l1_bank_arbiter.v \
	$(RTL_DIR)/l1/rv64g_l1_vlsu_hit_detect.v \
	$(RTL_DIR)/l1/rv64g_l1_vlsu_miss_handler.v

# =============================================================================
# L1 Unit Tests (rv64g_l1_unit_tb.v)
# Tests: SRAM bank, banked arrays, hit detection, miss handler
# Use TEST_SELECT=0..3 to select test
# =============================================================================
L1_UNIT_TB := $(L1_TB_DIR)/rv64g_l1_unit_tb.v
L1_UNIT_CPP := $(L1_TB_DIR)/sim_l1_unit.cpp

# Individual unit test targets
run_l1_sram_test: clean_verilator
	$(VERILATOR) $(VERILATOR_FLAGS) -DTEST_SELECT=0 \
		$(L1_UNIT_CPP) $(L1_UNIT_TB) $(L1_RTL) $(L1_PARAMS)
	$(MAKE) -C obj_dir -f Vrv64g_l1_unit_tb.mk Vrv64g_l1_unit_tb
	obj_dir/Vrv64g_l1_unit_tb

run_l1_banked_test: clean_verilator
	$(VERILATOR) $(VERILATOR_FLAGS) -DTEST_SELECT=1 \
		$(L1_UNIT_CPP) $(L1_UNIT_TB) $(L1_RTL) $(L1_PARAMS)
	$(MAKE) -C obj_dir -f Vrv64g_l1_unit_tb.mk Vrv64g_l1_unit_tb
	obj_dir/Vrv64g_l1_unit_tb

run_l1_hit_test: clean_verilator
	$(VERILATOR) $(VERILATOR_FLAGS) -DTEST_SELECT=2 \
		$(L1_UNIT_CPP) $(L1_UNIT_TB) $(L1_RTL) $(L1_PARAMS)
	$(MAKE) -C obj_dir -f Vrv64g_l1_unit_tb.mk Vrv64g_l1_unit_tb
	obj_dir/Vrv64g_l1_unit_tb

run_l1_miss_handler_test: clean_verilator
	$(VERILATOR) $(VERILATOR_FLAGS) -DTEST_SELECT=3 \
		$(L1_UNIT_CPP) $(L1_UNIT_TB) $(L1_RTL) $(L1_PARAMS)
	$(MAKE) -C obj_dir -f Vrv64g_l1_unit_tb.mk Vrv64g_l1_unit_tb
	obj_dir/Vrv64g_l1_unit_tb

# =============================================================================
# L1 Integration Tests (rv64g_l1_dcache_full_tb.v)
# Tests: Scalar ops, probe, VLSU integration, VLSU gating
# Use TEST_SELECT=0..3 to select test
# =============================================================================
L1_FULL_TB := $(L1_TB_DIR)/rv64g_l1_dcache_full_tb.v
L1_FULL_CPP := $(L1_TB_DIR)/sim_l1_full.cpp

run_l1_scalar_test: clean_verilator
	$(VERILATOR) $(VERILATOR_FLAGS) -DTEST_SELECT=0 \
		$(L1_FULL_CPP) $(L1_FULL_TB) $(L1_RTL) $(L1_PARAMS)
	$(MAKE) -C obj_dir -f Vrv64g_l1_dcache_full_tb.mk Vrv64g_l1_dcache_full_tb
	obj_dir/Vrv64g_l1_dcache_full_tb

run_l1_probe_test: clean_verilator
	$(VERILATOR) $(VERILATOR_FLAGS) -DTEST_SELECT=1 \
		$(L1_FULL_CPP) $(L1_FULL_TB) $(L1_RTL) $(L1_PARAMS)
	$(MAKE) -C obj_dir -f Vrv64g_l1_dcache_full_tb.mk Vrv64g_l1_dcache_full_tb
	obj_dir/Vrv64g_l1_dcache_full_tb

run_l1_vlsu_test: clean_verilator
	$(VERILATOR) $(VERILATOR_FLAGS) -DTEST_SELECT=2 \
		$(L1_FULL_CPP) $(L1_FULL_TB) $(L1_RTL) $(L1_PARAMS)
	$(MAKE) -C obj_dir -f Vrv64g_l1_dcache_full_tb.mk Vrv64g_l1_dcache_full_tb
	obj_dir/Vrv64g_l1_dcache_full_tb

run_l1_vlsu_gating_test: clean_verilator
	$(VERILATOR) $(VERILATOR_FLAGS) -DTEST_SELECT=3 \
		$(L1_FULL_CPP) $(L1_FULL_TB) $(L1_RTL) $(L1_PARAMS)
	$(MAKE) -C obj_dir -f Vrv64g_l1_dcache_full_tb.mk Vrv64g_l1_dcache_full_tb
	obj_dir/Vrv64g_l1_dcache_full_tb

# =============================================================================
# Run all L1 tests
# =============================================================================
run_l1_all: run_l1_sram_test run_l1_banked_test run_l1_hit_test run_l1_miss_handler_test \
            run_l1_scalar_test run_l1_probe_test run_l1_vlsu_test run_l1_vlsu_gating_test
	@echo "=== All L1 tests completed ==="

# =============================================================================
# Legacy targets (deprecated - use new consolidated tests)
# =============================================================================
clean:
	rm -rf obj_dir obj_dir/wave.vcd

clean_verilator:
	rm -rf obj_dir obj_dir/wave.vcd

# Xbar Arbiter Verilator targets
XBAR_TB_DIR := $(TB_DIR)/xbar
XBAR_TB := $(XBAR_TB_DIR)/tl_arbiter_tb.v
XBAR_CPP := $(XBAR_TB_DIR)/sim_arbiter.cpp
XBAR_RTL := $(RTL_DIR)/xbar/tl_arbiter.v

lint_xbar:
	$(VERILATOR) --lint-only -Wall -Wno-lint -I$(RTL_DIR) $(XBAR_RTL) $(XBAR_TB)

verilate_xbar: clean_verilator
	$(VERILATOR) $(VERILATOR_FLAGS) $(XBAR_CPP) $(XBAR_TB) $(XBAR_RTL)

build_xbar: verilate_xbar
	$(MAKE) -C obj_dir -f Vtl_arbiter_tb.mk Vtl_arbiter_tb

run_xbar: build_xbar
	obj_dir/Vtl_arbiter_tb

# Xbar Demux Verilator targets
DEMUX_TB := $(XBAR_TB_DIR)/tl_demux_tb.v
DEMUX_CPP := $(XBAR_TB_DIR)/sim_demux.cpp
DEMUX_RTL := $(RTL_DIR)/xbar/tl_demux.v

lint_demux:
	$(VERILATOR) --lint-only -Wall -Wno-lint -I$(RTL_DIR) $(DEMUX_RTL) $(DEMUX_TB)

verilate_demux: clean_verilator
	$(VERILATOR) $(VERILATOR_FLAGS) $(DEMUX_CPP) $(DEMUX_TB) $(DEMUX_RTL)

build_demux: verilate_demux
	$(MAKE) -C obj_dir -f Vtl_demux_tb.mk Vtl_demux_tb

run_demux: build_demux
	obj_dir/Vtl_demux_tb

# Xbar Socket Verilator targets
SOCKET_TB := $(XBAR_TB_DIR)/tl_socket_m1_tb.v
SOCKET_CPP := $(XBAR_TB_DIR)/sim_socket.cpp
SOCKET_RTL := \
	$(RTL_DIR)/xbar/tl_socket_m1.v \
	$(RTL_DIR)/xbar/tl_arbiter.v \
	$(RTL_DIR)/xbar/tl_demux.v

lint_socket:
	$(VERILATOR) --lint-only -Wall -Wno-lint -I$(RTL_DIR) $(SOCKET_RTL) $(SOCKET_TB)

verilate_socket: clean_verilator
	$(VERILATOR) $(VERILATOR_FLAGS) $(SOCKET_CPP) $(SOCKET_TB) $(SOCKET_RTL)

build_socket: verilate_socket
	$(MAKE) -C obj_dir -f Vtl_socket_m1_tb.mk Vtl_socket_m1_tb

run_socket: build_socket
	obj_dir/Vtl_socket_m1_tb

# L2 Directory Verilator targets
L2_TB_DIR := $(TB_DIR)/l2
L2_DIR_TB := $(L2_TB_DIR)/rv64g_l2_directory_tb.v
L2_DIR_CPP := $(L2_TB_DIR)/sim_l2_directory.cpp
L2_DIR_RTL := $(RTL_DIR)/l2/rv64g_l2_directory.v

lint_l2_dir:
	$(VERILATOR) --lint-only -Wall -Wno-lint -I$(RTL_DIR) $(L2_DIR_RTL) $(L2_DIR_TB)

verilate_l2_dir: clean_verilator
	$(VERILATOR) $(VERILATOR_FLAGS) $(L2_DIR_CPP) $(L2_DIR_TB) $(L2_DIR_RTL)

build_l2_dir: verilate_l2_dir
	$(MAKE) -C obj_dir -f Vrv64g_l2_directory_tb.mk Vrv64g_l2_directory_tb

run_l2_dir: build_l2_dir
	obj_dir/Vrv64g_l2_directory_tb

# L2 Arrays Verilator targets
L2_ARRAYS_TB := $(L2_TB_DIR)/rv64g_l2_arrays_tb.v
L2_ARRAYS_CPP := $(L2_TB_DIR)/sim_l2_arrays.cpp
L2_ARRAYS_RTL := $(RTL_DIR)/l2/rv64g_l2_arrays.v

lint_l2_arrays:
	$(VERILATOR) --lint-only -Wall -Wno-lint -I$(RTL_DIR) $(L2_ARRAYS_RTL) $(L2_ARRAYS_TB)

verilate_l2_arrays: clean_verilator
	$(VERILATOR) $(VERILATOR_FLAGS) $(L2_ARRAYS_CPP) $(L2_ARRAYS_TB) $(L2_ARRAYS_RTL)

build_l2_arrays: verilate_l2_arrays
	$(MAKE) -C obj_dir -f Vrv64g_l2_arrays_tb.mk Vrv64g_l2_arrays_tb

run_l2_arrays: build_l2_arrays
	obj_dir/Vrv64g_l2_arrays_tb

# L2 MSHR Verilator targets
L2_MSHR_TB := $(L2_TB_DIR)/rv64g_l2_mshr_tb.v
L2_MSHR_CPP := $(L2_TB_DIR)/sim_l2_mshr.cpp
L2_MSHR_RTL := $(RTL_DIR)/l2/rv64g_l2_mshr.v

lint_l2_mshr:
	$(VERILATOR) --lint-only -Wall -Wno-lint -I$(RTL_DIR) $(L2_MSHR_RTL) $(L2_MSHR_TB)

verilate_l2_mshr: clean_verilator
	$(VERILATOR) $(VERILATOR_FLAGS) $(L2_MSHR_CPP) $(L2_MSHR_TB) $(L2_MSHR_RTL)

build_l2_mshr: verilate_l2_mshr
	$(MAKE) -C obj_dir -f Vrv64g_l2_mshr_tb.mk Vrv64g_l2_mshr_tb

run_l2_mshr: build_l2_mshr
	obj_dir/Vrv64g_l2_mshr_tb

# L2 FSM Verilator targets
L2_FSM_TB := $(L2_TB_DIR)/rv64g_l2_fsm_tb.v
L2_FSM_CPP := $(L2_TB_DIR)/sim_l2_fsm.cpp
L2_FSM_RTL := $(RTL_DIR)/l2/rv64g_l2_fsm.v $(RTL_DIR)/l2/rv64g_l2_plru.v

lint_l2_fsm:
	$(VERILATOR) --lint-only -Wall -Wno-lint -I$(RTL_DIR) $(L2_FSM_RTL) $(L2_FSM_TB)

verilate_l2_fsm: clean_verilator
	$(VERILATOR) $(VERILATOR_FLAGS) --timing $(L2_FSM_CPP) $(L2_FSM_TB) $(L2_FSM_RTL)

build_l2_fsm: verilate_l2_fsm
	$(MAKE) -C obj_dir -f Vrv64g_l2_fsm_tb.mk Vrv64g_l2_fsm_tb

run_l2_fsm: build_l2_fsm
	obj_dir/Vrv64g_l2_fsm_tb

# Help
help:
	@echo "=== L1 Cache Tests (Consolidated) ==="
	@echo "Unit tests (rv64g_l1_unit_tb.v):"
	@echo "  run_l1_sram_test         - SRAM bank tag/state corruption test"
	@echo "  run_l1_banked_test       - Banked arrays scalar/vector access"
	@echo "  run_l1_hit_test          - VLSU hit detection"
	@echo "  run_l1_miss_handler_test - VLSU miss handler"
	@echo ""
	@echo "Integration tests (rv64g_l1_dcache_full_tb.v):"
	@echo "  run_l1_scalar_test       - Scalar basic operations"
	@echo "  run_l1_probe_test        - Probe handling"
	@echo "  run_l1_vlsu_test         - VLSU integration"
	@echo "  run_l1_vlsu_gating_test  - VLSU miss gating"
	@echo ""
	@echo "  run_l1_all               - Run all L1 tests"
	@echo ""
	@echo "=== Other Tests ==="
	@echo "  run_xbar, run_demux, run_socket  - Crossbar tests"
	@echo "  run_l2_dir, run_l2_arrays, etc.  - L2 tests"
	@echo "  run_system, run_system_stress    - Full system tests"
	@echo ""
	@echo "=== Cleanup ==="
	@echo "  clean_verilator - Remove build outputs"

.PHONY: clean clean_verilator help \
        run_l1_sram_test run_l1_banked_test run_l1_hit_test run_l1_miss_handler_test \
        run_l1_scalar_test run_l1_probe_test run_l1_vlsu_test run_l1_vlsu_gating_test \
        run_l1_all


# System Verilator targets
SYSTEM_TB_DIR := $(TB_DIR)/system
SYSTEM_TB := $(SYSTEM_TB_DIR)/rv64g_cache_system_tb.v
SYSTEM_CPP := $(SYSTEM_TB_DIR)/sim_system.cpp
SYSTEM_RTL := \
$(RTL_DIR)/system/rv64g_cache_system.v \
$(RTL_DIR)/l1/rv64g_l1_dcache.v \
$(RTL_DIR)/l1/rv64g_l1_arrays.v \
$(RTL_DIR)/l1/rv64g_l1_banked_arrays.v \
$(RTL_DIR)/l1/rv64g_l1_sram_bank.v \
$(RTL_DIR)/l1/rv64g_l1_bank_arbiter.v \
$(RTL_DIR)/l1/rv64g_l1_crossbar.v \
$(RTL_DIR)/l1/rv64g_l1_vlsu_hit_detect.v \
$(RTL_DIR)/l1/rv64g_l1_vlsu_miss_handler.v \
    $(RTL_DIR)/l1/rv64g_l1_plru.v \
    $(RTL_DIR)/l1/rv64g_atomic_alu.v \
    $(RTL_DIR)/l2/rv64g_l2_cache.v \
$(RTL_DIR)/l2/rv64g_l2_fsm.v \
$(RTL_DIR)/l2/rv64g_l2_directory.v \
$(RTL_DIR)/l2/rv64g_l2_arrays.v \
$(RTL_DIR)/l2/rv64g_l2_mshr.v \
$(RTL_DIR)/l2/rv64g_l2_plru.v \
$(RTL_DIR)/xbar/tl_socket_m1.v \
$(RTL_DIR)/xbar/tl_arbiter.v \
$(RTL_DIR)/xbar/tl_demux.v

verilate_system: clean_verilator
	$(VERILATOR) $(VERILATOR_FLAGS) $(SYSTEM_CPP) $(SYSTEM_TB) $(SYSTEM_RTL) $(L1_PARAMS)

build_system: verilate_system
	$(MAKE) -C obj_dir -f Vrv64g_cache_system_tb.mk Vrv64g_cache_system_tb

run_system: build_system
	obj_dir/Vrv64g_cache_system_tb

# System Stress Test
SYSTEM_STRESS_TB := $(SYSTEM_TB_DIR)/rv64g_cache_system_stress_tb.v
SYSTEM_STIMULUS := $(SYSTEM_TB_DIR)/stimulus.v
SYSTEM_STRESS_CPP := $(SYSTEM_TB_DIR)/sim_system_stress.cpp

verilate_system_stress: clean_verilator
	$(VERILATOR) $(VERILATOR_FLAGS) $(SYSTEM_STRESS_CPP) $(SYSTEM_STRESS_TB) $(SYSTEM_STIMULUS) $(TB_DIR)/system/simple_ram.v $(TB_DIR)/system/tl_monitor.v $(SYSTEM_RTL) $(L1_PARAMS)

build_system_stress: verilate_system_stress
	$(MAKE) -C obj_dir -f Vrv64g_cache_system_stress_tb.mk Vrv64g_cache_system_stress_tb

run_system_stress: build_system_stress
	obj_dir/Vrv64g_cache_system_stress_tb
