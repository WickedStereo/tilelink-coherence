# Changelog

## 2026-01-29
### Tests
- **Consolidated L1 testbenches** from 12 files down to 2:
	- [rv64g_l1_unit_tb.v](testbench/l1/rv64g_l1_unit_tb.v) - Unit tests for components:
		- Test 0: SRAM bank tag/state corruption
		- Test 1: Banked arrays (scalar/vector access)
		- Test 2: VLSU hit detection
		- Test 3: VLSU miss handler
	- [rv64g_l1_dcache_full_tb.v](testbench/l1/rv64g_l1_dcache_full_tb.v) - Integration tests:
		- Test 0: Scalar basic operations (read/write hit/miss)
		- Test 1: Probe handling (coherence invalidations)
		- Test 2: VLSU integration with memory model
		- Test 3: VLSU miss gating regression
	- [sim_l1_unified.cpp](testbench/l1/sim_l1_unified.cpp) - Single C++ harness for all L1 tests
- Test selection via `+define+TEST_SELECT=N` at Verilator compile time
- New Makefile targets:
	- `run_l1_sram_test`, `run_l1_banked_test`, `run_l1_hit_test`, `run_l1_miss_handler_test`
	- `run_l1_scalar_test`, `run_l1_probe_test`, `run_l1_vlsu_test`, `run_l1_vlsu_gating_test`
	- `run_l1_all` - Run all L1 tests

### RTL fixes
- L1 D$ VLSU miss gating:
	- Gated VLSU requests into arrays, hit detect, and bank activity during miss handling.
	- Gated `vlsu_ready_o` to prevent new requests while `miss_busy` is asserted.
	- File: [rtl/l1/rv64g_l1_dcache.v](rtl/l1/rv64g_l1_dcache.v)
- Tag/state broadcast updates across banks:
	- Added explicit tag/state broadcast enable into banked arrays and arbiter.
	- Used broadcast for invalidations, probes, write hits, SC/AMO completions, and final refill beat updates.
	- Files: [rtl/l1/rv64g_l1_dcache.v](rtl/l1/rv64g_l1_dcache.v), [rtl/l1/rv64g_l1_banked_arrays.v](rtl/l1/rv64g_l1_banked_arrays.v), [rtl/l1/rv64g_l1_bank_arbiter.v](rtl/l1/rv64g_l1_bank_arbiter.v)
- SRAM tag/state write enable fix:
	- Removed tag/state updates on data-only writes; tag/state now update only when `tag_we_i` is asserted.
	- File: [rtl/l1/rv64g_l1_sram_bank.v](rtl/l1/rv64g_l1_sram_bank.v)