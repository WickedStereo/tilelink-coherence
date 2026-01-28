// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrv64g_cache_system_tb.h for the primary calling header

#include "Vrv64g_cache_system_tb__pch.h"
#include "Vrv64g_cache_system_tb__Syms.h"
#include "Vrv64g_cache_system_tb___024root.h"

VL_ATTR_COLD void Vrv64g_cache_system_tb___024root___eval_initial__TOP(Vrv64g_cache_system_tb___024root* vlSelf);
VlCoroutine Vrv64g_cache_system_tb___024root___eval_initial__TOP__Vtiming__0(Vrv64g_cache_system_tb___024root* vlSelf);
VlCoroutine Vrv64g_cache_system_tb___024root___eval_initial__TOP__Vtiming__1(Vrv64g_cache_system_tb___024root* vlSelf);
void Vrv64g_cache_system_tb_rv64g_l1_dcache___eval_initial__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1(Vrv64g_cache_system_tb_rv64g_l1_dcache* vlSelf);

void Vrv64g_cache_system_tb___024root___eval_initial(Vrv64g_cache_system_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv64g_cache_system_tb___024root___eval_initial\n"); );
    Vrv64g_cache_system_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vrv64g_cache_system_tb___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vrv64g_cache_system_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vrv64g_cache_system_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vrv64g_cache_system_tb_rv64g_l1_dcache___eval_initial__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1));
    Vrv64g_cache_system_tb_rv64g_l1_dcache___eval_initial__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1));
    Vrv64g_cache_system_tb_rv64g_l1_dcache___eval_initial__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1));
    Vrv64g_cache_system_tb_rv64g_l1_dcache___eval_initial__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1));
}

extern const VlWide<8>/*255:0*/ Vrv64g_cache_system_tb__ConstPool__CONST_h9e67c271_0;

VL_INLINE_OPT VlCoroutine Vrv64g_cache_system_tb___024root___eval_initial__TOP__Vtiming__1(Vrv64g_cache_system_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv64g_cache_system_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vrv64g_cache_system_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rv64g_cache_system_tb__DOT__rst_n = 0U;
    vlSelfRef.rv64g_cache_system_tb__DOT__cpu_req = 0U;
    vlSelfRef.rv64g_cache_system_tb__DOT__cpu_we = 0U;
    vlSelfRef.rv64g_cache_system_tb__DOT__cpu_addr[0U] 
        = Vrv64g_cache_system_tb__ConstPool__CONST_h9e67c271_0[0U];
    vlSelfRef.rv64g_cache_system_tb__DOT__cpu_addr[1U] 
        = Vrv64g_cache_system_tb__ConstPool__CONST_h9e67c271_0[1U];
    vlSelfRef.rv64g_cache_system_tb__DOT__cpu_addr[2U] 
        = Vrv64g_cache_system_tb__ConstPool__CONST_h9e67c271_0[2U];
    vlSelfRef.rv64g_cache_system_tb__DOT__cpu_addr[3U] 
        = Vrv64g_cache_system_tb__ConstPool__CONST_h9e67c271_0[3U];
    vlSelfRef.rv64g_cache_system_tb__DOT__cpu_addr[4U] 
        = Vrv64g_cache_system_tb__ConstPool__CONST_h9e67c271_0[4U];
    vlSelfRef.rv64g_cache_system_tb__DOT__cpu_addr[5U] 
        = Vrv64g_cache_system_tb__ConstPool__CONST_h9e67c271_0[5U];
    vlSelfRef.rv64g_cache_system_tb__DOT__cpu_addr[6U] 
        = Vrv64g_cache_system_tb__ConstPool__CONST_h9e67c271_0[6U];
    vlSelfRef.rv64g_cache_system_tb__DOT__cpu_addr[7U] 
        = Vrv64g_cache_system_tb__ConstPool__CONST_h9e67c271_0[7U];
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "testbench/system/rv64g_cache_system_tb.v", 
                                         163);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.rv64g_cache_system_tb__DOT__rst_n = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "testbench/system/rv64g_cache_system_tb.v", 
                                         165);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("\n[%0# cycles] ========================================\n[%0# cycles] Starting Cache System Test\n[%0# cycles] ========================================\n[%0# cycles] Test Sequence:\n[%0# cycles]   1. Core 0 Read 0x100 (miss, fill cache)\n[%0# cycles]   2. Core 1 Read 0x100 (hit, shared state)\n[%0# cycles]   3. Core 0 Write 0x100 (invalidate Core 1)\n[%0# cycles]   4. Core 1 Read 0x100 (probe Core 0, get new data)\n[%0# cycles] ========================================\n\n",0,
                 64,VL_DIV_QQQ(64, (QData)(VL_TIME_UNITED_Q(1000)), 0xaULL),
                 64,VL_DIV_QQQ(64, (QData)(VL_TIME_UNITED_Q(1000)), 0xaULL),
                 64,VL_DIV_QQQ(64, (QData)(VL_TIME_UNITED_Q(1000)), 0xaULL),
                 64,VL_DIV_QQQ(64, (QData)(VL_TIME_UNITED_Q(1000)), 0xaULL),
                 64,VL_DIV_QQQ(64, (QData)(VL_TIME_UNITED_Q(1000)), 0xaULL),
                 64,VL_DIV_QQQ(64, (QData)(VL_TIME_UNITED_Q(1000)), 0xaULL),
                 64,VL_DIV_QQQ(64, (QData)(VL_TIME_UNITED_Q(1000)), 0xaULL),
                 64,VL_DIV_QQQ(64, (QData)(VL_TIME_UNITED_Q(1000)), 0xaULL),
                 64,VL_DIV_QQQ(64, (QData)(VL_TIME_UNITED_Q(1000)), 0xaULL));
    VL_WRITEF_NX("[%0# cycles] ========================================\n[%0# cycles] TEST: Core 0 Read from 0x100\n[%0# cycles] ========================================\n",0,
                 64,VL_DIV_QQQ(64, (QData)(VL_TIME_UNITED_Q(1000)), 0xaULL),
                 64,VL_DIV_QQQ(64, (QData)(VL_TIME_UNITED_Q(1000)), 0xaULL),
                 64,VL_DIV_QQQ(64, (QData)(VL_TIME_UNITED_Q(1000)), 0xaULL));
    vlSelfRef.rv64g_cache_system_tb__DOT__cpu_req = 
        (1U | (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__cpu_req));
    vlSelfRef.rv64g_cache_system_tb__DOT__cpu_we = 
        (0xeU & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__cpu_we));
    vlSelfRef.rv64g_cache_system_tb__DOT__cpu_addr[0U] = 0x100U;
    vlSelfRef.rv64g_cache_system_tb__DOT__cpu_addr[1U] = 0U;
    while ((1U & (~ (IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1.gnt_o)))) {
        co_await vlSelfRef.__VtrigSched_h3c4e1133__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( rv64g_cache_system_tb.dut.gen_l1[0].l1.gnt_o)", 
                                                             "testbench/system/rv64g_cache_system_tb.v", 
                                                             184);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    VL_WRITEF_NX("[%0# cycles] CPU[0]: Request granted\n",0,
                 64,VL_DIV_QQQ(64, (QData)(VL_TIME_UNITED_Q(1000)), 0xaULL));
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "testbench/system/rv64g_cache_system_tb.v", 
                                         186);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.rv64g_cache_system_tb__DOT__cpu_req = 
        (0xeU & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__cpu_req));
    while ((1U & (~ (IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1.rvalid_o)))) {
        co_await vlSelfRef.__VtrigSched_ha55c2679__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( rv64g_cache_system_tb.dut.gen_l1[0].l1.rvalid_o)", 
                                                             "testbench/system/rv64g_cache_system_tb.v", 
                                                             189);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    VL_WRITEF_NX("[%0# cycles] CPU[0]: Response received\n[%0# cycles] CPU[0]: Read Data = 0x%016x\n",0,
                 64,VL_DIV_QQQ(64, (QData)(VL_TIME_UNITED_Q(1000)), 0xaULL),
                 64,VL_DIV_QQQ(64, (QData)(VL_TIME_UNITED_Q(1000)), 0xaULL),
                 64,vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1.rdata_o);
    if ((0x20ULL != vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1.rdata_o)) {
        VL_WRITEF_NX("[%0# cycles] ERROR: Core 0 Read Mismatch! Expected 0x20, got 0x%016x\n",0,
                     64,VL_DIV_QQQ(64, (QData)(VL_TIME_UNITED_Q(1000)), 0xaULL),
                     64,vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1.rdata_o);
    } else {
        VL_WRITEF_NX("[%0# cycles] PASS: Core 0 Read matches expected value\n",0,
                     64,VL_DIV_QQQ(64, (QData)(VL_TIME_UNITED_Q(1000)), 0xaULL));
    }
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "testbench/system/rv64g_cache_system_tb.v", 
                                         199);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("[%0# cycles] ========================================\n[%0# cycles] TEST: Core 1 Read from 0x100 (Shared)\n[%0# cycles] ========================================\n",0,
                 64,VL_DIV_QQQ(64, (QData)(VL_TIME_UNITED_Q(1000)), 0xaULL),
                 64,VL_DIV_QQQ(64, (QData)(VL_TIME_UNITED_Q(1000)), 0xaULL),
                 64,VL_DIV_QQQ(64, (QData)(VL_TIME_UNITED_Q(1000)), 0xaULL));
    vlSelfRef.rv64g_cache_system_tb__DOT__cpu_req = 
        (2U | (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__cpu_req));
    vlSelfRef.rv64g_cache_system_tb__DOT__cpu_we = 
        (0xdU & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__cpu_we));
    vlSelfRef.rv64g_cache_system_tb__DOT__cpu_addr[2U] = 0x100U;
    vlSelfRef.rv64g_cache_system_tb__DOT__cpu_addr[3U] = 0U;
    while ((1U & (~ (IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1.gnt_o)))) {
        co_await vlSelfRef.__VtrigSched_h15eb0316__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( rv64g_cache_system_tb.dut.gen_l1[1].l1.gnt_o)", 
                                                             "testbench/system/rv64g_cache_system_tb.v", 
                                                             209);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    VL_WRITEF_NX("[%0# cycles] CPU[1]: Request granted\n",0,
                 64,VL_DIV_QQQ(64, (QData)(VL_TIME_UNITED_Q(1000)), 0xaULL));
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "testbench/system/rv64g_cache_system_tb.v", 
                                         211);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.rv64g_cache_system_tb__DOT__cpu_req = 
        (0xdU & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__cpu_req));
    while ((1U & (~ (IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1.rvalid_o)))) {
        co_await vlSelfRef.__VtrigSched_h1e159713__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( rv64g_cache_system_tb.dut.gen_l1[1].l1.rvalid_o)", 
                                                             "testbench/system/rv64g_cache_system_tb.v", 
                                                             214);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    VL_WRITEF_NX("[%0# cycles] CPU[1]: Response received\n[%0# cycles] CPU[1]: Read Data = 0x%016x\n",0,
                 64,VL_DIV_QQQ(64, (QData)(VL_TIME_UNITED_Q(1000)), 0xaULL),
                 64,VL_DIV_QQQ(64, (QData)(VL_TIME_UNITED_Q(1000)), 0xaULL),
                 64,vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1.rdata_o);
    if ((0x20ULL != vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1.rdata_o)) {
        VL_WRITEF_NX("[%0# cycles] ERROR: Core 1 Read Mismatch! Expected 0x20, got 0x%016x\n",0,
                     64,VL_DIV_QQQ(64, (QData)(VL_TIME_UNITED_Q(1000)), 0xaULL),
                     64,vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1.rdata_o);
    } else {
        VL_WRITEF_NX("[%0# cycles] PASS: Core 1 Read matches expected value (Shared state)\n",0,
                     64,VL_DIV_QQQ(64, (QData)(VL_TIME_UNITED_Q(1000)), 0xaULL));
    }
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "testbench/system/rv64g_cache_system_tb.v", 
                                         224);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("[%0# cycles] ========================================\n[%0# cycles] TEST: Core 0 Write to 0x100 = 0xDEADBEEF\n[%0# cycles]        (Should invalidate Core 1)\n[%0# cycles] ========================================\n",0,
                 64,VL_DIV_QQQ(64, (QData)(VL_TIME_UNITED_Q(1000)), 0xaULL),
                 64,VL_DIV_QQQ(64, (QData)(VL_TIME_UNITED_Q(1000)), 0xaULL),
                 64,VL_DIV_QQQ(64, (QData)(VL_TIME_UNITED_Q(1000)), 0xaULL),
                 64,VL_DIV_QQQ(64, (QData)(VL_TIME_UNITED_Q(1000)), 0xaULL));
    vlSelfRef.rv64g_cache_system_tb__DOT__cpu_req = 
        (1U | (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__cpu_req));
    vlSelfRef.rv64g_cache_system_tb__DOT__cpu_we = 
        (1U | (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__cpu_we));
    vlSelfRef.rv64g_cache_system_tb__DOT__cpu_addr[0U] = 0x100U;
    vlSelfRef.rv64g_cache_system_tb__DOT__cpu_addr[1U] = 0U;
    vlSelfRef.rv64g_cache_system_tb__DOT__cpu_wdata[0U] = 0xdeadbeefU;
    vlSelfRef.rv64g_cache_system_tb__DOT__cpu_wdata[1U] = 0U;
    vlSelfRef.rv64g_cache_system_tb__DOT__cpu_be = 
        (0xffU | vlSelfRef.rv64g_cache_system_tb__DOT__cpu_be);
    while ((1U & (~ (IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1.gnt_o)))) {
        co_await vlSelfRef.__VtrigSched_h3c4e1133__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( rv64g_cache_system_tb.dut.gen_l1[0].l1.gnt_o)", 
                                                             "testbench/system/rv64g_cache_system_tb.v", 
                                                             237);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    VL_WRITEF_NX("[%0# cycles] CPU[0]: Write request granted\n",0,
                 64,VL_DIV_QQQ(64, (QData)(VL_TIME_UNITED_Q(1000)), 0xaULL));
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "testbench/system/rv64g_cache_system_tb.v", 
                                         239);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.rv64g_cache_system_tb__DOT__cpu_req = 
        (0xeU & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__cpu_req));
    vlSelfRef.rv64g_cache_system_tb__DOT__cpu_we = 
        (0xeU & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__cpu_we));
    VL_WRITEF_NX("[%0# cycles] CPU[0]: Waiting for write to complete...\n",0,
                 64,VL_DIV_QQQ(64, (QData)(VL_TIME_UNITED_Q(1000)), 0xaULL));
    co_await vlSelfRef.__VdlySched.delay(0x30d40ULL, 
                                         nullptr, "testbench/system/rv64g_cache_system_tb.v", 
                                         245);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("[%0# cycles] ========================================\n[%0# cycles] TEST: Core 1 Read from 0x100\n[%0# cycles]        (Should probe Core 0, get updated data)\n[%0# cycles] ========================================\n",0,
                 64,VL_DIV_QQQ(64, (QData)(VL_TIME_UNITED_Q(1000)), 0xaULL),
                 64,VL_DIV_QQQ(64, (QData)(VL_TIME_UNITED_Q(1000)), 0xaULL),
                 64,VL_DIV_QQQ(64, (QData)(VL_TIME_UNITED_Q(1000)), 0xaULL),
                 64,VL_DIV_QQQ(64, (QData)(VL_TIME_UNITED_Q(1000)), 0xaULL));
    vlSelfRef.rv64g_cache_system_tb__DOT__cpu_req = 
        (2U | (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__cpu_req));
    vlSelfRef.rv64g_cache_system_tb__DOT__cpu_we = 
        (0xdU & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__cpu_we));
    vlSelfRef.rv64g_cache_system_tb__DOT__cpu_addr[2U] = 0x100U;
    vlSelfRef.rv64g_cache_system_tb__DOT__cpu_addr[3U] = 0U;
    while ((1U & (~ (IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1.gnt_o)))) {
        co_await vlSelfRef.__VtrigSched_h15eb0316__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( rv64g_cache_system_tb.dut.gen_l1[1].l1.gnt_o)", 
                                                             "testbench/system/rv64g_cache_system_tb.v", 
                                                             256);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    VL_WRITEF_NX("[%0# cycles] CPU[1]: Request granted\n",0,
                 64,VL_DIV_QQQ(64, (QData)(VL_TIME_UNITED_Q(1000)), 0xaULL));
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "testbench/system/rv64g_cache_system_tb.v", 
                                         258);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.rv64g_cache_system_tb__DOT__cpu_req = 
        (0xdU & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__cpu_req));
    while ((1U & (~ (IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1.rvalid_o)))) {
        co_await vlSelfRef.__VtrigSched_h1e159713__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( rv64g_cache_system_tb.dut.gen_l1[1].l1.rvalid_o)", 
                                                             "testbench/system/rv64g_cache_system_tb.v", 
                                                             261);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    VL_WRITEF_NX("[%0# cycles] CPU[1]: Response received\n[%0# cycles] CPU[1]: Read Data = 0x%016x\n",0,
                 64,VL_DIV_QQQ(64, (QData)(VL_TIME_UNITED_Q(1000)), 0xaULL),
                 64,VL_DIV_QQQ(64, (QData)(VL_TIME_UNITED_Q(1000)), 0xaULL),
                 64,vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1.rdata_o);
    if ((0xdeadbeefULL != vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1.rdata_o)) {
        VL_WRITEF_NX("[%0# cycles] ERROR: Coherence Test FAILED!\n[%0# cycles]        Expected 0xDEADBEEF, got 0x%016x\n",0,
                     64,VL_DIV_QQQ(64, (QData)(VL_TIME_UNITED_Q(1000)), 0xaULL),
                     64,VL_DIV_QQQ(64, (QData)(VL_TIME_UNITED_Q(1000)), 0xaULL),
                     64,vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1.rdata_o);
    } else {
        VL_WRITEF_NX("[%0# cycles] ========================================\n[%0# cycles] SUCCESS: Coherence Test PASSED!\n[%0# cycles] ========================================\n",0,
                     64,VL_DIV_QQQ(64, (QData)(VL_TIME_UNITED_Q(1000)), 0xaULL),
                     64,VL_DIV_QQQ(64, (QData)(VL_TIME_UNITED_Q(1000)), 0xaULL),
                     64,VL_DIV_QQQ(64, (QData)(VL_TIME_UNITED_Q(1000)), 0xaULL));
    }
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "testbench/system/rv64g_cache_system_tb.v", 
                                         273);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("testbench/system/rv64g_cache_system_tb.v", 274, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrv64g_cache_system_tb___024root___dump_triggers__ico(Vrv64g_cache_system_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vrv64g_cache_system_tb___024root___eval_triggers__ico(Vrv64g_cache_system_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv64g_cache_system_tb___024root___eval_triggers__ico\n"); );
    Vrv64g_cache_system_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.setBit(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vrv64g_cache_system_tb___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrv64g_cache_system_tb___024root___dump_triggers__act(Vrv64g_cache_system_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vrv64g_cache_system_tb___024root___eval_triggers__act(Vrv64g_cache_system_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv64g_cache_system_tb___024root___eval_triggers__act\n"); );
    Vrv64g_cache_system_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1.__PVT__arr_word_sel) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1____PVT__arr_word_sel__1)));
    vlSelfRef.__VactTriggered.setBit(1U, ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1.__PVT__u_arrays__DOT__arb_bank_index__BRA__4__03a0__KET__) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1____PVT__u_arrays__DOT__arb_bank_index__BRA__4__03a0__KET____1)));
    vlSelfRef.__VactTriggered.setBit(2U, ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_index_o) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_index_o__1)));
    vlSelfRef.__VactTriggered.setBit(3U, ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_index_o) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_index_o__1)));
    vlSelfRef.__VactTriggered.setBit(4U, ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_index_o) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_index_o__1)));
    vlSelfRef.__VactTriggered.setBit(5U, ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_index_o) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_index_o__1)));
    vlSelfRef.__VactTriggered.setBit(6U, ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_index_o) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_index_o__1)));
    vlSelfRef.__VactTriggered.setBit(7U, ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_index_o) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_index_o__1)));
    vlSelfRef.__VactTriggered.setBit(8U, ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_index_o) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_index_o__1)));
    vlSelfRef.__VactTriggered.setBit(9U, ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1.__PVT__arr_word_sel) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1____PVT__arr_word_sel__1)));
    vlSelfRef.__VactTriggered.setBit(0xaU, ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1.__PVT__u_arrays__DOT__arb_bank_index__BRA__4__03a0__KET__) 
                                            != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1____PVT__u_arrays__DOT__arb_bank_index__BRA__4__03a0__KET____1)));
    vlSelfRef.__VactTriggered.setBit(0xbU, ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_index_o) 
                                            != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_index_o__1)));
    vlSelfRef.__VactTriggered.setBit(0xcU, ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_index_o) 
                                            != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_index_o__1)));
    vlSelfRef.__VactTriggered.setBit(0xdU, ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_index_o) 
                                            != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_index_o__1)));
    vlSelfRef.__VactTriggered.setBit(0xeU, ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_index_o) 
                                            != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_index_o__1)));
    vlSelfRef.__VactTriggered.setBit(0xfU, ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_index_o) 
                                            != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_index_o__1)));
    vlSelfRef.__VactTriggered.setBit(0x10U, ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_index_o) 
                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_index_o__1)));
    vlSelfRef.__VactTriggered.setBit(0x11U, ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_index_o) 
                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_index_o__1)));
    vlSelfRef.__VactTriggered.setBit(0x12U, ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1.__PVT__arr_word_sel) 
                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1____PVT__arr_word_sel__1)));
    vlSelfRef.__VactTriggered.setBit(0x13U, ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1.__PVT__u_arrays__DOT__arb_bank_index__BRA__4__03a0__KET__) 
                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1____PVT__u_arrays__DOT__arb_bank_index__BRA__4__03a0__KET____1)));
    vlSelfRef.__VactTriggered.setBit(0x14U, ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_index_o) 
                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_index_o__1)));
    vlSelfRef.__VactTriggered.setBit(0x15U, ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_index_o) 
                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_index_o__1)));
    vlSelfRef.__VactTriggered.setBit(0x16U, ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_index_o) 
                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_index_o__1)));
    vlSelfRef.__VactTriggered.setBit(0x17U, ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_index_o) 
                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_index_o__1)));
    vlSelfRef.__VactTriggered.setBit(0x18U, ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_index_o) 
                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_index_o__1)));
    vlSelfRef.__VactTriggered.setBit(0x19U, ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_index_o) 
                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_index_o__1)));
    vlSelfRef.__VactTriggered.setBit(0x1aU, ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_index_o) 
                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_index_o__1)));
    vlSelfRef.__VactTriggered.setBit(0x1bU, ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1.__PVT__arr_word_sel) 
                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1____PVT__arr_word_sel__1)));
    vlSelfRef.__VactTriggered.setBit(0x1cU, ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1.__PVT__u_arrays__DOT__arb_bank_index__BRA__4__03a0__KET__) 
                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1____PVT__u_arrays__DOT__arb_bank_index__BRA__4__03a0__KET____1)));
    vlSelfRef.__VactTriggered.setBit(0x1dU, ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_index_o) 
                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_index_o__1)));
    vlSelfRef.__VactTriggered.setBit(0x1eU, ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_index_o) 
                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_index_o__1)));
    vlSelfRef.__VactTriggered.setBit(0x1fU, ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_index_o) 
                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_index_o__1)));
    vlSelfRef.__VactTriggered.setBit(0x20U, ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_index_o) 
                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_index_o__1)));
    vlSelfRef.__VactTriggered.setBit(0x21U, ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_index_o) 
                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_index_o__1)));
    vlSelfRef.__VactTriggered.setBit(0x22U, ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_index_o) 
                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_index_o__1)));
    vlSelfRef.__VactTriggered.setBit(0x23U, ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_index_o) 
                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_index_o__1)));
    vlSelfRef.__VactTriggered.setBit(0x24U, ((IData)(vlSelfRef.clk_i) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk_i__0))));
    vlSelfRef.__VactTriggered.setBit(0x25U, ((~ (IData)(vlSelfRef.rst_ni)) 
                                             & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rst_ni__0)));
    vlSelfRef.__VactTriggered.setBit(0x26U, ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__clk) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(0x27U, ((~ (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__rst_n)) 
                                             & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__rst_n__0)));
    vlSelfRef.__VactTriggered.setBit(0x28U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__VactTriggered.setBit(0x29U, ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1.gnt_o) 
                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__gnt_o__0)));
    vlSelfRef.__VactTriggered.setBit(0x2aU, ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1.rvalid_o) 
                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__rvalid_o__0)));
    vlSelfRef.__VactTriggered.setBit(0x2bU, ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1.gnt_o) 
                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1__gnt_o__0)));
    vlSelfRef.__VactTriggered.setBit(0x2cU, ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1.rvalid_o) 
                                             != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1__rvalid_o__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1____PVT__arr_word_sel__1 
        = vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1.__PVT__arr_word_sel;
    vlSelfRef.__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1____PVT__u_arrays__DOT__arb_bank_index__BRA__4__03a0__KET____1 
        = vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1.__PVT__u_arrays__DOT__arb_bank_index__BRA__4__03a0__KET__;
    vlSelfRef.__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_index_o__1 
        = vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_index_o;
    vlSelfRef.__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_index_o__1 
        = vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_index_o;
    vlSelfRef.__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_index_o__1 
        = vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_index_o;
    vlSelfRef.__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_index_o__1 
        = vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_index_o;
    vlSelfRef.__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_index_o__1 
        = vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_index_o;
    vlSelfRef.__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_index_o__1 
        = vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_index_o;
    vlSelfRef.__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_index_o__1 
        = vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_index_o;
    vlSelfRef.__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1____PVT__arr_word_sel__1 
        = vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1.__PVT__arr_word_sel;
    vlSelfRef.__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1____PVT__u_arrays__DOT__arb_bank_index__BRA__4__03a0__KET____1 
        = vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1.__PVT__u_arrays__DOT__arb_bank_index__BRA__4__03a0__KET__;
    vlSelfRef.__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_index_o__1 
        = vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_index_o;
    vlSelfRef.__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_index_o__1 
        = vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_index_o;
    vlSelfRef.__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_index_o__1 
        = vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_index_o;
    vlSelfRef.__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_index_o__1 
        = vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_index_o;
    vlSelfRef.__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_index_o__1 
        = vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_index_o;
    vlSelfRef.__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_index_o__1 
        = vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_index_o;
    vlSelfRef.__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_index_o__1 
        = vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_index_o;
    vlSelfRef.__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1____PVT__arr_word_sel__1 
        = vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1.__PVT__arr_word_sel;
    vlSelfRef.__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1____PVT__u_arrays__DOT__arb_bank_index__BRA__4__03a0__KET____1 
        = vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1.__PVT__u_arrays__DOT__arb_bank_index__BRA__4__03a0__KET__;
    vlSelfRef.__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_index_o__1 
        = vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_index_o;
    vlSelfRef.__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_index_o__1 
        = vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_index_o;
    vlSelfRef.__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_index_o__1 
        = vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_index_o;
    vlSelfRef.__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_index_o__1 
        = vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_index_o;
    vlSelfRef.__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_index_o__1 
        = vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_index_o;
    vlSelfRef.__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_index_o__1 
        = vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_index_o;
    vlSelfRef.__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_index_o__1 
        = vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_index_o;
    vlSelfRef.__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1____PVT__arr_word_sel__1 
        = vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1.__PVT__arr_word_sel;
    vlSelfRef.__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1____PVT__u_arrays__DOT__arb_bank_index__BRA__4__03a0__KET____1 
        = vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1.__PVT__u_arrays__DOT__arb_bank_index__BRA__4__03a0__KET__;
    vlSelfRef.__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_index_o__1 
        = vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_index_o;
    vlSelfRef.__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_index_o__1 
        = vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_index_o;
    vlSelfRef.__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_index_o__1 
        = vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_index_o;
    vlSelfRef.__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_index_o__1 
        = vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_index_o;
    vlSelfRef.__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_index_o__1 
        = vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_index_o;
    vlSelfRef.__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_index_o__1 
        = vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_index_o;
    vlSelfRef.__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1__u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_index_o__1 
        = vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_index_o;
    vlSelfRef.__Vtrigprevexpr___TOP__clk_i__0 = vlSelfRef.clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_ni__0 = vlSelfRef.rst_ni;
    vlSelfRef.__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__clk__0 
        = vlSelfRef.rv64g_cache_system_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__rst_n__0 
        = vlSelfRef.rv64g_cache_system_tb__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__gnt_o__0 
        = vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1.gnt_o;
    vlSelfRef.__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__rvalid_o__0 
        = vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1.rvalid_o;
    vlSelfRef.__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1__gnt_o__0 
        = vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1.gnt_o;
    vlSelfRef.__Vtrigprevexpr___TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1__rvalid_o__0 
        = vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1.rvalid_o;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.setBit(0U, 1U);
        vlSelfRef.__VactTriggered.setBit(1U, 1U);
        vlSelfRef.__VactTriggered.setBit(2U, 1U);
        vlSelfRef.__VactTriggered.setBit(3U, 1U);
        vlSelfRef.__VactTriggered.setBit(4U, 1U);
        vlSelfRef.__VactTriggered.setBit(5U, 1U);
        vlSelfRef.__VactTriggered.setBit(6U, 1U);
        vlSelfRef.__VactTriggered.setBit(7U, 1U);
        vlSelfRef.__VactTriggered.setBit(8U, 1U);
        vlSelfRef.__VactTriggered.setBit(9U, 1U);
        vlSelfRef.__VactTriggered.setBit(0xaU, 1U);
        vlSelfRef.__VactTriggered.setBit(0xbU, 1U);
        vlSelfRef.__VactTriggered.setBit(0xcU, 1U);
        vlSelfRef.__VactTriggered.setBit(0xdU, 1U);
        vlSelfRef.__VactTriggered.setBit(0xeU, 1U);
        vlSelfRef.__VactTriggered.setBit(0xfU, 1U);
        vlSelfRef.__VactTriggered.setBit(0x10U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x11U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x12U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x13U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x14U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x15U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x16U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x17U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x18U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x19U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x1aU, 1U);
        vlSelfRef.__VactTriggered.setBit(0x1bU, 1U);
        vlSelfRef.__VactTriggered.setBit(0x1cU, 1U);
        vlSelfRef.__VactTriggered.setBit(0x1dU, 1U);
        vlSelfRef.__VactTriggered.setBit(0x1eU, 1U);
        vlSelfRef.__VactTriggered.setBit(0x1fU, 1U);
        vlSelfRef.__VactTriggered.setBit(0x20U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x21U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x22U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x23U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x29U, 1U);
        vlSelfRef.__VactTriggered.setBit(0x2aU, 1U);
        vlSelfRef.__VactTriggered.setBit(0x2bU, 1U);
        vlSelfRef.__VactTriggered.setBit(0x2cU, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vrv64g_cache_system_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__0(Vrv64g_cache_system_tb_rv64g_l1_dcache* vlSelf);
void Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__1(Vrv64g_cache_system_tb_rv64g_l1_dcache* vlSelf);
void Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__2(Vrv64g_cache_system_tb_rv64g_l1_dcache* vlSelf);
void Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__3(Vrv64g_cache_system_tb_rv64g_l1_dcache* vlSelf);
void Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__4(Vrv64g_cache_system_tb_rv64g_l1_dcache* vlSelf);
void Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__5(Vrv64g_cache_system_tb_rv64g_l1_dcache* vlSelf);
void Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__6(Vrv64g_cache_system_tb_rv64g_l1_dcache* vlSelf);
void Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__7(Vrv64g_cache_system_tb_rv64g_l1_dcache* vlSelf);
void Vrv64g_cache_system_tb_rv64g_l1_dcache___act_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__0(Vrv64g_cache_system_tb_rv64g_l1_dcache* vlSelf);
void Vrv64g_cache_system_tb_rv64g_l1_dcache___act_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1__0(Vrv64g_cache_system_tb_rv64g_l1_dcache* vlSelf);
void Vrv64g_cache_system_tb_rv64g_l1_dcache___act_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1__0(Vrv64g_cache_system_tb_rv64g_l1_dcache* vlSelf);
void Vrv64g_cache_system_tb_rv64g_l1_dcache___act_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1__0(Vrv64g_cache_system_tb_rv64g_l1_dcache* vlSelf);
void Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__8(Vrv64g_cache_system_tb_rv64g_l1_dcache* vlSelf);
void Vrv64g_cache_system_tb_rv64g_l1_dcache___act_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__1(Vrv64g_cache_system_tb_rv64g_l1_dcache* vlSelf);
void Vrv64g_cache_system_tb_rv64g_l1_dcache___act_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__2(Vrv64g_cache_system_tb_rv64g_l1_dcache* vlSelf);
void Vrv64g_cache_system_tb_rv64g_l1_dcache___act_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1__1(Vrv64g_cache_system_tb_rv64g_l1_dcache* vlSelf);
void Vrv64g_cache_system_tb_rv64g_l1_dcache___act_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1__1(Vrv64g_cache_system_tb_rv64g_l1_dcache* vlSelf);
void Vrv64g_cache_system_tb_rv64g_l1_dcache___act_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1__1(Vrv64g_cache_system_tb_rv64g_l1_dcache* vlSelf);
void Vrv64g_cache_system_tb_rv64g_l1_dcache___act_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__3(Vrv64g_cache_system_tb_rv64g_l1_dcache* vlSelf);
void Vrv64g_cache_system_tb_rv64g_l1_dcache___act_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__4(Vrv64g_cache_system_tb_rv64g_l1_dcache* vlSelf);
void Vrv64g_cache_system_tb_rv64g_l1_dcache___act_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1__4(Vrv64g_cache_system_tb_rv64g_l1_dcache* vlSelf);
void Vrv64g_cache_system_tb_rv64g_l1_dcache___act_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1__4(Vrv64g_cache_system_tb_rv64g_l1_dcache* vlSelf);
void Vrv64g_cache_system_tb_rv64g_l1_dcache___act_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1__4(Vrv64g_cache_system_tb_rv64g_l1_dcache* vlSelf);

void Vrv64g_cache_system_tb___024root___eval_act(Vrv64g_cache_system_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv64g_cache_system_tb___024root___eval_act\n"); );
    Vrv64g_cache_system_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__0((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__1((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__2((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__3((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[6U] = 1U;
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__4((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[7U] = 1U;
    }
    if ((0x40ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__5((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[8U] = 1U;
    }
    if ((0x80ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__6((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[9U] = 1U;
    }
    if ((0x100ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__7((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0xaU] = 1U;
    }
    if ((0x400ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__0((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0xbU] = 1U;
    }
    if ((0x800ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__1((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0xcU] = 1U;
    }
    if ((0x1000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__2((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0xdU] = 1U;
    }
    if ((0x2000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__3((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0xeU] = 1U;
    }
    if ((0x4000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__4((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0xfU] = 1U;
    }
    if ((0x8000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__5((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x10U] = 1U;
    }
    if ((0x10000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__6((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x11U] = 1U;
    }
    if ((0x20000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__7((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x12U] = 1U;
    }
    if ((0x80000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__0((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x13U] = 1U;
    }
    if ((0x100000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__1((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x14U] = 1U;
    }
    if ((0x200000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__2((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x15U] = 1U;
    }
    if ((0x400000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__3((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x16U] = 1U;
    }
    if ((0x800000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__4((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x17U] = 1U;
    }
    if ((0x1000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__5((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x18U] = 1U;
    }
    if ((0x2000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__6((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x19U] = 1U;
    }
    if ((0x4000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__7((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x1aU] = 1U;
    }
    if ((0x10000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__0((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x1bU] = 1U;
    }
    if ((0x20000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__1((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x1cU] = 1U;
    }
    if ((0x40000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__2((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x1dU] = 1U;
    }
    if ((0x80000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__3((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x1eU] = 1U;
    }
    if ((0x100000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__4((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x1fU] = 1U;
    }
    if ((0x200000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__5((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x20U] = 1U;
    }
    if ((0x400000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__6((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x21U] = 1U;
    }
    if ((0x800000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__7((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x22U] = 1U;
    }
    if ((0x1f0000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__0((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1));
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1__0((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1));
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1__0((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1));
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1__0((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1));
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__8((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x23U] = 1U;
    }
    if ((0x200ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__8((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x24U] = 1U;
    }
    if ((0x40000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__8((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x25U] = 1U;
    }
    if ((0x8000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__8((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x26U] = 1U;
    }
    if ((0x1ffULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__1((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x27U] = 1U;
    }
    if ((0x1feULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__2((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x28U] = 1U;
    }
    if ((0x3fe00ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1__1((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x29U] = 1U;
    }
    if ((0x3fc00ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__2((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x2aU] = 1U;
    }
    if ((0x7fc0000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1__1((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x2bU] = 1U;
    }
    if ((0x7f80000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__2((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x2cU] = 1U;
    }
    if ((0xff8000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1__1((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x2dU] = 1U;
    }
    if ((0xff0000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__2((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x2eU] = 1U;
    }
    if ((0x1f0000000001ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__3((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x2fU] = 1U;
    }
    if ((0x1f0000000200ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__3((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x30U] = 1U;
    }
    if ((0x1f0000040000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__3((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x31U] = 1U;
    }
    if ((0x1f0008000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__3((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x32U] = 1U;
    }
    if ((0x1f00000001ffULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__4((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x33U] = 1U;
    }
    if ((0x1f000003fe00ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1__4((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x34U] = 1U;
    }
    if ((0x1f0007fc0000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1__4((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x35U] = 1U;
    }
    if ((0x1f0ff8000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1__4((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x36U] = 1U;
    }
}

void Vrv64g_cache_system_tb___024root___nba_sequent__TOP__0(Vrv64g_cache_system_tb___024root* vlSelf);
void Vrv64g_cache_system_tb_rv64g_l1_dcache___nba_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__0(Vrv64g_cache_system_tb_rv64g_l1_dcache* vlSelf);
void Vrv64g_cache_system_tb_rv64g_l1_dcache___nba_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__1(Vrv64g_cache_system_tb_rv64g_l1_dcache* vlSelf);
void Vrv64g_cache_system_tb_rv64g_l1_dcache___nba_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1__0(Vrv64g_cache_system_tb_rv64g_l1_dcache* vlSelf);
void Vrv64g_cache_system_tb_rv64g_l1_dcache___nba_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1__0(Vrv64g_cache_system_tb_rv64g_l1_dcache* vlSelf);
void Vrv64g_cache_system_tb_rv64g_l1_dcache___nba_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1__0(Vrv64g_cache_system_tb_rv64g_l1_dcache* vlSelf);
void Vrv64g_cache_system_tb___024root___nba_sequent__TOP__1(Vrv64g_cache_system_tb___024root* vlSelf);
void Vrv64g_cache_system_tb_rv64g_l1_dcache___nba_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__2(Vrv64g_cache_system_tb_rv64g_l1_dcache* vlSelf);
void Vrv64g_cache_system_tb_rv64g_l1_dcache___nba_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1__2(Vrv64g_cache_system_tb_rv64g_l1_dcache* vlSelf);
void Vrv64g_cache_system_tb_rv64g_l1_dcache___nba_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1__2(Vrv64g_cache_system_tb_rv64g_l1_dcache* vlSelf);
void Vrv64g_cache_system_tb_rv64g_l1_dcache___nba_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1__2(Vrv64g_cache_system_tb_rv64g_l1_dcache* vlSelf);
void Vrv64g_cache_system_tb___024root___nba_sequent__TOP__2(Vrv64g_cache_system_tb___024root* vlSelf);
void Vrv64g_cache_system_tb___024root___nba_sequent__TOP__3(Vrv64g_cache_system_tb___024root* vlSelf);
void Vrv64g_cache_system_tb_rv64g_l1_dcache___nba_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__3(Vrv64g_cache_system_tb_rv64g_l1_dcache* vlSelf);
void Vrv64g_cache_system_tb_rv64g_l1_dcache___nba_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1__3(Vrv64g_cache_system_tb_rv64g_l1_dcache* vlSelf);
void Vrv64g_cache_system_tb_rv64g_l1_dcache___nba_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1__3(Vrv64g_cache_system_tb_rv64g_l1_dcache* vlSelf);
void Vrv64g_cache_system_tb_rv64g_l1_dcache___nba_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1__3(Vrv64g_cache_system_tb_rv64g_l1_dcache* vlSelf);
void Vrv64g_cache_system_tb_rv64g_l1_dcache___nba_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__8(Vrv64g_cache_system_tb_rv64g_l1_dcache* vlSelf);
void Vrv64g_cache_system_tb___024root___nba_comb__TOP__0(Vrv64g_cache_system_tb___024root* vlSelf);
void Vrv64g_cache_system_tb_rv64g_l1_dcache___nba_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__10(Vrv64g_cache_system_tb_rv64g_l1_dcache* vlSelf);
void Vrv64g_cache_system_tb_rv64g_l1_dcache___nba_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1__10(Vrv64g_cache_system_tb_rv64g_l1_dcache* vlSelf);
void Vrv64g_cache_system_tb_rv64g_l1_dcache___nba_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1__10(Vrv64g_cache_system_tb_rv64g_l1_dcache* vlSelf);
void Vrv64g_cache_system_tb_rv64g_l1_dcache___nba_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1__10(Vrv64g_cache_system_tb_rv64g_l1_dcache* vlSelf);
void Vrv64g_cache_system_tb_rv64g_l1_dcache___nba_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__11(Vrv64g_cache_system_tb_rv64g_l1_dcache* vlSelf);
void Vrv64g_cache_system_tb_rv64g_l1_dcache___nba_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1__11(Vrv64g_cache_system_tb_rv64g_l1_dcache* vlSelf);
void Vrv64g_cache_system_tb_rv64g_l1_dcache___nba_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1__11(Vrv64g_cache_system_tb_rv64g_l1_dcache* vlSelf);
void Vrv64g_cache_system_tb_rv64g_l1_dcache___nba_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1__11(Vrv64g_cache_system_tb_rv64g_l1_dcache* vlSelf);
void Vrv64g_cache_system_tb_rv64g_l1_dcache___nba_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__12(Vrv64g_cache_system_tb_rv64g_l1_dcache* vlSelf);
void Vrv64g_cache_system_tb_rv64g_l1_dcache___nba_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1__13(Vrv64g_cache_system_tb_rv64g_l1_dcache* vlSelf);
void Vrv64g_cache_system_tb_rv64g_l1_dcache___nba_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1__13(Vrv64g_cache_system_tb_rv64g_l1_dcache* vlSelf);
void Vrv64g_cache_system_tb_rv64g_l1_dcache___nba_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1__13(Vrv64g_cache_system_tb_rv64g_l1_dcache* vlSelf);
void Vrv64g_cache_system_tb_rv64g_l1_dcache___nba_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__15(Vrv64g_cache_system_tb_rv64g_l1_dcache* vlSelf);
void Vrv64g_cache_system_tb_rv64g_l1_dcache___nba_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__17(Vrv64g_cache_system_tb_rv64g_l1_dcache* vlSelf);
void Vrv64g_cache_system_tb_rv64g_l1_dcache___nba_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1__17(Vrv64g_cache_system_tb_rv64g_l1_dcache* vlSelf);
void Vrv64g_cache_system_tb_rv64g_l1_dcache___nba_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1__17(Vrv64g_cache_system_tb_rv64g_l1_dcache* vlSelf);
void Vrv64g_cache_system_tb_rv64g_l1_dcache___nba_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1__17(Vrv64g_cache_system_tb_rv64g_l1_dcache* vlSelf);

void Vrv64g_cache_system_tb___024root___eval_nba(Vrv64g_cache_system_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv64g_cache_system_tb___024root___eval_nba\n"); );
    Vrv64g_cache_system_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x3000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrv64g_cache_system_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x37U] = 1U;
    }
    if ((0xc000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___nba_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__0((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x38U] = 1U;
        Vrv64g_cache_system_tb_rv64g_l1_dcache___nba_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__1((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1));
        Vrv64g_cache_system_tb_rv64g_l1_dcache___nba_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1__0((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1));
        Vrv64g_cache_system_tb_rv64g_l1_dcache___nba_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__1((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1));
        Vrv64g_cache_system_tb_rv64g_l1_dcache___nba_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1__0((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1));
        Vrv64g_cache_system_tb_rv64g_l1_dcache___nba_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__1((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1));
        Vrv64g_cache_system_tb_rv64g_l1_dcache___nba_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1__0((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1));
        Vrv64g_cache_system_tb_rv64g_l1_dcache___nba_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__1((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1));
        Vrv64g_cache_system_tb___024root___nba_sequent__TOP__1(vlSelf);
        Vrv64g_cache_system_tb_rv64g_l1_dcache___nba_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__2((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1));
        Vrv64g_cache_system_tb_rv64g_l1_dcache___nba_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1__2((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1));
        Vrv64g_cache_system_tb_rv64g_l1_dcache___nba_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1__2((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1));
        Vrv64g_cache_system_tb_rv64g_l1_dcache___nba_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1__2((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1));
    }
    if ((0x4000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrv64g_cache_system_tb___024root___nba_sequent__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x39U] = 1U;
    }
    if ((0xc000000002ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__0((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x3aU] = 1U;
    }
    if ((0xc000000004ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__1((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x3bU] = 1U;
    }
    if ((0xc000000008ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__2((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x3cU] = 1U;
    }
    if ((0xc000000010ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__3((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x3dU] = 1U;
    }
    if ((0xc000000020ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__4((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x3eU] = 1U;
    }
    if ((0xc000000040ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__5((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x3fU] = 1U;
    }
    if ((0xc000000080ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__6((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x40U] = 1U;
    }
    if ((0xc000000100ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__7((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x41U] = 1U;
    }
    if ((0xc000000400ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__0((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x42U] = 1U;
    }
    if ((0xc000000800ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__1((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x43U] = 1U;
    }
    if ((0xc000001000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__2((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x44U] = 1U;
    }
    if ((0xc000002000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__3((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x45U] = 1U;
    }
    if ((0xc000004000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__4((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x46U] = 1U;
    }
    if ((0xc000008000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__5((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x47U] = 1U;
    }
    if ((0xc000010000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__6((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x48U] = 1U;
    }
    if ((0xc000020000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__7((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x49U] = 1U;
    }
    if ((0xc000080000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__0((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x4aU] = 1U;
    }
    if ((0xc000100000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__1((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x4bU] = 1U;
    }
    if ((0xc000200000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__2((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x4cU] = 1U;
    }
    if ((0xc000400000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__3((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x4dU] = 1U;
    }
    if ((0xc000800000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__4((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x4eU] = 1U;
    }
    if ((0xc001000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__5((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x4fU] = 1U;
    }
    if ((0xc002000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__6((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x50U] = 1U;
    }
    if ((0xc004000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__7((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x51U] = 1U;
    }
    if ((0xc010000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__0((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x52U] = 1U;
    }
    if ((0xc020000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__1((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x53U] = 1U;
    }
    if ((0xc040000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__2((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x54U] = 1U;
    }
    if ((0xc080000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__3((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x55U] = 1U;
    }
    if ((0xc100000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__4((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x56U] = 1U;
    }
    if ((0xc200000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__5((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x57U] = 1U;
    }
    if ((0xc400000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__6((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x58U] = 1U;
    }
    if ((0xc800000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__7((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x59U] = 1U;
    }
    if ((0xc000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrv64g_cache_system_tb___024root___nba_sequent__TOP__3(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x5aU] = 1U;
        Vrv64g_cache_system_tb_rv64g_l1_dcache___nba_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__3((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1));
        Vrv64g_cache_system_tb_rv64g_l1_dcache___nba_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1__3((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1));
        Vrv64g_cache_system_tb_rv64g_l1_dcache___nba_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1__3((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1));
        Vrv64g_cache_system_tb_rv64g_l1_dcache___nba_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1__3((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1));
    }
    if ((0xc0000001ffULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___nba_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__8((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x5bU] = 1U;
    }
    if ((0xc0000001feULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__2((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x5cU] = 1U;
    }
    if ((0xc00003fe00ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___nba_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__8((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x5dU] = 1U;
    }
    if ((0xc00003fc00ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__2((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x5eU] = 1U;
    }
    if ((0xc007fc0000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___nba_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__8((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x5fU] = 1U;
    }
    if ((0xc007f80000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__2((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x60U] = 1U;
    }
    if ((0xcff8000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___nba_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__8((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x61U] = 1U;
    }
    if ((0xcff0000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__2((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x62U] = 1U;
    }
    if ((0xc000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrv64g_cache_system_tb___024root___nba_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[0x63U] = 1U;
        Vrv64g_cache_system_tb_rv64g_l1_dcache___nba_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__10((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1));
        Vrv64g_cache_system_tb_rv64g_l1_dcache___nba_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1__10((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1));
        Vrv64g_cache_system_tb_rv64g_l1_dcache___nba_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1__10((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1));
        Vrv64g_cache_system_tb_rv64g_l1_dcache___nba_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1__10((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1));
    }
    if ((0x1fc0000001ffULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___nba_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__11((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x64U] = 1U;
    }
    if ((0x1fc00003fe00ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___nba_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1__11((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x65U] = 1U;
    }
    if ((0x1fc007fc0000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___nba_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1__11((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x66U] = 1U;
    }
    if ((0x1fcff8000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___nba_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1__11((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x67U] = 1U;
    }
    if ((0xc0000001ffULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___nba_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__12((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x68U] = 1U;
    }
    if ((0x1fc000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__0((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1));
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1__0((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1));
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1__0((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1));
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1__0((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1));
    }
    if ((0xc000000001ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__8((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x69U] = 1U;
    }
    if ((0xc00003fe00ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___nba_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1__13((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x6aU] = 1U;
    }
    if ((0xc000000200ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__8((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x6bU] = 1U;
    }
    if ((0xc007fc0000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___nba_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1__13((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x6cU] = 1U;
    }
    if ((0xc000040000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__8((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x6dU] = 1U;
    }
    if ((0xcff8000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___nba_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1__13((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x6eU] = 1U;
    }
    if ((0xc008000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__8((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x6fU] = 1U;
    }
    if ((0x1fc0000001ffULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___nba_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__15((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x70U] = 1U;
    }
    if ((0x1fc000000001ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__3((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x71U] = 1U;
    }
    if ((0x1fc00003fe00ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___nba_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__15((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x72U] = 1U;
    }
    if ((0x1fc000000200ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__3((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x73U] = 1U;
    }
    if ((0x1fc007fc0000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___nba_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__15((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x74U] = 1U;
    }
    if ((0x1fc000040000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__3((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x75U] = 1U;
    }
    if ((0x1fcff8000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___nba_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__15((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x76U] = 1U;
    }
    if ((0x1fc008000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___act_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__3((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x77U] = 1U;
    }
    if ((0x1fc0000001ffULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___nba_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__17((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x78U] = 1U;
    }
    if ((0x1fc00003fe00ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___nba_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1__17((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x79U] = 1U;
    }
    if ((0x1fc007fc0000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___nba_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1__17((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x7aU] = 1U;
    }
    if ((0x1fcff8000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrv64g_cache_system_tb_rv64g_l1_dcache___nba_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1__17((&vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1));
        vlSelfRef.__Vm_traceActivity[0x7bU] = 1U;
    }
}

VL_INLINE_OPT void Vrv64g_cache_system_tb___024root___nba_sequent__TOP__1(Vrv64g_cache_system_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv64g_cache_system_tb___024root___nba_sequent__TOP__1\n"); );
    Vrv64g_cache_system_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __Vdly__rv64g_cache_system_tb__DOT__burst_cnt;
    __Vdly__rv64g_cache_system_tb__DOT__burst_cnt = 0;
    CData/*0:0*/ __VdlyVal__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v0;
    __VdlyVal__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v0 = 0;
    CData/*7:0*/ __VdlyDim0__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v0;
    __VdlyDim0__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v0 = 0;
    SData/*14:0*/ __VdlyElem__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v0;
    __VdlyElem__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v0 = 0;
    CData/*0:0*/ __VdlyVal__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v1;
    __VdlyVal__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v1 = 0;
    CData/*7:0*/ __VdlyDim0__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v1;
    __VdlyDim0__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v1 = 0;
    SData/*14:0*/ __VdlyElem__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v1;
    __VdlyElem__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v1 = 0;
    CData/*0:0*/ __VdlyVal__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v2;
    __VdlyVal__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v2 = 0;
    CData/*7:0*/ __VdlyDim0__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v2;
    __VdlyDim0__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v2 = 0;
    SData/*14:0*/ __VdlyElem__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v2;
    __VdlyElem__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v2 = 0;
    CData/*0:0*/ __VdlyVal__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v3;
    __VdlyVal__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v3 = 0;
    CData/*7:0*/ __VdlyDim0__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v3;
    __VdlyDim0__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v3 = 0;
    SData/*14:0*/ __VdlyElem__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v3;
    __VdlyElem__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v3 = 0;
    CData/*0:0*/ __VdlyVal__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v4;
    __VdlyVal__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v4 = 0;
    CData/*7:0*/ __VdlyDim0__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v4;
    __VdlyDim0__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v4 = 0;
    SData/*14:0*/ __VdlyElem__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v4;
    __VdlyElem__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v4 = 0;
    CData/*0:0*/ __VdlyVal__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v5;
    __VdlyVal__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v5 = 0;
    CData/*7:0*/ __VdlyDim0__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v5;
    __VdlyDim0__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v5 = 0;
    SData/*14:0*/ __VdlyElem__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v5;
    __VdlyElem__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v5 = 0;
    CData/*0:0*/ __VdlyVal__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v6;
    __VdlyVal__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v6 = 0;
    CData/*7:0*/ __VdlyDim0__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v6;
    __VdlyDim0__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v6 = 0;
    SData/*14:0*/ __VdlyElem__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v6;
    __VdlyElem__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v6 = 0;
    CData/*0:0*/ __VdlyVal__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v7;
    __VdlyVal__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v7 = 0;
    CData/*7:0*/ __VdlyDim0__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v7;
    __VdlyDim0__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v7 = 0;
    SData/*14:0*/ __VdlyElem__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v7;
    __VdlyElem__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v7 = 0;
    CData/*0:0*/ __VdlyVal__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v8;
    __VdlyVal__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v8 = 0;
    CData/*7:0*/ __VdlyDim0__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v8;
    __VdlyDim0__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v8 = 0;
    SData/*14:0*/ __VdlyElem__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v8;
    __VdlyElem__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v8 = 0;
    CData/*0:0*/ __VdlyVal__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v9;
    __VdlyVal__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v9 = 0;
    CData/*7:0*/ __VdlyDim0__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v9;
    __VdlyDim0__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v9 = 0;
    SData/*14:0*/ __VdlyElem__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v9;
    __VdlyElem__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v9 = 0;
    CData/*0:0*/ __VdlyVal__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v10;
    __VdlyVal__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v10 = 0;
    CData/*7:0*/ __VdlyDim0__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v10;
    __VdlyDim0__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v10 = 0;
    SData/*14:0*/ __VdlyElem__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v10;
    __VdlyElem__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v10 = 0;
    CData/*0:0*/ __VdlyVal__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v11;
    __VdlyVal__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v11 = 0;
    CData/*7:0*/ __VdlyDim0__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v11;
    __VdlyDim0__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v11 = 0;
    SData/*14:0*/ __VdlyElem__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v11;
    __VdlyElem__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v11 = 0;
    CData/*0:0*/ __VdlyVal__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v12;
    __VdlyVal__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v12 = 0;
    CData/*7:0*/ __VdlyDim0__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v12;
    __VdlyDim0__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v12 = 0;
    SData/*14:0*/ __VdlyElem__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v12;
    __VdlyElem__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v12 = 0;
    CData/*0:0*/ __VdlyVal__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v13;
    __VdlyVal__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v13 = 0;
    CData/*7:0*/ __VdlyDim0__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v13;
    __VdlyDim0__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v13 = 0;
    SData/*14:0*/ __VdlyElem__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v13;
    __VdlyElem__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v13 = 0;
    CData/*0:0*/ __VdlyVal__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v14;
    __VdlyVal__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v14 = 0;
    CData/*7:0*/ __VdlyDim0__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v14;
    __VdlyDim0__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v14 = 0;
    SData/*14:0*/ __VdlyElem__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v14;
    __VdlyElem__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v14 = 0;
    CData/*7:0*/ __VdlyDim0__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v15;
    __VdlyDim0__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v15 = 0;
    // Body
    __Vdly__rv64g_cache_system_tb__DOT__burst_cnt = vlSelfRef.rv64g_cache_system_tb__DOT__burst_cnt;
    vlSelfRef.__Vdly__rv64g_cache_system_tb__DOT__mem_a_ready 
        = vlSelfRef.rv64g_cache_system_tb__DOT__mem_a_ready;
    vlSelfRef.__Vdly__rv64g_cache_system_tb__DOT__mem_d_valid 
        = vlSelfRef.rv64g_cache_system_tb__DOT__mem_d_valid;
    vlSelfRef.__Vdly__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__mshr__DOT__valid_q 
        = vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__mshr__DOT__valid_q;
    vlSelfRef.__Vdly__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__burst_cnt 
        = vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__burst_cnt;
    if (vlSelfRef.rv64g_cache_system_tb__DOT__rst_n) {
        if (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru_access) {
            __VdlyVal__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v0 
                = (1U & (~ ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru_used_way) 
                            >> 3U)));
            __VdlyDim0__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v0 
                = (0xffU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                    >> 6U)));
            __VdlyElem__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v0 = 0U;
            __VdlyElem__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v0 
                = ((0x7ffeU & (IData)(__VdlyElem__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v0)) 
                   | (IData)(__VdlyVal__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v0));
            vlSelfRef.__VdlyCommitQueuerv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q.enqueue(__VdlyElem__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v0, 1U, (IData)(__VdlyDim0__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v0));
            if ((8U & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru_used_way))) {
                __VdlyVal__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v1 
                    = (1U & (~ ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru_used_way) 
                                >> 2U)));
                __VdlyDim0__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v1 
                    = (0xffU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                        >> 6U)));
                __VdlyElem__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v1 = 0U;
                __VdlyElem__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v1 
                    = ((0x7ffbU & (IData)(__VdlyElem__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v1)) 
                       | ((IData)(__VdlyVal__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v1) 
                          << 2U));
                vlSelfRef.__VdlyCommitQueuerv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q.enqueue(__VdlyElem__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v1, 4U, (IData)(__VdlyDim0__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v1));
                if ((4U & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru_used_way))) {
                    __VdlyVal__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v2 
                        = (1U & (~ ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru_used_way) 
                                    >> 1U)));
                    __VdlyDim0__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v2 
                        = (0xffU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                            >> 6U)));
                    __VdlyElem__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v2 = 0U;
                    __VdlyElem__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v2 
                        = ((0x7fbfU & (IData)(__VdlyElem__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v2)) 
                           | ((IData)(__VdlyVal__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v2) 
                              << 6U));
                    vlSelfRef.__VdlyCommitQueuerv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q.enqueue(__VdlyElem__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v2, 0x40U, (IData)(__VdlyDim0__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v2));
                    if ((2U & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru_used_way))) {
                        __VdlyVal__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v3 
                            = (1U & (~ (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru_used_way)));
                        __VdlyDim0__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v3 
                            = (0xffU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                >> 6U)));
                        __VdlyElem__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v3 = 0U;
                        __VdlyElem__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v3 
                            = ((0x3fffU & (IData)(__VdlyElem__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v3)) 
                               | ((IData)(__VdlyVal__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v3) 
                                  << 0xeU));
                        vlSelfRef.__VdlyCommitQueuerv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q.enqueue(__VdlyElem__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v3, 0x4000U, (IData)(__VdlyDim0__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v3));
                    } else {
                        __VdlyVal__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v4 
                            = (1U & (~ (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru_used_way)));
                        __VdlyDim0__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v4 
                            = (0xffU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                >> 6U)));
                        __VdlyElem__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v4 = 0U;
                        __VdlyElem__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v4 
                            = ((0x5fffU & (IData)(__VdlyElem__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v4)) 
                               | ((IData)(__VdlyVal__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v4) 
                                  << 0xdU));
                        vlSelfRef.__VdlyCommitQueuerv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q.enqueue(__VdlyElem__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v4, 0x2000U, (IData)(__VdlyDim0__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v4));
                    }
                } else {
                    __VdlyVal__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v5 
                        = (1U & (~ ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru_used_way) 
                                    >> 1U)));
                    __VdlyDim0__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v5 
                        = (0xffU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                            >> 6U)));
                    __VdlyElem__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v5 = 0U;
                    __VdlyElem__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v5 
                        = ((0x7fdfU & (IData)(__VdlyElem__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v5)) 
                           | ((IData)(__VdlyVal__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v5) 
                              << 5U));
                    vlSelfRef.__VdlyCommitQueuerv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q.enqueue(__VdlyElem__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v5, 0x20U, (IData)(__VdlyDim0__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v5));
                    if ((2U & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru_used_way))) {
                        __VdlyVal__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v6 
                            = (1U & (~ (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru_used_way)));
                        __VdlyDim0__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v6 
                            = (0xffU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                >> 6U)));
                        __VdlyElem__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v6 = 0U;
                        __VdlyElem__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v6 
                            = ((0x6fffU & (IData)(__VdlyElem__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v6)) 
                               | ((IData)(__VdlyVal__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v6) 
                                  << 0xcU));
                        vlSelfRef.__VdlyCommitQueuerv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q.enqueue(__VdlyElem__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v6, 0x1000U, (IData)(__VdlyDim0__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v6));
                    } else {
                        __VdlyVal__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v7 
                            = (1U & (~ (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru_used_way)));
                        __VdlyDim0__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v7 
                            = (0xffU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                >> 6U)));
                        __VdlyElem__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v7 = 0U;
                        __VdlyElem__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v7 
                            = ((0x77ffU & (IData)(__VdlyElem__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v7)) 
                               | ((IData)(__VdlyVal__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v7) 
                                  << 0xbU));
                        vlSelfRef.__VdlyCommitQueuerv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q.enqueue(__VdlyElem__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v7, 0x800U, (IData)(__VdlyDim0__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v7));
                    }
                }
            } else {
                __VdlyVal__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v8 
                    = (1U & (~ ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru_used_way) 
                                >> 2U)));
                __VdlyDim0__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v8 
                    = (0xffU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                        >> 6U)));
                __VdlyElem__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v8 = 0U;
                __VdlyElem__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v8 
                    = ((0x7ffdU & (IData)(__VdlyElem__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v8)) 
                       | ((IData)(__VdlyVal__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v8) 
                          << 1U));
                vlSelfRef.__VdlyCommitQueuerv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q.enqueue(__VdlyElem__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v8, 2U, (IData)(__VdlyDim0__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v8));
                if ((4U & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru_used_way))) {
                    __VdlyVal__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v9 
                        = (1U & (~ ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru_used_way) 
                                    >> 1U)));
                    __VdlyDim0__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v9 
                        = (0xffU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                            >> 6U)));
                    __VdlyElem__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v9 = 0U;
                    __VdlyElem__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v9 
                        = ((0x7fefU & (IData)(__VdlyElem__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v9)) 
                           | ((IData)(__VdlyVal__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v9) 
                              << 4U));
                    vlSelfRef.__VdlyCommitQueuerv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q.enqueue(__VdlyElem__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v9, 0x10U, (IData)(__VdlyDim0__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v9));
                    if ((2U & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru_used_way))) {
                        __VdlyVal__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v10 
                            = (1U & (~ (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru_used_way)));
                        __VdlyDim0__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v10 
                            = (0xffU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                >> 6U)));
                        __VdlyElem__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v10 = 0U;
                        __VdlyElem__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v10 
                            = ((0x7bffU & (IData)(__VdlyElem__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v10)) 
                               | ((IData)(__VdlyVal__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v10) 
                                  << 0xaU));
                        vlSelfRef.__VdlyCommitQueuerv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q.enqueue(__VdlyElem__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v10, 0x400U, (IData)(__VdlyDim0__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v10));
                    } else {
                        __VdlyVal__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v11 
                            = (1U & (~ (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru_used_way)));
                        __VdlyDim0__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v11 
                            = (0xffU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                >> 6U)));
                        __VdlyElem__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v11 = 0U;
                        __VdlyElem__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v11 
                            = ((0x7dffU & (IData)(__VdlyElem__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v11)) 
                               | ((IData)(__VdlyVal__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v11) 
                                  << 9U));
                        vlSelfRef.__VdlyCommitQueuerv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q.enqueue(__VdlyElem__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v11, 0x200U, (IData)(__VdlyDim0__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v11));
                    }
                } else {
                    __VdlyVal__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v12 
                        = (1U & (~ ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru_used_way) 
                                    >> 1U)));
                    __VdlyDim0__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v12 
                        = (0xffU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                            >> 6U)));
                    __VdlyElem__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v12 = 0U;
                    __VdlyElem__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v12 
                        = ((0x7ff7U & (IData)(__VdlyElem__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v12)) 
                           | ((IData)(__VdlyVal__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v12) 
                              << 3U));
                    vlSelfRef.__VdlyCommitQueuerv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q.enqueue(__VdlyElem__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v12, 8U, (IData)(__VdlyDim0__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v12));
                    if ((2U & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru_used_way))) {
                        __VdlyVal__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v13 
                            = (1U & (~ (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru_used_way)));
                        __VdlyDim0__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v13 
                            = (0xffU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                >> 6U)));
                        __VdlyElem__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v13 = 0U;
                        __VdlyElem__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v13 
                            = ((0x7effU & (IData)(__VdlyElem__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v13)) 
                               | ((IData)(__VdlyVal__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v13) 
                                  << 8U));
                        vlSelfRef.__VdlyCommitQueuerv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q.enqueue(__VdlyElem__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v13, 0x100U, (IData)(__VdlyDim0__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v13));
                    } else {
                        __VdlyVal__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v14 
                            = (1U & (~ (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru_used_way)));
                        __VdlyDim0__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v14 
                            = (0xffU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                >> 6U)));
                        __VdlyElem__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v14 = 0U;
                        __VdlyElem__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v14 
                            = ((0x7f7fU & (IData)(__VdlyElem__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v14)) 
                               | ((IData)(__VdlyVal__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v14) 
                                  << 7U));
                        vlSelfRef.__VdlyCommitQueuerv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q.enqueue(__VdlyElem__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v14, 0x80U, (IData)(__VdlyDim0__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v14));
                    }
                }
            }
        }
    } else {
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__si = 0U;
        while (VL_GTS_III(32, 0x100U, vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__si)) {
            __VdlyDim0__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v15 
                = (0xffU & vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__si);
            vlSelfRef.__VdlyCommitQueuerv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q.enqueue(0U, 0x7fffU, (IData)(__VdlyDim0__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q__v15));
            vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__si 
                = ((IData)(1U) + vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__si);
        }
    }
    vlSelfRef.__VdfgRegularize_h8252e60d_0_0 = (((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1.tl_e_valid_o) 
                                                 << 1U) 
                                                | (IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1.tl_e_valid_o));
    vlSelfRef.__VdfgRegularize_h4b65663e_0_0 = (((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1.tl_a_valid_o) 
                                                 << 1U) 
                                                | (IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1.tl_a_valid_o));
    vlSelfRef.__VdfgRegularize_h3ae62448_0_0 = (((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1.tl_c_valid_o) 
                                                 << 1U) 
                                                | (IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1.tl_c_valid_o));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l1_e_sink 
        = ((((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1.tl_e_sink_o) 
             << 0xcU) | ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1.tl_e_sink_o) 
                         << 8U)) | (((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1.tl_e_sink_o) 
                                     << 4U) | (IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1.tl_e_sink_o)));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_i[0U] 
        = (((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1.tl_a_data_o) 
            << 1U) | (IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1.tl_a_corrupt_o));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_i[1U] 
        = (((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1.tl_a_data_o) 
            >> 0x1fU) | ((IData)((vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1.tl_a_data_o 
                                  >> 0x20U)) << 1U));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_i[2U] 
        = (((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1.tl_a_address_o) 
            << 9U) | (((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1.tl_a_mask_o) 
                       << 1U) | ((IData)((vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1.tl_a_data_o 
                                          >> 0x20U)) 
                                 >> 0x1fU)));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_i[3U] 
        = (((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1.tl_a_address_o) 
            >> 0x17U) | ((IData)((vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1.tl_a_address_o 
                                  >> 0x20U)) << 9U));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_i[4U] 
        = ((0xfe000000U & vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_i[4U]) 
           | ((0xfffffe00U & ((((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1.tl_a_opcode_o) 
                                << 0x14U) | ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1.tl_a_param_o) 
                                             << 0x11U)) 
                              | (((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1.tl_a_size_o) 
                                  << 0xdU) | ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1.tl_a_source_o) 
                                              << 9U)))) 
              | ((IData)((vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1.tl_a_address_o 
                          >> 0x20U)) >> 0x17U)));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_i[4U] 
        = ((0x1ffffffU & vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_i[4U]) 
           | (((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1.tl_a_data_o) 
               << 0x1aU) | ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1.tl_a_corrupt_o) 
                            << 0x19U)));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_i[5U] 
        = (((0x1ffffffU & ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1.tl_a_data_o) 
                           >> 6U)) | ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1.tl_a_corrupt_o) 
                                      >> 7U)) | ((0x2000000U 
                                                  & ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1.tl_a_data_o) 
                                                     >> 6U)) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1.tl_a_data_o 
                                                             >> 0x20U)) 
                                                    << 0x1aU)));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_i[6U] 
        = ((0x1ffffffU & ((IData)((vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1.tl_a_data_o 
                                   >> 0x20U)) >> 6U)) 
           | (((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1.tl_a_mask_o) 
               << 0x1aU) | (0x2000000U & ((IData)((vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1.tl_a_data_o 
                                                   >> 0x20U)) 
                                          >> 6U))));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_i[7U] 
        = (((0x1fffffcU & ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1.tl_a_address_o) 
                           << 2U)) | (0x1ffffffU & 
                                      ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1.tl_a_mask_o) 
                                       >> 6U))) | (0xfe000000U 
                                                   & ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1.tl_a_address_o) 
                                                      << 2U)));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_i[8U] 
        = ((((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1.tl_a_address_o) 
             >> 0x1eU) | (0x1fffffcU & ((IData)((vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1.tl_a_address_o 
                                                 >> 0x20U)) 
                                        << 2U))) | 
           (0xfe000000U & ((IData)((vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1.tl_a_address_o 
                                    >> 0x20U)) << 2U)));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_i[9U] 
        = ((0xfffffffcU & vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_i[9U]) 
           | ((IData)((vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1.tl_a_address_o 
                       >> 0x20U)) >> 0x1eU));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_i[9U] 
        = ((0xfffc0003U & vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_i[9U]) 
           | (0xfffffffcU & (0x10000U | ((((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1.tl_a_opcode_o) 
                                           << 0xdU) 
                                          | ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1.tl_a_param_o) 
                                             << 0xaU)) 
                                         | (((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1.tl_a_size_o) 
                                             << 6U) 
                                            | ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1.tl_a_source_o) 
                                               << 2U))))));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_i[9U] 
        = ((0x3ffffU & vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_i[9U]) 
           | (((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1.tl_a_data_o) 
               << 0x13U) | ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1.tl_a_corrupt_o) 
                            << 0x12U)));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_i[0xaU] 
        = (((0x3ffffU & ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1.tl_a_data_o) 
                         >> 0xdU)) | ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1.tl_a_corrupt_o) 
                                      >> 0xeU)) | (
                                                   (0x40000U 
                                                    & ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1.tl_a_data_o) 
                                                       >> 0xdU)) 
                                                   | ((IData)(
                                                              (vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1.tl_a_data_o 
                                                               >> 0x20U)) 
                                                      << 0x13U)));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_i[0xbU] 
        = ((0x3ffffU & ((IData)((vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1.tl_a_data_o 
                                 >> 0x20U)) >> 0xdU)) 
           | (((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1.tl_a_address_o) 
               << 0x1bU) | (((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1.tl_a_mask_o) 
                             << 0x13U) | (0x40000U 
                                          & ((IData)(
                                                     (vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1.tl_a_data_o 
                                                      >> 0x20U)) 
                                             >> 0xdU)))));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_i[0xcU] 
        = ((0x3ffffU & (((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1.tl_a_address_o) 
                         >> 5U) | ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1.tl_a_mask_o) 
                                   >> 0xdU))) | ((0x7fc0000U 
                                                  & ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1.tl_a_address_o) 
                                                     >> 5U)) 
                                                 | ((IData)(
                                                            (vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1.tl_a_address_o 
                                                             >> 0x20U)) 
                                                    << 0x1bU)));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_i[0xdU] 
        = ((0xf8000000U & vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_i[0xdU]) 
           | ((0x3ffffU & ((IData)((vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1.tl_a_address_o 
                                    >> 0x20U)) >> 5U)) 
              | (0x7fc0000U & ((IData)((vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1.tl_a_address_o 
                                        >> 0x20U)) 
                               >> 5U))));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_i[0xdU] 
        = ((0x7ffffffU & vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_i[0xdU]) 
           | (0xf8000000U & (((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1.tl_a_size_o) 
                              << 0x1fU) | ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1.tl_a_source_o) 
                                           << 0x1bU))));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_i[0xeU] 
        = ((0xfffff800U & vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_i[0xeU]) 
           | (0x7ffffffU & (0x400U | (((0x7ffffc0U 
                                        & ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1.tl_a_opcode_o) 
                                           << 6U)) 
                                       | (0x7fffff8U 
                                          & ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1.tl_a_param_o) 
                                             << 3U))) 
                                      | ((0x7ffffffU 
                                          & ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1.tl_a_size_o) 
                                             >> 1U)) 
                                         | ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1.tl_a_source_o) 
                                            >> 5U))))));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_i[0xeU] 
        = ((0x7ffU & vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_i[0xeU]) 
           | (((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1.tl_a_data_o) 
               << 0xcU) | ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1.tl_a_corrupt_o) 
                           << 0xbU)));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_i[0xfU] 
        = (((0x7ffU & ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1.tl_a_data_o) 
                       >> 0x14U)) | ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1.tl_a_corrupt_o) 
                                     >> 0x15U)) | (
                                                   (0x800U 
                                                    & ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1.tl_a_data_o) 
                                                       >> 0x14U)) 
                                                   | ((IData)(
                                                              (vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1.tl_a_data_o 
                                                               >> 0x20U)) 
                                                      << 0xcU)));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_i[0x10U] 
        = ((0x7ffU & ((IData)((vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1.tl_a_data_o 
                               >> 0x20U)) >> 0x14U)) 
           | (((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1.tl_a_address_o) 
               << 0x14U) | (((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1.tl_a_mask_o) 
                             << 0xcU) | (0x800U & ((IData)(
                                                           (vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1.tl_a_data_o 
                                                            >> 0x20U)) 
                                                   >> 0x14U)))));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_i[0x11U] 
        = ((0x7ffU & (((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1.tl_a_address_o) 
                       >> 0xcU) | ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1.tl_a_mask_o) 
                                   >> 0x14U))) | ((0xff800U 
                                                   & ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1.tl_a_address_o) 
                                                      >> 0xcU)) 
                                                  | ((IData)(
                                                             (vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1.tl_a_address_o 
                                                              >> 0x20U)) 
                                                     << 0x14U)));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_i[0x12U] 
        = ((0xfff00000U & vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_i[0x12U]) 
           | ((0x7ffU & ((IData)((vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1.tl_a_address_o 
                                  >> 0x20U)) >> 0xcU)) 
              | (0xff800U & ((IData)((vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1.tl_a_address_o 
                                      >> 0x20U)) >> 0xcU))));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_i[0x12U] 
        = ((0xfffffU & vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_i[0x12U]) 
           | (0xfff00000U & (((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1.tl_a_opcode_o) 
                              << 0x1fU) | (((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1.tl_a_param_o) 
                                            << 0x1cU) 
                                           | (((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1.tl_a_size_o) 
                                               << 0x18U) 
                                              | ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1.tl_a_source_o) 
                                                 << 0x14U))))));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_i[0x13U] 
        = ((0xcU & vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_i[0x13U]) 
           | (0xfU & ((0xfffffU & ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1.tl_a_opcode_o) 
                                   >> 1U)) | ((0xfffffU 
                                               & ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1.tl_a_param_o) 
                                                  >> 4U)) 
                                              | ((0xfffffU 
                                                  & ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1.tl_a_size_o) 
                                                     >> 8U)) 
                                                 | ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1.tl_a_source_o) 
                                                    >> 0xcU))))));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_i[0x13U] 
        = (0xcU | vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_i[0x13U]);
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_i[0U] 
        = (((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1.tl_c_data_o) 
            << 1U) | (IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1.tl_c_corrupt_o));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_i[1U] 
        = (((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1.tl_c_data_o) 
            >> 0x1fU) | ((IData)((vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1.tl_c_data_o 
                                  >> 0x20U)) << 1U));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_i[2U] 
        = (((IData)((vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1.tl_c_data_o 
                     >> 0x20U)) >> 0x1fU) | ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1.tl_c_address_o) 
                                             << 1U));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_i[3U] 
        = (((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1.tl_c_address_o) 
            >> 0x1fU) | ((IData)((vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1.tl_c_address_o 
                                  >> 0x20U)) << 1U));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_i[4U] 
        = ((0xfffe0000U & vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_i[4U]) 
           | ((0xfffffffeU & ((((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1.tl_c_opcode_o) 
                                << 0xcU) | ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1.tl_c_param_o) 
                                            << 9U)) 
                              | (((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1.tl_c_size_o) 
                                  << 5U) | ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1.tl_c_source_o) 
                                            << 1U)))) 
              | ((IData)((vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1.tl_c_address_o 
                          >> 0x20U)) >> 0x1fU)));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_i[4U] 
        = ((0x1ffffU & vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_i[4U]) 
           | (((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1.tl_c_data_o) 
               << 0x12U) | ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1.tl_c_corrupt_o) 
                            << 0x11U)));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_i[5U] 
        = (((0x1ffffU & ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1.tl_c_data_o) 
                         >> 0xeU)) | ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1.tl_c_corrupt_o) 
                                      >> 0xfU)) | (
                                                   (0x20000U 
                                                    & ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1.tl_c_data_o) 
                                                       >> 0xeU)) 
                                                   | ((IData)(
                                                              (vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1.tl_c_data_o 
                                                               >> 0x20U)) 
                                                      << 0x12U)));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_i[6U] 
        = ((0x1ffffU & ((IData)((vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1.tl_c_data_o 
                                 >> 0x20U)) >> 0xeU)) 
           | ((0x20000U & ((IData)((vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1.tl_c_data_o 
                                    >> 0x20U)) >> 0xeU)) 
              | ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1.tl_c_address_o) 
                 << 0x12U)));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_i[7U] 
        = ((0x1ffffU & ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1.tl_c_address_o) 
                        >> 0xeU)) | ((0x20000U & ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1.tl_c_address_o) 
                                                  >> 0xeU)) 
                                     | ((IData)((vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1.tl_c_address_o 
                                                 >> 0x20U)) 
                                        << 0x12U)));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_i[8U] 
        = ((0x1ffffU & ((IData)((vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1.tl_c_address_o 
                                 >> 0x20U)) >> 0xeU)) 
           | ((0xfffc0000U & ((((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1.tl_c_opcode_o) 
                                << 0x1dU) | ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1.tl_c_param_o) 
                                             << 0x1aU)) 
                              | (((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1.tl_c_size_o) 
                                  << 0x16U) | ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1.tl_c_source_o) 
                                               << 0x12U)))) 
              | (0x20000U & ((IData)((vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1.tl_c_address_o 
                                      >> 0x20U)) >> 0xeU))));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_i[9U] 
        = (1U | (((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1.tl_c_data_o) 
                  << 3U) | ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1.tl_c_corrupt_o) 
                            << 2U)));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_i[0xaU] 
        = (((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1.tl_c_data_o) 
            >> 0x1dU) | ((IData)((vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1.tl_c_data_o 
                                  >> 0x20U)) << 3U));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_i[0xbU] 
        = (((IData)((vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1.tl_c_data_o 
                     >> 0x20U)) >> 0x1dU) | ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1.tl_c_address_o) 
                                             << 3U));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_i[0xcU] 
        = (((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1.tl_c_address_o) 
            >> 0x1dU) | ((IData)((vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1.tl_c_address_o 
                                  >> 0x20U)) << 3U));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_i[0xdU] 
        = ((0xfffffff8U & vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_i[0xdU]) 
           | ((IData)((vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1.tl_c_address_o 
                       >> 0x20U)) >> 0x1dU));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_i[0xdU] 
        = ((0xfff80007U & vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_i[0xdU]) 
           | (0xfffffff8U & (0x40000U | ((((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1.tl_c_opcode_o) 
                                           << 0xeU) 
                                          | ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1.tl_c_param_o) 
                                             << 0xbU)) 
                                         | (((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1.tl_c_size_o) 
                                             << 7U) 
                                            | ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1.tl_c_source_o) 
                                               << 3U))))));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_i[0xdU] 
        = ((0x7ffffU & vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_i[0xdU]) 
           | (((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1.tl_c_data_o) 
               << 0x14U) | ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1.tl_c_corrupt_o) 
                            << 0x13U)));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_i[0xeU] 
        = (((0x7ffffU & ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1.tl_c_data_o) 
                         >> 0xcU)) | ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1.tl_c_corrupt_o) 
                                      >> 0xdU)) | (
                                                   (0x80000U 
                                                    & ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1.tl_c_data_o) 
                                                       >> 0xcU)) 
                                                   | ((IData)(
                                                              (vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1.tl_c_data_o 
                                                               >> 0x20U)) 
                                                      << 0x14U)));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_i[0xfU] 
        = ((0x7ffffU & ((IData)((vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1.tl_c_data_o 
                                 >> 0x20U)) >> 0xcU)) 
           | ((0x80000U & ((IData)((vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1.tl_c_data_o 
                                    >> 0x20U)) >> 0xcU)) 
              | ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1.tl_c_address_o) 
                 << 0x14U)));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_i[0x10U] 
        = ((0x7ffffU & ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1.tl_c_address_o) 
                        >> 0xcU)) | ((0x80000U & ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1.tl_c_address_o) 
                                                  >> 0xcU)) 
                                     | ((IData)((vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1.tl_c_address_o 
                                                 >> 0x20U)) 
                                        << 0x14U)));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_i[0x11U] 
        = ((0xf0000000U & vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_i[0x11U]) 
           | ((0x7ffffU & ((IData)((vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1.tl_c_address_o 
                                    >> 0x20U)) >> 0xcU)) 
              | ((0xfff00000U & (((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1.tl_c_size_o) 
                                  << 0x18U) | ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1.tl_c_source_o) 
                                               << 0x14U))) 
                 | (0x80000U & ((IData)((vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1.tl_c_address_o 
                                         >> 0x20U)) 
                                >> 0xcU)))));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_i[0x11U] 
        = ((0xfffffffU & vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_i[0x11U]) 
           | (0xf0000000U & (((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1.tl_c_opcode_o) 
                              << 0x1fU) | ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1.tl_c_param_o) 
                                           << 0x1cU))));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_i[0x12U] 
        = (0xfU & (0xcU | ((0xfffffffU & ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1.tl_c_opcode_o) 
                                          >> 1U)) | 
                           ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1.tl_c_param_o) 
                            >> 4U))));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__rel_buf_valid_q 
        = ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__rst_n) 
           && (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__rel_buf_valid_n));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__rel_drop_q 
        = ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__rst_n) 
           && (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__rel_drop_n));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__rel_has_data_q 
        = ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__rst_n) 
           && (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__rel_has_data_n));
    if (vlSelfRef.rv64g_cache_system_tb__DOT__rst_n) {
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__rel_buf_data_q 
            = vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__rel_buf_data_n;
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__rel_data_cnt_q 
            = vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__rel_data_cnt_n;
        if (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_e_valid) {
            vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__arb_e__DOT__mask 
                = (0xfU & (~ ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__arb_e__DOT__grant) 
                              | ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__arb_e__DOT__grant) 
                                 - (IData)(1U)))));
        }
        if (((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_a_valid) 
             & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_a_ready))) {
            vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__arb_a__DOT__mask 
                = (0xfU & (~ ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__arb_a__DOT__grant) 
                              | ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__arb_a__DOT__grant) 
                                 - (IData)(1U)))));
        }
        vlSelfRef.__Vdly__rv64g_cache_system_tb__DOT__mem_a_ready 
            = (1U & (~ (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__burst_active)));
        if (((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__mem_d_valid) 
             & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__mem_d_ready))) {
            if (vlSelfRef.rv64g_cache_system_tb__DOT__burst_active) {
                if ((7U == (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__burst_cnt))) {
                    vlSelfRef.rv64g_cache_system_tb__DOT__burst_active = 0U;
                    vlSelfRef.__Vdly__rv64g_cache_system_tb__DOT__mem_d_valid = 0U;
                } else {
                    __Vdly__rv64g_cache_system_tb__DOT__burst_cnt 
                        = (7U & ((IData)(1U) + (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__burst_cnt)));
                    vlSelfRef.rv64g_cache_system_tb__DOT__mem_d_data 
                        = vlSelfRef.rv64g_cache_system_tb__DOT__memory
                        [(0x3ffU & ((IData)(1U) + ((IData)(
                                                           (vlSelfRef.rv64g_cache_system_tb__DOT__burst_addr 
                                                            >> 3U)) 
                                                   + (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__burst_cnt))))];
                }
            } else {
                vlSelfRef.__Vdly__rv64g_cache_system_tb__DOT__mem_d_valid = 0U;
            }
        }
        if (((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__mem_a_valid) 
             & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__mem_a_ready))) {
            if ((4U == (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__mem_a_opcode))) {
                vlSelfRef.rv64g_cache_system_tb__DOT__burst_active = 1U;
                __Vdly__rv64g_cache_system_tb__DOT__burst_cnt = 0U;
                vlSelfRef.rv64g_cache_system_tb__DOT__burst_addr 
                    = vlSelfRef.rv64g_cache_system_tb__DOT__mem_a_address;
                vlSelfRef.rv64g_cache_system_tb__DOT__burst_opcode = 1U;
                vlSelfRef.rv64g_cache_system_tb__DOT__burst_source = 0U;
                vlSelfRef.rv64g_cache_system_tb__DOT__burst_size = 6U;
                vlSelfRef.__Vdly__rv64g_cache_system_tb__DOT__mem_d_valid = 1U;
                vlSelfRef.rv64g_cache_system_tb__DOT__mem_d_opcode = 1U;
                vlSelfRef.rv64g_cache_system_tb__DOT__mem_d_param = 0U;
                vlSelfRef.rv64g_cache_system_tb__DOT__mem_d_size = 6U;
                vlSelfRef.rv64g_cache_system_tb__DOT__mem_d_source = 0U;
                vlSelfRef.rv64g_cache_system_tb__DOT__mem_d_data 
                    = vlSelfRef.rv64g_cache_system_tb__DOT__memory
                    [(0x3ffU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__mem_a_address 
                                        >> 3U)))];
            } else if ((0U == (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__mem_a_opcode))) {
                vlSelfRef.__Vdly__rv64g_cache_system_tb__DOT__mem_d_valid = 1U;
                vlSelfRef.rv64g_cache_system_tb__DOT__mem_d_opcode = 0U;
                vlSelfRef.rv64g_cache_system_tb__DOT__mem_d_source = 0U;
            }
        }
        if (((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_c_valid) 
             & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_c_ready))) {
            vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__arb_c__DOT__mask 
                = (0xfU & (~ ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__arb_c__DOT__grant) 
                              | ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__arb_c__DOT__grant) 
                                 - (IData)(1U)))));
        }
        if ((2U == (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__state_q))) {
            vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__latched_hit_way 
                = vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_way;
        }
        if (((2U == (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__state_q)) 
             & (~ (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit)))) {
            vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__victim_way_q 
                = vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru_victim_way;
            vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__victim_sharers_q 
                = (0xfU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_sharers 
                                   >> (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru_victim_way), 2U)))));
            vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__victim_owner_valid_q 
                = (1U & ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_owner_valid) 
                         >> (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru_victim_way)));
            vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__victim_owner_id_q 
                = (3U & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_owner_id 
                         >> (0x1fU & VL_SHIFTL_III(5,32,32, (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru_victim_way), 1U))));
            vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__victim_valid_q 
                = (1U & ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_valid) 
                         >> (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru_victim_way)));
            vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__victim_dirty_q 
                = (1U & ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_dirty) 
                         >> (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru_victim_way)));
            vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__victim_tag_q 
                = ((0x31fU >= (0x3ffU & ((IData)(0x32U) 
                                         * (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru_victim_way))))
                    ? (0x3ffffffffffffULL & (((QData)((IData)(
                                                              vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way_flat[
                                                              (((IData)(0x31U) 
                                                                + 
                                                                (0x3ffU 
                                                                 & ((IData)(0x32U) 
                                                                    * (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru_victim_way)))) 
                                                               >> 5U)])) 
                                              << ((0U 
                                                   == 
                                                   (0x1fU 
                                                    & ((IData)(0x32U) 
                                                       * (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru_victim_way))))
                                                   ? 0x20U
                                                   : 
                                                  ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x32U) 
                                                       * (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru_victim_way)))))) 
                                             | (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(0x32U) 
                                                      * (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru_victim_way))))
                                                  ? 0ULL
                                                  : 
                                                 ((QData)((IData)(
                                                                  vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way_flat[
                                                                  (((IData)(0x1fU) 
                                                                    + 
                                                                    (0x3ffU 
                                                                     & ((IData)(0x32U) 
                                                                        * (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru_victim_way)))) 
                                                                   >> 5U)])) 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x32U) 
                                                       * (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru_victim_way)))))) 
                                                | ((QData)((IData)(
                                                                   vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way_flat[
                                                                   (0x1fU 
                                                                    & (((IData)(0x32U) 
                                                                        * (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru_victim_way)) 
                                                                       >> 5U))])) 
                                                   >> 
                                                   (0x1fU 
                                                    & ((IData)(0x32U) 
                                                       * (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru_victim_way)))))))
                    : 0ULL);
        } else if ((((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_c_valid) 
                     & (0x5000U == (0x7000U & vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_o[4U]))) 
                    & (~ (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__latched_hit)))) {
            vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__victim_dirty_q = 1U;
        }
    } else {
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__rel_buf_data_q = 0ULL;
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__rel_data_cnt_q = 0U;
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__arb_e__DOT__mask = 0xfU;
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__arb_a__DOT__mask = 0xfU;
        vlSelfRef.rv64g_cache_system_tb__DOT__burst_active = 0U;
        __Vdly__rv64g_cache_system_tb__DOT__burst_cnt = 0U;
        vlSelfRef.__Vdly__rv64g_cache_system_tb__DOT__mem_d_valid = 0U;
        vlSelfRef.__Vdly__rv64g_cache_system_tb__DOT__mem_a_ready = 0U;
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__arb_c__DOT__mask = 0xfU;
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__latched_hit_way = 0U;
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__victim_way_q = 0U;
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__victim_sharers_q = 0U;
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__victim_owner_valid_q = 0U;
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__victim_owner_id_q = 0U;
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__victim_valid_q = 0U;
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__victim_dirty_q = 0U;
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__victim_tag_q = 0ULL;
    }
    vlSelfRef.__VdlyCommitQueuerv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q.commit(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q);
    if (vlSelfRef.rv64g_cache_system_tb__DOT__rst_n) {
        if ((2U == (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__state_q))) {
            vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__latched_hit 
                = vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit;
        }
    } else {
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__latched_hit = 0U;
    }
    vlSelfRef.__VdfgRegularize_h8252e60d_0_1 = (((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1.tl_e_valid_o) 
                                                 << 2U) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h8252e60d_0_0));
    vlSelfRef.__VdfgRegularize_h4b65663e_0_1 = (((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1.tl_a_valid_o) 
                                                 << 2U) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h4b65663e_0_0));
    vlSelfRef.__VdfgRegularize_h3ae62448_0_1 = (((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1.tl_c_valid_o) 
                                                 << 2U) 
                                                | (IData)(vlSelfRef.__VdfgRegularize_h3ae62448_0_0));
    vlSelfRef.rv64g_cache_system_tb__DOT__burst_cnt 
        = __Vdly__rv64g_cache_system_tb__DOT__burst_cnt;
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l1_e_valid 
        = (((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1.tl_e_valid_o) 
            << 3U) | (IData)(vlSelfRef.__VdfgRegularize_h8252e60d_0_1));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l1_a_valid 
        = (((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1.tl_a_valid_o) 
            << 3U) | (IData)(vlSelfRef.__VdfgRegularize_h4b65663e_0_1));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l1_c_valid 
        = (((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1.tl_c_valid_o) 
            << 3U) | (IData)(vlSelfRef.__VdfgRegularize_h3ae62448_0_1));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__arb_e__DOT__masked_req 
        = ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__arb_e__DOT__mask) 
           & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l1_e_valid));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__arb_a__DOT__masked_req 
        = ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__arb_a__DOT__mask) 
           & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l1_a_valid));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__arb_c__DOT__masked_req 
        = ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__arb_c__DOT__mask) 
           & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l1_c_valid));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__arb_e__DOT__grant 
        = ((0U != (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__arb_e__DOT__masked_req))
            ? ((((IData)((((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__arb_e__DOT__masked_req) 
                           >> 3U) & (~ (0U != (7U & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__arb_e__DOT__masked_req)))))) 
                 << 3U) | (4U & (((~ (0U != (3U & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__arb_e__DOT__masked_req)))) 
                                  << 2U) & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__arb_e__DOT__masked_req)))) 
               | (((IData)((2U == (3U & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__arb_e__DOT__masked_req)))) 
                   << 1U) | (1U & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__arb_e__DOT__masked_req))))
            : (((((~ (0U != (IData)(vlSelfRef.__VdfgRegularize_h8252e60d_0_1))) 
                  & (IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1.tl_e_valid_o)) 
                 << 3U) | (((~ (0U != (IData)(vlSelfRef.__VdfgRegularize_h8252e60d_0_0))) 
                            & (IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1.tl_e_valid_o)) 
                           << 2U)) | ((((~ (IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1.tl_e_valid_o)) 
                                        & (IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1.tl_e_valid_o)) 
                                       << 1U) | (IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1.tl_e_valid_o))));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__arb_a__DOT__grant 
        = ((0U != (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__arb_a__DOT__masked_req))
            ? ((((IData)((((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__arb_a__DOT__masked_req) 
                           >> 3U) & (~ (0U != (7U & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__arb_a__DOT__masked_req)))))) 
                 << 3U) | (4U & (((~ (0U != (3U & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__arb_a__DOT__masked_req)))) 
                                  << 2U) & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__arb_a__DOT__masked_req)))) 
               | (((IData)((2U == (3U & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__arb_a__DOT__masked_req)))) 
                   << 1U) | (1U & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__arb_a__DOT__masked_req))))
            : (((((~ (0U != (IData)(vlSelfRef.__VdfgRegularize_h4b65663e_0_1))) 
                  & (IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1.tl_a_valid_o)) 
                 << 3U) | (((~ (0U != (IData)(vlSelfRef.__VdfgRegularize_h4b65663e_0_0))) 
                            & (IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1.tl_a_valid_o)) 
                           << 2U)) | ((((~ (IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1.tl_a_valid_o)) 
                                        & (IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1.tl_a_valid_o)) 
                                       << 1U) | (IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1.tl_a_valid_o))));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__arb_c__DOT__grant 
        = ((0U != (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__arb_c__DOT__masked_req))
            ? ((((IData)((((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__arb_c__DOT__masked_req) 
                           >> 3U) & (~ (0U != (7U & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__arb_c__DOT__masked_req)))))) 
                 << 3U) | (4U & (((~ (0U != (3U & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__arb_c__DOT__masked_req)))) 
                                  << 2U) & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__arb_c__DOT__masked_req)))) 
               | (((IData)((2U == (3U & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__arb_c__DOT__masked_req)))) 
                   << 1U) | (1U & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__arb_c__DOT__masked_req))))
            : (((((~ (0U != (IData)(vlSelfRef.__VdfgRegularize_h3ae62448_0_1))) 
                  & (IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1.tl_c_valid_o)) 
                 << 3U) | (((~ (0U != (IData)(vlSelfRef.__VdfgRegularize_h3ae62448_0_0))) 
                            & (IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1.tl_c_valid_o)) 
                           << 2U)) | ((((~ (IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1.tl_c_valid_o)) 
                                        & (IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1.tl_c_valid_o)) 
                                       << 1U) | (IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1.tl_c_valid_o))));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_e_sink = 0U;
    if ((1U & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__arb_e__DOT__grant))) {
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_e_sink 
            = (0xfU & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l1_e_sink));
    }
    if ((2U & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__arb_e__DOT__grant))) {
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_e_sink 
            = (0xfU & ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l1_e_sink) 
                       >> 4U));
    }
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l1_e_ready = 0U;
    if ((1U & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__arb_e__DOT__grant))) {
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l1_e_ready 
            = (1U | (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l1_e_ready));
    }
    if ((2U & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__arb_e__DOT__grant))) {
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l1_e_ready 
            = (2U | (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l1_e_ready));
    }
    if ((4U & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__arb_e__DOT__grant))) {
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_e_sink 
            = (0xfU & ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l1_e_sink) 
                       >> 8U));
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l1_e_ready 
            = (4U | (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l1_e_ready));
    }
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_e_valid = 0U;
    if ((1U & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__arb_e__DOT__grant))) {
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_e_valid 
            = (1U & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l1_e_valid));
    }
    if ((2U & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__arb_e__DOT__grant))) {
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_e_valid 
            = (1U & ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l1_e_valid) 
                     >> 1U));
    }
    if ((4U & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__arb_e__DOT__grant))) {
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_e_valid 
            = (1U & ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l1_e_valid) 
                     >> 2U));
    }
    if ((8U & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__arb_e__DOT__grant))) {
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_e_sink 
            = (0xfU & ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l1_e_sink) 
                       >> 0xcU));
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l1_e_ready 
            = (8U | (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l1_e_ready));
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_e_valid 
            = (1U & ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l1_e_valid) 
                     >> 3U));
    }
}

VL_INLINE_OPT void Vrv64g_cache_system_tb___024root___nba_sequent__TOP__3(Vrv64g_cache_system_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv64g_cache_system_tb___024root___nba_sequent__TOP__3\n"); );
    Vrv64g_cache_system_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_wr_way 
        = ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__latched_hit)
            ? (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__latched_hit_way)
            : (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__victim_way_q));
    if (vlSelfRef.rv64g_cache_system_tb__DOT__rst_n) {
        if (((((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_c_valid) 
               & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_c_ready)) 
              & (0x5000U == (0x7000U & vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_o[4U]))) 
             & ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__mshr__DOT__pending_probes_q) 
                >> (3U & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_o[4U] 
                          >> 0xfU))))) {
            vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__probe_data_cnt 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__probe_data_cnt)));
        } else if ((0U == (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__state_q))) {
            vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__probe_data_cnt = 0U;
        }
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__e_seen_q 
            = vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__e_seen_n;
        if ((8U == (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__state_q))) {
            if (((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__mem_d_valid) 
                 & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__mem_d_ready))) {
                vlSelfRef.__Vdly__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__burst_cnt 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__burst_cnt)));
            }
            if (((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__mem_a_valid) 
                 & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__mem_a_ready))) {
                vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__mem_req_sent_q = 1U;
            }
        } else if ((9U == (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__state_q))) {
            if (((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__mem_a_valid) 
                 & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__mem_a_ready))) {
                vlSelfRef.__Vdly__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__burst_cnt 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__burst_cnt)));
            }
        } else if ((4U == (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__state_q))) {
            if (((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_d_valid) 
                 & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_d_ready))) {
                vlSelfRef.__Vdly__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__burst_cnt 
                    = (7U & ((IData)(1U) + (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__burst_cnt)));
            }
        } else {
            vlSelfRef.__Vdly__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__burst_cnt = 0U;
            vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__mem_req_sent_q = 0U;
        }
        if ((1U == (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__state_q))) {
            vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__probes_sent_q = 0U;
        } else if ((((2U == (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__state_q)) 
                     & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_b_valid)) 
                    & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_b_ready))) {
            vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__probes_sent_q 
                = ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__probes_sent_q) 
                   | (0xfU & ((IData)(1U) << (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__next_probe_target))));
        }
        if ((0U == (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__state_q))) {
            if (((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_c_valid) 
                 & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__c_is_release))) {
                vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                    = (((QData)((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_o[4U])) 
                        << 0x3fU) | (((QData)((IData)(
                                                      vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_o[3U])) 
                                      << 0x1fU) | ((QData)((IData)(
                                                                   vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_o[2U])) 
                                                   >> 1U)));
                vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_data_q 
                    = (((QData)((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_o[2U])) 
                        << 0x3fU) | (((QData)((IData)(
                                                      vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_o[1U])) 
                                      << 0x1fU) | ((QData)((IData)(
                                                                   vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_o[0U])) 
                                                   >> 1U)));
                vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_opcode_q 
                    = (7U & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_o[4U] 
                             >> 0xcU));
                vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_param_q 
                    = (7U & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_o[4U] 
                             >> 9U));
                vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_source_q 
                    = ((0x30U & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_o[4U] 
                                 >> 0xbU)) | (0xfU 
                                              & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_o[4U] 
                                                 >> 1U)));
                vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__processing_release = 1U;
                vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__e_seen_q = 0U;
            } else if (((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_a_valid) 
                        & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_a_ready))) {
                vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                    = (((QData)((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_o[4U])) 
                        << 0x37U) | (((QData)((IData)(
                                                      vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_o[3U])) 
                                      << 0x17U) | ((QData)((IData)(
                                                                   vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_o[2U])) 
                                                   >> 9U)));
                vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_opcode_q 
                    = (7U & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_o[4U] 
                             >> 0x14U));
                vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_param_q 
                    = (7U & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_o[4U] 
                             >> 0x11U));
                vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_source_q 
                    = vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_a_source;
                vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__processing_release = 0U;
                vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__e_seen_q = 0U;
            }
        }
        if (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__mshr_dealloc) {
            vlSelfRef.__Vdly__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__mshr__DOT__valid_q = 0U;
            vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__mshr__DOT__pending_probes_q = 0U;
        } else if (((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__mshr_alloc) 
                    & (~ (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__mshr__DOT__valid_q)))) {
            vlSelfRef.__Vdly__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__mshr__DOT__valid_q = 1U;
            vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__mshr__DOT__addr_q 
                = (((QData)((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_o[4U])) 
                    << 0x37U) | (((QData)((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_o[3U])) 
                                  << 0x17U) | ((QData)((IData)(
                                                               vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_o[2U])) 
                                               >> 9U)));
            vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__mshr__DOT__source_q 
                = vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_a_source;
            vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__mshr__DOT__type_q 
                = (7U & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_o[4U] 
                         >> 0x14U));
            vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__mshr__DOT__pending_probes_q = 0U;
        } else if ((0U != (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__mshr_set_probes))) {
            vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__mshr__DOT__pending_probes_q 
                = vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__mshr_set_probes;
        } else if (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__mshr_probe_ack) {
            vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__mshr__DOT__pending_probes_q 
                = ((~ ((IData)(1U) << (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__mshr_probe_ack_id))) 
                   & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__mshr__DOT__pending_probes_q));
        }
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__state_q 
            = vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__next_state;
    } else {
        vlSelfRef.__Vdly__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__burst_cnt = 0U;
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__probe_data_cnt = 0U;
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q = 0ULL;
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_opcode_q = 0U;
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_param_q = 0U;
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_source_q = 0U;
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__probes_sent_q = 0U;
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__mem_req_sent_q = 0U;
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__e_seen_q = 0U;
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__processing_release = 0U;
        vlSelfRef.__Vdly__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__mshr__DOT__valid_q = 0U;
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__mshr__DOT__addr_q = 0ULL;
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__mshr__DOT__source_q = 0U;
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__mshr__DOT__type_q = 0U;
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__mshr__DOT__pending_probes_q = 0U;
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__state_q = 0U;
    }
    vlSelfRef.rv64g_cache_system_tb__DOT__mem_d_valid 
        = vlSelfRef.__Vdly__rv64g_cache_system_tb__DOT__mem_d_valid;
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__burst_cnt 
        = vlSelfRef.__Vdly__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__burst_cnt;
    vlSelfRef.rv64g_cache_system_tb__DOT__mem_a_ready 
        = vlSelfRef.__Vdly__rv64g_cache_system_tb__DOT__mem_a_ready;
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_a_valid = 0U;
    if ((1U & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__arb_a__DOT__grant))) {
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_a_valid 
            = (1U & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l1_a_valid));
    }
    if ((2U & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__arb_a__DOT__grant))) {
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_a_valid 
            = (1U & ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l1_a_valid) 
                     >> 1U));
    }
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_c_valid = 0U;
    if ((1U & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__arb_c__DOT__grant))) {
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_c_valid 
            = (1U & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l1_c_valid));
    }
    if ((2U & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__arb_c__DOT__grant))) {
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_c_valid 
            = (1U & ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l1_c_valid) 
                     >> 1U));
    }
    if ((4U & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__arb_c__DOT__grant))) {
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_c_valid 
            = (1U & ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l1_c_valid) 
                     >> 2U));
    }
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_o[0U] = 0U;
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_o[1U] = 0U;
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_o[2U] = 0U;
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_o[3U] = 0U;
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_o[4U] = 0U;
    if ((1U & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__arb_c__DOT__grant))) {
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_o[0U] 
            = vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_i[0U];
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_o[1U] 
            = vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_i[1U];
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_o[2U] 
            = vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_i[2U];
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_o[3U] 
            = vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_i[3U];
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_o[4U] 
            = (0x1ffffU & vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_i[4U]);
    }
    if ((2U & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__arb_c__DOT__grant))) {
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_o[0U] 
            = ((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_i[5U] 
                << 0xfU) | (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_i[4U] 
                            >> 0x11U));
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_o[1U] 
            = ((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_i[6U] 
                << 0xfU) | (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_i[5U] 
                            >> 0x11U));
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_o[2U] 
            = ((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_i[7U] 
                << 0xfU) | (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_i[6U] 
                            >> 0x11U));
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_o[3U] 
            = ((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_i[8U] 
                << 0xfU) | (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_i[7U] 
                            >> 0x11U));
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_o[4U] 
            = (0x1ffffU & ((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_i[9U] 
                            << 0xfU) | (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_i[8U] 
                                        >> 0x11U)));
    }
    if ((4U & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__arb_c__DOT__grant))) {
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_o[0U] 
            = ((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_i[0xaU] 
                << 0x1eU) | (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_i[9U] 
                             >> 2U));
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_o[1U] 
            = ((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_i[0xbU] 
                << 0x1eU) | (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_i[0xaU] 
                             >> 2U));
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_o[2U] 
            = ((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_i[0xcU] 
                << 0x1eU) | (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_i[0xbU] 
                             >> 2U));
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_o[3U] 
            = ((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_i[0xdU] 
                << 0x1eU) | (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_i[0xcU] 
                             >> 2U));
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_o[4U] 
            = (0x1ffffU & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_i[0xdU] 
                           >> 2U));
    }
    if ((8U & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__arb_c__DOT__grant))) {
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_c_valid 
            = (1U & ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l1_c_valid) 
                     >> 3U));
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_o[0U] 
            = ((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_i[0xeU] 
                << 0xdU) | (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_i[0xdU] 
                            >> 0x13U));
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_o[1U] 
            = ((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_i[0xfU] 
                << 0xdU) | (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_i[0xeU] 
                            >> 0x13U));
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_o[2U] 
            = ((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_i[0x10U] 
                << 0xdU) | (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_i[0xfU] 
                            >> 0x13U));
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_o[3U] 
            = ((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_i[0x11U] 
                << 0xdU) | (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_i[0x10U] 
                            >> 0x13U));
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_o[4U] 
            = (0x1ffffU & ((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_i[0x12U] 
                            << 0xdU) | (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_i[0x11U] 
                                        >> 0x13U)));
    }
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__e_seen_n 
        = ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__e_seen_q) 
           | (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_e_valid));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__c_is_release 
        = ((6U == (7U & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_o[4U] 
                         >> 0xcU))) | (7U == (7U & 
                                              (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_o[4U] 
                                               >> 0xcU))));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_o[0U] = 0U;
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_o[1U] = 0U;
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_o[2U] = 0U;
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_o[3U] = 0U;
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_o[4U] = 0U;
    if ((1U & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__arb_a__DOT__grant))) {
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_o[0U] 
            = vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_i[0U];
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_o[1U] 
            = vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_i[1U];
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_o[2U] 
            = vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_i[2U];
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_o[3U] 
            = vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_i[3U];
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_o[4U] 
            = (0x1ffffffU & vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_i[4U]);
    }
    if ((2U & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__arb_a__DOT__grant))) {
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_o[0U] 
            = ((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_i[5U] 
                << 7U) | (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_i[4U] 
                          >> 0x19U));
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_o[1U] 
            = ((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_i[6U] 
                << 7U) | (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_i[5U] 
                          >> 0x19U));
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_o[2U] 
            = ((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_i[7U] 
                << 7U) | (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_i[6U] 
                          >> 0x19U));
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_o[3U] 
            = ((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_i[8U] 
                << 7U) | (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_i[7U] 
                          >> 0x19U));
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_o[4U] 
            = (0x1ffffffU & ((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_i[9U] 
                              << 7U) | (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_i[8U] 
                                        >> 0x19U)));
    }
    if ((4U & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__arb_a__DOT__grant))) {
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_a_valid 
            = (1U & ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l1_a_valid) 
                     >> 2U));
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_o[0U] 
            = ((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_i[0xaU] 
                << 0xeU) | (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_i[9U] 
                            >> 0x12U));
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_o[1U] 
            = ((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_i[0xbU] 
                << 0xeU) | (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_i[0xaU] 
                            >> 0x12U));
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_o[2U] 
            = ((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_i[0xcU] 
                << 0xeU) | (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_i[0xbU] 
                            >> 0x12U));
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_o[3U] 
            = ((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_i[0xdU] 
                << 0xeU) | (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_i[0xcU] 
                            >> 0x12U));
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_o[4U] 
            = (0x1ffffffU & ((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_i[0xeU] 
                              << 0xeU) | (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_i[0xdU] 
                                          >> 0x12U)));
    }
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__mshr__DOT__valid_q 
        = vlSelfRef.__Vdly__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__mshr__DOT__valid_q;
    if ((8U & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__arb_a__DOT__grant))) {
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_a_valid 
            = (1U & ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l1_a_valid) 
                     >> 3U));
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_o[0U] 
            = ((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_i[0xfU] 
                << 0x15U) | (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_i[0xeU] 
                             >> 0xbU));
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_o[1U] 
            = ((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_i[0x10U] 
                << 0x15U) | (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_i[0xfU] 
                             >> 0xbU));
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_o[2U] 
            = ((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_i[0x11U] 
                << 0x15U) | (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_i[0x10U] 
                             >> 0xbU));
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_o[3U] 
            = ((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_i[0x12U] 
                << 0x15U) | (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_i[0x11U] 
                             >> 0xbU));
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_o[4U] 
            = (0x1ffffffU & ((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_i[0x13U] 
                              << 0x15U) | (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_i[0x12U] 
                                           >> 0xbU)));
    }
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_a_source 
        = ((0x30U & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_o[4U] 
                     >> 0x13U)) | (0xfU & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__a_packed_o[4U] 
                                           >> 9U)));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_we = 0U;
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_wr_valid = 0U;
    vlSelfRef.rv64g_cache_system_tb__DOT__mem_d_ready = 0U;
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__mshr_dealloc = 0U;
    vlSelfRef.rv64g_cache_system_tb__DOT__mem_a_valid = 0U;
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru_access = 0U;
    vlSelfRef.rv64g_cache_system_tb__DOT__mem_a_opcode = 0U;
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_d_param = 0U;
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_we = 0U;
    vlSelfRef.rv64g_cache_system_tb__DOT__mem_a_address = 0ULL;
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru_used_way = 0U;
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_d_opcode = 0U;
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_d_valid = 0U;
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_d_source 
        = vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_source_q;
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__rel_buf_data_n 
        = vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__rel_buf_data_q;
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__mshr_alloc = 0U;
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__rel_has_data_n 
        = vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__rel_has_data_q;
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__rel_buf_valid_n 
        = vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__rel_buf_valid_q;
    if ((8U & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__state_q))) {
        if ((1U & (~ ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__state_q) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__state_q))) {
                if ((1U & (~ (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__state_q)))) {
                    vlSelfRef.rv64g_cache_system_tb__DOT__mem_d_ready = 1U;
                }
                if ((1U & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__state_q))) {
                    if (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__rel_buf_valid_q) {
                        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__rel_buf_valid_n = 0U;
                    }
                }
            } else if ((1U & (~ (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__state_q)))) {
                vlSelfRef.rv64g_cache_system_tb__DOT__mem_d_ready = 1U;
            }
            if ((1U & (~ ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__state_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__state_q))) {
                    vlSelfRef.rv64g_cache_system_tb__DOT__mem_a_valid = 1U;
                    vlSelfRef.rv64g_cache_system_tb__DOT__mem_a_opcode = 0U;
                    vlSelfRef.rv64g_cache_system_tb__DOT__mem_a_address 
                        = ((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__victim_tag_q 
                            << 0xeU) | (QData)((IData)(
                                                       (0x3fc0U 
                                                        & ((IData)(
                                                                   (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                                    >> 6U)) 
                                                           << 6U)))));
                } else if ((1U & (~ (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__mem_req_sent_q)))) {
                    vlSelfRef.rv64g_cache_system_tb__DOT__mem_a_valid = 1U;
                    vlSelfRef.rv64g_cache_system_tb__DOT__mem_a_opcode = 4U;
                    vlSelfRef.rv64g_cache_system_tb__DOT__mem_a_address 
                        = (0xffffffffffffffc0ULL & vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q);
                }
            }
        }
    } else if ((1U & (~ ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__state_q) 
                         >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__state_q) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__state_q)))) {
                if (((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_c_valid) 
                     & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__c_is_release))) {
                    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__rel_buf_valid_n 
                        = (7U == (7U & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_o[4U] 
                                        >> 0xcU)));
                }
            }
        }
    }
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_a_ready = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__state_q) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__state_q))) {
            if ((1U & (~ ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__state_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__state_q))) {
                    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_we = 1U;
                    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_wr_valid = 1U;
                    if ((1U & (~ (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__processing_release)))) {
                        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru_access = 1U;
                        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru_used_way 
                            = ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__latched_hit)
                                ? (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__latched_hit_way)
                                : (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__victim_way_q));
                    }
                    if ((1U & ((~ (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__latched_hit)) 
                               & (~ (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__processing_release))))) {
                        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_we = 1U;
                    }
                }
                if ((1U & (~ (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__state_q)))) {
                    if (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__processing_release) {
                        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_d_param = 0U;
                        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_d_opcode = 6U;
                    } else if ((6U == (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_opcode_q))) {
                        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_d_param = 1U;
                        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_d_opcode = 5U;
                    } else {
                        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_d_param = 2U;
                        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_d_opcode = 4U;
                    }
                    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_d_valid = 1U;
                    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_d_source 
                        = vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_source_q;
                }
            }
            if ((2U & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__state_q))) {
                if ((1U & (~ (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__state_q)))) {
                    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__mshr_dealloc = 1U;
                }
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__state_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__state_q) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__state_q)))) {
                    if (((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_c_valid) 
                         & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__c_is_release))) {
                        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__rel_buf_data_n 
                            = (((QData)((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_o[2U])) 
                                << 0x3fU) | (((QData)((IData)(
                                                              vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_o[1U])) 
                                              << 0x1fU) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_o[0U])) 
                                                >> 1U)));
                        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__rel_has_data_n 
                            = (7U == (7U & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_o[4U] 
                                            >> 0xcU)));
                    }
                    if ((1U & (~ ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_c_valid) 
                                  & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__c_is_release))))) {
                        if (((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_a_valid) 
                             & (~ (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__mshr__DOT__valid_q)))) {
                            vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__mshr_alloc = 1U;
                        }
                    }
                    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_a_ready 
                        = ((1U & (~ ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_c_valid) 
                                     & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__c_is_release)))) 
                           && (1U & (~ (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__mshr__DOT__valid_q))));
                }
            }
        }
    }
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_d_ready 
        = (1U & (((((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1.tl_d_ready_o) 
                    << 3U) | ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1.tl_d_ready_o) 
                              << 2U)) | (((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1.tl_d_ready_o) 
                                          << 1U) | (IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1.tl_d_ready_o))) 
                 >> (3U & ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_d_source) 
                           >> 4U))));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l1_a_ready = 0U;
    if ((1U & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__arb_a__DOT__grant))) {
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l1_a_ready 
            = ((0xeU & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l1_a_ready)) 
               | (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_a_ready));
    }
    if ((2U & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__arb_a__DOT__grant))) {
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l1_a_ready 
            = ((0xdU & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l1_a_ready)) 
               | ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_a_ready) 
                  << 1U));
    }
    if ((4U & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__arb_a__DOT__grant))) {
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l1_a_ready 
            = ((0xbU & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l1_a_ready)) 
               | ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_a_ready) 
                  << 2U));
    }
    if ((8U & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__arb_a__DOT__grant))) {
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l1_a_ready 
            = ((7U & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l1_a_ready)) 
               | ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_a_ready) 
                  << 3U));
    }
}

extern const VlUnpacked<CData/*1:0*/, 256> Vrv64g_cache_system_tb__ConstPool__TABLE_hd78c128c_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vrv64g_cache_system_tb__ConstPool__TABLE_h19660b56_0;
extern const VlUnpacked<IData/*31:0*/, 256> Vrv64g_cache_system_tb__ConstPool__TABLE_hfb0b870f_0;

VL_INLINE_OPT void Vrv64g_cache_system_tb___024root___nba_comb__TOP__0(Vrv64g_cache_system_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv64g_cache_system_tb___024root___nba_comb__TOP__0\n"); );
    Vrv64g_cache_system_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_dirty 
        = (((((0x8000U & vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram
               [(0xffU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                  >> 6U)))][4U]) | 
              (0x4000U & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram
                          [(0xffU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                             >> 6U)))][4U] 
                          << 8U))) | ((0x2000U & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram
                                                  [
                                                  (0xffU 
                                                   & (IData)(
                                                             (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                              >> 6U)))][3U] 
                                                  >> 0x10U)) 
                                      | (0x1000U & 
                                         (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram
                                          [(0xffU & (IData)(
                                                            (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                             >> 6U)))][3U] 
                                          >> 8U)))) 
            | (((0x800U & vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram
                 [(0xffU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                    >> 6U)))][3U]) 
                | (0x400U & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram
                             [(0xffU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                >> 6U)))][3U] 
                             << 8U))) | ((0x200U & 
                                          (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram
                                           [(0xffU 
                                             & (IData)(
                                                       (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                        >> 6U)))][2U] 
                                           >> 0x10U)) 
                                         | (0x100U 
                                            & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram
                                               [(0xffU 
                                                 & (IData)(
                                                           (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                            >> 6U)))][2U] 
                                               >> 8U))))) 
           | ((((0x80U & vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram
                 [(0xffU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                    >> 6U)))][2U]) 
                | (0x40U & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram
                            [(0xffU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                               >> 6U)))][1U] 
                            >> 0x18U))) | ((0x20U & 
                                            (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram
                                             [(0xffU 
                                               & (IData)(
                                                         (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                          >> 6U)))][1U] 
                                             >> 0x10U)) 
                                           | (0x10U 
                                              & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram
                                                 [(0xffU 
                                                   & (IData)(
                                                             (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                              >> 6U)))][1U] 
                                                 >> 8U)))) 
              | (((8U & vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram
                   [(0xffU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                      >> 6U)))][1U]) 
                  | (4U & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram
                           [(0xffU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                              >> 6U)))][0U] 
                           >> 0x18U))) | ((2U & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram
                                                 [(0xffU 
                                                   & (IData)(
                                                             (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                              >> 6U)))][0U] 
                                                 >> 0x10U)) 
                                          | (1U & (
                                                   vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram
                                                   [
                                                   (0xffU 
                                                    & (IData)(
                                                              (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                               >> 6U)))][0U] 
                                                   >> 8U))))));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way_flat[0U] 
        = (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__tag_q
                  [0U][(0xffU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                         >> 6U)))]);
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way_flat[1U] 
        = (((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__tag_q
                    [1U][(0xffU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                           >> 6U)))]) 
            << 0x12U) | (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__tag_q
                                 [0U][(0xffU & (IData)(
                                                       (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                        >> 6U)))] 
                                 >> 0x20U)));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way_flat[2U] 
        = (((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__tag_q
                    [1U][(0xffU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                           >> 6U)))]) 
            >> 0xeU) | ((IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__tag_q
                                 [1U][(0xffU & (IData)(
                                                       (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                        >> 6U)))] 
                                 >> 0x20U)) << 0x12U));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way_flat[3U] 
        = ((0xfffffff0U & vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way_flat[3U]) 
           | ((IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__tag_q
                       [1U][(0xffU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                              >> 6U)))] 
                       >> 0x20U)) >> 0xeU));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way_flat[3U] 
        = ((0xfU & vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way_flat[3U]) 
           | ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__tag_q
                      [2U][(0xffU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                             >> 6U)))]) 
              << 4U));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way_flat[4U] 
        = (((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__tag_q
                    [2U][(0xffU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                           >> 6U)))]) 
            >> 0x1cU) | (((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__tag_q
                                  [3U][(0xffU & (IData)(
                                                        (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                         >> 6U)))]) 
                          << 0x16U) | ((IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__tag_q
                                                [2U]
                                                [(0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                             >> 6U)))] 
                                                >> 0x20U)) 
                                       << 4U)));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way_flat[5U] 
        = (((0xfU & ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__tag_q
                             [3U][(0xffU & (IData)(
                                                   (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                    >> 6U)))]) 
                     >> 0xaU)) | ((IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__tag_q
                                           [2U][(0xffU 
                                                 & (IData)(
                                                           (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                            >> 6U)))] 
                                           >> 0x20U)) 
                                  >> 0x1cU)) | ((0x3ffff0U 
                                                 & ((IData)(
                                                            vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__tag_q
                                                            [3U]
                                                            [
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                                        >> 6U)))]) 
                                                    >> 0xaU)) 
                                                | ((IData)(
                                                           (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__tag_q
                                                            [3U]
                                                            [
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                                        >> 6U)))] 
                                                            >> 0x20U)) 
                                                   << 0x16U)));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way_flat[6U] 
        = ((0xffffff00U & vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way_flat[6U]) 
           | ((0xfU & ((IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__tag_q
                                [3U][(0xffU & (IData)(
                                                      (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                       >> 6U)))] 
                                >> 0x20U)) >> 0xaU)) 
              | (0x3ffff0U & ((IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__tag_q
                                       [3U][(0xffU 
                                             & (IData)(
                                                       (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                        >> 6U)))] 
                                       >> 0x20U)) >> 0xaU))));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way_flat[6U] 
        = ((0xffU & vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way_flat[6U]) 
           | ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__tag_q
                      [4U][(0xffU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                             >> 6U)))]) 
              << 8U));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way_flat[7U] 
        = (((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__tag_q
                    [4U][(0xffU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                           >> 6U)))]) 
            >> 0x18U) | (((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__tag_q
                                  [5U][(0xffU & (IData)(
                                                        (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                         >> 6U)))]) 
                          << 0x1aU) | ((IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__tag_q
                                                [4U]
                                                [(0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                             >> 6U)))] 
                                                >> 0x20U)) 
                                       << 8U)));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way_flat[8U] 
        = (((0xffU & ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__tag_q
                              [5U][(0xffU & (IData)(
                                                    (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                     >> 6U)))]) 
                      >> 6U)) | ((IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__tag_q
                                          [4U][(0xffU 
                                                & (IData)(
                                                          (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                           >> 6U)))] 
                                          >> 0x20U)) 
                                 >> 0x18U)) | ((0x3ffff00U 
                                                & ((IData)(
                                                           vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__tag_q
                                                           [5U]
                                                           [
                                                           (0xffU 
                                                            & (IData)(
                                                                      (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                                       >> 6U)))]) 
                                                   >> 6U)) 
                                               | ((IData)(
                                                          (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__tag_q
                                                           [5U]
                                                           [
                                                           (0xffU 
                                                            & (IData)(
                                                                      (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                                       >> 6U)))] 
                                                           >> 0x20U)) 
                                                  << 0x1aU)));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way_flat[9U] 
        = ((0xfffff000U & vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way_flat[9U]) 
           | ((0xffU & ((IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__tag_q
                                 [5U][(0xffU & (IData)(
                                                       (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                        >> 6U)))] 
                                 >> 0x20U)) >> 6U)) 
              | (0x3ffff00U & ((IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__tag_q
                                        [5U][(0xffU 
                                              & (IData)(
                                                        (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                         >> 6U)))] 
                                        >> 0x20U)) 
                               >> 6U))));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way_flat[9U] 
        = ((0xfffU & vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way_flat[9U]) 
           | ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__tag_q
                      [6U][(0xffU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                             >> 6U)))]) 
              << 0xcU));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way_flat[0xaU] 
        = (((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__tag_q
                    [6U][(0xffU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                           >> 6U)))]) 
            >> 0x14U) | (((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__tag_q
                                  [7U][(0xffU & (IData)(
                                                        (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                         >> 6U)))]) 
                          << 0x1eU) | ((IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__tag_q
                                                [6U]
                                                [(0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                             >> 6U)))] 
                                                >> 0x20U)) 
                                       << 0xcU)));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way_flat[0xbU] 
        = (((0xfffU & ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__tag_q
                               [7U][(0xffU & (IData)(
                                                     (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                      >> 6U)))]) 
                       >> 2U)) | ((IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__tag_q
                                           [6U][(0xffU 
                                                 & (IData)(
                                                           (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                            >> 6U)))] 
                                           >> 0x20U)) 
                                  >> 0x14U)) | ((0x3ffff000U 
                                                 & ((IData)(
                                                            vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__tag_q
                                                            [7U]
                                                            [
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                                        >> 6U)))]) 
                                                    >> 2U)) 
                                                | ((IData)(
                                                           (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__tag_q
                                                            [7U]
                                                            [
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                                        >> 6U)))] 
                                                            >> 0x20U)) 
                                                   << 0x1eU)));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way_flat[0xcU] 
        = ((0xffff0000U & vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way_flat[0xcU]) 
           | ((0xfffU & ((IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__tag_q
                                  [7U][(0xffU & (IData)(
                                                        (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                         >> 6U)))] 
                                  >> 0x20U)) >> 2U)) 
              | (0x3ffff000U & ((IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__tag_q
                                         [7U][(0xffU 
                                               & (IData)(
                                                         (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                          >> 6U)))] 
                                         >> 0x20U)) 
                                >> 2U))));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way_flat[0xcU] 
        = ((0xffffU & vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way_flat[0xcU]) 
           | ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__tag_q
                      [8U][(0xffU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                             >> 6U)))]) 
              << 0x10U));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way_flat[0xdU] 
        = (((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__tag_q
                    [8U][(0xffU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                           >> 6U)))]) 
            >> 0x10U) | ((IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__tag_q
                                  [8U][(0xffU & (IData)(
                                                        (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                         >> 6U)))] 
                                  >> 0x20U)) << 0x10U));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way_flat[0xeU] 
        = (((0xfffcU & ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__tag_q
                                [9U][(0xffU & (IData)(
                                                      (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                       >> 6U)))]) 
                        << 2U)) | ((IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__tag_q
                                            [8U][(0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                             >> 6U)))] 
                                            >> 0x20U)) 
                                   >> 0x10U)) | (0xffff0000U 
                                                 & ((IData)(
                                                            vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__tag_q
                                                            [9U]
                                                            [
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                                        >> 6U)))]) 
                                                    << 2U)));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way_flat[0xfU] 
        = ((0xfff00000U & vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way_flat[0xfU]) 
           | ((((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__tag_q
                        [9U][(0xffU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                               >> 6U)))]) 
                >> 0x1eU) | (0xfffcU & ((IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__tag_q
                                                 [9U]
                                                 [(0xffU 
                                                   & (IData)(
                                                             (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                              >> 6U)))] 
                                                 >> 0x20U)) 
                                        << 2U))) | 
              (0xffff0000U & ((IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__tag_q
                                       [9U][(0xffU 
                                             & (IData)(
                                                       (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                        >> 6U)))] 
                                       >> 0x20U)) << 2U))));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way_flat[0xfU] 
        = ((0xfffffU & vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way_flat[0xfU]) 
           | ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__tag_q
                      [0xaU][(0xffU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                               >> 6U)))]) 
              << 0x14U));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way_flat[0x10U] 
        = (((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__tag_q
                    [0xaU][(0xffU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                             >> 6U)))]) 
            >> 0xcU) | ((IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__tag_q
                                 [0xaU][(0xffU & (IData)(
                                                         (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                          >> 6U)))] 
                                 >> 0x20U)) << 0x14U));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way_flat[0x11U] 
        = (((0xfffc0U & ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__tag_q
                                 [0xbU][(0xffU & (IData)(
                                                         (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                          >> 6U)))]) 
                         << 6U)) | ((IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__tag_q
                                             [0xaU]
                                             [(0xffU 
                                               & (IData)(
                                                         (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                          >> 6U)))] 
                                             >> 0x20U)) 
                                    >> 0xcU)) | (0xfff00000U 
                                                 & ((IData)(
                                                            vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__tag_q
                                                            [0xbU]
                                                            [
                                                            (0xffU 
                                                             & (IData)(
                                                                       (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                                        >> 6U)))]) 
                                                    << 6U)));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way_flat[0x12U] 
        = ((0xff000000U & vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way_flat[0x12U]) 
           | ((((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__tag_q
                        [0xbU][(0xffU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                 >> 6U)))]) 
                >> 0x1aU) | (0xfffc0U & ((IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__tag_q
                                                  [0xbU]
                                                  [
                                                  (0xffU 
                                                   & (IData)(
                                                             (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                              >> 6U)))] 
                                                  >> 0x20U)) 
                                         << 6U))) | 
              (0xfff00000U & ((IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__tag_q
                                       [0xbU][(0xffU 
                                               & (IData)(
                                                         (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                          >> 6U)))] 
                                       >> 0x20U)) << 6U))));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way_flat[0x12U] 
        = ((0xffffffU & vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way_flat[0x12U]) 
           | ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__tag_q
                      [0xcU][(0xffU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                               >> 6U)))]) 
              << 0x18U));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way_flat[0x13U] 
        = (((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__tag_q
                    [0xcU][(0xffU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                             >> 6U)))]) 
            >> 8U) | ((IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__tag_q
                               [0xcU][(0xffU & (IData)(
                                                       (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                        >> 6U)))] 
                               >> 0x20U)) << 0x18U));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way_flat[0x14U] 
        = (((0xfffc00U & ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__tag_q
                                  [0xdU][(0xffU & (IData)(
                                                          (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                           >> 6U)))]) 
                          << 0xaU)) | ((IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__tag_q
                                                [0xcU]
                                                [(0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                             >> 6U)))] 
                                                >> 0x20U)) 
                                       >> 8U)) | (0xff000000U 
                                                  & ((IData)(
                                                             vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__tag_q
                                                             [0xdU]
                                                             [
                                                             (0xffU 
                                                              & (IData)(
                                                                        (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                                         >> 6U)))]) 
                                                     << 0xaU)));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way_flat[0x15U] 
        = ((0xf0000000U & vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way_flat[0x15U]) 
           | ((((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__tag_q
                        [0xdU][(0xffU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                 >> 6U)))]) 
                >> 0x16U) | (0xfffc00U & ((IData)((
                                                   vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__tag_q
                                                   [0xdU]
                                                   [
                                                   (0xffU 
                                                    & (IData)(
                                                              (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                               >> 6U)))] 
                                                   >> 0x20U)) 
                                          << 0xaU))) 
              | (0xff000000U & ((IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__tag_q
                                         [0xdU][(0xffU 
                                                 & (IData)(
                                                           (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                            >> 6U)))] 
                                         >> 0x20U)) 
                                << 0xaU))));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way_flat[0x15U] 
        = ((0xfffffffU & vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way_flat[0x15U]) 
           | ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__tag_q
                      [0xeU][(0xffU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                               >> 6U)))]) 
              << 0x1cU));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way_flat[0x16U] 
        = (((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__tag_q
                    [0xeU][(0xffU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                             >> 6U)))]) 
            >> 4U) | ((IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__tag_q
                               [0xeU][(0xffU & (IData)(
                                                       (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                        >> 6U)))] 
                               >> 0x20U)) << 0x1cU));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way_flat[0x17U] 
        = (((0xfffc000U & ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__tag_q
                                   [0xfU][(0xffU & (IData)(
                                                           (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                            >> 6U)))]) 
                           << 0xeU)) | ((IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__tag_q
                                                 [0xeU]
                                                 [(0xffU 
                                                   & (IData)(
                                                             (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                              >> 6U)))] 
                                                 >> 0x20U)) 
                                        >> 4U)) | (0xf0000000U 
                                                   & ((IData)(
                                                              vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__tag_q
                                                              [0xfU]
                                                              [
                                                              (0xffU 
                                                               & (IData)(
                                                                         (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                                          >> 6U)))]) 
                                                      << 0xeU)));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way_flat[0x18U] 
        = ((((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__tag_q
                     [0xfU][(0xffU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                              >> 6U)))]) 
             >> 0x12U) | (0xfffc000U & ((IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__tag_q
                                                 [0xfU]
                                                 [(0xffU 
                                                   & (IData)(
                                                             (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                              >> 6U)))] 
                                                 >> 0x20U)) 
                                        << 0xeU))) 
           | (0xf0000000U & ((IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__tag_q
                                      [0xfU][(0xffU 
                                              & (IData)(
                                                        (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                         >> 6U)))] 
                                      >> 0x20U)) << 0xeU)));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_owner_id 
        = (((((0xc0000000U & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram
                              [(0xffU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                 >> 6U)))][4U] 
                              << 0x11U)) | (0x30000000U 
                                            & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram
                                               [(0xffU 
                                                 & (IData)(
                                                           (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                            >> 6U)))][4U] 
                                               << 0x18U))) 
             | ((0xc000000U & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram
                               [(0xffU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                  >> 6U)))][3U] 
                               >> 1U)) | (0x3000000U 
                                          & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram
                                             [(0xffU 
                                               & (IData)(
                                                         (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                          >> 6U)))][3U] 
                                             << 6U)))) 
            | (((0xc00000U & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram
                              [(0xffU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                 >> 6U)))][3U] 
                              << 0xdU)) | (0x300000U 
                                           & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram
                                              [(0xffU 
                                                & (IData)(
                                                          (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                           >> 6U)))][3U] 
                                              << 0x14U))) 
               | ((0xc0000U & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram
                               [(0xffU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                  >> 6U)))][2U] 
                               >> 5U)) | (0x30000U 
                                          & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram
                                             [(0xffU 
                                               & (IData)(
                                                         (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                          >> 6U)))][2U] 
                                             << 2U))))) 
           | ((((0xc000U & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram
                            [(0xffU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                               >> 6U)))][2U] 
                            << 9U)) | (0x3000U & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram
                                                  [
                                                  (0xffU 
                                                   & (IData)(
                                                             (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                              >> 6U)))][1U] 
                                                  >> 0x10U))) 
               | ((0xc00U & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram
                             [(0xffU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                >> 6U)))][1U] 
                             >> 9U)) | (0x300U & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram
                                                  [
                                                  (0xffU 
                                                   & (IData)(
                                                             (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                              >> 6U)))][1U] 
                                                  >> 2U)))) 
              | (((0xc0U & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram
                            [(0xffU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                               >> 6U)))][1U] 
                            << 5U)) | (0x30U & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram
                                                [(0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                             >> 6U)))][0U] 
                                                >> 0x14U))) 
                 | ((0xcU & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram
                             [(0xffU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                >> 6U)))][0U] 
                             >> 0xdU)) | (3U & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram
                                                [(0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                             >> 6U)))][0U] 
                                                >> 6U))))));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_owner_valid 
        = (((((0x8000U & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram
                          [(0xffU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                             >> 6U)))][4U] 
                          << 3U)) | (0x4000U & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram
                                                [(0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                             >> 6U)))][4U] 
                                                << 0xbU))) 
             | ((0x2000U & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram
                            [(0xffU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                               >> 6U)))][3U] 
                            >> 0xdU)) | (0x1000U & 
                                         (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram
                                          [(0xffU & (IData)(
                                                            (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                             >> 6U)))][3U] 
                                          >> 5U)))) 
            | (((0x800U & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram
                           [(0xffU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                              >> 6U)))][3U] 
                           << 3U)) | (0x400U & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram
                                                [(0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                             >> 6U)))][2U] 
                                                >> 0x15U))) 
               | ((0x200U & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram
                             [(0xffU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                >> 6U)))][2U] 
                             >> 0xdU)) | (0x100U & 
                                          (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram
                                           [(0xffU 
                                             & (IData)(
                                                       (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                        >> 6U)))][2U] 
                                           >> 5U))))) 
           | ((((0x80U & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram
                          [(0xffU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                             >> 6U)))][2U] 
                          << 3U)) | (0x40U & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram
                                              [(0xffU 
                                                & (IData)(
                                                          (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                           >> 6U)))][1U] 
                                              >> 0x15U))) 
               | ((0x20U & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram
                            [(0xffU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                               >> 6U)))][1U] 
                            >> 0xdU)) | (0x10U & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram
                                                  [
                                                  (0xffU 
                                                   & (IData)(
                                                             (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                              >> 6U)))][1U] 
                                                  >> 5U)))) 
              | (((8U & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram
                         [(0xffU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                            >> 6U)))][1U] 
                         << 3U)) | (4U & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram
                                          [(0xffU & (IData)(
                                                            (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                             >> 6U)))][0U] 
                                          >> 0x15U))) 
                 | ((2U & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram
                           [(0xffU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                              >> 6U)))][0U] 
                           >> 0xdU)) | (1U & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram
                                              [(0xffU 
                                                & (IData)(
                                                          (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                           >> 6U)))][0U] 
                                              >> 5U))))));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_sharers 
        = (((QData)((IData)(((((0xf0000000U & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram
                                               [(0xffU 
                                                 & (IData)(
                                                           (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                            >> 6U)))][4U] 
                                               << 0x14U)) 
                               | (0xf000000U & ((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram
                                                 [(0xffU 
                                                   & (IData)(
                                                             (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                              >> 6U)))][4U] 
                                                 << 0x19U) 
                                                | (0x1000000U 
                                                   & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram
                                                      [
                                                      (0xffU 
                                                       & (IData)(
                                                                 (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                                  >> 6U)))][3U] 
                                                      >> 7U))))) 
                              | ((0xf00000U & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram
                                               [(0xffU 
                                                 & (IData)(
                                                           (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                            >> 6U)))][3U] 
                                               >> 2U)) 
                                 | (0xf0000U & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram
                                                [(0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                             >> 6U)))][3U] 
                                                << 3U)))) 
                             | (((0xf000U & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram
                                             [(0xffU 
                                               & (IData)(
                                                         (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                          >> 6U)))][3U] 
                                             << 8U)) 
                                 | (0xf00U & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram
                                              [(0xffU 
                                                & (IData)(
                                                          (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                           >> 6U)))][2U] 
                                              >> 0x13U))) 
                                | ((0xf0U & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram
                                             [(0xffU 
                                               & (IData)(
                                                         (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                          >> 6U)))][2U] 
                                             >> 0xeU)) 
                                   | (0xfU & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram
                                              [(0xffU 
                                                & (IData)(
                                                          (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                           >> 6U)))][2U] 
                                              >> 9U))))))) 
            << 0x20U) | (QData)((IData)(((((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram
                                            [(0xffU 
                                              & (IData)(
                                                        (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                         >> 6U)))][2U] 
                                            << 0x1cU) 
                                           | (0xf000000U 
                                              & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram
                                                 [(0xffU 
                                                   & (IData)(
                                                             (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                              >> 6U)))][1U] 
                                                 << 1U))) 
                                          | ((0xf00000U 
                                              & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram
                                                 [(0xffU 
                                                   & (IData)(
                                                             (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                              >> 6U)))][1U] 
                                                 << 6U)) 
                                             | (0xf0000U 
                                                & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram
                                                   [
                                                   (0xffU 
                                                    & (IData)(
                                                              (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                               >> 6U)))][1U] 
                                                   << 0xbU)))) 
                                         | (((0xf000U 
                                              & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram
                                                 [(0xffU 
                                                   & (IData)(
                                                             (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                              >> 6U)))][0U] 
                                                 >> 0x10U)) 
                                             | (0xf00U 
                                                & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram
                                                   [
                                                   (0xffU 
                                                    & (IData)(
                                                              (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                               >> 6U)))][0U] 
                                                   >> 0xbU))) 
                                            | ((0xf0U 
                                                & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram
                                                   [
                                                   (0xffU 
                                                    & (IData)(
                                                              (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                               >> 6U)))][0U] 
                                                   >> 6U)) 
                                               | (0xfU 
                                                  & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram
                                                     [
                                                     (0xffU 
                                                      & (IData)(
                                                                (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                                 >> 6U)))][0U] 
                                                     >> 1U))))))));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_valid 
        = (((((0x8000U & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram
                          [(0xffU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                             >> 6U)))][4U] 
                          << 8U)) | (0x4000U & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram
                                                [(0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                             >> 6U)))][3U] 
                                                >> 0x10U))) 
             | ((0x2000U & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram
                            [(0xffU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                               >> 6U)))][3U] 
                            >> 8U)) | (0x1000U & vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram
                                       [(0xffU & (IData)(
                                                         (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                          >> 6U)))][3U]))) 
            | (((0x800U & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram
                           [(0xffU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                              >> 6U)))][3U] 
                           << 8U)) | (0x400U & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram
                                                [(0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                             >> 6U)))][2U] 
                                                >> 0x10U))) 
               | ((0x200U & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram
                             [(0xffU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                >> 6U)))][2U] 
                             >> 8U)) | (0x100U & vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram
                                        [(0xffU & (IData)(
                                                          (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                           >> 6U)))][2U])))) 
           | ((((0x80U & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram
                          [(0xffU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                             >> 6U)))][1U] 
                          >> 0x18U)) | (0x40U & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram
                                                 [(0xffU 
                                                   & (IData)(
                                                             (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                              >> 6U)))][1U] 
                                                 >> 0x10U))) 
               | ((0x20U & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram
                            [(0xffU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                               >> 6U)))][1U] 
                            >> 8U)) | (0x10U & vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram
                                       [(0xffU & (IData)(
                                                         (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                          >> 6U)))][1U]))) 
              | (((8U & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram
                         [(0xffU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                            >> 6U)))][0U] 
                         >> 0x18U)) | (4U & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram
                                             [(0xffU 
                                               & (IData)(
                                                         (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                          >> 6U)))][0U] 
                                             >> 0x10U))) 
                 | ((2U & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram
                           [(0xffU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                              >> 6U)))][0U] 
                           >> 8U)) | (1U & vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram
                                      [(0xffU & (IData)(
                                                        (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                         >> 6U)))][0U])))));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__d3 
        = (1U & vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q
           [(0xffU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                              >> 6U)))]);
    if (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__d3) {
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__d2 
            = (1U & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q
                     [(0xffU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                        >> 6U)))] >> 2U));
        if (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__d2) {
            vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__d1 
                = (1U & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q
                         [(0xffU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                            >> 6U)))] 
                         >> 6U));
            vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__d0 
                = (1U & ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__d1)
                          ? (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q
                             [(0xffU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                >> 6U)))] 
                             >> 0xeU) : (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q
                                         [(0xffU & (IData)(
                                                           (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                            >> 6U)))] 
                                         >> 0xdU)));
        } else {
            vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__d1 
                = (1U & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q
                         [(0xffU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                            >> 6U)))] 
                         >> 5U));
            vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__d0 
                = (1U & ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__d1)
                          ? (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q
                             [(0xffU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                >> 6U)))] 
                             >> 0xcU) : (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q
                                         [(0xffU & (IData)(
                                                           (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                            >> 6U)))] 
                                         >> 0xbU)));
        }
    } else {
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__d2 
            = (1U & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q
                     [(0xffU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                        >> 6U)))] >> 1U));
        if (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__d2) {
            vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__d1 
                = (1U & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q
                         [(0xffU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                            >> 6U)))] 
                         >> 4U));
            vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__d0 
                = (1U & ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__d1)
                          ? (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q
                             [(0xffU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                >> 6U)))] 
                             >> 0xaU) : (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q
                                         [(0xffU & (IData)(
                                                           (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                            >> 6U)))] 
                                         >> 9U)));
        } else {
            vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__d1 
                = (1U & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q
                         [(0xffU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                            >> 6U)))] 
                         >> 3U));
            vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__d0 
                = (1U & ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__d1)
                          ? (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q
                             [(0xffU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                >> 6U)))] 
                             >> 8U) : (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_bits_q
                                       [(0xffU & (IData)(
                                                         (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                          >> 6U)))] 
                                       >> 7U)));
        }
    }
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_leaf_victim 
        = ((((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__d3) 
             << 3U) | ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__d2) 
                       << 2U)) | (((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__d1) 
                                   << 1U) | (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__d0)));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__has_invalid = 0U;
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__invalid_choice = 0U;
    if ((1U & (~ (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_valid)))) {
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__invalid_choice = 0U;
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__has_invalid = 1U;
    }
    if ((1U & ((~ ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_valid) 
                   >> 1U)) & (~ (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__has_invalid))))) {
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__invalid_choice = 1U;
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__has_invalid = 1U;
    }
    if ((1U & ((~ ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_valid) 
                   >> 2U)) & (~ (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__has_invalid))))) {
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__invalid_choice = 2U;
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__has_invalid = 1U;
    }
    if ((1U & ((~ ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_valid) 
                   >> 3U)) & (~ (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__has_invalid))))) {
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__invalid_choice = 3U;
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__has_invalid = 1U;
    }
    if ((1U & ((~ ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_valid) 
                   >> 4U)) & (~ (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__has_invalid))))) {
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__invalid_choice = 4U;
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__has_invalid = 1U;
    }
    if ((1U & ((~ ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_valid) 
                   >> 5U)) & (~ (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__has_invalid))))) {
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__invalid_choice = 5U;
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__has_invalid = 1U;
    }
    if ((1U & ((~ ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_valid) 
                   >> 6U)) & (~ (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__has_invalid))))) {
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__invalid_choice = 6U;
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__has_invalid = 1U;
    }
    if ((1U & ((~ ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_valid) 
                   >> 7U)) & (~ (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__has_invalid))))) {
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__invalid_choice = 7U;
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__has_invalid = 1U;
    }
    if ((1U & ((~ ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_valid) 
                   >> 8U)) & (~ (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__has_invalid))))) {
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__invalid_choice = 8U;
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__has_invalid = 1U;
    }
    if ((1U & ((~ ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_valid) 
                   >> 9U)) & (~ (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__has_invalid))))) {
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__invalid_choice = 9U;
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__has_invalid = 1U;
    }
    if ((1U & ((~ ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_valid) 
                   >> 0xaU)) & (~ (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__has_invalid))))) {
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__invalid_choice = 0xaU;
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__has_invalid = 1U;
    }
    if ((1U & ((~ ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_valid) 
                   >> 0xbU)) & (~ (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__has_invalid))))) {
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__invalid_choice = 0xbU;
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__has_invalid = 1U;
    }
    if ((1U & ((~ ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_valid) 
                   >> 0xcU)) & (~ (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__has_invalid))))) {
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__invalid_choice = 0xcU;
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__has_invalid = 1U;
    }
    if ((1U & ((~ ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_valid) 
                   >> 0xdU)) & (~ (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__has_invalid))))) {
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__invalid_choice = 0xdU;
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__has_invalid = 1U;
    }
    if ((1U & ((~ ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_valid) 
                   >> 0xeU)) & (~ (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__has_invalid))))) {
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__invalid_choice = 0xeU;
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__has_invalid = 1U;
    }
    if ((1U & ((~ ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_valid) 
                   >> 0xfU)) & (~ (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__has_invalid))))) {
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__invalid_choice = 0xfU;
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__has_invalid = 1U;
    }
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru_victim_way 
        = ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__has_invalid)
            ? (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__invalid_choice)
            : (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru__DOT__plru_leaf_victim));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_tag 
        = (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
           >> 0xeU);
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit = 0U;
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_way = 0U;
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_sharers = 0U;
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_owner_valid = 0U;
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_owner_id = 0U;
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_dirty = 0U;
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__current_tag 
        = (0x3ffffffffffffULL & (((QData)((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way_flat[1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way_flat[0U]))));
    if (((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_valid) 
         & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__current_tag 
            == vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_tag))) {
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit = 1U;
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_way = 0U;
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_sharers 
            = (0xfU & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_sharers));
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_owner_valid 
            = (1U & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_owner_valid));
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_owner_id 
            = (3U & vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_owner_id);
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_dirty 
            = (1U & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_dirty));
    }
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__current_tag 
        = (0x3ffffffffffffULL & (((QData)((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way_flat[3U])) 
                                  << 0x2eU) | (((QData)((IData)(
                                                                vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way_flat[2U])) 
                                                << 0xeU) 
                                               | ((QData)((IData)(
                                                                  vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way_flat[1U])) 
                                                  >> 0x12U))));
    if ((((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_valid) 
          >> 1U) & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__current_tag 
                    == vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_tag))) {
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit = 1U;
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_way = 1U;
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_sharers 
            = (0xfU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_sharers 
                               >> 4U)));
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_owner_valid 
            = (1U & ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_owner_valid) 
                     >> 1U));
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_owner_id 
            = (3U & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_owner_id 
                     >> 2U));
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_dirty 
            = (1U & ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_dirty) 
                     >> 1U));
    }
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__current_tag 
        = (0x3ffffffffffffULL & (((QData)((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way_flat[4U])) 
                                  << 0x1cU) | ((QData)((IData)(
                                                               vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way_flat[3U])) 
                                               >> 4U)));
    if ((((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_valid) 
          >> 2U) & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__current_tag 
                    == vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_tag))) {
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit = 1U;
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_way = 2U;
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_sharers 
            = (0xfU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_sharers 
                               >> 8U)));
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_owner_valid 
            = (1U & ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_owner_valid) 
                     >> 2U));
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_owner_id 
            = (3U & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_owner_id 
                     >> 4U));
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_dirty 
            = (1U & ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_dirty) 
                     >> 2U));
    }
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__current_tag 
        = (0x3ffffffffffffULL & (((QData)((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way_flat[6U])) 
                                  << 0x2aU) | (((QData)((IData)(
                                                                vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way_flat[5U])) 
                                                << 0xaU) 
                                               | ((QData)((IData)(
                                                                  vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way_flat[4U])) 
                                                  >> 0x16U))));
    if ((((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_valid) 
          >> 3U) & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__current_tag 
                    == vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_tag))) {
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit = 1U;
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_way = 3U;
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_sharers 
            = (0xfU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_sharers 
                               >> 0xcU)));
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_owner_valid 
            = (1U & ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_owner_valid) 
                     >> 3U));
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_owner_id 
            = (3U & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_owner_id 
                     >> 6U));
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_dirty 
            = (1U & ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_dirty) 
                     >> 3U));
    }
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__current_tag 
        = (0x3ffffffffffffULL & (((QData)((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way_flat[7U])) 
                                  << 0x18U) | ((QData)((IData)(
                                                               vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way_flat[6U])) 
                                               >> 8U)));
    if ((((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_valid) 
          >> 4U) & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__current_tag 
                    == vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_tag))) {
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit = 1U;
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_way = 4U;
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_sharers 
            = (0xfU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_sharers 
                               >> 0x10U)));
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_owner_valid 
            = (1U & ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_owner_valid) 
                     >> 4U));
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_owner_id 
            = (3U & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_owner_id 
                     >> 8U));
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_dirty 
            = (1U & ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_dirty) 
                     >> 4U));
    }
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__current_tag 
        = (0x3ffffffffffffULL & (((QData)((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way_flat[9U])) 
                                  << 0x26U) | (((QData)((IData)(
                                                                vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way_flat[8U])) 
                                                << 6U) 
                                               | ((QData)((IData)(
                                                                  vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way_flat[7U])) 
                                                  >> 0x1aU))));
    if ((((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_valid) 
          >> 5U) & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__current_tag 
                    == vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_tag))) {
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit = 1U;
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_way = 5U;
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_sharers 
            = (0xfU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_sharers 
                               >> 0x14U)));
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_owner_valid 
            = (1U & ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_owner_valid) 
                     >> 5U));
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_owner_id 
            = (3U & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_owner_id 
                     >> 0xaU));
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_dirty 
            = (1U & ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_dirty) 
                     >> 5U));
    }
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__current_tag 
        = (0x3ffffffffffffULL & (((QData)((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way_flat[0xaU])) 
                                  << 0x14U) | ((QData)((IData)(
                                                               vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way_flat[9U])) 
                                               >> 0xcU)));
    if ((((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_valid) 
          >> 6U) & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__current_tag 
                    == vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_tag))) {
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit = 1U;
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_way = 6U;
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_sharers 
            = (0xfU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_sharers 
                               >> 0x18U)));
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_owner_valid 
            = (1U & ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_owner_valid) 
                     >> 6U));
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_owner_id 
            = (3U & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_owner_id 
                     >> 0xcU));
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_dirty 
            = (1U & ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_dirty) 
                     >> 6U));
    }
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__current_tag 
        = (0x3ffffffffffffULL & (((QData)((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way_flat[0xcU])) 
                                  << 0x22U) | (((QData)((IData)(
                                                                vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way_flat[0xbU])) 
                                                << 2U) 
                                               | ((QData)((IData)(
                                                                  vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way_flat[0xaU])) 
                                                  >> 0x1eU))));
    if ((((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_valid) 
          >> 7U) & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__current_tag 
                    == vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_tag))) {
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit = 1U;
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_way = 7U;
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_sharers 
            = (0xfU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_sharers 
                               >> 0x1cU)));
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_owner_valid 
            = (1U & ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_owner_valid) 
                     >> 7U));
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_owner_id 
            = (3U & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_owner_id 
                     >> 0xeU));
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_dirty 
            = (1U & ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_dirty) 
                     >> 7U));
    }
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__current_tag 
        = (0x3ffffffffffffULL & (((QData)((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way_flat[0xeU])) 
                                  << 0x30U) | (((QData)((IData)(
                                                                vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way_flat[0xdU])) 
                                                << 0x10U) 
                                               | ((QData)((IData)(
                                                                  vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way_flat[0xcU])) 
                                                  >> 0x10U))));
    if ((((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_valid) 
          >> 8U) & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__current_tag 
                    == vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_tag))) {
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit = 1U;
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_way = 8U;
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_sharers 
            = (0xfU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_sharers 
                               >> 0x20U)));
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_owner_valid 
            = (1U & ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_owner_valid) 
                     >> 8U));
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_owner_id 
            = (3U & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_owner_id 
                     >> 0x10U));
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_dirty 
            = (1U & ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_dirty) 
                     >> 8U));
    }
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__current_tag 
        = (0x3ffffffffffffULL & (((QData)((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way_flat[0xfU])) 
                                  << 0x1eU) | ((QData)((IData)(
                                                               vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way_flat[0xeU])) 
                                               >> 2U)));
    if ((((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_valid) 
          >> 9U) & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__current_tag 
                    == vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_tag))) {
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit = 1U;
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_way = 9U;
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_sharers 
            = (0xfU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_sharers 
                               >> 0x24U)));
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_owner_valid 
            = (1U & ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_owner_valid) 
                     >> 9U));
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_owner_id 
            = (3U & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_owner_id 
                     >> 0x12U));
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_dirty 
            = (1U & ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_dirty) 
                     >> 9U));
    }
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__current_tag 
        = (0x3ffffffffffffULL & (((QData)((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way_flat[0x11U])) 
                                  << 0x2cU) | (((QData)((IData)(
                                                                vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way_flat[0x10U])) 
                                                << 0xcU) 
                                               | ((QData)((IData)(
                                                                  vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way_flat[0xfU])) 
                                                  >> 0x14U))));
    if ((((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_valid) 
          >> 0xaU) & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__current_tag 
                      == vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_tag))) {
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit = 1U;
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_way = 0xaU;
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_sharers 
            = (0xfU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_sharers 
                               >> 0x28U)));
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_owner_valid 
            = (1U & ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_owner_valid) 
                     >> 0xaU));
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_owner_id 
            = (3U & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_owner_id 
                     >> 0x14U));
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_dirty 
            = (1U & ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_dirty) 
                     >> 0xaU));
    }
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__current_tag 
        = (0x3ffffffffffffULL & (((QData)((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way_flat[0x12U])) 
                                  << 0x1aU) | ((QData)((IData)(
                                                               vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way_flat[0x11U])) 
                                               >> 6U)));
    if ((((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_valid) 
          >> 0xbU) & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__current_tag 
                      == vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_tag))) {
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit = 1U;
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_way = 0xbU;
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_sharers 
            = (0xfU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_sharers 
                               >> 0x2cU)));
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_owner_valid 
            = (1U & ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_owner_valid) 
                     >> 0xbU));
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_owner_id 
            = (3U & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_owner_id 
                     >> 0x16U));
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_dirty 
            = (1U & ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_dirty) 
                     >> 0xbU));
    }
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__current_tag 
        = (0x3ffffffffffffULL & (((QData)((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way_flat[0x14U])) 
                                  << 0x28U) | (((QData)((IData)(
                                                                vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way_flat[0x13U])) 
                                                << 8U) 
                                               | ((QData)((IData)(
                                                                  vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way_flat[0x12U])) 
                                                  >> 0x18U))));
    if ((((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_valid) 
          >> 0xcU) & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__current_tag 
                      == vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_tag))) {
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit = 1U;
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_way = 0xcU;
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_sharers 
            = (0xfU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_sharers 
                               >> 0x30U)));
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_owner_valid 
            = (1U & ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_owner_valid) 
                     >> 0xcU));
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_owner_id 
            = (3U & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_owner_id 
                     >> 0x18U));
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_dirty 
            = (1U & ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_dirty) 
                     >> 0xcU));
    }
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__current_tag 
        = (0x3ffffffffffffULL & (((QData)((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way_flat[0x15U])) 
                                  << 0x16U) | ((QData)((IData)(
                                                               vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way_flat[0x14U])) 
                                               >> 0xaU)));
    if ((((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_valid) 
          >> 0xdU) & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__current_tag 
                      == vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_tag))) {
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit = 1U;
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_way = 0xdU;
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_sharers 
            = (0xfU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_sharers 
                               >> 0x34U)));
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_owner_valid 
            = (1U & ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_owner_valid) 
                     >> 0xdU));
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_owner_id 
            = (3U & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_owner_id 
                     >> 0x1aU));
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_dirty 
            = (1U & ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_dirty) 
                     >> 0xdU));
    }
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__current_tag 
        = (0x3ffffffffffffULL & (((QData)((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way_flat[0x17U])) 
                                  << 0x24U) | (((QData)((IData)(
                                                                vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way_flat[0x16U])) 
                                                << 4U) 
                                               | ((QData)((IData)(
                                                                  vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way_flat[0x15U])) 
                                                  >> 0x1cU))));
    if ((((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_valid) 
          >> 0xeU) & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__current_tag 
                      == vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_tag))) {
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit = 1U;
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_way = 0xeU;
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_sharers 
            = (0xfU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_sharers 
                               >> 0x38U)));
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_owner_valid 
            = (1U & ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_owner_valid) 
                     >> 0xeU));
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_owner_id 
            = (3U & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_owner_id 
                     >> 0x1cU));
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_dirty 
            = (1U & ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_dirty) 
                     >> 0xeU));
    }
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__current_tag 
        = (0x3ffffffffffffULL & (((QData)((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way_flat[0x18U])) 
                                  << 0x12U) | ((QData)((IData)(
                                                               vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way_flat[0x17U])) 
                                               >> 0xeU)));
    if ((((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_valid) 
          >> 0xfU) & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__current_tag 
                      == vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_tag))) {
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit = 1U;
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_way = 0xfU;
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_sharers 
            = (0xfU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_sharers 
                               >> 0x3cU)));
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_owner_valid 
            = (1U & ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_owner_valid) 
                     >> 0xfU));
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_owner_id 
            = (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_owner_id 
               >> 0x1eU);
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_dirty 
            = (1U & ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_dirty) 
                     >> 0xfU));
    }
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_wr_sharers = 0U;
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_wr_owner_id = 0U;
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_wr_owner_valid = 0U;
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_wr_dirty = 0U;
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__probes_to_send = 0U;
    if (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit) {
        if ((6U == (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_opcode_q))) {
            if ((0U == (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_param_q))) {
                if (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_owner_valid) {
                    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__probes_to_send 
                        = ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__probes_to_send) 
                           | (0xfU & ((IData)(1U) << (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_owner_id))));
                }
            } else {
                vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__probes_to_send 
                    = vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_sharers;
                if (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_owner_valid) {
                    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__probes_to_send 
                        = ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__probes_to_send) 
                           | (0xfU & ((IData)(1U) << (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_owner_id))));
                }
            }
        } else if ((7U == (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_opcode_q))) {
            vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__probes_to_send 
                = vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_sharers;
            if (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_owner_valid) {
                vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__probes_to_send 
                    = ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__probes_to_send) 
                       | (0xfU & ((IData)(1U) << (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_owner_id))));
            }
        }
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__probes_to_send 
            = ((~ ((IData)(1U) << (3U & ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_source_q) 
                                         >> 4U)))) 
               & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__probes_to_send));
    } else if ((1U & ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_valid) 
                      >> (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru_victim_way)))) {
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__probes_to_send 
            = (0xfU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_sharers 
                               >> (0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru_victim_way), 2U)))));
        if ((1U & ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_owner_valid) 
                   >> (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru_victim_way)))) {
            vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__probes_to_send 
                = ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__probes_to_send) 
                   | (0xfU & ((IData)(1U) << (3U & 
                                              (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_rd_owner_id 
                                               >> (0x1fU 
                                                   & VL_SHIFTL_III(5,32,32, (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru_victim_way), 1U)))))));
        }
    }
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__rel_drop_n 
        = vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__rel_drop_q;
    if ((1U & (~ ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__state_q) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__state_q))) {
            if ((1U & (~ ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__state_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__state_q))) {
                    if (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__processing_release) {
                        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_wr_sharers 
                            = (0xfU & ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_sharers) 
                                       & (~ ((IData)(1U) 
                                             << (3U 
                                                 & ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_source_q) 
                                                    >> 4U))))));
                        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_wr_owner_id 
                            = (3U & (((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_owner_valid) 
                                      & ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_owner_id) 
                                         == (3U & ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_source_q) 
                                                   >> 4U))))
                                      ? 0U : (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_owner_id)));
                        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_wr_owner_valid 
                            = ((1U & (~ ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_owner_valid) 
                                         & ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_owner_id) 
                                            == (3U 
                                                & ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_source_q) 
                                                   >> 4U)))))) 
                               && (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_owner_valid));
                        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_wr_dirty 
                            = ((1U & (~ ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_owner_valid) 
                                         & ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_owner_id) 
                                            == (3U 
                                                & ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_source_q) 
                                                   >> 4U)))))) 
                               && (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_dirty));
                    } else {
                        if ((6U == (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_opcode_q))) {
                            if ((0U == (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_param_q))) {
                                vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_wr_sharers 
                                    = (0xfU & ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_sharers) 
                                               | ((IData)(1U) 
                                                  << 
                                                  (3U 
                                                   & ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_source_q) 
                                                      >> 4U)))));
                                vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_wr_owner_id 
                                    = (3U & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_owner_id));
                            } else {
                                vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_wr_sharers 
                                    = (0xfU & ((IData)(1U) 
                                               << (3U 
                                                   & ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_source_q) 
                                                      >> 4U))));
                                vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_wr_owner_id 
                                    = (3U & ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_source_q) 
                                             >> 4U));
                            }
                        } else {
                            vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_wr_sharers 
                                = (0xfU & ((IData)(1U) 
                                           << (3U & 
                                               ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_source_q) 
                                                >> 4U))));
                            vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_wr_owner_id 
                                = (3U & ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_source_q) 
                                         >> 4U));
                        }
                        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_wr_owner_valid 
                            = ((6U != (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_opcode_q)) 
                               || ((0U != (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_param_q)) 
                                   || (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_owner_valid)));
                        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_wr_dirty 
                            = ((6U != (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_opcode_q)) 
                               || ((0U != (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_param_q)) 
                                   || (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit_dirty)));
                    }
                }
            }
        }
    }
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__safe_owner_valid 
        = ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_wr_dirty) 
           | (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_wr_owner_valid));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__mshr_set_probes = 0U;
    __Vtableidx1 = (((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__probes_sent_q) 
                     << 4U) | (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__probes_to_send));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__next_probe_target 
        = Vrv64g_cache_system_tb__ConstPool__TABLE_hd78c128c_0
        [__Vtableidx1];
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__probe_needed 
        = Vrv64g_cache_system_tb__ConstPool__TABLE_h19660b56_0
        [__Vtableidx1];
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__i 
        = Vrv64g_cache_system_tb__ConstPool__TABLE_hfb0b870f_0
        [__Vtableidx1];
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_b_opcode = 6U;
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_b_param = 0U;
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_b_address 
        = vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q;
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_b_dest = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__state_q) 
                  >> 3U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__state_q) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__state_q))) {
                if ((1U & (~ (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__state_q)))) {
                    if (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__processing_release) {
                        if (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit) {
                            if (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__rel_has_data_q) {
                                vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__rel_drop_n = 0U;
                            }
                        } else if (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__rel_has_data_q) {
                            vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__rel_drop_n = 1U;
                        }
                    }
                    if ((1U & (~ (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__processing_release)))) {
                        if ((0U != (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__probes_to_send))) {
                            if ((0U == (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__probes_sent_q))) {
                                vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__mshr_set_probes 
                                    = vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__probes_to_send;
                            }
                            if (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__probe_needed) {
                                if (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit) {
                                    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_b_opcode 
                                        = ((7U == (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_opcode_q))
                                            ? 7U : 6U);
                                    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_b_param = 1U;
                                    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_b_address 
                                        = vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q;
                                } else {
                                    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_b_opcode = 6U;
                                    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_b_param = 2U;
                                    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_b_address 
                                        = ((((0x31fU 
                                              >= (0x3ffU 
                                                  & ((IData)(0x32U) 
                                                     * (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru_victim_way))))
                                              ? (0x3ffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way_flat[
                                                                     (((IData)(0x31U) 
                                                                       + 
                                                                       (0x3ffU 
                                                                        & ((IData)(0x32U) 
                                                                           * (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru_victim_way)))) 
                                                                      >> 5U)])) 
                                                     << 
                                                     ((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0x32U) 
                                                           * (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru_victim_way))))
                                                       ? 0x20U
                                                       : 
                                                      ((IData)(0x40U) 
                                                       - 
                                                       (0x1fU 
                                                        & ((IData)(0x32U) 
                                                           * (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru_victim_way)))))) 
                                                    | (((0U 
                                                         == 
                                                         (0x1fU 
                                                          & ((IData)(0x32U) 
                                                             * (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru_victim_way))))
                                                         ? 0ULL
                                                         : 
                                                        ((QData)((IData)(
                                                                         vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way_flat[
                                                                         (((IData)(0x1fU) 
                                                                           + 
                                                                           (0x3ffU 
                                                                            & ((IData)(0x32U) 
                                                                               * (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru_victim_way)))) 
                                                                          >> 5U)])) 
                                                         << 
                                                         ((IData)(0x20U) 
                                                          - 
                                                          (0x1fU 
                                                           & ((IData)(0x32U) 
                                                              * (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru_victim_way)))))) 
                                                       | ((QData)((IData)(
                                                                          vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way_flat[
                                                                          (0x1fU 
                                                                           & (((IData)(0x32U) 
                                                                               * (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru_victim_way)) 
                                                                              >> 5U))])) 
                                                          >> 
                                                          (0x1fU 
                                                           & ((IData)(0x32U) 
                                                              * (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__plru_victim_way)))))))
                                              : 0ULL) 
                                            << 0xeU) 
                                           | (QData)((IData)(
                                                             (0x3fc0U 
                                                              & ((IData)(
                                                                         (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                                          >> 6U)) 
                                                                 << 6U)))));
                                }
                                vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_b_dest 
                                    = vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__next_probe_target;
                            }
                        }
                    }
                }
            } else if ((1U & (~ (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__state_q)))) {
                if (((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_c_valid) 
                     & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__c_is_release))) {
                    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__rel_drop_n = 0U;
                }
            }
        }
    }
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_b_ready 
        = (1U & (((((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__3__KET____DOT__l1.tl_b_ready_o) 
                    << 3U) | ((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__2__KET____DOT__l1.tl_b_ready_o) 
                              << 2U)) | (((IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__1__KET____DOT__l1.tl_b_ready_o) 
                                          << 1U) | (IData)(vlSymsp->TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1.tl_b_ready_o))) 
                 >> (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_b_dest)));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__next_state 
        = vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__state_q;
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_b_valid = 0U;
    if (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__latched_hit) {
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way 
            = vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__latched_hit_way;
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__data_way 
            = vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__latched_hit_way;
    } else {
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way 
            = vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__victim_way_q;
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__data_way 
            = vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__victim_way_q;
    }
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__unused_data_set 
        = (0xffU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                            >> 6U)));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__data_word_sel = 0U;
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__data_we = 0U;
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__data_wdata = 0ULL;
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__mshr_probe_ack = 0U;
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__mshr_probe_ack_id = 0U;
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__probe_ack_id = 0U;
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__rel_data_cnt_n 
        = vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__rel_data_cnt_q;
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_c_ready = 0U;
    if (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_c_valid) {
        if (((4U == (7U & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_o[4U] 
                           >> 0xcU))) | (5U == (7U 
                                                & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_o[4U] 
                                                   >> 0xcU))))) {
            vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__probe_ack_id 
                = (3U & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_o[4U] 
                         >> 0xfU));
            vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_c_ready = 1U;
            vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__mshr_probe_ack_id 
                = vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__probe_ack_id;
            if ((1U & ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__mshr__DOT__pending_probes_q) 
                       >> (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__probe_ack_id)))) {
                if ((5U == (7U & (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_o[4U] 
                                  >> 0xcU)))) {
                    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__data_we = 1U;
                    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__data_way 
                        = ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__latched_hit)
                            ? (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__latched_hit_way)
                            : (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__victim_way_q));
                    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__unused_data_set 
                        = (0xffU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                            >> 6U)));
                    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__data_word_sel 
                        = vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__probe_data_cnt;
                    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__data_wdata 
                        = (((QData)((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_o[2U])) 
                            << 0x3fU) | (((QData)((IData)(
                                                          vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_o[1U])) 
                                          << 0x1fU) 
                                         | ((QData)((IData)(
                                                            vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_o[0U])) 
                                            >> 1U)));
                    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__mshr_probe_ack 
                        = (7U == (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__probe_data_cnt));
                } else {
                    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__mshr_probe_ack = 1U;
                }
            } else {
                vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__mshr_probe_ack = 0U;
            }
        }
    }
    if ((8U & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__state_q))) {
        if ((4U & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__state_q))) {
            if ((2U & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__state_q))) {
                vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__next_state = 0U;
            } else if ((1U & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__state_q))) {
                vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__next_state = 0U;
            } else if (((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__e_seen_q) 
                        | (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_e_valid))) {
                vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__next_state = 6U;
            }
        } else if ((2U & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__state_q))) {
            if ((1U & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__state_q))) {
                vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_c_ready 
                    = (1U & (~ (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__rel_buf_valid_q)));
                if (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__rel_buf_valid_q) {
                    if ((1U & (~ (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__rel_drop_q)))) {
                        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__data_we = 1U;
                        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__data_way 
                            = vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__latched_hit_way;
                        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__unused_data_set 
                            = (0xffU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                >> 6U)));
                        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__data_word_sel = 0U;
                        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__data_wdata 
                            = vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__rel_buf_data_q;
                    }
                    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__rel_data_cnt_n = 1U;
                } else if (((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_c_valid) 
                            & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_c_ready))) {
                    if ((1U & (~ (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__rel_drop_q)))) {
                        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__data_we = 1U;
                        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__data_way 
                            = vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__latched_hit_way;
                        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__unused_data_set 
                            = (0xffU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                                >> 6U)));
                        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__data_word_sel 
                            = vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__rel_data_cnt_q;
                        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__data_wdata 
                            = (((QData)((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_o[2U])) 
                                << 0x3fU) | (((QData)((IData)(
                                                              vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_o[1U])) 
                                              << 0x1fU) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__c_packed_o[0U])) 
                                                >> 1U)));
                    }
                    if ((7U == (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__rel_data_cnt_q))) {
                        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__next_state 
                            = ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__latched_hit)
                                ? 5U : 4U);
                    } else {
                        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__rel_data_cnt_n 
                            = (7U & ((IData)(1U) + (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__rel_data_cnt_q)));
                    }
                }
            } else if (vlSelfRef.rv64g_cache_system_tb__DOT__mem_d_valid) {
                vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__next_state = 8U;
            }
        } else if ((1U & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__state_q))) {
            vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__unused_data_set 
                = (0xffU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                    >> 6U)));
            vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__data_way 
                = vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__victim_way_q;
            vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way 
                = vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__victim_way_q;
            vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__data_word_sel 
                = vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__burst_cnt;
            if (vlSelfRef.rv64g_cache_system_tb__DOT__mem_a_ready) {
                if ((7U == (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__burst_cnt))) {
                    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__next_state = 0xaU;
                }
            }
        } else if (vlSelfRef.rv64g_cache_system_tb__DOT__mem_d_valid) {
            vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__data_we = 1U;
            vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__data_way 
                = vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__victim_way_q;
            vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__unused_data_set 
                = (0xffU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                    >> 6U)));
            vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__data_word_sel 
                = vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__burst_cnt;
            vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__data_wdata 
                = vlSelfRef.rv64g_cache_system_tb__DOT__mem_d_data;
            if ((7U == (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__burst_cnt))) {
                vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__next_state = 4U;
            }
        }
    } else if ((4U & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__state_q))) {
        if ((2U & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__state_q))) {
            if ((1U & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__state_q))) {
                if ((0U == (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__mshr__DOT__pending_probes_q))) {
                    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__next_state 
                        = ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__victim_dirty_q)
                            ? 9U : 8U);
                }
            } else {
                vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__next_state = 0U;
            }
        } else if ((1U & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__state_q))) {
            vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__next_state 
                = ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__processing_release)
                    ? 4U : 0xcU);
        } else if (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__processing_release) {
            if (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_d_ready) {
                vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__next_state = 6U;
            }
        } else if ((6U == (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_opcode_q))) {
            vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__data_way 
                = ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__latched_hit)
                    ? (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__latched_hit_way)
                    : (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__victim_way_q));
            vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__unused_data_set 
                = (0xffU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                    >> 6U)));
            vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way 
                = vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__data_way;
            vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__data_word_sel 
                = vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__burst_cnt;
            if (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_d_ready) {
                if ((7U == (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__burst_cnt))) {
                    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__next_state = 5U;
                }
            }
        } else if (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_d_ready) {
            vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__next_state = 5U;
        }
    } else if ((2U & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__state_q))) {
        if ((1U & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__state_q))) {
            if ((0U == (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__mshr__DOT__pending_probes_q))) {
                vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__next_state = 4U;
            }
        } else if (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__processing_release) {
            vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__next_state 
                = ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit)
                    ? ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__rel_has_data_q)
                        ? 0xbU : 5U) : ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__rel_has_data_q)
                                         ? 0xbU : 4U));
        } else if ((0U != (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__probes_to_send))) {
            if (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__probe_needed) {
                vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_b_valid = 1U;
            }
            if (((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_b_valid) 
                 & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_b_ready))) {
                if (((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__probes_to_send) 
                     == ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__probes_sent_q) 
                         | ((IData)(1U) << (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__next_probe_target))))) {
                    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__next_state 
                        = ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit)
                            ? 3U : 7U);
                }
            }
        } else {
            vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__next_state 
                = ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__hit)
                    ? 4U : 8U);
        }
    } else if ((1U & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__state_q))) {
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__next_state = 2U;
    } else if (((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_c_valid) 
                & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__c_is_release))) {
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_c_ready = 1U;
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__next_state = 1U;
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__rel_data_cnt_n = 0U;
    } else if (((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_a_valid) 
                & (~ (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__mshr__DOT__valid_q)))) {
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__next_state = 1U;
    }
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__array_way_sel 
        = ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__data_we)
            ? (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__data_way)
            : (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_way));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__line_idx 
        = ((0x7f8U & ((IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                               >> 6U)) << 3U)) | (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__data_word_sel));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l1_c_ready = 0U;
    if ((1U & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__arb_c__DOT__grant))) {
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l1_c_ready 
            = ((0xeU & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l1_c_ready)) 
               | (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_c_ready));
    }
    if ((2U & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__arb_c__DOT__grant))) {
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l1_c_ready 
            = ((0xdU & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l1_c_ready)) 
               | ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_c_ready) 
                  << 1U));
    }
    if ((4U & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__arb_c__DOT__grant))) {
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l1_c_ready 
            = ((0xbU & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l1_c_ready)) 
               | ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_c_ready) 
                  << 2U));
    }
    if ((8U & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__xbar__DOT__arb_c__DOT__grant))) {
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l1_c_ready 
            = ((7U & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l1_c_ready)) 
               | ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_c_ready) 
                  << 3U));
    }
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__unused_rdata_way_flat[0U] 
        = (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__data_q
                  [0U][vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__line_idx]);
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__unused_rdata_way_flat[1U] 
        = (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__data_q
                   [0U][vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__line_idx] 
                   >> 0x20U));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__unused_rdata_way_flat[2U] 
        = (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__data_q
                  [1U][vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__line_idx]);
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__unused_rdata_way_flat[3U] 
        = (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__data_q
                   [1U][vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__line_idx] 
                   >> 0x20U));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__unused_rdata_way_flat[4U] 
        = (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__data_q
                  [2U][vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__line_idx]);
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__unused_rdata_way_flat[5U] 
        = (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__data_q
                   [2U][vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__line_idx] 
                   >> 0x20U));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__unused_rdata_way_flat[6U] 
        = (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__data_q
                  [3U][vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__line_idx]);
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__unused_rdata_way_flat[7U] 
        = (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__data_q
                   [3U][vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__line_idx] 
                   >> 0x20U));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__unused_rdata_way_flat[8U] 
        = (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__data_q
                  [4U][vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__line_idx]);
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__unused_rdata_way_flat[9U] 
        = (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__data_q
                   [4U][vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__line_idx] 
                   >> 0x20U));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__unused_rdata_way_flat[0xaU] 
        = (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__data_q
                  [5U][vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__line_idx]);
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__unused_rdata_way_flat[0xbU] 
        = (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__data_q
                   [5U][vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__line_idx] 
                   >> 0x20U));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__unused_rdata_way_flat[0xcU] 
        = (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__data_q
                  [6U][vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__line_idx]);
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__unused_rdata_way_flat[0xdU] 
        = (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__data_q
                   [6U][vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__line_idx] 
                   >> 0x20U));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__unused_rdata_way_flat[0xeU] 
        = (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__data_q
                  [7U][vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__line_idx]);
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__unused_rdata_way_flat[0xfU] 
        = (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__data_q
                   [7U][vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__line_idx] 
                   >> 0x20U));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__unused_rdata_way_flat[0x10U] 
        = (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__data_q
                  [8U][vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__line_idx]);
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__unused_rdata_way_flat[0x11U] 
        = (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__data_q
                   [8U][vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__line_idx] 
                   >> 0x20U));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__unused_rdata_way_flat[0x12U] 
        = (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__data_q
                  [9U][vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__line_idx]);
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__unused_rdata_way_flat[0x13U] 
        = (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__data_q
                   [9U][vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__line_idx] 
                   >> 0x20U));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__unused_rdata_way_flat[0x14U] 
        = (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__data_q
                  [0xaU][vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__line_idx]);
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__unused_rdata_way_flat[0x15U] 
        = (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__data_q
                   [0xaU][vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__line_idx] 
                   >> 0x20U));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__unused_rdata_way_flat[0x16U] 
        = (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__data_q
                  [0xbU][vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__line_idx]);
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__unused_rdata_way_flat[0x17U] 
        = (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__data_q
                   [0xbU][vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__line_idx] 
                   >> 0x20U));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__unused_rdata_way_flat[0x18U] 
        = (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__data_q
                  [0xcU][vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__line_idx]);
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__unused_rdata_way_flat[0x19U] 
        = (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__data_q
                   [0xcU][vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__line_idx] 
                   >> 0x20U));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__unused_rdata_way_flat[0x1aU] 
        = (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__data_q
                  [0xdU][vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__line_idx]);
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__unused_rdata_way_flat[0x1bU] 
        = (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__data_q
                   [0xdU][vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__line_idx] 
                   >> 0x20U));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__unused_rdata_way_flat[0x1cU] 
        = (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__data_q
                  [0xeU][vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__line_idx]);
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__unused_rdata_way_flat[0x1dU] 
        = (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__data_q
                   [0xeU][vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__line_idx] 
                   >> 0x20U));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__unused_rdata_way_flat[0x1eU] 
        = (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__data_q
                  [0xfU][vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__line_idx]);
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__unused_rdata_way_flat[0x1fU] 
        = (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__data_q
                   [0xfU][vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__line_idx] 
                   >> 0x20U));
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__data_rdata 
        = vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__data_q
        [vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__array_way_sel]
        [vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__line_idx];
    vlSelfRef.rv64g_cache_system_tb__DOT__mem_a_data = 0ULL;
    if ((8U & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__state_q))) {
        if ((1U & (~ ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__state_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__state_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__state_q))) {
                    vlSelfRef.rv64g_cache_system_tb__DOT__mem_a_data 
                        = vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__data_rdata;
                }
            }
        }
    }
    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_d_data = 0ULL;
    if ((1U & (~ ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__state_q) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__state_q))) {
            if ((1U & (~ ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__state_q) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__state_q)))) {
                    vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2_d_data 
                        = ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__processing_release)
                            ? 0ULL : ((6U == (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_opcode_q))
                                       ? vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__data_rdata
                                       : 0ULL));
                }
            }
        }
    }
}
