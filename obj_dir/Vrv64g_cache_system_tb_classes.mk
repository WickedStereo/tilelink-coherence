# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vrv64g_cache_system_tb.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 1
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace-fst/--trace-saif/--trace-vcd)
VM_TRACE = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0
# Tracing output mode in SAIF format?  0/1 (from --trace-saif)
VM_TRACE_SAIF = 0
# Tracing output mode in VCD format?  0/1 (from --trace-vcd)
VM_TRACE_VCD = 1

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
  Vrv64g_cache_system_tb \
  Vrv64g_cache_system_tb___024root__DepSet_hb70d7f98__0 \
  Vrv64g_cache_system_tb___024root__DepSet_h268eccdc__0 \
  Vrv64g_cache_system_tb_rv64g_l1_dcache__DepSet_h1c8cf0cc__0 \
  Vrv64g_cache_system_tb_rv64g_l1_dcache__DepSet_h1c8cf0cc__1 \
  Vrv64g_cache_system_tb_rv64g_l1_dcache__DepSet_h1c8cf0cc__2 \
  Vrv64g_cache_system_tb_rv64g_l1_dcache__DepSet_h1c8cf0cc__3 \
  Vrv64g_cache_system_tb_rv64g_l1_dcache__DepSet_h1c8cf0cc__4 \
  Vrv64g_cache_system_tb_rv64g_l1_dcache__DepSet_h1c8cf0cc__5 \
  Vrv64g_cache_system_tb_rv64g_l1_dcache__DepSet_h1c8cf0cc__6 \
  Vrv64g_cache_system_tb_rv64g_l1_dcache__DepSet_h1c8cf0cc__7 \
  Vrv64g_cache_system_tb_rv64g_l1_dcache__DepSet_h1c8cf0cc__8 \
  Vrv64g_cache_system_tb_rv64g_l1_dcache__DepSet_h1c8cf0cc__9 \
  Vrv64g_cache_system_tb_rv64g_l1_dcache__DepSet_h1c8cf0cc__10 \
  Vrv64g_cache_system_tb_rv64g_l1_dcache__DepSet_h1c8cf0cc__11 \
  Vrv64g_cache_system_tb_rv64g_l1_dcache__DepSet_h8b104f88__0 \
  Vrv64g_cache_system_tb_rv64g_l1_dcache__DepSet_h8b104f88__1 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
  Vrv64g_cache_system_tb__ConstPool_0 \
  Vrv64g_cache_system_tb___024root__Slow \
  Vrv64g_cache_system_tb___024root__DepSet_hb70d7f98__0__Slow \
  Vrv64g_cache_system_tb___024root__DepSet_h268eccdc__0__Slow \
  Vrv64g_cache_system_tb___024unit__Slow \
  Vrv64g_cache_system_tb___024unit__DepSet_h11cbf344__0__Slow \
  Vrv64g_cache_system_tb_rv64g_l1_dcache__Slow \
  Vrv64g_cache_system_tb_rv64g_l1_dcache__DepSet_h1c8cf0cc__0__Slow \
  Vrv64g_cache_system_tb_rv64g_l1_dcache__DepSet_h1c8cf0cc__1__Slow \
  Vrv64g_cache_system_tb_rv64g_l1_dcache__DepSet_h1c8cf0cc__2__Slow \
  Vrv64g_cache_system_tb_rv64g_l1_dcache__DepSet_h1c8cf0cc__3__Slow \
  Vrv64g_cache_system_tb_rv64g_l1_dcache__DepSet_h8b104f88__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
  Vrv64g_cache_system_tb__Trace__0 \
  Vrv64g_cache_system_tb__Trace__1 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
  Vrv64g_cache_system_tb__Syms \
  Vrv64g_cache_system_tb__Trace__0__Slow \
  Vrv64g_cache_system_tb__TraceDecls__0__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
  verilated \
  verilated_vcd_c \
  verilated_timing \
  verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \

# Verilated -*- Makefile -*-
