# Interface Specification

## 1. Overview

This document describes the interface specification for the TileLink Multi-Core Cache System, including the L1 DCache, L2 Cache, and interconnect components.

## 2. L1 DCache Interface (`rv64g_l1_dcache`)

### 2.1 Parameters

| Parameter | Default | Description |
|-----------|---------|-------------|
| `NUM_LANES` | 8 | Number of VLSU lanes |
| `NUM_BANKS` | 8 | Number of SRAM banks |

### 2.2 Clock and Reset

| Signal | Dir | Width | Description |
|--------|-----|-------|-------------|
| `clk_i` | in | 1 | System clock |
| `rst_ni` | in | 1 | Active-low synchronous reset |

### 2.3 Maintenance

| Signal | Dir | Width | Description |
|--------|-----|-------|-------------|
| `invalidate_all_i` | in | 1 | Flush entire cache |

### 2.4 CPU Scalar Port (OBI-style)

| Signal | Dir | Width | Description |
|--------|-----|-------|-------------|
| `req_i` | in | 1 | Request valid |
| `we_i` | in | 1 | Write enable (0=read, 1=write) |
| `be_i` | in | 8 | Byte enables |
| `addr_i` | in | 64 | Address |
| `wdata_i` | in | 64 | Write data |
| `gnt_o` | out | 1 | Request granted |
| `rvalid_o` | out | 1 | Response valid |
| `rdata_o` | out | 64 | Read data |

#### Scalar Port Protocol

```
         ___     ___     ___     ___     ___     ___
clk   __|   |___|   |___|   |___|   |___|   |___|   |

       _________
req   |         |_______________________________________
       _________
we    |   0     |_______________________________________  (read)
       _________
addr  |  ADDR   |_______________________________________

              _________
gnt          |         |________________________________  (accepted)

                                      _________
rvalid                               |         |________

                                      _________
rdata                                |  DATA   |________
```

### 2.5 Atomic Operations

| Signal | Dir | Width | Description |
|--------|-----|-------|-------------|
| `amo_i` | in | 1 | Atomic operation flag |
| `lr_i` | in | 1 | Load-Reserved operation |
| `sc_i` | in | 1 | Store-Conditional operation |
| `amo_op_i` | in | 5 | Atomic operation type (RISC-V encoding) |
| `amo_word_i` | in | 1 | 32-bit atomic (1) or 64-bit (0) |

#### AMO Operation Encoding (`amo_op_i`)

| Value | Operation |
|-------|-----------|
| 5'b00000 | AMOADD |
| 5'b00001 | AMOSWAP |
| 5'b00100 | AMOXOR |
| 5'b01100 | AMOAND |
| 5'b01000 | AMOOR |
| 5'b10000 | AMOMIN |
| 5'b10100 | AMOMAX |
| 5'b11000 | AMOMINU |
| 5'b11100 | AMOMAXU |

### 2.6 Vector LSU Port (VLSU)

| Signal | Dir | Width | Description |
|--------|-----|-------|-------------|
| `vlsu_req_i` | in | 1 | VLSU request valid |
| `vlsu_lane_valid_i` | in | 8 | Per-lane valid bits |
| `vlsu_lane_we_i` | in | 8 | Per-lane write enables |
| `vlsu_lane_addr_i` | in | 512 | Per-lane addresses (8×64) |
| `vlsu_lane_wdata_i` | in | 512 | Per-lane write data (8×64) |
| `vlsu_lane_be_i` | in | 64 | Per-lane byte enables (8×8) |
| `vlsu_ready_o` | out | 1 | VLSU ready for request |
| `vlsu_done_o` | out | 1 | VLSU operation complete |
| `vlsu_lane_done_o` | out | 8 | Per-lane done signals |
| `vlsu_lane_hit_o` | out | 8 | Per-lane hit signals |
| `vlsu_lane_rdata_o` | out | 512 | Per-lane read data (8×64) |

### 2.7 TileLink Channel A (Request)

| Signal | Dir | Width | Description |
|--------|-----|-------|-------------|
| `tl_a_valid_o` | out | 1 | A channel valid |
| `tl_a_ready_i` | in | 1 | A channel ready |
| `tl_a_opcode_o` | out | 3 | Operation code |
| `tl_a_param_o` | out | 3 | Permission parameter |
| `tl_a_size_o` | out | 4 | Transfer size (log2 bytes) |
| `tl_a_source_o` | out | 4 | Transaction source ID |
| `tl_a_address_o` | out | 64 | Address |
| `tl_a_mask_o` | out | 8 | Byte mask |
| `tl_a_data_o` | out | 64 | Data (for Put operations) |
| `tl_a_corrupt_o` | out | 1 | Data corruption flag |

#### A Channel Opcodes

| Opcode | Name | Description |
|--------|------|-------------|
| 3'd4 | Get | Read without caching |
| 3'd0 | PutFullData | Write full data |
| 3'd1 | PutPartialData | Write partial data |
| 3'd6 | AcquireBlock | Acquire cache block |
| 3'd7 | AcquirePerm | Acquire permissions only |

### 2.8 TileLink Channel B (Probe)

| Signal | Dir | Width | Description |
|--------|-----|-------|-------------|
| `tl_b_valid_i` | in | 1 | B channel valid |
| `tl_b_ready_o` | out | 1 | B channel ready |
| `tl_b_opcode_i` | in | 3 | Probe opcode |
| `tl_b_param_i` | in | 3 | Target permission |
| `tl_b_size_i` | in | 4 | Size |
| `tl_b_source_i` | in | 4 | Source |
| `tl_b_address_i` | in | 64 | Address to probe |
| `tl_b_mask_i` | in | 8 | Mask |
| `tl_b_data_i` | in | 64 | Data |
| `tl_b_corrupt_i` | in | 1 | Corrupt flag |

### 2.9 TileLink Channel C (Release/ProbeAck)

| Signal | Dir | Width | Description |
|--------|-----|-------|-------------|
| `tl_c_valid_o` | out | 1 | C channel valid |
| `tl_c_ready_i` | in | 1 | C channel ready |
| `tl_c_opcode_o` | out | 3 | Operation code |
| `tl_c_param_o` | out | 3 | Report parameter |
| `tl_c_size_o` | out | 4 | Size |
| `tl_c_source_o` | out | 4 | Source |
| `tl_c_address_o` | out | 64 | Address |
| `tl_c_data_o` | out | 64 | Data (for writeback) |
| `tl_c_corrupt_o` | out | 1 | Corrupt flag |

#### C Channel Opcodes

| Opcode | Name | Description |
|--------|------|-------------|
| 3'd4 | ProbeAck | Acknowledge probe (no data) |
| 3'd5 | ProbeAckData | Acknowledge probe (with data) |
| 3'd6 | Release | Voluntary release (no data) |
| 3'd7 | ReleaseData | Voluntary release (with data) |

### 2.10 TileLink Channel D (Grant)

| Signal | Dir | Width | Description |
|--------|-----|-------|-------------|
| `tl_d_valid_i` | in | 1 | D channel valid |
| `tl_d_ready_o` | out | 1 | D channel ready |
| `tl_d_opcode_i` | in | 3 | Grant opcode |
| `tl_d_param_i` | in | 2 | Permission granted |
| `tl_d_size_i` | in | 4 | Size |
| `tl_d_source_i` | in | 4 | Matches A source |
| `tl_d_sink_i` | in | 4 | Sink ID for E channel |
| `tl_d_denied_i` | in | 1 | Request denied |
| `tl_d_data_i` | in | 64 | Data |
| `tl_d_corrupt_i` | in | 1 | Corrupt flag |

#### D Channel Opcodes

| Opcode | Name | Description |
|--------|------|-------------|
| 3'd0 | AccessAck | Ack for Get/Put (no data) |
| 3'd1 | AccessAckData | Ack for Get (with data) |
| 3'd4 | Grant | Grant permissions (no data) |
| 3'd5 | GrantData | Grant with data |
| 3'd6 | ReleaseAck | Ack for Release |

### 2.11 TileLink Channel E (GrantAck)

| Signal | Dir | Width | Description |
|--------|-----|-------|-------------|
| `tl_e_valid_o` | out | 1 | E channel valid |
| `tl_e_ready_i` | in | 1 | E channel ready |
| `tl_e_sink_o` | out | 4 | Matches D sink |

## 3. Address Mapping

### 3.1 L1 Cache Address Decode

```
63        11  10       6  5        3  2      0
+------------+-----------+-----------+--------+
|    TAG     |   INDEX   | WORD_OFF  |BYTE_OFF|
+------------+-----------+-----------+--------+
    53 bits     5 bits      3 bits    3 bits
```

| Field | Bits | Width | Description |
|-------|------|-------|-------------|
| BYTE_OFF | [2:0] | 3 | Byte offset within word |
| WORD_OFF | [5:3] | 3 | Word offset within line |
| INDEX | [10:6] | 5 | Set index (32 sets) |
| TAG | [63:11] | 53 | Tag bits |

### 3.2 Cache Configuration

| Parameter | L1 | L2 |
|-----------|----|----|
| Size | 16 KB | 256 KB |
| Associativity | 8-way | 16-way |
| Sets | 32 | 256 |
| Line Size | 64 bytes | 64 bytes |

## 4. MESI Protocol States

| State | Code | TileLink Perm | Description |
|-------|------|---------------|-------------|
| Invalid | N | None | Line not present |
| Shared | B | Branch | Read-only, clean |
| Exclusive | T | Trunk | Read/Write, clean |
| Modified | TT | Trunk | Read/Write, dirty |
