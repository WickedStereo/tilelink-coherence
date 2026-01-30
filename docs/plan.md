GLOBAL RULES FOR THE AGENT

Never implement two modules at once

Each module must compile standalone

No speculative features, refer to tilelink-spec-1.9.md for any clarifications.

Every invariant must be enforced structurally, not by comments


Here is the step-by-step roadmap to implementing a banked L1 Data Cache for an RVA23 Vector processor.

Phase 1: Modularization (The "Split")
Your current cache is likely a single Verilog module with one big reg [63:0] data_array [0:1023]. You must physically break this apart.

Define the Bank Module: Create a standalone SRAM_Bank module.
Capacity: Total Cache Size / Number of Banks (e.g., 32KB / 8 = 4KB per bank).
Width: 64 bits (standard for RV64).
Interface: Single R/W port (Address, Data_In, Write_En, Data_Out).
Instantiate Banks: Replace your single array with 8 instances of SRAM_Bank.
Implement Address Interleaving:
Modify your address decoder. instead of index = addr[15:6], split it:
bank_sel = addr[5:3] (bits immediately above byte offset).
row_index = addr[15:6] (rest of the index).
Scalar Muxing (The "Shim"):
Connect the Scalar LSU to all 8 banks.
Use bank_sel to generate a "one-hot" enable signal (only enable the target bank).
Mux the 8 Data_Out ports back to the scalar core using bank_sel.
Verification Point: Your scalar core should work exactly as before, just with more wiring logic.
Phase 2: The Multi-Port Interface (The "Wide Road")
Now that the memory is physically split, you need to allow the Vector Unit (VLSU) to talk to it.

Add VLSU Ports:
The cache controller now needs two high-level interfaces:
Port A: Scalar LSU (1 req/cycle).
Port B: Vector LSU (8 reqs/cycle).
Bank Arbitration (The "Traffic Cop"):
Each of the 8 SRAM_Bank modules now needs a 2:1 Arbiter at its input.
Inputs: Scalar Request (if targeting this bank) vs. Vector Request (Lane i).
Priority: Typically Scalar > Vector (to prevent OS starvation) or Round-Robin.
Logic: If Scalar wants Bank 0 and Vector Lane 3 wants Bank 0 -> Scalar wins, Vector stalls.
Phase 3: The Crossbar (The "Steering Wheel")
The Vector Unit doesn't just send "Lane 0 to Bank 0." It does weird stuff (strides/indices). You need a network to route requests.

The Crossbar Network: Implement an 8x8 crossbar (or steering logic) between the VLSU lanes and the 8 Banks.
Input: 8 requests from VLSU (each with an Address and Data).
Logic: For each request, calculate bank_sel.
Output: Route the request to the correct Bank Arbiter.
Conflict Detection (The "Stall Logic"):
What if Lane 0 and Lane 4 both want Bank 2?
Logic: You need a "Conflict Detector" circuit.
Function: It scans all 8 vector requests. If >1 request targets the same bank, it groups them.
Finite State Machine (FSM):
Cycle 1: Service the first group (non-conflicting).
Cycle 2: Service the conflicting leftovers.
Repeat until all lanes are served.
Phase 4: Tag Array & Coherence (The "Hard Part")
You can't just bank the Data Array; you must handle the Tags.

Banked Tag Arrays:
Each Data Bank needs a corresponding Tag Bank.
Why? Because you need to check hits/misses for all 8 vector requests in parallel.
Optimization: You can sometimes keep a "Unified Tag Array" with 8 read ports (expensive) or replicate tags, but usually, banking tags 1:1 with data is the scalable way.
Hit/Miss Logic:
The cache controller now outputs 8 Hit/Miss signals per cycle (one per bank).
Global Stall: If any of the 8 vector requests misses, you must stall the entire vector pipeline and trigger a refill from L2.
Phase 5: Miss Handling (MSHRs)
Your "blocking" cache assumes 1 miss at a time. A vector load might generate 8 misses at once (e.g., crossing a page boundary).

Upgrade MSHR (Miss Status Holding Register):
You don't need a full non-blocking cache (optional), but you need a "Vector Miss Handler."
Logic: When a vector op triggers misses on Banks 0, 1, and 2:
Pause the vector unit.
Issue Refill Request for Line A (covers Bank 0).
Issue Refill Request for Line B (covers Bank 1...).
Wait for all refills.
Replay the vector access.

Phase 6: VLSU FSM Integration (TileLink Wiring)
The VLSU miss handler must connect to the real TileLink channels for memory refills.

TileLink Channel Wiring:
When VLSU detects a miss, the miss handler must drive:
- TL-A channel: AcquireBlock(NtoB or NtoT) with aligned line address
- TL-D channel: Accept GrantData beats (8 beats for 64B line)
- TL-E channel: Send GrantAck to complete the transaction

Refill Flow:
1. Miss handler captures miss address and way selection
2. Issues AcquireBlock on TL-A, waits for grant
3. GrantData beats arrive on TL-D, written to SRAM banks
4. On last beat (beat 7): broadcast tag/state to ALL banks (critical!)
5. Send GrantAck on TL-E
6. Signal refill complete, transition to replay

Tag Broadcast Fix:
Since data is element-interleaved across 8 banks, but tag/state is per-line:
- All banks must have identical tag/state for a given set/way
- The `scalar_tag_we_i` signal triggers broadcast tag writes to all banks
- Without this, only the last bank (bank 7) would have valid state

Verification:
Created C++ testbench `sim_vlsu_cpp.cpp` with memory model that:
- Responds to AcquireBlock with 8-beat GrantData sequence
- Tests cold miss (refill flow), cache hit, multi-lane hits
- All 3 tests pass: single lane miss, single lane hit, multi-lane hit
- System coherence test remains passing (no regressions)

Status: COMPLETE ✓
```