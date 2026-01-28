// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrv64g_l1_vlsu_miss_handler_tb.h for the primary calling header

#include "Vrv64g_l1_vlsu_miss_handler_tb__pch.h"
#include "Vrv64g_l1_vlsu_miss_handler_tb___024root.h"

VL_ATTR_COLD void Vrv64g_l1_vlsu_miss_handler_tb___024root___eval_static(Vrv64g_l1_vlsu_miss_handler_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv64g_l1_vlsu_miss_handler_tb___024root___eval_static\n"); );
    Vrv64g_l1_vlsu_miss_handler_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__rv64g_l1_vlsu_miss_handler_tb__DOT__clk__0 
        = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rv64g_l1_vlsu_miss_handler_tb__DOT__rst_n__0 
        = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__rst_n;
}

VL_ATTR_COLD void Vrv64g_l1_vlsu_miss_handler_tb___024root___eval_initial__TOP(Vrv64g_l1_vlsu_miss_handler_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv64g_l1_vlsu_miss_handler_tb___024root___eval_initial__TOP\n"); );
    Vrv64g_l1_vlsu_miss_handler_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__clk = 0U;
}

VL_ATTR_COLD void Vrv64g_l1_vlsu_miss_handler_tb___024root___eval_final(Vrv64g_l1_vlsu_miss_handler_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv64g_l1_vlsu_miss_handler_tb___024root___eval_final\n"); );
    Vrv64g_l1_vlsu_miss_handler_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrv64g_l1_vlsu_miss_handler_tb___024root___dump_triggers__stl(Vrv64g_l1_vlsu_miss_handler_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vrv64g_l1_vlsu_miss_handler_tb___024root___eval_phase__stl(Vrv64g_l1_vlsu_miss_handler_tb___024root* vlSelf);

VL_ATTR_COLD void Vrv64g_l1_vlsu_miss_handler_tb___024root___eval_settle(Vrv64g_l1_vlsu_miss_handler_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv64g_l1_vlsu_miss_handler_tb___024root___eval_settle\n"); );
    Vrv64g_l1_vlsu_miss_handler_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vrv64g_l1_vlsu_miss_handler_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("rv64g_l1_vlsu_miss_handler_tb.v", 16, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vrv64g_l1_vlsu_miss_handler_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrv64g_l1_vlsu_miss_handler_tb___024root___dump_triggers__stl(Vrv64g_l1_vlsu_miss_handler_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv64g_l1_vlsu_miss_handler_tb___024root___dump_triggers__stl\n"); );
    Vrv64g_l1_vlsu_miss_handler_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vrv64g_l1_vlsu_miss_handler_tb___024root___stl_sequent__TOP__0(Vrv64g_l1_vlsu_miss_handler_tb___024root* vlSelf);

VL_ATTR_COLD void Vrv64g_l1_vlsu_miss_handler_tb___024root___eval_stl(Vrv64g_l1_vlsu_miss_handler_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv64g_l1_vlsu_miss_handler_tb___024root___eval_stl\n"); );
    Vrv64g_l1_vlsu_miss_handler_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vrv64g_l1_vlsu_miss_handler_tb___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vrv64g_l1_vlsu_miss_handler_tb___024root___stl_sequent__TOP__0(Vrv64g_l1_vlsu_miss_handler_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv64g_l1_vlsu_miss_handler_tb___024root___stl_sequent__TOP__0\n"); );
    Vrv64g_l1_vlsu_miss_handler_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*57:0*/ rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__lane_line_addr;
    rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__lane_line_addr = 0;
    CData/*0:0*/ rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_dup;
    rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_dup = 0;
    // Body
    vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__ready_for_replay = 0U;
    vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__busy = 0U;
    vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__refill_req = 0U;
    vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__refill_addr = 0ULL;
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
            vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__busy = 1U;
            if ((1U & (~ (IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__state_q)))) {
                vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__refill_req = 1U;
            }
            if ((1U & (IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__state_q))) {
                vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__refill_addr 
                    = (vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_q
                       [(7U & (IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__refill_idx_q))] 
                       << 6U);
                if (vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__refill_done) {
                    if ((((IData)(1U) + (IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__refill_idx_q)) 
                         < (IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_count_q))) {
                        vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__refill_idx_n 
                            = (0xfU & ((IData)(1U) 
                                       + (IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__refill_idx_q)));
                    }
                }
            } else {
                vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__refill_addr 
                    = (vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_q
                       [(7U & (IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__refill_idx_q))] 
                       << 6U);
            }
        } else if ((1U & (IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__state_q))) {
            vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__busy = 1U;
            if ((0U < (IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_count_n))) {
                vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__refill_idx_n = 0U;
            }
        }
    }
    vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__state_n 
        = vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__state_q;
    if ((4U & (IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__state_q))) {
        if ((1U & (~ ((IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__state_q) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__state_q)))) {
                vlSelfRef.rv64g_l1_vlsu_miss_handler_tb__DOT__ready_for_replay = 1U;
            }
        }
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

VL_ATTR_COLD void Vrv64g_l1_vlsu_miss_handler_tb___024root___eval_triggers__stl(Vrv64g_l1_vlsu_miss_handler_tb___024root* vlSelf);

VL_ATTR_COLD bool Vrv64g_l1_vlsu_miss_handler_tb___024root___eval_phase__stl(Vrv64g_l1_vlsu_miss_handler_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv64g_l1_vlsu_miss_handler_tb___024root___eval_phase__stl\n"); );
    Vrv64g_l1_vlsu_miss_handler_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vrv64g_l1_vlsu_miss_handler_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vrv64g_l1_vlsu_miss_handler_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrv64g_l1_vlsu_miss_handler_tb___024root___dump_triggers__act(Vrv64g_l1_vlsu_miss_handler_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv64g_l1_vlsu_miss_handler_tb___024root___dump_triggers__act\n"); );
    Vrv64g_l1_vlsu_miss_handler_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge rv64g_l1_vlsu_miss_handler_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge rv64g_l1_vlsu_miss_handler_tb.rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrv64g_l1_vlsu_miss_handler_tb___024root___dump_triggers__nba(Vrv64g_l1_vlsu_miss_handler_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv64g_l1_vlsu_miss_handler_tb___024root___dump_triggers__nba\n"); );
    Vrv64g_l1_vlsu_miss_handler_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge rv64g_l1_vlsu_miss_handler_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge rv64g_l1_vlsu_miss_handler_tb.rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vrv64g_l1_vlsu_miss_handler_tb___024root___ctor_var_reset(Vrv64g_l1_vlsu_miss_handler_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv64g_l1_vlsu_miss_handler_tb___024root___ctor_var_reset\n"); );
    Vrv64g_l1_vlsu_miss_handler_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->rv64g_l1_vlsu_miss_handler_tb__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2396119032929159478ull);
    vlSelf->rv64g_l1_vlsu_miss_handler_tb__DOT__rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17148002258254789469ull);
    vlSelf->rv64g_l1_vlsu_miss_handler_tb__DOT__vlsu_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7743830852098743382ull);
    vlSelf->rv64g_l1_vlsu_miss_handler_tb__DOT__lane_miss = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6981520300475966355ull);
    VL_SCOPED_RAND_RESET_W(512, vlSelf->rv64g_l1_vlsu_miss_handler_tb__DOT__lane_addr, __VscopeHash, 6486547874665561318ull);
    vlSelf->rv64g_l1_vlsu_miss_handler_tb__DOT__any_miss = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1839173108823916374ull);
    vlSelf->rv64g_l1_vlsu_miss_handler_tb__DOT__refill_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 409803494915775772ull);
    vlSelf->rv64g_l1_vlsu_miss_handler_tb__DOT__refill_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14488999340037181919ull);
    vlSelf->rv64g_l1_vlsu_miss_handler_tb__DOT__refill_addr = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14129052304575595717ull);
    vlSelf->rv64g_l1_vlsu_miss_handler_tb__DOT__busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3148776274678803678ull);
    vlSelf->rv64g_l1_vlsu_miss_handler_tb__DOT__ready_for_replay = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15357643056072813990ull);
    vlSelf->rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__state_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14889081687363749455ull);
    vlSelf->rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__state_n = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17052699721973425899ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_q[__Vi0] = VL_SCOPED_RAND_RESET_Q(58, __VscopeHash, 16210774628229400636ull);
    }
    vlSelf->rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_valid_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4173174129186981863ull);
    vlSelf->rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_count_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10141775171208653207ull);
    vlSelf->rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__refill_idx_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10050817996587275775ull);
    vlSelf->rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_valid_n = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17035778504208571747ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_addr_n[__Vi0] = VL_SCOPED_RAND_RESET_Q(58, __VscopeHash, 13484998171490444244ull);
    }
    vlSelf->rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__miss_count_n = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4214136390506569482ull);
    vlSelf->rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__refill_idx_n = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14377359924877173380ull);
    vlSelf->__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__get_line_addr__10__Vfuncout = VL_SCOPED_RAND_RESET_Q(58, __VscopeHash, 4943501288377515631ull);
    vlSelf->__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__get_line_addr__10__addr = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 18246696198955346172ull);
    vlSelf->__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__Vfuncout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17713087275989574528ull);
    vlSelf->__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr = VL_SCOPED_RAND_RESET_Q(58, __VscopeHash, 14224408443018794754ull);
    vlSelf->__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__valid = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14165233577747464390ull);
    vlSelf->__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr0 = VL_SCOPED_RAND_RESET_Q(58, __VscopeHash, 11756423753720715559ull);
    vlSelf->__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr1 = VL_SCOPED_RAND_RESET_Q(58, __VscopeHash, 1679250771186020692ull);
    vlSelf->__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr2 = VL_SCOPED_RAND_RESET_Q(58, __VscopeHash, 11990234576082704698ull);
    vlSelf->__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr3 = VL_SCOPED_RAND_RESET_Q(58, __VscopeHash, 6862540617725848383ull);
    vlSelf->__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr4 = VL_SCOPED_RAND_RESET_Q(58, __VscopeHash, 12854184852182274208ull);
    vlSelf->__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr5 = VL_SCOPED_RAND_RESET_Q(58, __VscopeHash, 2803516525254431738ull);
    vlSelf->__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr6 = VL_SCOPED_RAND_RESET_Q(58, __VscopeHash, 12932112957003548503ull);
    vlSelf->__Vfunc_rv64g_l1_vlsu_miss_handler_tb__DOT__dut__DOT__is_duplicate__11__addr7 = VL_SCOPED_RAND_RESET_Q(58, __VscopeHash, 11018514543982269066ull);
    vlSelf->__Vtrigprevexpr___TOP__rv64g_l1_vlsu_miss_handler_tb__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1421662302939220173ull);
    vlSelf->__Vtrigprevexpr___TOP__rv64g_l1_vlsu_miss_handler_tb__DOT__rst_n__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12310932367105212601ull);
}
