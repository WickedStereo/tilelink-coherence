# Testbench RTL

This directory contains shared DUT wrappers used by both cocotb and Verilator testbenches.

## Files

| File | Description |
|------|-------------|
| `rv64g_l1_dcache_tb_top.sv` | L1 DCache wrapper with all ports exposed |
| `rv64g_l2_cache_tb_top.sv` | L2 Cache wrapper with all ports exposed |

## Design Principles

1. **No testbench logic**: Wrappers only instantiate the DUT and expose ports
2. **Shared usage**: Same wrapper used by cocotb and Verilator
3. **Full port exposure**: All DUT ports available at top level
4. **VCD support**: Built-in `$dumpfile`/`$dumpvars` with `+trace` plusarg
