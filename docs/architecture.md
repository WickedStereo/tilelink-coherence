# System Architecture

## 1. Overview

This project implements a multi-core cache system using the TileLink coherence protocol. The system consists of 4 CPU cores, each with a private L1 Data Cache, connected to a shared inclusive L2 Cache via a crossbar interconnect.

### Key Parameters
| Parameter | Value | Description |
|-----------|-------|-------------|
| **Cores** | 4 | Number of CPU cores |
| **Line Size** | 64 Bytes | Cache line size |
| **L1 Cache** | 16 KB | 8-way set associative, 32 sets |
| **L2 Cache** | 256 KB | 16-way set associative, 256 sets |
| **Protocol** | MESI | Modified, Exclusive, Shared, Invalid |

## 2. Coherence Protocol

The system uses the **TileLink** protocol (specifically a subset of TL-C) to maintain cache coherence.

### States (MESI Mapping)
The internal states are mapped to TileLink permissions as follows:
*   **Invalid (N)**: No permissions.
*   **Shared (B)**: Read-only permission. (Branch)
*   **Exclusive (T)**: Read/Write permission, clean. (Trunk)
*   **Modified (TT)**: Read/Write permission, dirty. (Trunk)

### Channels
*   **Channel A (Request)**: L1 sends Acquire/Get requests to L2.
*   **Channel B (Probe)**: L2 sends Probe requests to L1 (evictions/downgrades).
*   **Channel C (Release)**: L1 sends Release/ProbeAck to L2.
*   **Channel D (Grant)**: L2 sends Grant/Data to L1.
*   **Channel E (GrantAck)**: L1 acknowledges Grant (serialization).

## 3. L1 Cache Architecture (`rtl/l1/`)

The L1 Data Cache is a write-back, write-allocate cache.

### Features
*   **FSM-based Controller**: Manages CPU requests and TileLink transactions.
*   **Probe Interruption**: The FSM is designed to handle "Probe" requests (Channel B) even while waiting for a memory response (Channel D). This prevents protocol deadlocks where the L2 waits for a ProbeAck before sending a Grant.
*   **Arrays**: Separate Tag and Data arrays.

### Key States
*   `S_IDLE`: Waiting for CPU request or Probe.
*   `S_TAG_CHECK`: Checking for hit/miss.
*   `S_REF_WAIT`: Waiting for Grant from L2.
*   `S_PROBE_RESP`: Temporary state to handle a Probe while in `S_REF_WAIT`.

## 4. L2 Cache Architecture (`rtl/l2/`)

The L2 Cache is the Point of Coherence (PoC) and is strictly inclusive of all L1 caches.

### Features
*   **Directory**: Tracks which L1 cores have a copy of a cache line using a bit-vector.
*   **MSHR (Miss Status Holding Registers)**: Tracks outstanding requests to memory and manages coherence hazards.
*   **Eviction Policy**: Pseudo-LRU (PLRU).
*   **Memory Interface**: Connects to main memory (simulated).

### Coherence Logic
When a request arrives (e.g., Core 0 wants to Write):
1.  L2 checks the directory.
2.  If Core 1 has the line (Shared), L2 sends a **Probe** to Core 1.
3.  Core 1 invalidates the line and sends **ProbeAck** to L2.
4.  L2 sends **Grant** to Core 0 with Exclusive permissions.

## 5. Interconnect (`rtl/xbar/`)

The interconnect connects N L1 clients to 1 L2 manager.

*   **`tl_socket_m1.v`**: A N-to-1 socket that arbitrates requests from multiple L1s and routes responses back to the correct core.
*   **Arbitration**: Round-robin arbitration for fairness.

## 6. Directory Structure

```
rtl/
  params.vh          # Global parameters
  l1/                # L1 Cache RTL
  l2/                # L2 Cache RTL
  system/            # Top-level system wrapper
  xbar/              # TileLink Interconnect components
tb/
  rtl/               # Shared DUT wrappers
  cocotb/            # Python cocotb tests
  verilator/         # Standalone Verilator tests
    l1/              # L1 Unit Tests
    l2/              # L2 Unit Tests
    system/          # Full System Tests
    xbar/            # Interconnect Tests
```
