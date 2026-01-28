// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrv64g_l1_vlsu_miss_handler_tb.h for the primary calling header

#include "Vrv64g_l1_vlsu_miss_handler_tb__pch.h"
#include "Vrv64g_l1_vlsu_miss_handler_tb___024root.h"

VL_ATTR_COLD void Vrv64g_l1_vlsu_miss_handler_tb___024root___eval_initial__TOP(Vrv64g_l1_vlsu_miss_handler_tb___024root* vlSelf);
VlCoroutine Vrv64g_l1_vlsu_miss_handler_tb___024root___eval_initial__TOP__Vtiming__0(Vrv64g_l1_vlsu_miss_handler_tb___024root* vlSelf);
VlCoroutine Vrv64g_l1_vlsu_miss_handler_tb___024root___eval_initial__TOP__Vtiming__1(Vrv64g_l1_vlsu_miss_handler_tb___024root* vlSelf);
VlCoroutine Vrv64g_l1_vlsu_miss_handler_tb___024root___eval_initial__TOP__Vtiming__2(Vrv64g_l1_vlsu_miss_handler_tb___024root* vlSelf);

void Vrv64g_l1_vlsu_miss_handler_tb___024root___eval_initial(Vrv64g_l1_vlsu_miss_handler_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv64g_l1_vlsu_miss_handler_tb___024root___eval_initial\n"); );
    Vrv64g_l1_vlsu_miss_handler_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vrv64g_l1_vlsu_miss_handler_tb___024root___eval_initial__TOP(vlSelf);
    Vrv64g_l1_vlsu_miss_handler_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vrv64g_l1_vlsu_miss_handler_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vrv64g_l1_vlsu_miss_handler_tb___024root___eval_initial__TOP__Vtiming__2(vlSelf);
}

extern const VlWide<16>/*511:0*/ Vrv64g_l1_vlsu_miss_handler_tb__ConstPool__CONST_h93e1b771_0;

VL_INLINE_OPT VlCoroutine Vrv64g_l1_vlsu_miss_handler_tb___024root___eval_initial__TOP__Vtiming__0(Vrv64g_l1_vlsu_miss_handler_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv64g_l1_vlsu_miss_handler_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vrv64g_l1_vlsu_miss_handler_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ rv64g_l1_vlsu_miss_handler_tb__DOT__test_num;
    rv64g_l1_vlsu_miss_handler_tb__DOT__test_num = 0;
    CData/*0:0*/ rv64g_l1_vlsu_miss_handler_tb__DOT__test_pass;
    rv64g_l1_vlsu_miss_handler_tb__DOT__test_pass = 0;
    IData/*31:0*/ rv64g_l1_vlsu_miss_handler_tb__DOT__refill_count;
    rv64g_l1_vlsu_miss_handler_tb__DOT__refill_count = 0;
    CData/*2:0*/ __Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__0__lane;
    __Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__0__lane = 0;
    QData/*63:0*/ __Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__0__addr;
    __Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__0__addr = 0;
    CData/*2:0*/ __Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__1__lane;
    __Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__1__lane = 0;
    QData/*63:0*/ __Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__1__addr;
    __Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__1__addr = 0;
    CData/*2:0*/ __Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__2__lane;
    __Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__2__lane = 0;
    QData/*63:0*/ __Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__2__addr;
    __Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__2__addr = 0;
    CData/*2:0*/ __Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__3__lane;
    __Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__3__lane = 0;
    QData/*63:0*/ __Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__3__addr;
    __Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__3__addr = 0;
    CData/*2:0*/ __Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__4__lane;
    __Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__4__lane = 0;
    QData/*63:0*/ __Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__4__addr;
    __Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__4__addr = 0;
    CData/*2:0*/ __Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__5__lane;
    __Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__5__lane = 0;
    QData/*63:0*/ __Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__5__addr;
    __Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__5__addr = 0;
    CData/*2:0*/ __Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__6__lane;
    __Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__6__lane = 0;
    QData/*63:0*/ __Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__6__addr;
    __Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__6__addr = 0;
    CData/*2:0*/ __Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__7__lane;
    __Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__7__lane = 0;
    QData/*63:0*/ __Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__7__addr;
    __Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__7__addr = 0;
    CData/*2:0*/ __Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__8__lane;
    __Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__8__lane = 0;
    QData/*63:0*/ __Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__8__addr;
    __Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__8__addr = 0;
    CData/*2:0*/ __Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__9__lane;
    __Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__9__lane = 0;
    QData/*63:0*/ __Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__9__addr;
    __Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__9__addr = 0;
    // Body
    VL_WRITEF_NX("=== VLSU Miss Handler Testbench ===\n",0);
    rv64g_l1_vlsu_miss_handler_tb__DOT__test_num = 0U;
    rv64g_l1_vlsu_miss_handler_tb__DOT__test_pass = 1U;
    vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__rst_n = 0U;
    vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__vlsu_req = 0U;
    vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__lane_miss = 0U;
    vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__lane_addr[0U] 
        = Vrv64g_l1_vlsu_miss_handler_tb__ConstPool__CONST_h93e1b771_0[0U];
    vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__lane_addr[1U] 
        = Vrv64g_l1_vlsu_miss_handler_tb__ConstPool__CONST_h93e1b771_0[1U];
    vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__lane_addr[2U] 
        = Vrv64g_l1_vlsu_miss_handler_tb__ConstPool__CONST_h93e1b771_0[2U];
    vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__lane_addr[3U] 
        = Vrv64g_l1_vlsu_miss_handler_tb__ConstPool__CONST_h93e1b771_0[3U];
    vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__lane_addr[4U] 
        = Vrv64g_l1_vlsu_miss_handler_tb__ConstPool__CONST_h93e1b771_0[4U];
    vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__lane_addr[5U] 
        = Vrv64g_l1_vlsu_miss_handler_tb__ConstPool__CONST_h93e1b771_0[5U];
    vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__lane_addr[6U] 
        = Vrv64g_l1_vlsu_miss_handler_tb__ConstPool__CONST_h93e1b771_0[6U];
    vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__lane_addr[7U] 
        = Vrv64g_l1_vlsu_miss_handler_tb__ConstPool__CONST_h93e1b771_0[7U];
    vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__lane_addr[8U] 
        = Vrv64g_l1_vlsu_miss_handler_tb__ConstPool__CONST_h93e1b771_0[8U];
    vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__lane_addr[9U] 
        = Vrv64g_l1_vlsu_miss_handler_tb__ConstPool__CONST_h93e1b771_0[9U];
    vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__lane_addr[0xaU] 
        = Vrv64g_l1_vlsu_miss_handler_tb__ConstPool__CONST_h93e1b771_0[0xaU];
    vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__lane_addr[0xbU] 
        = Vrv64g_l1_vlsu_miss_handler_tb__ConstPool__CONST_h93e1b771_0[0xbU];
    vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__lane_addr[0xcU] 
        = Vrv64g_l1_vlsu_miss_handler_tb__ConstPool__CONST_h93e1b771_0[0xcU];
    vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__lane_addr[0xdU] 
        = Vrv64g_l1_vlsu_miss_handler_tb__ConstPool__CONST_h93e1b771_0[0xdU];
    vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__lane_addr[0xeU] 
        = Vrv64g_l1_vlsu_miss_handler_tb__ConstPool__CONST_h93e1b771_0[0xeU];
    vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__lane_addr[0xfU] 
        = Vrv64g_l1_vlsu_miss_handler_tb__ConstPool__CONST_h93e1b771_0[0xfU];
    vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__any_miss = 0U;
    vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__refill_done = 0U;
    co_await vlSelfRef.__VtrigSched_h3013e541__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge rv64g_l1_vlsu_miss_handler_tb.clk)", 
                                                         "rv64g_l1_vlsu_miss_handler_tb.v", 
                                                         96);
    co_await vlSelfRef.__VtrigSched_h3013e541__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge rv64g_l1_vlsu_miss_handler_tb.clk)", 
                                                         "rv64g_l1_vlsu_miss_handler_tb.v", 
                                                         96);
    co_await vlSelfRef.__VtrigSched_h3013e541__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge rv64g_l1_vlsu_miss_handler_tb.clk)", 
                                                         "rv64g_l1_vlsu_miss_handler_tb.v", 
                                                         96);
    co_await vlSelfRef.__VtrigSched_h3013e541__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge rv64g_l1_vlsu_miss_handler_tb.clk)", 
                                                         "rv64g_l1_vlsu_miss_handler_tb.v", 
                                                         96);
    co_await vlSelfRef.__VtrigSched_h3013e541__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge rv64g_l1_vlsu_miss_handler_tb.clk)", 
                                                         "rv64g_l1_vlsu_miss_handler_tb.v", 
                                                         96);
    co_await vlSelfRef.__VtrigSched_h3013e541__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge rv64g_l1_vlsu_miss_handler_tb.clk)", 
                                                         "rv64g_l1_vlsu_miss_handler_tb.v", 
                                                         96);
    co_await vlSelfRef.__VtrigSched_h3013e541__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge rv64g_l1_vlsu_miss_handler_tb.clk)", 
                                                         "rv64g_l1_vlsu_miss_handler_tb.v", 
                                                         96);
    co_await vlSelfRef.__VtrigSched_h3013e541__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge rv64g_l1_vlsu_miss_handler_tb.clk)", 
                                                         "rv64g_l1_vlsu_miss_handler_tb.v", 
                                                         96);
    co_await vlSelfRef.__VtrigSched_h3013e541__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge rv64g_l1_vlsu_miss_handler_tb.clk)", 
                                                         "rv64g_l1_vlsu_miss_handler_tb.v", 
                                                         96);
    co_await vlSelfRef.__VtrigSched_h3013e541__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge rv64g_l1_vlsu_miss_handler_tb.clk)", 
                                                         "rv64g_l1_vlsu_miss_handler_tb.v", 
                                                         96);
    vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__rst_n = 1U;
    co_await vlSelfRef.__VtrigSched_h3013e541__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge rv64g_l1_vlsu_miss_handler_tb.clk)", 
                                                         "rv64g_l1_vlsu_miss_handler_tb.v", 
                                                         98);
    co_await vlSelfRef.__VtrigSched_h3013e541__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge rv64g_l1_vlsu_miss_handler_tb.clk)", 
                                                         "rv64g_l1_vlsu_miss_handler_tb.v", 
                                                         98);
    rv64g_l1_vlsu_miss_handler_tb__DOT__test_num = 1U;
    VL_WRITEF_NX("\nTest %0d: Single miss handling\n",0,
                 32,rv64g_l1_vlsu_miss_handler_tb__DOT__test_num);
    __Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__0__addr = 0x1000ULL;
    __Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__0__lane = 0U;
    VL_ASSIGNSEL_WQ(512, 64, (0x1ffU & ((VL_SHIFTL_III(9,32,32, 
                                                       ((IData)(1U) 
                                                        + (IData)(__Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__0__lane)), 6U) 
                                         - (IData)(1U)) 
                                        - (IData)(0x3fU))), vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__lane_addr, __Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__0__addr);
    vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__lane_miss = 1U;
    vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__any_miss = 1U;
    vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__vlsu_req = 1U;
    co_await vlSelfRef.__VtrigSched_h3013e541__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge rv64g_l1_vlsu_miss_handler_tb.clk)", 
                                                         "rv64g_l1_vlsu_miss_handler_tb.v", 
                                                         112);
    while ((1U & (~ (IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__busy)))) {
        co_await vlSelfRef.__VtrigSched_h3013e541__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge rv64g_l1_vlsu_miss_handler_tb.clk)", 
                                                             "rv64g_l1_vlsu_miss_handler_tb.v", 
                                                             115);
    }
    VL_WRITEF_NX("  Handler busy\n",0);
    while ((1U & (~ (IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__refill_req)))) {
        co_await vlSelfRef.__VtrigSched_h3013e541__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge rv64g_l1_vlsu_miss_handler_tb.clk)", 
                                                             "rv64g_l1_vlsu_miss_handler_tb.v", 
                                                             119);
    }
    VL_WRITEF_NX("  Refill request for addr 0x%x\n",0,
                 64,vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__refill_addr);
    if (VL_UNLIKELY(((0x1000ULL != vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__refill_addr)))) {
        VL_WRITEF_NX("  FAIL: Expected refill addr 0x1000, got 0x%x\n",0,
                     64,vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__refill_addr);
        rv64g_l1_vlsu_miss_handler_tb__DOT__test_pass = 0U;
    }
    co_await vlSelfRef.__VtrigSched_h3013e541__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge rv64g_l1_vlsu_miss_handler_tb.clk)", 
                                                         "rv64g_l1_vlsu_miss_handler_tb.v", 
                                                         128);
    vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__refill_done = 1U;
    co_await vlSelfRef.__VtrigSched_h3013e541__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge rv64g_l1_vlsu_miss_handler_tb.clk)", 
                                                         "rv64g_l1_vlsu_miss_handler_tb.v", 
                                                         130);
    vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__refill_done = 0U;
    while ((1U & (~ (IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__ready_for_replay)))) {
        co_await vlSelfRef.__VtrigSched_h3013e541__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge rv64g_l1_vlsu_miss_handler_tb.clk)", 
                                                             "rv64g_l1_vlsu_miss_handler_tb.v", 
                                                             134);
    }
    VL_WRITEF_NX("  Ready for replay\n",0);
    vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__vlsu_req = 0U;
    vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__lane_miss = 0U;
    vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__any_miss = 0U;
    co_await vlSelfRef.__VtrigSched_h3013e541__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge rv64g_l1_vlsu_miss_handler_tb.clk)", 
                                                         "rv64g_l1_vlsu_miss_handler_tb.v", 
                                                         142);
    while (vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__busy) {
        co_await vlSelfRef.__VtrigSched_h3013e541__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge rv64g_l1_vlsu_miss_handler_tb.clk)", 
                                                             "rv64g_l1_vlsu_miss_handler_tb.v", 
                                                             143);
    }
    if ((1U != (IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_count_q))) {
        VL_WRITEF_NX("  FAIL: Expected miss_count=1, got %2#\n",0,
                     4,vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_count_q);
        rv64g_l1_vlsu_miss_handler_tb__DOT__test_pass = 0U;
    } else {
        VL_WRITEF_NX("  PASS: Single miss handled correctly\n",0);
    }
    co_await vlSelfRef.__VtrigSched_h3013e541__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge rv64g_l1_vlsu_miss_handler_tb.clk)", 
                                                         "rv64g_l1_vlsu_miss_handler_tb.v", 
                                                         152);
    co_await vlSelfRef.__VtrigSched_h3013e541__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge rv64g_l1_vlsu_miss_handler_tb.clk)", 
                                                         "rv64g_l1_vlsu_miss_handler_tb.v", 
                                                         152);
    co_await vlSelfRef.__VtrigSched_h3013e541__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge rv64g_l1_vlsu_miss_handler_tb.clk)", 
                                                         "rv64g_l1_vlsu_miss_handler_tb.v", 
                                                         152);
    co_await vlSelfRef.__VtrigSched_h3013e541__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge rv64g_l1_vlsu_miss_handler_tb.clk)", 
                                                         "rv64g_l1_vlsu_miss_handler_tb.v", 
                                                         152);
    co_await vlSelfRef.__VtrigSched_h3013e541__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge rv64g_l1_vlsu_miss_handler_tb.clk)", 
                                                         "rv64g_l1_vlsu_miss_handler_tb.v", 
                                                         152);
    rv64g_l1_vlsu_miss_handler_tb__DOT__test_num = 2U;
    VL_WRITEF_NX("\nTest %0d: Multiple unique misses (3 lines)\n",0,
                 32,rv64g_l1_vlsu_miss_handler_tb__DOT__test_num);
    __Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__1__addr = 0x2000ULL;
    __Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__1__lane = 0U;
    VL_ASSIGNSEL_WQ(512, 64, (0x1ffU & ((VL_SHIFTL_III(9,32,32, 
                                                       ((IData)(1U) 
                                                        + (IData)(__Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__1__lane)), 6U) 
                                         - (IData)(1U)) 
                                        - (IData)(0x3fU))), vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__lane_addr, __Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__1__addr);
    __Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__2__addr = 0x2040ULL;
    __Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__2__lane = 1U;
    VL_ASSIGNSEL_WQ(512, 64, (0x1ffU & ((VL_SHIFTL_III(9,32,32, 
                                                       ((IData)(1U) 
                                                        + (IData)(__Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__2__lane)), 6U) 
                                         - (IData)(1U)) 
                                        - (IData)(0x3fU))), vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__lane_addr, __Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__2__addr);
    __Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__3__addr = 0x3000ULL;
    __Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__3__lane = 2U;
    VL_ASSIGNSEL_WQ(512, 64, (0x1ffU & ((VL_SHIFTL_III(9,32,32, 
                                                       ((IData)(1U) 
                                                        + (IData)(__Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__3__lane)), 6U) 
                                         - (IData)(1U)) 
                                        - (IData)(0x3fU))), vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__lane_addr, __Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__3__addr);
    __Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__4__addr = 0x3008ULL;
    __Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__4__lane = 3U;
    VL_ASSIGNSEL_WQ(512, 64, (0x1ffU & ((VL_SHIFTL_III(9,32,32, 
                                                       ((IData)(1U) 
                                                        + (IData)(__Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__4__lane)), 6U) 
                                         - (IData)(1U)) 
                                        - (IData)(0x3fU))), vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__lane_addr, __Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__4__addr);
    __Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__5__addr = 0x4000ULL;
    __Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__5__lane = 4U;
    VL_ASSIGNSEL_WQ(512, 64, (0x1ffU & ((VL_SHIFTL_III(9,32,32, 
                                                       ((IData)(1U) 
                                                        + (IData)(__Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__5__lane)), 6U) 
                                         - (IData)(1U)) 
                                        - (IData)(0x3fU))), vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__lane_addr, __Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__5__addr);
    __Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__6__addr = 0x4000ULL;
    __Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__6__lane = 5U;
    VL_ASSIGNSEL_WQ(512, 64, (0x1ffU & ((VL_SHIFTL_III(9,32,32, 
                                                       ((IData)(1U) 
                                                        + (IData)(__Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__6__lane)), 6U) 
                                         - (IData)(1U)) 
                                        - (IData)(0x3fU))), vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__lane_addr, __Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__6__addr);
    __Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__7__addr = 0x4000ULL;
    __Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__7__lane = 6U;
    VL_ASSIGNSEL_WQ(512, 64, (0x1ffU & ((VL_SHIFTL_III(9,32,32, 
                                                       ((IData)(1U) 
                                                        + (IData)(__Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__7__lane)), 6U) 
                                         - (IData)(1U)) 
                                        - (IData)(0x3fU))), vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__lane_addr, __Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__7__addr);
    __Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__8__addr = 0x4000ULL;
    __Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__8__lane = 7U;
    VL_ASSIGNSEL_WQ(512, 64, (0x1ffU & ((VL_SHIFTL_III(9,32,32, 
                                                       ((IData)(1U) 
                                                        + (IData)(__Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__8__lane)), 6U) 
                                         - (IData)(1U)) 
                                        - (IData)(0x3fU))), vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__lane_addr, __Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__8__addr);
    vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__lane_miss = 0xffU;
    vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__any_miss = 1U;
    vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__vlsu_req = 1U;
    co_await vlSelfRef.__VtrigSched_h3013e541__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge rv64g_l1_vlsu_miss_handler_tb.clk)", 
                                                         "rv64g_l1_vlsu_miss_handler_tb.v", 
                                                         174);
    while ((1U & (~ (IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__busy)))) {
        co_await vlSelfRef.__VtrigSched_h3013e541__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge rv64g_l1_vlsu_miss_handler_tb.clk)", 
                                                             "rv64g_l1_vlsu_miss_handler_tb.v", 
                                                             177);
    }
    rv64g_l1_vlsu_miss_handler_tb__DOT__refill_count = 0U;
    while ((1U & (~ (IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__ready_for_replay)))) {
        co_await vlSelfRef.__VtrigSched_h3013e541__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge rv64g_l1_vlsu_miss_handler_tb.clk)", 
                                                             "rv64g_l1_vlsu_miss_handler_tb.v", 
                                                             182);
        if (VL_UNLIKELY((vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__refill_req))) {
            VL_WRITEF_NX("  Refill %0d: addr 0x%x\n",0,
                         32,rv64g_l1_vlsu_miss_handler_tb__DOT__refill_count,
                         64,vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__refill_addr);
            rv64g_l1_vlsu_miss_handler_tb__DOT__refill_count 
                = ((IData)(1U) + rv64g_l1_vlsu_miss_handler_tb__DOT__refill_count);
            vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__refill_done = 1U;
            co_await vlSelfRef.__VtrigSched_h3013e541__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge rv64g_l1_vlsu_miss_handler_tb.clk)", 
                                                                 "rv64g_l1_vlsu_miss_handler_tb.v", 
                                                                 189);
            vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__refill_done = 0U;
        }
    }
    VL_WRITEF_NX("  Total refills: %0d\n",0,32,rv64g_l1_vlsu_miss_handler_tb__DOT__refill_count);
    if ((3U != rv64g_l1_vlsu_miss_handler_tb__DOT__refill_count)) {
        VL_WRITEF_NX("  FAIL: Expected 3 unique refills, got %11d\n",0,
                     32,rv64g_l1_vlsu_miss_handler_tb__DOT__refill_count);
        rv64g_l1_vlsu_miss_handler_tb__DOT__test_pass = 0U;
    } else {
        VL_WRITEF_NX("  PASS: Correctly detected 3 unique lines\n",0);
    }
    vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__vlsu_req = 0U;
    vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__lane_miss = 0U;
    vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__any_miss = 0U;
    co_await vlSelfRef.__VtrigSched_h3013e541__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge rv64g_l1_vlsu_miss_handler_tb.clk)", 
                                                         "rv64g_l1_vlsu_miss_handler_tb.v", 
                                                         209);
    co_await vlSelfRef.__VtrigSched_h3013e541__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge rv64g_l1_vlsu_miss_handler_tb.clk)", 
                                                         "rv64g_l1_vlsu_miss_handler_tb.v", 
                                                         209);
    co_await vlSelfRef.__VtrigSched_h3013e541__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge rv64g_l1_vlsu_miss_handler_tb.clk)", 
                                                         "rv64g_l1_vlsu_miss_handler_tb.v", 
                                                         209);
    co_await vlSelfRef.__VtrigSched_h3013e541__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge rv64g_l1_vlsu_miss_handler_tb.clk)", 
                                                         "rv64g_l1_vlsu_miss_handler_tb.v", 
                                                         209);
    co_await vlSelfRef.__VtrigSched_h3013e541__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge rv64g_l1_vlsu_miss_handler_tb.clk)", 
                                                         "rv64g_l1_vlsu_miss_handler_tb.v", 
                                                         209);
    rv64g_l1_vlsu_miss_handler_tb__DOT__test_num = 3U;
    VL_WRITEF_NX("\nTest %0d: All lanes miss same line (deduplication)\n",0,
                 32,rv64g_l1_vlsu_miss_handler_tb__DOT__test_num);
    __Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__9__addr = 0x5000ULL;
    __Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__9__lane = 0U;
    VL_ASSIGNSEL_WQ(512, 64, (0x1ffU & ((VL_SHIFTL_III(9,32,32, 
                                                       ((IData)(1U) 
                                                        + (IData)(__Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__9__lane)), 6U) 
                                         - (IData)(1U)) 
                                        - (IData)(0x3fU))), vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__lane_addr, __Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__9__addr);
    __Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__9__addr = 0x5008ULL;
    __Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__9__lane = 1U;
    VL_ASSIGNSEL_WQ(512, 64, (0x1ffU & ((VL_SHIFTL_III(9,32,32, 
                                                       ((IData)(1U) 
                                                        + (IData)(__Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__9__lane)), 6U) 
                                         - (IData)(1U)) 
                                        - (IData)(0x3fU))), vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__lane_addr, __Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__9__addr);
    __Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__9__addr = 0x5010ULL;
    __Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__9__lane = 2U;
    VL_ASSIGNSEL_WQ(512, 64, (0x1ffU & ((VL_SHIFTL_III(9,32,32, 
                                                       ((IData)(1U) 
                                                        + (IData)(__Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__9__lane)), 6U) 
                                         - (IData)(1U)) 
                                        - (IData)(0x3fU))), vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__lane_addr, __Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__9__addr);
    __Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__9__addr = 0x5018ULL;
    __Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__9__lane = 3U;
    VL_ASSIGNSEL_WQ(512, 64, (0x1ffU & ((VL_SHIFTL_III(9,32,32, 
                                                       ((IData)(1U) 
                                                        + (IData)(__Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__9__lane)), 6U) 
                                         - (IData)(1U)) 
                                        - (IData)(0x3fU))), vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__lane_addr, __Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__9__addr);
    __Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__9__addr = 0x5020ULL;
    __Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__9__lane = 4U;
    VL_ASSIGNSEL_WQ(512, 64, (0x1ffU & ((VL_SHIFTL_III(9,32,32, 
                                                       ((IData)(1U) 
                                                        + (IData)(__Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__9__lane)), 6U) 
                                         - (IData)(1U)) 
                                        - (IData)(0x3fU))), vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__lane_addr, __Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__9__addr);
    __Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__9__addr = 0x5028ULL;
    __Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__9__lane = 5U;
    VL_ASSIGNSEL_WQ(512, 64, (0x1ffU & ((VL_SHIFTL_III(9,32,32, 
                                                       ((IData)(1U) 
                                                        + (IData)(__Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__9__lane)), 6U) 
                                         - (IData)(1U)) 
                                        - (IData)(0x3fU))), vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__lane_addr, __Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__9__addr);
    __Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__9__addr = 0x5030ULL;
    __Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__9__lane = 6U;
    VL_ASSIGNSEL_WQ(512, 64, (0x1ffU & ((VL_SHIFTL_III(9,32,32, 
                                                       ((IData)(1U) 
                                                        + (IData)(__Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__9__lane)), 6U) 
                                         - (IData)(1U)) 
                                        - (IData)(0x3fU))), vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__lane_addr, __Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__9__addr);
    __Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__9__addr = 0x5038ULL;
    __Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__9__lane = 7U;
    VL_ASSIGNSEL_WQ(512, 64, (0x1ffU & ((VL_SHIFTL_III(9,32,32, 
                                                       ((IData)(1U) 
                                                        + (IData)(__Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__9__lane)), 6U) 
                                         - (IData)(1U)) 
                                        - (IData)(0x3fU))), vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__lane_addr, __Vtask_rv64g_l1_vlsu_miss_handler_tb__DOT__set_lane_addr__9__addr);
    vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__lane_miss = 0xffU;
    vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__any_miss = 1U;
    vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__vlsu_req = 1U;
    co_await vlSelfRef.__VtrigSched_h3013e541__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge rv64g_l1_vlsu_miss_handler_tb.clk)", 
                                                         "rv64g_l1_vlsu_miss_handler_tb.v", 
                                                         226);
    while ((1U & (~ (IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__busy)))) {
        co_await vlSelfRef.__VtrigSched_h3013e541__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge rv64g_l1_vlsu_miss_handler_tb.clk)", 
                                                             "rv64g_l1_vlsu_miss_handler_tb.v", 
                                                             227);
    }
    rv64g_l1_vlsu_miss_handler_tb__DOT__refill_count = 0U;
    while ((1U & (~ (IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__ready_for_replay)))) {
        co_await vlSelfRef.__VtrigSched_h3013e541__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge rv64g_l1_vlsu_miss_handler_tb.clk)", 
                                                             "rv64g_l1_vlsu_miss_handler_tb.v", 
                                                             231);
        if (VL_UNLIKELY((vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__refill_req))) {
            VL_WRITEF_NX("  Refill: addr 0x%x\n",0,
                         64,vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__refill_addr);
            rv64g_l1_vlsu_miss_handler_tb__DOT__refill_count 
                = ((IData)(1U) + rv64g_l1_vlsu_miss_handler_tb__DOT__refill_count);
            vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__refill_done = 1U;
            co_await vlSelfRef.__VtrigSched_h3013e541__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge rv64g_l1_vlsu_miss_handler_tb.clk)", 
                                                                 "rv64g_l1_vlsu_miss_handler_tb.v", 
                                                                 236);
            vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__refill_done = 0U;
        }
    }
    if ((1U != rv64g_l1_vlsu_miss_handler_tb__DOT__refill_count)) {
        VL_WRITEF_NX("  FAIL: Expected 1 refill (deduplication), got %11d\n",0,
                     32,rv64g_l1_vlsu_miss_handler_tb__DOT__refill_count);
        rv64g_l1_vlsu_miss_handler_tb__DOT__test_pass = 0U;
    } else {
        VL_WRITEF_NX("  PASS: Correctly deduplicated to 1 refill\n",0);
    }
    vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__vlsu_req = 0U;
    vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__lane_miss = 0U;
    vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__any_miss = 0U;
    co_await vlSelfRef.__VtrigSched_h3013e541__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge rv64g_l1_vlsu_miss_handler_tb.clk)", 
                                                         "rv64g_l1_vlsu_miss_handler_tb.v", 
                                                         252);
    co_await vlSelfRef.__VtrigSched_h3013e541__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge rv64g_l1_vlsu_miss_handler_tb.clk)", 
                                                         "rv64g_l1_vlsu_miss_handler_tb.v", 
                                                         252);
    co_await vlSelfRef.__VtrigSched_h3013e541__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge rv64g_l1_vlsu_miss_handler_tb.clk)", 
                                                         "rv64g_l1_vlsu_miss_handler_tb.v", 
                                                         252);
    co_await vlSelfRef.__VtrigSched_h3013e541__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge rv64g_l1_vlsu_miss_handler_tb.clk)", 
                                                         "rv64g_l1_vlsu_miss_handler_tb.v", 
                                                         252);
    co_await vlSelfRef.__VtrigSched_h3013e541__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge rv64g_l1_vlsu_miss_handler_tb.clk)", 
                                                         "rv64g_l1_vlsu_miss_handler_tb.v", 
                                                         252);
    VL_WRITEF_NX("\n=================================\n",0);
    if (rv64g_l1_vlsu_miss_handler_tb__DOT__test_pass) {
        VL_WRITEF_NX("SUCCESS: All tests passed!\n",0);
    } else {
        VL_WRITEF_NX("FAILURE: Some tests failed\n",0);
    }
    VL_WRITEF_NX("=================================\n",0);
    VL_FINISH_MT("rv64g_l1_vlsu_miss_handler_tb.v", 264, "");
}

VL_INLINE_OPT VlCoroutine Vrv64g_l1_vlsu_miss_handler_tb___024root___eval_initial__TOP__Vtiming__1(Vrv64g_l1_vlsu_miss_handler_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv64g_l1_vlsu_miss_handler_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vrv64g_l1_vlsu_miss_handler_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x2faf080ULL, 
                                         nullptr, "rv64g_l1_vlsu_miss_handler_tb.v", 
                                         269);
    VL_WRITEF_NX("TIMEOUT: Test did not complete\n",0);
    VL_FINISH_MT("rv64g_l1_vlsu_miss_handler_tb.v", 271, "");
}

void Vrv64g_l1_vlsu_miss_handler_tb___024root___act_sequent__TOP__0(Vrv64g_l1_vlsu_miss_handler_tb___024root* vlSelf);

void Vrv64g_l1_vlsu_miss_handler_tb___024root___eval_act(Vrv64g_l1_vlsu_miss_handler_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv64g_l1_vlsu_miss_handler_tb___024root___eval_act\n"); );
    Vrv64g_l1_vlsu_miss_handler_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vrv64g_l1_vlsu_miss_handler_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vrv64g_l1_vlsu_miss_handler_tb___024root___act_sequent__TOP__0(Vrv64g_l1_vlsu_miss_handler_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv64g_l1_vlsu_miss_handler_tb___024root___act_sequent__TOP__0\n"); );
    Vrv64g_l1_vlsu_miss_handler_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*57:0*/ rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__lane_line_addr;
    rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__lane_line_addr = 0;
    CData/*0:0*/ rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_dup;
    rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_dup = 0;
    // Body
    vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_valid_n 
        = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_valid_q;
    vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_count_n 
        = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_count_q;
    vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_n[0U] 
        = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_q
        [0U];
    vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_n[1U] 
        = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_q
        [1U];
    vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_n[2U] 
        = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_q
        [2U];
    vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_n[3U] 
        = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_q
        [3U];
    vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_n[4U] 
        = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_q
        [4U];
    vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_n[5U] 
        = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_q
        [5U];
    vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_n[6U] 
        = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_q
        [6U];
    vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_n[7U] 
        = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_q
        [7U];
    rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__lane_line_addr = 0ULL;
    rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_dup = 0U;
    if ((1U == (IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__state_q))) {
        vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_valid_n = 0U;
        vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_count_n = 0U;
        if ((1U & (IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__lane_miss))) {
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__get_line_addr__10__addr 
                = (((QData)((IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__lane_addr[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__lane_addr[0U])));
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__get_line_addr__10__Vfuncout 
                = (vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__get_line_addr__10__addr 
                   >> 6U);
            rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__lane_line_addr 
                = vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__get_line_addr__10__Vfuncout;
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr7 
                = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_n
                [7U];
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr6 
                = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_n
                [6U];
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr5 
                = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_n
                [5U];
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr4 
                = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_n
                [4U];
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr3 
                = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_n
                [3U];
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr2 
                = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_n
                [2U];
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr1 
                = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_n
                [1U];
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr0 
                = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_n
                [0U];
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__valid 
                = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_valid_n;
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr 
                = rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__lane_line_addr;
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__Vfuncout 
                = (((((((((IData)(vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__valid) 
                          & (vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr 
                             == vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr0)) 
                         | (((IData)(vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__valid) 
                             >> 1U) & (vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr 
                                       == vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr1))) 
                        | (((IData)(vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__valid) 
                            >> 2U) & (vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr 
                                      == vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr2))) 
                       | (((IData)(vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__valid) 
                           >> 3U) & (vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr 
                                     == vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr3))) 
                      | (((IData)(vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__valid) 
                          >> 4U) & (vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr 
                                    == vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr4))) 
                     | (((IData)(vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__valid) 
                         >> 5U) & (vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr 
                                   == vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr5))) 
                    | (((IData)(vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__valid) 
                        >> 6U) & (vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr 
                                  == vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr6))) 
                   | (((IData)(vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__valid) 
                       >> 7U) & (vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr 
                                 == vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr7)));
            rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_dup 
                = vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__Vfuncout;
            if (((~ (IData)(rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_dup)) 
                 & (8U > (IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_count_n)))) {
                vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_n[(7U 
                                                                                & (IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_count_n))] 
                    = rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__lane_line_addr;
                vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_valid_n 
                    = ((IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_valid_n) 
                       | (0xffU & ((IData)(1U) << (7U 
                                                   & (IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_count_n)))));
                vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_count_n 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_count_n)));
            }
        }
        if ((2U & (IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__lane_miss))) {
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__get_line_addr__10__addr 
                = (((QData)((IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__lane_addr[3U])) 
                    << 0x20U) | (QData)((IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__lane_addr[2U])));
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__get_line_addr__10__Vfuncout 
                = (vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__get_line_addr__10__addr 
                   >> 6U);
            rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__lane_line_addr 
                = vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__get_line_addr__10__Vfuncout;
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr7 
                = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_n
                [7U];
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr6 
                = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_n
                [6U];
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr5 
                = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_n
                [5U];
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr4 
                = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_n
                [4U];
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr3 
                = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_n
                [3U];
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr2 
                = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_n
                [2U];
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr1 
                = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_n
                [1U];
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr0 
                = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_n
                [0U];
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__valid 
                = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_valid_n;
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr 
                = rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__lane_line_addr;
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__Vfuncout 
                = (((((((((IData)(vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__valid) 
                          & (vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr 
                             == vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr0)) 
                         | (((IData)(vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__valid) 
                             >> 1U) & (vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr 
                                       == vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr1))) 
                        | (((IData)(vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__valid) 
                            >> 2U) & (vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr 
                                      == vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr2))) 
                       | (((IData)(vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__valid) 
                           >> 3U) & (vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr 
                                     == vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr3))) 
                      | (((IData)(vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__valid) 
                          >> 4U) & (vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr 
                                    == vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr4))) 
                     | (((IData)(vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__valid) 
                         >> 5U) & (vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr 
                                   == vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr5))) 
                    | (((IData)(vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__valid) 
                        >> 6U) & (vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr 
                                  == vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr6))) 
                   | (((IData)(vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__valid) 
                       >> 7U) & (vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr 
                                 == vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr7)));
            rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_dup 
                = vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__Vfuncout;
            if (((~ (IData)(rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_dup)) 
                 & (8U > (IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_count_n)))) {
                vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_n[(7U 
                                                                                & (IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_count_n))] 
                    = rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__lane_line_addr;
                vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_valid_n 
                    = ((IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_valid_n) 
                       | (0xffU & ((IData)(1U) << (7U 
                                                   & (IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_count_n)))));
                vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_count_n 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_count_n)));
            }
        }
        if ((4U & (IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__lane_miss))) {
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__get_line_addr__10__addr 
                = (((QData)((IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__lane_addr[5U])) 
                    << 0x20U) | (QData)((IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__lane_addr[4U])));
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__get_line_addr__10__Vfuncout 
                = (vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__get_line_addr__10__addr 
                   >> 6U);
            rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__lane_line_addr 
                = vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__get_line_addr__10__Vfuncout;
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr7 
                = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_n
                [7U];
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr6 
                = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_n
                [6U];
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr5 
                = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_n
                [5U];
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr4 
                = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_n
                [4U];
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr3 
                = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_n
                [3U];
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr2 
                = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_n
                [2U];
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr1 
                = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_n
                [1U];
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr0 
                = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_n
                [0U];
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__valid 
                = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_valid_n;
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr 
                = rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__lane_line_addr;
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__Vfuncout 
                = (((((((((IData)(vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__valid) 
                          & (vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr 
                             == vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr0)) 
                         | (((IData)(vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__valid) 
                             >> 1U) & (vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr 
                                       == vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr1))) 
                        | (((IData)(vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__valid) 
                            >> 2U) & (vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr 
                                      == vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr2))) 
                       | (((IData)(vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__valid) 
                           >> 3U) & (vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr 
                                     == vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr3))) 
                      | (((IData)(vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__valid) 
                          >> 4U) & (vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr 
                                    == vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr4))) 
                     | (((IData)(vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__valid) 
                         >> 5U) & (vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr 
                                   == vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr5))) 
                    | (((IData)(vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__valid) 
                        >> 6U) & (vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr 
                                  == vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr6))) 
                   | (((IData)(vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__valid) 
                       >> 7U) & (vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr 
                                 == vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr7)));
            rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_dup 
                = vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__Vfuncout;
            if (((~ (IData)(rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_dup)) 
                 & (8U > (IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_count_n)))) {
                vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_n[(7U 
                                                                                & (IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_count_n))] 
                    = rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__lane_line_addr;
                vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_valid_n 
                    = ((IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_valid_n) 
                       | (0xffU & ((IData)(1U) << (7U 
                                                   & (IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_count_n)))));
                vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_count_n 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_count_n)));
            }
        }
        if ((8U & (IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__lane_miss))) {
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__get_line_addr__10__addr 
                = (((QData)((IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__lane_addr[7U])) 
                    << 0x20U) | (QData)((IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__lane_addr[6U])));
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__get_line_addr__10__Vfuncout 
                = (vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__get_line_addr__10__addr 
                   >> 6U);
            rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__lane_line_addr 
                = vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__get_line_addr__10__Vfuncout;
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr7 
                = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_n
                [7U];
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr6 
                = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_n
                [6U];
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr5 
                = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_n
                [5U];
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr4 
                = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_n
                [4U];
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr3 
                = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_n
                [3U];
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr2 
                = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_n
                [2U];
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr1 
                = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_n
                [1U];
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr0 
                = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_n
                [0U];
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__valid 
                = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_valid_n;
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr 
                = rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__lane_line_addr;
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__Vfuncout 
                = (((((((((IData)(vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__valid) 
                          & (vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr 
                             == vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr0)) 
                         | (((IData)(vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__valid) 
                             >> 1U) & (vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr 
                                       == vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr1))) 
                        | (((IData)(vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__valid) 
                            >> 2U) & (vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr 
                                      == vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr2))) 
                       | (((IData)(vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__valid) 
                           >> 3U) & (vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr 
                                     == vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr3))) 
                      | (((IData)(vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__valid) 
                          >> 4U) & (vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr 
                                    == vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr4))) 
                     | (((IData)(vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__valid) 
                         >> 5U) & (vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr 
                                   == vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr5))) 
                    | (((IData)(vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__valid) 
                        >> 6U) & (vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr 
                                  == vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr6))) 
                   | (((IData)(vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__valid) 
                       >> 7U) & (vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr 
                                 == vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr7)));
            rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_dup 
                = vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__Vfuncout;
            if (((~ (IData)(rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_dup)) 
                 & (8U > (IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_count_n)))) {
                vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_n[(7U 
                                                                                & (IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_count_n))] 
                    = rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__lane_line_addr;
                vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_valid_n 
                    = ((IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_valid_n) 
                       | (0xffU & ((IData)(1U) << (7U 
                                                   & (IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_count_n)))));
                vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_count_n 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_count_n)));
            }
        }
        if ((0x10U & (IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__lane_miss))) {
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__get_line_addr__10__addr 
                = (((QData)((IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__lane_addr[9U])) 
                    << 0x20U) | (QData)((IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__lane_addr[8U])));
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__get_line_addr__10__Vfuncout 
                = (vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__get_line_addr__10__addr 
                   >> 6U);
            rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__lane_line_addr 
                = vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__get_line_addr__10__Vfuncout;
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr7 
                = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_n
                [7U];
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr6 
                = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_n
                [6U];
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr5 
                = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_n
                [5U];
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr4 
                = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_n
                [4U];
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr3 
                = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_n
                [3U];
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr2 
                = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_n
                [2U];
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr1 
                = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_n
                [1U];
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr0 
                = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_n
                [0U];
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__valid 
                = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_valid_n;
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr 
                = rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__lane_line_addr;
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__Vfuncout 
                = (((((((((IData)(vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__valid) 
                          & (vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr 
                             == vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr0)) 
                         | (((IData)(vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__valid) 
                             >> 1U) & (vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr 
                                       == vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr1))) 
                        | (((IData)(vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__valid) 
                            >> 2U) & (vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr 
                                      == vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr2))) 
                       | (((IData)(vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__valid) 
                           >> 3U) & (vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr 
                                     == vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr3))) 
                      | (((IData)(vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__valid) 
                          >> 4U) & (vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr 
                                    == vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr4))) 
                     | (((IData)(vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__valid) 
                         >> 5U) & (vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr 
                                   == vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr5))) 
                    | (((IData)(vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__valid) 
                        >> 6U) & (vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr 
                                  == vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr6))) 
                   | (((IData)(vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__valid) 
                       >> 7U) & (vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr 
                                 == vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr7)));
            rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_dup 
                = vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__Vfuncout;
            if (((~ (IData)(rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_dup)) 
                 & (8U > (IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_count_n)))) {
                vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_n[(7U 
                                                                                & (IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_count_n))] 
                    = rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__lane_line_addr;
                vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_valid_n 
                    = ((IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_valid_n) 
                       | (0xffU & ((IData)(1U) << (7U 
                                                   & (IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_count_n)))));
                vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_count_n 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_count_n)));
            }
        }
        if ((0x20U & (IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__lane_miss))) {
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__get_line_addr__10__addr 
                = (((QData)((IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__lane_addr[0xbU])) 
                    << 0x20U) | (QData)((IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__lane_addr[0xaU])));
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__get_line_addr__10__Vfuncout 
                = (vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__get_line_addr__10__addr 
                   >> 6U);
            rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__lane_line_addr 
                = vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__get_line_addr__10__Vfuncout;
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr7 
                = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_n
                [7U];
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr6 
                = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_n
                [6U];
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr5 
                = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_n
                [5U];
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr4 
                = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_n
                [4U];
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr3 
                = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_n
                [3U];
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr2 
                = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_n
                [2U];
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr1 
                = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_n
                [1U];
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr0 
                = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_n
                [0U];
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__valid 
                = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_valid_n;
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr 
                = rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__lane_line_addr;
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__Vfuncout 
                = (((((((((IData)(vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__valid) 
                          & (vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr 
                             == vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr0)) 
                         | (((IData)(vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__valid) 
                             >> 1U) & (vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr 
                                       == vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr1))) 
                        | (((IData)(vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__valid) 
                            >> 2U) & (vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr 
                                      == vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr2))) 
                       | (((IData)(vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__valid) 
                           >> 3U) & (vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr 
                                     == vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr3))) 
                      | (((IData)(vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__valid) 
                          >> 4U) & (vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr 
                                    == vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr4))) 
                     | (((IData)(vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__valid) 
                         >> 5U) & (vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr 
                                   == vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr5))) 
                    | (((IData)(vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__valid) 
                        >> 6U) & (vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr 
                                  == vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr6))) 
                   | (((IData)(vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__valid) 
                       >> 7U) & (vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr 
                                 == vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr7)));
            rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_dup 
                = vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__Vfuncout;
            if (((~ (IData)(rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_dup)) 
                 & (8U > (IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_count_n)))) {
                vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_n[(7U 
                                                                                & (IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_count_n))] 
                    = rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__lane_line_addr;
                vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_valid_n 
                    = ((IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_valid_n) 
                       | (0xffU & ((IData)(1U) << (7U 
                                                   & (IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_count_n)))));
                vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_count_n 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_count_n)));
            }
        }
        if ((0x40U & (IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__lane_miss))) {
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__get_line_addr__10__addr 
                = (((QData)((IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__lane_addr[0xdU])) 
                    << 0x20U) | (QData)((IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__lane_addr[0xcU])));
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__get_line_addr__10__Vfuncout 
                = (vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__get_line_addr__10__addr 
                   >> 6U);
            rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__lane_line_addr 
                = vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__get_line_addr__10__Vfuncout;
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr7 
                = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_n
                [7U];
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr6 
                = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_n
                [6U];
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr5 
                = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_n
                [5U];
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr4 
                = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_n
                [4U];
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr3 
                = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_n
                [3U];
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr2 
                = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_n
                [2U];
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr1 
                = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_n
                [1U];
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr0 
                = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_n
                [0U];
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__valid 
                = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_valid_n;
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr 
                = rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__lane_line_addr;
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__Vfuncout 
                = (((((((((IData)(vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__valid) 
                          & (vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr 
                             == vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr0)) 
                         | (((IData)(vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__valid) 
                             >> 1U) & (vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr 
                                       == vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr1))) 
                        | (((IData)(vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__valid) 
                            >> 2U) & (vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr 
                                      == vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr2))) 
                       | (((IData)(vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__valid) 
                           >> 3U) & (vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr 
                                     == vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr3))) 
                      | (((IData)(vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__valid) 
                          >> 4U) & (vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr 
                                    == vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr4))) 
                     | (((IData)(vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__valid) 
                         >> 5U) & (vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr 
                                   == vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr5))) 
                    | (((IData)(vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__valid) 
                        >> 6U) & (vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr 
                                  == vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr6))) 
                   | (((IData)(vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__valid) 
                       >> 7U) & (vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr 
                                 == vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr7)));
            rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_dup 
                = vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__Vfuncout;
            if (((~ (IData)(rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_dup)) 
                 & (8U > (IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_count_n)))) {
                vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_n[(7U 
                                                                                & (IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_count_n))] 
                    = rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__lane_line_addr;
                vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_valid_n 
                    = ((IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_valid_n) 
                       | (0xffU & ((IData)(1U) << (7U 
                                                   & (IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_count_n)))));
                vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_count_n 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_count_n)));
            }
        }
        if ((0x80U & (IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__lane_miss))) {
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__get_line_addr__10__addr 
                = (((QData)((IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__lane_addr[0xfU])) 
                    << 0x20U) | (QData)((IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__lane_addr[0xeU])));
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__get_line_addr__10__Vfuncout 
                = (vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__get_line_addr__10__addr 
                   >> 6U);
            rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__lane_line_addr 
                = vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__get_line_addr__10__Vfuncout;
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr7 
                = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_n
                [7U];
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr6 
                = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_n
                [6U];
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr5 
                = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_n
                [5U];
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr4 
                = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_n
                [4U];
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr3 
                = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_n
                [3U];
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr2 
                = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_n
                [2U];
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr1 
                = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_n
                [1U];
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr0 
                = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_n
                [0U];
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__valid 
                = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_valid_n;
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr 
                = rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__lane_line_addr;
            vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__Vfuncout 
                = (((((((((IData)(vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__valid) 
                          & (vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr 
                             == vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr0)) 
                         | (((IData)(vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__valid) 
                             >> 1U) & (vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr 
                                       == vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr1))) 
                        | (((IData)(vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__valid) 
                            >> 2U) & (vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr 
                                      == vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr2))) 
                       | (((IData)(vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__valid) 
                           >> 3U) & (vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr 
                                     == vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr3))) 
                      | (((IData)(vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__valid) 
                          >> 4U) & (vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr 
                                    == vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr4))) 
                     | (((IData)(vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__valid) 
                         >> 5U) & (vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr 
                                   == vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr5))) 
                    | (((IData)(vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__valid) 
                        >> 6U) & (vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr 
                                  == vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr6))) 
                   | (((IData)(vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__valid) 
                       >> 7U) & (vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr 
                                 == vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr7)));
            rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_dup 
                = vlSelfRef.__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__Vfuncout;
            if (((~ (IData)(rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_dup)) 
                 & (8U > (IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_count_n)))) {
                vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_n[(7U 
                                                                                & (IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_count_n))] 
                    = rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__lane_line_addr;
                vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_valid_n 
                    = ((IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_valid_n) 
                       | (0xffU & ((IData)(1U) << (7U 
                                                   & (IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_count_n)))));
                vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_count_n 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_count_n)));
            }
        }
    }
    vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__refill_idx_n 
        = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__refill_idx_q;
    if ((1U & (~ ((IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__state_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__state_q))) {
            if ((1U & (IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__state_q))) {
                if (vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__refill_done) {
                    if ((((IData)(1U) + (IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__refill_idx_q)) 
                         < (IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_count_q))) {
                        vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__refill_idx_n 
                            = (0xfU & ((IData)(1U) 
                                       + (IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__refill_idx_q)));
                    }
                }
            }
        } else if ((1U & (IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__state_q))) {
            if ((0U < (IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_count_n))) {
                vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__refill_idx_n = 0U;
            }
        }
    }
    vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__state_n 
        = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__state_q;
    if ((4U & (IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__state_q))) {
        if ((2U & (IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__state_q))) {
            vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__state_n = 0U;
        } else if ((1U & (IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__state_q))) {
            vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__state_n = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__vlsu_req)))) {
            vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__state_n = 0U;
        }
    } else if ((2U & (IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__state_q))) {
        if ((1U & (IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__state_q))) {
            if (vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__refill_done) {
                vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__state_n 
                    = ((((IData)(1U) + (IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__refill_idx_q)) 
                        < (IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_count_q))
                        ? 2U : 4U);
            }
        } else {
            vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__state_n = 3U;
        }
    } else if ((1U & (IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__state_q))) {
        vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__state_n 
            = ((0U < (IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_count_n))
                ? 2U : 0U);
    } else if (((IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__vlsu_req) 
                & (IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__any_miss))) {
        vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__state_n = 1U;
    }
}

void Vrv64g_l1_vlsu_miss_handler_tb___024root___nba_sequent__TOP__0(Vrv64g_l1_vlsu_miss_handler_tb___024root* vlSelf);

void Vrv64g_l1_vlsu_miss_handler_tb___024root___eval_nba(Vrv64g_l1_vlsu_miss_handler_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv64g_l1_vlsu_miss_handler_tb___024root___eval_nba\n"); );
    Vrv64g_l1_vlsu_miss_handler_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrv64g_l1_vlsu_miss_handler_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrv64g_l1_vlsu_miss_handler_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vrv64g_l1_vlsu_miss_handler_tb___024root___nba_sequent__TOP__0(Vrv64g_l1_vlsu_miss_handler_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv64g_l1_vlsu_miss_handler_tb___024root___nba_sequent__TOP__0\n"); );
    Vrv64g_l1_vlsu_miss_handler_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*57:0*/ __VdlyVal__rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_q__v0;
    __VdlyVal__rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_q__v0 = 0;
    CData/*0:0*/ __VdlySet__rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_q__v0;
    __VdlySet__rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_q__v0 = 0;
    QData/*57:0*/ __VdlyVal__rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_q__v1;
    __VdlyVal__rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_q__v1 = 0;
    QData/*57:0*/ __VdlyVal__rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_q__v2;
    __VdlyVal__rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_q__v2 = 0;
    QData/*57:0*/ __VdlyVal__rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_q__v3;
    __VdlyVal__rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_q__v3 = 0;
    QData/*57:0*/ __VdlyVal__rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_q__v4;
    __VdlyVal__rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_q__v4 = 0;
    QData/*57:0*/ __VdlyVal__rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_q__v5;
    __VdlyVal__rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_q__v5 = 0;
    QData/*57:0*/ __VdlyVal__rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_q__v6;
    __VdlyVal__rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_q__v6 = 0;
    QData/*57:0*/ __VdlyVal__rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_q__v7;
    __VdlyVal__rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_q__v7 = 0;
    CData/*0:0*/ __VdlySet__rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_q__v8;
    __VdlySet__rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_q__v8 = 0;
    // Body
    __VdlySet__rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_q__v0 = 0U;
    __VdlySet__rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_q__v8 = 0U;
    if (vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__rst_n) {
        if ((1U == (IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__state_q))) {
            __VdlyVal__rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_q__v0 
                = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_n
                [0U];
            __VdlySet__rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_q__v0 = 1U;
            __VdlyVal__rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_q__v1 
                = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_n
                [1U];
            __VdlyVal__rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_q__v2 
                = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_n
                [2U];
            __VdlyVal__rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_q__v3 
                = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_n
                [3U];
            __VdlyVal__rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_q__v4 
                = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_n
                [4U];
            __VdlyVal__rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_q__v5 
                = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_n
                [5U];
            __VdlyVal__rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_q__v6 
                = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_n
                [6U];
            __VdlyVal__rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_q__v7 
                = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_n
                [7U];
        }
        vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__refill_idx_q 
            = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__refill_idx_n;
        vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_valid_q 
            = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_valid_n;
        vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_count_q 
            = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_count_n;
        vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__state_q 
            = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__state_n;
    } else {
        __VdlySet__rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_q__v8 = 1U;
        vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__refill_idx_q = 0U;
        vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_valid_q = 0U;
        vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_count_q = 0U;
        vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__state_q = 0U;
    }
    if (__VdlySet__rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_q__v0) {
        vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_q[0U] 
            = __VdlyVal__rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_q__v0;
        vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_q[1U] 
            = __VdlyVal__rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_q__v1;
        vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_q[2U] 
            = __VdlyVal__rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_q__v2;
        vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_q[3U] 
            = __VdlyVal__rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_q__v3;
        vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_q[4U] 
            = __VdlyVal__rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_q__v4;
        vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_q[5U] 
            = __VdlyVal__rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_q__v5;
        vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_q[6U] 
            = __VdlyVal__rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_q__v6;
        vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_q[7U] 
            = __VdlyVal__rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_q__v7;
    }
    if (__VdlySet__rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_q__v8) {
        vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_q[0U] = 0ULL;
        vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_q[1U] = 0ULL;
        vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_q[2U] = 0ULL;
        vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_q[3U] = 0ULL;
        vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_q[4U] = 0ULL;
        vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_q[5U] = 0ULL;
        vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_q[6U] = 0ULL;
        vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_q[7U] = 0ULL;
    }
    vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__ready_for_replay = 0U;
    if ((4U & (IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__state_q))) {
        if ((1U & (~ ((IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__state_q) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__state_q)))) {
                vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__ready_for_replay = 1U;
            }
        }
    }
    vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__busy = 0U;
    vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__refill_req = 0U;
    vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__refill_addr = 0ULL;
    if ((1U & (~ ((IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__state_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__state_q))) {
            vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__busy = 1U;
            if ((1U & (~ (IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__state_q)))) {
                vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__refill_req = 1U;
            }
            vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__refill_addr 
                = ((1U & (IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__state_q))
                    ? (vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_q
                       [(7U & (IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__refill_idx_q))] 
                       << 6U) : (vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_q
                                 [(7U & (IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__refill_idx_q))] 
                                 << 6U));
        } else if ((1U & (IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__state_q))) {
            vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__busy = 1U;
        }
    }
}

void Vrv64g_l1_vlsu_miss_handler_tb___024root___timing_resume(Vrv64g_l1_vlsu_miss_handler_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv64g_l1_vlsu_miss_handler_tb___024root___timing_resume\n"); );
    Vrv64g_l1_vlsu_miss_handler_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h3013e541__0.resume(
                                                   "@(posedge rv64g_l1_vlsu_miss_handler_tb.clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vrv64g_l1_vlsu_miss_handler_tb___024root___timing_commit(Vrv64g_l1_vlsu_miss_handler_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv64g_l1_vlsu_miss_handler_tb___024root___timing_commit\n"); );
    Vrv64g_l1_vlsu_miss_handler_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h3013e541__0.commit(
                                                   "@(posedge rv64g_l1_vlsu_miss_handler_tb.clk)");
    }
}

void Vrv64g_l1_vlsu_miss_handler_tb___024root___eval_triggers__act(Vrv64g_l1_vlsu_miss_handler_tb___024root* vlSelf);

bool Vrv64g_l1_vlsu_miss_handler_tb___024root___eval_phase__act(Vrv64g_l1_vlsu_miss_handler_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv64g_l1_vlsu_miss_handler_tb___024root___eval_phase__act\n"); );
    Vrv64g_l1_vlsu_miss_handler_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vrv64g_l1_vlsu_miss_handler_tb___024root___eval_triggers__act(vlSelf);
    Vrv64g_l1_vlsu_miss_handler_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vrv64g_l1_vlsu_miss_handler_tb___024root___timing_resume(vlSelf);
        Vrv64g_l1_vlsu_miss_handler_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vrv64g_l1_vlsu_miss_handler_tb___024root___eval_phase__nba(Vrv64g_l1_vlsu_miss_handler_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv64g_l1_vlsu_miss_handler_tb___024root___eval_phase__nba\n"); );
    Vrv64g_l1_vlsu_miss_handler_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vrv64g_l1_vlsu_miss_handler_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrv64g_l1_vlsu_miss_handler_tb___024root___dump_triggers__nba(Vrv64g_l1_vlsu_miss_handler_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vrv64g_l1_vlsu_miss_handler_tb___024root___dump_triggers__act(Vrv64g_l1_vlsu_miss_handler_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vrv64g_l1_vlsu_miss_handler_tb___024root___eval(Vrv64g_l1_vlsu_miss_handler_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv64g_l1_vlsu_miss_handler_tb___024root___eval\n"); );
    Vrv64g_l1_vlsu_miss_handler_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vrv64g_l1_vlsu_miss_handler_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("rv64g_l1_vlsu_miss_handler_tb.v", 16, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vrv64g_l1_vlsu_miss_handler_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("rv64g_l1_vlsu_miss_handler_tb.v", 16, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vrv64g_l1_vlsu_miss_handler_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vrv64g_l1_vlsu_miss_handler_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vrv64g_l1_vlsu_miss_handler_tb___024root___eval_debug_assertions(Vrv64g_l1_vlsu_miss_handler_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv64g_l1_vlsu_miss_handler_tb___024root___eval_debug_assertions\n"); );
    Vrv64g_l1_vlsu_miss_handler_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
