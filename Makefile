# Tool configuration
VERILATOR ?= verilator
PYTHON ?= python3

# Directories
RTL_DIR = rtl
TB_DIR = tb/verilator
TB_COCOTB_DIR = tb/cocotb
TB_RTL_DIR = tb/rtl

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
sim_verilator_l1_sram: clean_verilator
	$(VERILATOR) $(VERILATOR_FLAGS) -DTEST_SELECT=0 \
		$(L1_UNIT_CPP) $(L1_UNIT_TB) $(L1_RTL) $(L1_PARAMS)
	$(MAKE) -C obj_dir -f Vrv64g_l1_unit_tb.mk Vrv64g_l1_unit_tb
	obj_dir/Vrv64g_l1_unit_tb

sim_verilator_l1_banked: clean_verilator
	$(VERILATOR) $(VERILATOR_FLAGS) -DTEST_SELECT=1 \
		$(L1_UNIT_CPP) $(L1_UNIT_TB) $(L1_RTL) $(L1_PARAMS)
	$(MAKE) -C obj_dir -f Vrv64g_l1_unit_tb.mk Vrv64g_l1_unit_tb
	obj_dir/Vrv64g_l1_unit_tb

sim_verilator_l1_hit: clean_verilator
	$(VERILATOR) $(VERILATOR_FLAGS) -DTEST_SELECT=2 \
		$(L1_UNIT_CPP) $(L1_UNIT_TB) $(L1_RTL) $(L1_PARAMS)
	$(MAKE) -C obj_dir -f Vrv64g_l1_unit_tb.mk Vrv64g_l1_unit_tb
	obj_dir/Vrv64g_l1_unit_tb

sim_verilator_l1_miss_handler: clean_verilator
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

sim_verilator_l1_scalar: clean_verilator
	$(VERILATOR) $(VERILATOR_FLAGS) -DTEST_SELECT=0 \
		$(L1_FULL_CPP) $(L1_FULL_TB) $(L1_RTL) $(L1_PARAMS)
	$(MAKE) -C obj_dir -f Vrv64g_l1_dcache_full_tb.mk Vrv64g_l1_dcache_full_tb
	obj_dir/Vrv64g_l1_dcache_full_tb

sim_verilator_l1_probe: clean_verilator
	$(VERILATOR) $(VERILATOR_FLAGS) -DTEST_SELECT=1 \
		$(L1_FULL_CPP) $(L1_FULL_TB) $(L1_RTL) $(L1_PARAMS)
	$(MAKE) -C obj_dir -f Vrv64g_l1_dcache_full_tb.mk Vrv64g_l1_dcache_full_tb
	obj_dir/Vrv64g_l1_dcache_full_tb

sim_verilator_l1_vlsu: clean_verilator
	$(VERILATOR) $(VERILATOR_FLAGS) -DTEST_SELECT=2 \
		$(L1_FULL_CPP) $(L1_FULL_TB) $(L1_RTL) $(L1_PARAMS)
	$(MAKE) -C obj_dir -f Vrv64g_l1_dcache_full_tb.mk Vrv64g_l1_dcache_full_tb
	obj_dir/Vrv64g_l1_dcache_full_tb

sim_verilator_l1_vlsu_gating: clean_verilator
	$(VERILATOR) $(VERILATOR_FLAGS) -DTEST_SELECT=3 \
		$(L1_FULL_CPP) $(L1_FULL_TB) $(L1_RTL) $(L1_PARAMS)
	$(MAKE) -C obj_dir -f Vrv64g_l1_dcache_full_tb.mk Vrv64g_l1_dcache_full_tb
	obj_dir/Vrv64g_l1_dcache_full_tb

# =============================================================================
# Run all L1 tests
# =============================================================================
sim_verilator_l1_all: sim_verilator_l1_sram sim_verilator_l1_banked sim_verilator_l1_hit sim_verilator_l1_miss_handler \
            sim_verilator_l1_scalar sim_verilator_l1_probe sim_verilator_l1_vlsu sim_verilator_l1_vlsu_gating
	@echo "=== All L1 tests completed ==="

# =============================================================================
# Cocotb Tests
# =============================================================================
COCOTB_DIR := $(TB_COCOTB_DIR)
COCOTB_L1_WRAPPER := $(TB_RTL_DIR)/rv64g_l1_dcache_tb_top.sv
COCOTB_L2_WRAPPER := $(TB_RTL_DIR)/rv64g_l2_cache_tb_top.sv

# L1 DCache cocotb simulation
sim_cocotb_l1:
	cd $(COCOTB_DIR) && $(PYTHON) run_sim.py --clean

sim_cocotb_l1_trace:
	cd $(COCOTB_DIR) && $(PYTHON) run_sim.py --clean --trace

sim_cocotb_l1_debug:
	cd $(COCOTB_DIR) && $(PYTHON) run_sim.py --clean --trace --debug

# L2 Cache cocotb simulation
sim_cocotb_l2:
	cd $(COCOTB_DIR) && $(PYTHON) run_l2_sim.py --clean

sim_cocotb_l2_trace:
	cd $(COCOTB_DIR) && $(PYTHON) run_l2_sim.py --clean --trace

sim_cocotb_l2_debug:
	cd $(COCOTB_DIR) && $(PYTHON) run_l2_sim.py --clean --trace --debug

# Multi-core coherence tests
sim_cocotb_coherence:
	cd $(COCOTB_DIR) && $(PYTHON) run_l2_sim.py --clean --module test_coherence

sim_cocotb_coherence_trace:
	cd $(COCOTB_DIR) && $(PYTHON) run_l2_sim.py --clean --trace --module test_coherence

# All cocotb tests
sim_cocotb_all: sim_cocotb_l1 sim_cocotb_l2 sim_cocotb_coherence

# =============================================================================
# Lint targets
# =============================================================================
lint: lint_l1 lint_l2_cocotb

lint_l1:
	$(VERILATOR) --lint-only -Wall -Wno-fatal -I$(RTL_DIR) \
		$(L1_RTL) $(COCOTB_L1_WRAPPER)

lint_l2_cocotb:
	$(VERILATOR) --lint-only -Wall -Wno-fatal -I$(RTL_DIR) \
		$(RTL_DIR)/l2/rv64g_l2_cache.v \
		$(RTL_DIR)/l2/rv64g_l2_fsm.v \
		$(RTL_DIR)/l2/rv64g_l2_directory.v \
		$(RTL_DIR)/l2/rv64g_l2_arrays.v \
		$(RTL_DIR)/l2/rv64g_l2_mshr.v \
		$(RTL_DIR)/l2/rv64g_l2_plru.v \
		$(COCOTB_L2_WRAPPER)

# =============================================================================
# Cleanup
# =============================================================================
clean:
	rm -rf obj_dir obj_dir/wave.vcd $(COCOTB_DIR)/sim_build $(COCOTB_DIR)/sim_build_l2
	rm -f *.vcd

clean_verilator:
	rm -rf obj_dir obj_dir/wave.vcd

clean_cocotb:
	rm -rf $(COCOTB_DIR)/sim_build $(COCOTB_DIR)/sim_build_l2

clean_model:
	rm -rf $(COCOTB_DIR)/model/bin/* $(COCOTB_DIR)/model/docs/*.txt
	rm -f $(COCOTB_DIR)/*.tar.gz

# =============================================================================
# Model Packaging (for verification handoff)
# =============================================================================
MODEL_DIR := $(COCOTB_DIR)/model
MODEL_VERSION ?= 1.0.0
DOCS_DIR := docs

.PHONY: package_model package_l1 package_l2 archive

package_l1: sim_cocotb_l1
	@echo "Packaging L1 model..."
	@mkdir -p $(MODEL_DIR)/bin $(MODEL_DIR)/docs $(MODEL_DIR)/tests
	@cp $(COCOTB_DIR)/sim_build/rv64g_l1_dcache_tb_top $(MODEL_DIR)/bin/ 2>/dev/null || true
	@cp $(DOCS_DIR)/INTERFACE.md $(DOCS_DIR)/USAGE.md $(DOCS_DIR)/VERSIONS.md $(MODEL_DIR)/docs/
	@cp $(COCOTB_DIR)/tests/test_smoke.py $(MODEL_DIR)/tests/
	@echo "Build Date: $$(date -u +%Y-%m-%dT%H:%M:%SZ)" > $(MODEL_DIR)/docs/BUILD_INFO.txt
	@echo "Verilator: $$(verilator --version | head -1)" >> $(MODEL_DIR)/docs/BUILD_INFO.txt
	@echo "cocotb: $$(python3 -c 'import cocotb; print(cocotb.__version__)')" >> $(MODEL_DIR)/docs/BUILD_INFO.txt
	@echo "Model Version: $(MODEL_VERSION)" >> $(MODEL_DIR)/docs/BUILD_INFO.txt
	@echo "L1 model packaged in $(MODEL_DIR)"

package_l2: sim_cocotb_l2
	@echo "Packaging L2 model..."
	@mkdir -p $(MODEL_DIR)/bin $(MODEL_DIR)/docs $(MODEL_DIR)/tests
	@cp $(COCOTB_DIR)/sim_build_l2/rv64g_l2_cache_tb_top $(MODEL_DIR)/bin/ 2>/dev/null || true
	@cp $(DOCS_DIR)/INTERFACE.md $(DOCS_DIR)/USAGE.md $(DOCS_DIR)/VERSIONS.md $(MODEL_DIR)/docs/
	@cp $(COCOTB_DIR)/tests/test_l2_smoke.py $(COCOTB_DIR)/tests/test_coherence.py $(MODEL_DIR)/tests/
	@echo "L2 model packaged in $(MODEL_DIR)"

package_model: package_l1 package_l2
	@echo "========================================"
	@echo "Model packaging complete: $(MODEL_DIR)"
	@echo "========================================"

archive: package_model
	@cd $(MODEL_DIR) && tar -czvf ../tilelink_cache_model-$(MODEL_VERSION).tar.gz .
	@echo "Archive created: $(COCOTB_DIR)/tilelink_cache_model-$(MODEL_VERSION).tar.gz"

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

sim_verilator_xbar: build_xbar
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

sim_verilator_demux: build_demux
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

sim_verilator_socket: build_socket
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

sim_verilator_l2_dir: build_l2_dir
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

sim_verilator_l2_arrays: build_l2_arrays
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

sim_verilator_l2_mshr: build_l2_mshr
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

sim_verilator_l2_fsm: build_l2_fsm
	obj_dir/Vrv64g_l2_fsm_tb

# Help
help:
	@echo "=== L1 Cache Tests (Verilator) ==="
	@echo "Unit tests (rv64g_l1_unit_tb.v):"
	@echo "  sim_verilator_l1_sram         - SRAM bank tag/state corruption test"
	@echo "  sim_verilator_l1_banked       - Banked arrays scalar/vector access"
	@echo "  sim_verilator_l1_hit          - VLSU hit detection"
	@echo "  sim_verilator_l1_miss_handler - VLSU miss handler"
	@echo ""
	@echo "Integration tests (rv64g_l1_dcache_full_tb.v):"
	@echo "  sim_verilator_l1_scalar       - Scalar basic operations"
	@echo "  sim_verilator_l1_probe        - Probe handling"
	@echo "  sim_verilator_l1_vlsu         - VLSU integration"
	@echo "  sim_verilator_l1_vlsu_gating  - VLSU miss gating"
	@echo ""
	@echo "  sim_verilator_l1_all          - Run all L1 Verilator tests"
	@echo ""
	@echo "=== Cocotb Tests ==="
	@echo "  sim_cocotb_l1            - L1 DCache cocotb smoke tests"
	@echo "  sim_cocotb_l1_trace      - L1 tests with VCD trace"
	@echo "  sim_cocotb_l1_debug      - L1 tests with debug build"
	@echo "  sim_cocotb_l2            - L2 Cache cocotb tests"
	@echo "  sim_cocotb_coherence     - Multi-core coherence tests"
	@echo "  sim_cocotb_all           - All cocotb tests"
	@echo ""
	@echo "=== Other Verilator Tests ==="
	@echo "  sim_verilator_xbar, sim_verilator_demux, sim_verilator_socket  - Crossbar tests"
	@echo "  sim_verilator_l2_dir, sim_verilator_l2_arrays, etc.           - L2 tests"
	@echo "  sim_verilator_system, sim_verilator_system_stress             - Full system tests"
	@echo ""
	@echo "=== Lint ==="
	@echo "  lint                     - Lint all RTL"
	@echo "  lint_l1                  - Lint L1 RTL"
	@echo ""
	@echo "=== Cleanup ==="
	@echo "  clean                    - Remove all build outputs"
	@echo "  clean_verilator          - Remove Verilator outputs"
	@echo "  clean_cocotb             - Remove cocotb outputs"

.PHONY: clean clean_verilator clean_cocotb help lint lint_l1 \
        sim_verilator_l1_sram sim_verilator_l1_banked sim_verilator_l1_hit sim_verilator_l1_miss_handler \
        sim_verilator_l1_scalar sim_verilator_l1_probe sim_verilator_l1_vlsu sim_verilator_l1_vlsu_gating \
        sim_verilator_l1_all sim_cocotb_l1 sim_cocotb_l1_trace sim_cocotb_l1_debug


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

sim_verilator_system: build_system
	obj_dir/Vrv64g_cache_system_tb

# System Stress Test
SYSTEM_STRESS_TB := $(SYSTEM_TB_DIR)/rv64g_cache_system_stress_tb.v
SYSTEM_STIMULUS := $(SYSTEM_TB_DIR)/stimulus.v
SYSTEM_STRESS_CPP := $(SYSTEM_TB_DIR)/sim_system_stress.cpp

verilate_system_stress: clean_verilator
	$(VERILATOR) $(VERILATOR_FLAGS) $(SYSTEM_STRESS_CPP) $(SYSTEM_STRESS_TB) $(SYSTEM_STIMULUS) $(TB_DIR)/system/simple_ram.v $(TB_DIR)/system/tl_monitor.v $(SYSTEM_RTL) $(L1_PARAMS)

build_system_stress: verilate_system_stress
	$(MAKE) -C obj_dir -f Vrv64g_cache_system_stress_tb.mk Vrv64g_cache_system_stress_tb

sim_verilator_system_stress: build_system_stress
	obj_dir/Vrv64g_cache_system_stress_tb
