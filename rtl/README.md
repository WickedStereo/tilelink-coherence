# TileLink Cache System RTL

This directory contains the design RTL for a TileLink-based coherent cache hierarchy.

## Architecture Overview

```
┌───────────────────────────────────────────────────┐
│                 Multi-Core System                 │
├───────────┬───────────┬───────────┬───────────────┤
│   Core 0  │   Core 1  │   Core 2  │    Core 3     │
└─────┬─────┴─────┬─────┴─────┬─────┴─────┬─────────┘
      │           │           │           │
┌─────▼─────┬─────▼─────┬─────▼─────┬─────▼─────────┐
│    L1     │    L1     │    L1     │      L1       │
│  DCache   │  DCache   │  DCache   │    DCache     │
│   16KB    │   16KB    │   16KB    │     16KB      │
└─────┬─────┴─────┬─────┴─────┬─────┴─────┬─────────┘
      │           │           │           │
      └───────────┴─────┬─────┴───────────┘
                        │
             ┌──────────▼──────────┐
             │   TileLink Xbar     │
             │   (M:1 Socket)      │
             └──────────┬──────────┘
                        │
             ┌──────────▼──────────┐
             │     L2 Cache        │
             │   (Shared, 256KB)   │
             │   Directory-based   │
             └──────────┬──────────┘
                        │
             ┌──────────▼──────────┐
             │      Memory         │
             └─────────────────────┘
```

## Directory Structure

```
rtl/
├── params.vh          # Global parameters (cache geometry, etc.)
├── l1/                # L1 Data Cache
├── l2/                # L2 Shared Cache  
├── xbar/              # TileLink Crossbar
└── system/            # Top-level integration
```

## L1 Data Cache (`l1/`)

**16KB, 8-way set-associative, 64B lines, 32 sets**

| Module | Description |
|--------|-------------|
| `rv64g_l1_dcache.v` | Top-level L1 DCache with TileLink + VLSU |
| `rv64g_l1_arrays.v` | Tag/data storage arrays |
| `rv64g_l1_banked_arrays.v` | Banked arrays for vector access |
| `rv64g_l1_sram_bank.v` | Single SRAM bank |
| `rv64g_l1_crossbar.v` | Lane-to-bank crossbar for VLSU |
| `rv64g_l1_bank_arbiter.v` | Bank access arbitration |
| `rv64g_l1_vlsu_hit_detect.v` | Vector hit/miss detection |
| `rv64g_l1_vlsu_miss_handler.v` | Vector miss handling |
| `rv64g_l1_plru.v` | Pseudo-LRU replacement |
| `rv64g_atomic_alu.v` | Atomic operations (LR/SC, AMO) |

### L1 Features
- **Scalar Port**: OBI-style interface (req/gnt/rvalid)
- **Vector Port**: 8-lane VLSU with per-lane hit detection
- **TileLink**: Full TL-C with coherence (A/B/C/D/E channels)
- **Atomics**: LR/SC, AMO (SWAP, ADD, AND, OR, XOR, MIN, MAX)
- **MESI States**: Invalid, Shared (Branch), Exclusive (Trunk), Modified (TT)

## L2 Shared Cache (`l2/`)

**256KB, 16-way set-associative, directory-based coherence**

| Module | Description |
|--------|-------------|
| `rv64g_l2_cache.v` | Top-level L2 cache |
| `rv64g_l2_fsm.v` | Main FSM for request handling |
| `rv64g_l2_directory.v` | Sharer tracking directory |
| `rv64g_l2_arrays.v` | Tag/data arrays |
| `rv64g_l2_mshr.v` | Miss Status Holding Registers |
| `rv64g_l2_plru.v` | Replacement policy |

### L2 Features
- **Directory Protocol**: Tracks which L1s have copies
- **Probe Generation**: Invalidation/downgrade probes
- **MSHR**: Handles outstanding misses
- **Memory Interface**: TL-UH to downstream memory

## TileLink Crossbar (`xbar/`)

| Module | Description |
|--------|-------------|
| `tl_socket_m1.v` | M:1 socket (multiple masters, one slave) |
| `tl_arbiter.v` | Round-robin request arbitration |
| `tl_demux.v` | Response demultiplexing |

## TileLink Protocol

The caches implement TileLink-C (with coherence):

| Channel | Direction | Purpose |
|---------|-----------|---------|
| A | Master → Slave | Acquire, Get, Put requests |
| B | Slave → Master | Probe (invalidation/downgrade) |
| C | Master → Slave | ProbeAck, Release |
| D | Slave → Master | Grant, AccessAck |
| E | Master → Slave | GrantAck |

### Message Types

**A Channel (Requests)**
- `AcquireBlock` (6): Get cache line with permissions
- `AcquirePerm` (7): Upgrade permissions (no data)
- `Get` (4): Uncached read
- `PutFull` (0): Uncached write

**B Channel (Probes)**
- `ProbeBlock` (6): Request to downgrade/invalidate

**C Channel (Responses)**
- `ProbeAck` (4): Acknowledge probe
- `ProbeAckData` (5): Acknowledge with dirty data
- `Release` (6): Voluntary release
- `ReleaseData` (7): Release with writeback

**D Channel (Grants)**
- `Grant` (4): Permission grant (no data)
- `GrantData` (5): Data + permission grant
- `AccessAck` (0): Uncached ack
- `AccessAckData` (1): Uncached read data
- `ReleaseAck` (6): Release acknowledged

**E Channel**
- `GrantAck`: Acknowledge grant received

## Parameters (`params.vh`)

```verilog
// Cache geometry
parameter LINE_BYTES = 64;      // 64-byte cache lines
parameter L1_SETS = 32;         // 32 sets
parameter L1_WAYS = 8;          // 8-way associative
parameter L2_SETS = 256;        // 256 sets
parameter L2_WAYS = 16;         // 16-way associative

// MESI states
parameter MESI_N  = 2'b00;      // Invalid
parameter MESI_B  = 2'b01;      // Shared (Branch)
parameter MESI_T  = 2'b10;      // Exclusive (Trunk)
parameter MESI_TT = 2'b11;      // Modified (Tip/Trunk)
```

## Verification

See `tb/` for testbenches:
- `tb/cocotb/` - Python-based cocotb tests
- `tb/verilator/` - Standalone Verilator tests
- `tb/rtl/` - Shared DUT wrappers

Run tests:
```bash
make sim_cocotb_all   # All cocotb tests
make run_l1_all       # All L1 Verilator tests
make lint             # Lint all RTL
```
