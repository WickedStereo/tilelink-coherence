# RTL Review Findings and Recommendations

## Review Date: 2026-02-11

## 1. Critical Issues (Fixed)

### 1.1 TileLink Arbiter Multi-Beat Burst Interleaving
- **File**: `rtl/xbar/tl_arbiter.v`
- **Severity**: Critical
- **Issue**: Round-robin priority rotated on every handshake, causing multi-beat TileLink messages (e.g., 8-beat ReleaseData, ProbeAckData) to have beats interleaved between different clients, violating the TileLink protocol.
- **Fix**: Added `last_i` input with burst lock state machine. The arbiter now holds grant stable during multi-beat transactions. Beat tracking added to `tl_socket_m1.v` for Channel A and Channel C.

### 1.2 L1 VLSU Miss Uses Wrong Cache Set for Victim Selection
- **File**: `rtl/l1/rv64g_l1_dcache.v` (line ~429)
- **Severity**: Critical — silent data corruption
- **Issue**: `arr_index_w` mux did not include `S_VLSU_MISS` or `S_VLSU_REPLAY` in the conditions for selecting `pend_index_q`. These states fell through to `index` (CPU pipeline address), causing dirty/valid checks on the wrong set's metadata.
- **Fix**: Added `S_VLSU_MISS` and `S_VLSU_REPLAY` to the `pend_index_q` conditions in the `arr_index_w` mux.

### 1.3 L2 FSM Grant Param Wrong for Exclusive Requests
- **File**: `rtl/l2/rv64g_l2_fsm.v` (line ~682)
- **Severity**: Protocol violation (masked by L1 ignoring param)
- **Issue**: `d_param_o` was hardcoded to `2'd1` (toB) for all AcquireBlock responses, including NtoT which should receive toT (`2'd0`).
- **Fix**: `d_param_o = (req_param_q == 3'd0) ? 2'd1 : 2'd0` — NtoB gets toB, NtoT gets toT.

### 1.4 L2 FSM Grant Param Wrong for AcquirePerm
- **File**: `rtl/l2/rv64g_l2_fsm.v` (line ~701)
- **Severity**: Protocol violation (masked by L1 ignoring param)
- **Issue**: `d_param_o = 2'd2` (toN = no permissions) for AcquirePerm Grant, should be toT.
- **Fix**: Changed to `d_param_o = 2'd0` (toT).

### 1.5 L2 FSM Stale Directory After NtoB Probe
- **File**: `rtl/l2/rv64g_l2_fsm.v` (line ~742)
- **Severity**: Critical — coherence violation
- **Issue**: After probing an exclusive owner, the ST_UPDATE path for NtoB preserved stale `hit_sharers` and `hit_owner_valid` from pre-probe directory state. This created an illegal coherence state (simultaneous Trunk owner + Branch sharers).
- **Fix**: For NtoB with owner: set sharers to `{requester, old_owner}`, clear owner. Without owner: add requester to existing sharers.

### 1.6 L2 Probe Param Too Aggressive for NtoB
- **File**: `rtl/l2/rv64g_l2_fsm.v` (line ~539)
- **Severity**: Performance + enables bug 1.5
- **Issue**: AcquireBlock NtoB (shared read) sent TtoN probes (invalidate) when TtoB (downgrade to shared) would preserve the owner's cached copy.
- **Fix**: Send TtoB for NtoB, TtoN for NtoT. Directory update adjusted accordingly.

## 2. Medium Issues (Fixed)

### 2.1 VLSU Miss Handler Output Port Type Mismatch
- **File**: `rtl/l1/rv64g_l1_vlsu_miss_handler.v`
- **Issue**: `miss_count_o` declared as `output reg` but driven by `assign` statement.
- **Fix**: Changed to `output wire`.

### 2.2 L1 Reservation Address Width Literal
- **File**: `rtl/l1/rv64g_l1_dcache.v` (line ~1475)
- **Issue**: `resv_addr_q <= 52'd0` but register is 58 bits wide.
- **Fix**: Changed to `{58{1'b0}}`.

### 2.3 System B-Channel Param Width Mismatch
- **File**: `rtl/system/rv64g_cache_system.v` (line ~321)
- **Issue**: `.mgr_b_param_i({1'b0, l2_b_param})` created 4-bit value to 3-bit port.
- **Fix**: Changed to `.mgr_b_param_i(l2_b_param)` — direct 3-bit to 3-bit connection.

### 2.4 L2 Directory Reset Style Inconsistency
- **File**: `rtl/l2/rv64g_l2_directory.v`
- **Issue**: Used synchronous reset while all other modules use asynchronous active-low reset.
- **Fix**: Changed to `always @(posedge clk or negedge rst_n)` for consistency.

## 3. Test Code Fixes

- **`rv64g_cache_system_tb.v`**: Fixed `$dumpvars` referencing wrong module name (`rv64g_system_tb` → `rv64g_cache_system_tb`).
- **`simple_ram.v`**: Changed blocking assignments (`=`) to non-blocking (`<=`) in clocked always block.
- **`tl_monitor.v`**: Added clock input and converted `always @(posedge valid)` edge triggers to proper `always @(posedge clk)` synchronous monitoring. Updated all 3 instantiation sites.
- **`tl_arbiter_tb.v`**: Connected new `last_i` port (tied to `1'b1` for single-beat tests).
- **`test_amo_probe.py`**: Changed `test_lr_sc_probe_invalidates` from warning to assertion failure when SC succeeds after probe.
- **`test_coherence.py`**: Fixed TileLink permission constants — added proper Grow/Cap encoding constants. Fixed `test_exclusive_write` assertion to use Cap encoding comparison (lower = more permission: toT=0, toB=1, toN=2).
- **`rv64g_l2_fsm_tb.v`**: Added E-channel ports and connection (FSM was stuck in ST_WAIT_E). Added reactive MSHR block. Fixed source widths from 4-bit to 6-bit (SOURCE_W=6) and source encoding (core ID in upper bits). Fixed multi-beat ReleaseData to send all 8 beats. Added inter-test synchronization.
- **`rv64g_l2_arrays_tb.v`**: Fixed port name mismatch (`write_en_i` → `data_we_i`/`tag_we_i`).
- **Makefile**: Expanded `lint` target to include crossbar modules (`lint_xbar`, `lint_demux`, `lint_socket`).

## 4. Verification Results (Post-Fix)

All fixes verified — **39 tests pass, 0 failures**.

| Suite | Tests | Status |
|-------|-------|--------|
| Verilator — Crossbar (arbiter, demux, socket) | 3 | **PASS** |
| Verilator — L1 (sram, banked, hit, miss_handler, scalar, probe, vlsu, vlsu_gating) | 8 | **PASS** |
| Verilator — L2 Unit (directory, arrays, mshr, fsm) | 4 | **PASS** |
| Verilator — System (coherence) | 1 | **PASS** |
| Cocotb — L1 Smoke (6 tests) | 6 | **PASS** |
| Cocotb — L2 Smoke (4 tests) | 4 | **PASS** |
| Cocotb — Coherence (shared read, exclusive write, different addresses, directory tracking) | 4 | **PASS** |
| Cocotb — AMO+Probe (amo_basic, probe_during_amo, lr_sc_basic, lr_sc_probe_invalidates, different_addresses, amo_all_operations) | 6 | **PASS** |
| Lint (Verilator --lint-only) | All RTL | **PASS** (pre-existing warnings only) |

**Known limitation**: System stress test (`sim_system_stress`) cannot compile under Verilator due to hierarchical references (`data_q`, `state_q`, `tag_q`) through generate blocks in `stimulus.v` — this is a Verilator limitation, not an RTL bug. Requires commercial simulator (VCS/Questa) or stimulus refactoring.

## 5. Known Limitations (Unchanged — By Design)

| Limitation | Description | Mitigation |
|------------|-------------|------------|
| Single L2 MSHR | L2 processes one miss at a time (blocking) | Hardware limitation; future work to add multi-entry MSHR |
| VLSU Memory Ordering | VLSU does not guarantee memory ordering | Software must use fences |
| Probe Timing | Probe during refill adds latency | Expected TileLink behavior |
| L1 Hit Detect Hardcoded | VLSU hit detect hardcoded for 8 ways | Only change if WAYS parameter changes |
| Dead Code | `rv64g_l1_arrays.v` never instantiated | Superseded by banked arrays; retained for reference |

## 6. Recommendations for Future Work

1. **Add multi-entry MSHR to L2** — current single-entry design is a severe throughput bottleneck for 4-core workloads.
2. **Refactor L1 probe handling** — currently copy-pasted 3 times (S_IDLE, S_PERM_REQ, S_REF_WAIT); should be extracted into a common block.
3. **Parameterize VLSU hit detect** — remove hardcoded 8-way priority encoder.
4. **Add formal verification** — no formal property checking exists; critical for proving absence of protocol deadlocks.
5. **Expand test coverage** — missing: L1 set eviction PLRU, AMOMIN/MAX, 32-bit AMO, concurrent C-channel bursts, probe backpressure, multi-outstanding requests, error/denied paths.
6. **Remove dead code** — `rv64g_l1_arrays.v` is superseded and should be removed or marked deprecated.
