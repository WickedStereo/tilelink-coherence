GLOBAL RULES FOR THE AGENT

Never implement two modules at once

Each module must compile standalone

No speculative features, refer to tilelink-spec-1.9.md for any clarifications.

Every invariant must be enforced structurally, not by comments


PHASE 0 — GLOBAL DEFINITIONS (MANDATORY FIRST)
Step 0.1 — Define global parameters

Create a single header file with:

NUM_CORES = 4

LINE_BYTES = 64

L1_SIZE = 16KB

L2_SIZE = 256KB

L1_WAYS = 8

L2_WAYS = 16

No RTL yet. Just parameters.



PHASE 1 — L1 CACHE CONTROLLER (DO ONE CORE ONLY)

Only implement one L1. Replication comes later.

Step 1.1 — L1 Tag + Data Arrays

Implement:

Adjust the exiting L1 cache code to match the requirement, 16KB. Includes changing the "outer side" interface. CPU side remains OBI.

Step 1.2 — Introduce L1 States (NBTT)

Add:

State encoding: N=00, B=01, T=10, TT=11

Rules:

Hit allowed if state != N

Dirty set on any store

Dirty implies state → TT



Step 1.3 — TileLink A & D Channels (No Probes Yet)

Implement:

On read miss → AcquireBlock(toBranch)

On write miss → AcquireBlock(toTrunk)

Accept GrantData

Fill line

Send GrantAck

Rules:

Block CPU until Grant

Only one outstanding Acquire



Step 1.4 — Probe Handling (Channel B + C)

Add:

Probe receive

State downgrade logic

Release / ReleaseData generation

Rules:

Probe preempts CPU

Dirty lines must send ReleaseData

After Probe, state → N



PHASE 2 — TILELINK CROSSBAR (MINIMAL) [COMPLETED]
Step 2.1 — Single-Channel Arbiter [DONE]

Implement:

A-channel arbiter (4→1)

Round-robin

Valid/ready compliant



Step 2.2 — Full Channel Routing [DONE]

Add:

B and D demux by source/sink

C and E arbitration

Rules:

No buffering beyond 1 skid buffer

No reordering



PHASE 3 — L2 CACHE CONTROLLER (DIRECTORY-FIRST)
Step 3.1 — L2 Directory (NO DATA YET)

Implement per-line:

valid

sharers[3:0]

owner_valid

owner_id[1:0]

dirty

Rules:

dirty → owner_valid

owner_valid → sharers == 0



Step 3.2 — L2 Tag + Data Arrays

Make changes (if any) to match the requirements. Includes changing the interface.



Step 3.3 — L2 MSHR (Single Entry)

Implement fields:

addr

req_src

req_type

pending_probes

Rules:

Reject new request if MSHR busy



Step 3.4 — L2 Acquire Handling FSM [COMPLETED]

FSM states:

IDLE

TAG_LOOKUP

PROBE

WAIT_PROBES

GRANT

COMPLETE

Rules:

On AcquireBlock:

If no sharers → Grant

Else → Probe all except requester

On AcquirePerm:

Probe all others

Assign ownership



Step 3.5 — Release Handling [COMPLETED]

Implement:

Accept Release / ReleaseData

Update directory

Clear owner when last owner releases

Clear dirty after data written



PHASE 4 — INCLUSION & EVICTION
Step 4.1 — L2 Eviction Logic [COMPLETED]

Rules:

If line has sharers or owner → Probe all

Wait for all ProbeAck/Release

Then evict



Step 4.2 — Memory Interface

Implement:

Blocking line fetch

Writeback on dirty eviction



PHASE 5 — SYSTEM INTEGRATION
Step 5.1 — Replicate L1 (x4) [COMPLETED]

Instantiate:

4 identical L1s

Unique source IDs



Step 5.2 — Full-System Bring-Up [IN PROGRESS]

Run:

Single-core tests [COMPLETED]

Two-core sharing tests [COMPLETED]

Write/write contention [COMPLETED]

Eviction with sharers [COMPLETED]

FINAL GUIDING PRINCIPLE FOR THE AGENT

Correctness before performance.
Determinism before throughput.
Invariants before cleverness.