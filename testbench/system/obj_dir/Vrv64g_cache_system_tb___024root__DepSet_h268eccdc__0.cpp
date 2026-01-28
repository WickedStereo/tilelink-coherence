// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrv64g_cache_system_tb.h for the primary calling header

#include "Vrv64g_cache_system_tb__pch.h"
#include "Vrv64g_cache_system_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vrv64g_cache_system_tb___024root___eval_initial__TOP__Vtiming__0(Vrv64g_cache_system_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv64g_cache_system_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vrv64g_cache_system_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rv64g_cache_system_tb__DOT__clk = 0U;
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "rv64g_cache_system_tb.v", 
                                             84);
        vlSelfRef.rv64g_cache_system_tb__DOT__clk = 
            (1U & (~ (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__clk)));
    }
}

VL_INLINE_OPT void Vrv64g_cache_system_tb___024root___nba_sequent__TOP__1(Vrv64g_cache_system_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv64g_cache_system_tb___024root___nba_sequent__TOP__1\n"); );
    Vrv64g_cache_system_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*8:0*/ __VdlyVal__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram__v0;
    __VdlyVal__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram__v0 = 0;
    CData/*7:0*/ __VdlyLsb__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram__v0;
    __VdlyLsb__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram__v0 = 0;
    CData/*7:0*/ __VdlyDim0__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram__v0;
    __VdlyDim0__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram__v0;
    __VdlySet__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram__v0 = 0;
    QData/*63:0*/ __VdlyVal__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__data_q__v0;
    __VdlyVal__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__data_q__v0 = 0;
    SData/*10:0*/ __VdlyDim0__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__data_q__v0;
    __VdlyDim0__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__data_q__v0 = 0;
    CData/*3:0*/ __VdlyDim1__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__data_q__v0;
    __VdlyDim1__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__data_q__v0 = 0;
    CData/*0:0*/ __VdlySet__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__data_q__v0;
    __VdlySet__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__data_q__v0 = 0;
    QData/*49:0*/ __VdlyVal__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__tag_q__v0;
    __VdlyVal__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__tag_q__v0 = 0;
    CData/*7:0*/ __VdlyDim0__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__tag_q__v0;
    __VdlyDim0__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__tag_q__v0 = 0;
    CData/*3:0*/ __VdlyDim1__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__tag_q__v0;
    __VdlyDim1__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__tag_q__v0 = 0;
    CData/*0:0*/ __VdlySet__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__tag_q__v0;
    __VdlySet__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__tag_q__v0 = 0;
    // Body
    __VdlySet__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__data_q__v0 = 0U;
    __VdlySet__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram__v0 = 0U;
    __VdlySet__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__tag_q__v0 = 0U;
    if (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__data_we) {
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__b = 8U;
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__be_mask = 0xffffffffffffffffULL;
        __VdlyVal__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__data_q__v0 
            = vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__data_wdata;
        __VdlyDim0__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__data_q__v0 
            = vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__line_idx;
        __VdlyDim1__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__data_q__v0 
            = vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__array_way_sel;
        __VdlySet__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__data_q__v0 = 1U;
    }
    if (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_we) {
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT____Vlvbound_h36ce5b8a__0 
            = ((((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_wr_dirty) 
                 << 8U) | (((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_wr_owner_id) 
                            << 6U) | ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__safe_owner_valid) 
                                      << 5U))) | ((
                                                   ((IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__safe_owner_valid)
                                                     ? 0U
                                                     : (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_wr_sharers)) 
                                                   << 1U) 
                                                  | (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_wr_valid)));
        if ((0x8fU >= (0xffU & ((IData)(9U) * (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_wr_way))))) {
            __VdlyVal__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram__v0 
                = vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT____Vlvbound_h36ce5b8a__0;
            __VdlyLsb__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram__v0 
                = (0xffU & ((IData)(9U) * (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__dir_wr_way)));
            __VdlyDim0__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram__v0 
                = (0xffU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                    >> 6U)));
            __VdlySet__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram__v0 = 1U;
        }
    }
    if (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__tag_we) {
        __VdlyVal__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__tag_q__v0 
            = (vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
               >> 0xeU);
        __VdlyDim0__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__tag_q__v0 
            = (0xffU & (IData)((vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__fsm__DOT__req_addr_q 
                                >> 6U)));
        __VdlyDim1__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__tag_q__v0 
            = vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__array_way_sel;
        __VdlySet__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__tag_q__v0 = 1U;
    }
    if (__VdlySet__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__data_q__v0) {
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__data_q[__VdlyDim1__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__data_q__v0][__VdlyDim0__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__data_q__v0] 
            = __VdlyVal__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__data_q__v0;
    }
    if (__VdlySet__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram__v0) {
        VL_ASSIGNSEL_WI(144, 9, (IData)(__VdlyLsb__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram__v0), 
                        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram
                        [__VdlyDim0__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram__v0], __VdlyVal__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__directory__DOT__ram__v0);
    }
    if (__VdlySet__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__tag_q__v0) {
        vlSelfRef.rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__tag_q[__VdlyDim1__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__tag_q__v0][__VdlyDim0__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__tag_q__v0] 
            = __VdlyVal__rv64g_cache_system_tb__DOT__dut__DOT__l2__DOT__arrays__DOT__tag_q__v0;
    }
}

void Vrv64g_cache_system_tb___024root___timing_resume(Vrv64g_cache_system_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv64g_cache_system_tb___024root___timing_resume\n"); );
    Vrv64g_cache_system_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x8000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h3c4e1133__0.resume(
                                                   "@( rv64g_cache_system_tb.dut.gen_l1[0].l1.gnt_o)");
    }
    if ((0x10000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_ha55c2679__0.resume(
                                                   "@( rv64g_cache_system_tb.dut.gen_l1[0].l1.rvalid_o)");
    }
    if ((0x20000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h15eb0316__0.resume(
                                                   "@( rv64g_cache_system_tb.dut.gen_l1[1].l1.gnt_o)");
    }
    if ((0x40000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h1e159713__0.resume(
                                                   "@( rv64g_cache_system_tb.dut.gen_l1[1].l1.rvalid_o)");
    }
    if ((0x4000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vrv64g_cache_system_tb___024root___timing_commit(Vrv64g_cache_system_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv64g_cache_system_tb___024root___timing_commit\n"); );
    Vrv64g_cache_system_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (0x8000000000ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h3c4e1133__0.commit(
                                                   "@( rv64g_cache_system_tb.dut.gen_l1[0].l1.gnt_o)");
    }
    if ((! (0x10000000000ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_ha55c2679__0.commit(
                                                   "@( rv64g_cache_system_tb.dut.gen_l1[0].l1.rvalid_o)");
    }
    if ((! (0x20000000000ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h15eb0316__0.commit(
                                                   "@( rv64g_cache_system_tb.dut.gen_l1[1].l1.gnt_o)");
    }
    if ((! (0x40000000000ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h1e159713__0.commit(
                                                   "@( rv64g_cache_system_tb.dut.gen_l1[1].l1.rvalid_o)");
    }
}

void Vrv64g_cache_system_tb___024root___eval_triggers__act(Vrv64g_cache_system_tb___024root* vlSelf);
void Vrv64g_cache_system_tb___024root___eval_act(Vrv64g_cache_system_tb___024root* vlSelf);

bool Vrv64g_cache_system_tb___024root___eval_phase__act(Vrv64g_cache_system_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv64g_cache_system_tb___024root___eval_phase__act\n"); );
    Vrv64g_cache_system_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<43> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vrv64g_cache_system_tb___024root___eval_triggers__act(vlSelf);
    Vrv64g_cache_system_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vrv64g_cache_system_tb___024root___timing_resume(vlSelf);
        Vrv64g_cache_system_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vrv64g_cache_system_tb___024root___eval_nba(Vrv64g_cache_system_tb___024root* vlSelf);

bool Vrv64g_cache_system_tb___024root___eval_phase__nba(Vrv64g_cache_system_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv64g_cache_system_tb___024root___eval_phase__nba\n"); );
    Vrv64g_cache_system_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vrv64g_cache_system_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrv64g_cache_system_tb___024root___dump_triggers__nba(Vrv64g_cache_system_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vrv64g_cache_system_tb___024root___dump_triggers__act(Vrv64g_cache_system_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vrv64g_cache_system_tb___024root___eval(Vrv64g_cache_system_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv64g_cache_system_tb___024root___eval\n"); );
    Vrv64g_cache_system_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vrv64g_cache_system_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("rv64g_cache_system_tb.v", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vrv64g_cache_system_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("rv64g_cache_system_tb.v", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vrv64g_cache_system_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vrv64g_cache_system_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vrv64g_cache_system_tb___024root___eval_debug_assertions(Vrv64g_cache_system_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv64g_cache_system_tb___024root___eval_debug_assertions\n"); );
    Vrv64g_cache_system_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
