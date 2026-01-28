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
                                             "testbench/system/rv64g_cache_system_tb.v", 
                                             84);
        vlSelfRef.rv64g_cache_system_tb__DOT__clk = 
            (1U & (~ (IData)(vlSelfRef.rv64g_cache_system_tb__DOT__clk)));
    }
}

void Vrv64g_cache_system_tb___024root___ico_sequent__TOP__0(Vrv64g_cache_system_tb___024root* vlSelf);

void Vrv64g_cache_system_tb___024root___eval_ico(Vrv64g_cache_system_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv64g_cache_system_tb___024root___eval_ico\n"); );
    Vrv64g_cache_system_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vrv64g_cache_system_tb___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vrv64g_cache_system_tb___024root___ico_sequent__TOP__0(Vrv64g_cache_system_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv64g_cache_system_tb___024root___ico_sequent__TOP__0\n"); );
    Vrv64g_cache_system_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tag_selected_o = vlSelfRef.rv64g_l1_arrays__DOT__tag_q
        [vlSelfRef.way_sel_i][vlSelfRef.index_i];
    vlSelfRef.state_selected_o = vlSelfRef.rv64g_l1_arrays__DOT__state_q
        [vlSelfRef.way_sel_i][vlSelfRef.index_i];
    vlSelfRef.tag_way_flat_o[0U] = (IData)(vlSelfRef.rv64g_l1_arrays__DOT__tag_q
                                           [0U][vlSelfRef.index_i]);
    vlSelfRef.tag_way_flat_o[1U] = ((0xffe00000U & 
                                     vlSelfRef.tag_way_flat_o[1U]) 
                                    | (IData)((vlSelfRef.rv64g_l1_arrays__DOT__tag_q
                                               [0U]
                                               [vlSelfRef.index_i] 
                                               >> 0x20U)));
    vlSelfRef.state_way_flat_o = ((0xfffcU & (IData)(vlSelfRef.state_way_flat_o)) 
                                  | vlSelfRef.rv64g_l1_arrays__DOT__state_q
                                  [0U][vlSelfRef.index_i]);
    vlSelfRef.tag_way_flat_o[1U] = ((0x1fffffU & vlSelfRef.tag_way_flat_o[1U]) 
                                    | ((IData)(vlSelfRef.rv64g_l1_arrays__DOT__tag_q
                                               [1U]
                                               [vlSelfRef.index_i]) 
                                       << 0x15U));
    vlSelfRef.tag_way_flat_o[2U] = (((IData)(vlSelfRef.rv64g_l1_arrays__DOT__tag_q
                                             [1U][vlSelfRef.index_i]) 
                                     >> 0xbU) | ((IData)(
                                                         (vlSelfRef.rv64g_l1_arrays__DOT__tag_q
                                                          [1U]
                                                          [vlSelfRef.index_i] 
                                                          >> 0x20U)) 
                                                 << 0x15U));
    vlSelfRef.tag_way_flat_o[3U] = ((0xfffffc00U & 
                                     vlSelfRef.tag_way_flat_o[3U]) 
                                    | ((IData)((vlSelfRef.rv64g_l1_arrays__DOT__tag_q
                                                [1U]
                                                [vlSelfRef.index_i] 
                                                >> 0x20U)) 
                                       >> 0xbU));
    vlSelfRef.state_way_flat_o = ((0xfff3U & (IData)(vlSelfRef.state_way_flat_o)) 
                                  | (vlSelfRef.rv64g_l1_arrays__DOT__state_q
                                     [1U][vlSelfRef.index_i] 
                                     << 2U));
    vlSelfRef.tag_way_flat_o[3U] = ((0x3ffU & vlSelfRef.tag_way_flat_o[3U]) 
                                    | ((IData)(vlSelfRef.rv64g_l1_arrays__DOT__tag_q
                                               [2U]
                                               [vlSelfRef.index_i]) 
                                       << 0xaU));
    vlSelfRef.tag_way_flat_o[4U] = ((0x80000000U & 
                                     vlSelfRef.tag_way_flat_o[4U]) 
                                    | (((IData)(vlSelfRef.rv64g_l1_arrays__DOT__tag_q
                                                [2U]
                                                [vlSelfRef.index_i]) 
                                        >> 0x16U) | 
                                       ((IData)((vlSelfRef.rv64g_l1_arrays__DOT__tag_q
                                                 [2U]
                                                 [vlSelfRef.index_i] 
                                                 >> 0x20U)) 
                                        << 0xaU)));
    vlSelfRef.state_way_flat_o = ((0xffcfU & (IData)(vlSelfRef.state_way_flat_o)) 
                                  | (vlSelfRef.rv64g_l1_arrays__DOT__state_q
                                     [2U][vlSelfRef.index_i] 
                                     << 4U));
    vlSelfRef.tag_way_flat_o[4U] = ((0x7fffffffU & 
                                     vlSelfRef.tag_way_flat_o[4U]) 
                                    | ((IData)(vlSelfRef.rv64g_l1_arrays__DOT__tag_q
                                               [3U]
                                               [vlSelfRef.index_i]) 
                                       << 0x1fU));
    vlSelfRef.tag_way_flat_o[5U] = (((IData)(vlSelfRef.rv64g_l1_arrays__DOT__tag_q
                                             [3U][vlSelfRef.index_i]) 
                                     >> 1U) | ((IData)(
                                                       (vlSelfRef.rv64g_l1_arrays__DOT__tag_q
                                                        [3U]
                                                        [vlSelfRef.index_i] 
                                                        >> 0x20U)) 
                                               << 0x1fU));
    vlSelfRef.tag_way_flat_o[6U] = ((0xfff00000U & 
                                     vlSelfRef.tag_way_flat_o[6U]) 
                                    | ((IData)((vlSelfRef.rv64g_l1_arrays__DOT__tag_q
                                                [3U]
                                                [vlSelfRef.index_i] 
                                                >> 0x20U)) 
                                       >> 1U));
    vlSelfRef.state_way_flat_o = ((0xff3fU & (IData)(vlSelfRef.state_way_flat_o)) 
                                  | (vlSelfRef.rv64g_l1_arrays__DOT__state_q
                                     [3U][vlSelfRef.index_i] 
                                     << 6U));
    vlSelfRef.tag_way_flat_o[6U] = ((0xfffffU & vlSelfRef.tag_way_flat_o[6U]) 
                                    | ((IData)(vlSelfRef.rv64g_l1_arrays__DOT__tag_q
                                               [4U]
                                               [vlSelfRef.index_i]) 
                                       << 0x14U));
    vlSelfRef.tag_way_flat_o[7U] = (((IData)(vlSelfRef.rv64g_l1_arrays__DOT__tag_q
                                             [4U][vlSelfRef.index_i]) 
                                     >> 0xcU) | ((IData)(
                                                         (vlSelfRef.rv64g_l1_arrays__DOT__tag_q
                                                          [4U]
                                                          [vlSelfRef.index_i] 
                                                          >> 0x20U)) 
                                                 << 0x14U));
    vlSelfRef.tag_way_flat_o[8U] = ((0xfffffe00U & 
                                     vlSelfRef.tag_way_flat_o[8U]) 
                                    | ((IData)((vlSelfRef.rv64g_l1_arrays__DOT__tag_q
                                                [4U]
                                                [vlSelfRef.index_i] 
                                                >> 0x20U)) 
                                       >> 0xcU));
    vlSelfRef.state_way_flat_o = ((0xfcffU & (IData)(vlSelfRef.state_way_flat_o)) 
                                  | (vlSelfRef.rv64g_l1_arrays__DOT__state_q
                                     [4U][vlSelfRef.index_i] 
                                     << 8U));
    vlSelfRef.tag_way_flat_o[8U] = ((0x1ffU & vlSelfRef.tag_way_flat_o[8U]) 
                                    | ((IData)(vlSelfRef.rv64g_l1_arrays__DOT__tag_q
                                               [5U]
                                               [vlSelfRef.index_i]) 
                                       << 9U));
    vlSelfRef.tag_way_flat_o[9U] = ((0xc0000000U & 
                                     vlSelfRef.tag_way_flat_o[9U]) 
                                    | (((IData)(vlSelfRef.rv64g_l1_arrays__DOT__tag_q
                                                [5U]
                                                [vlSelfRef.index_i]) 
                                        >> 0x17U) | 
                                       ((IData)((vlSelfRef.rv64g_l1_arrays__DOT__tag_q
                                                 [5U]
                                                 [vlSelfRef.index_i] 
                                                 >> 0x20U)) 
                                        << 9U)));
    vlSelfRef.state_way_flat_o = ((0xf3ffU & (IData)(vlSelfRef.state_way_flat_o)) 
                                  | (vlSelfRef.rv64g_l1_arrays__DOT__state_q
                                     [5U][vlSelfRef.index_i] 
                                     << 0xaU));
    vlSelfRef.tag_way_flat_o[9U] = ((0x3fffffffU & 
                                     vlSelfRef.tag_way_flat_o[9U]) 
                                    | ((IData)(vlSelfRef.rv64g_l1_arrays__DOT__tag_q
                                               [6U]
                                               [vlSelfRef.index_i]) 
                                       << 0x1eU));
    vlSelfRef.tag_way_flat_o[0xaU] = (((IData)(vlSelfRef.rv64g_l1_arrays__DOT__tag_q
                                               [6U]
                                               [vlSelfRef.index_i]) 
                                       >> 2U) | ((IData)(
                                                         (vlSelfRef.rv64g_l1_arrays__DOT__tag_q
                                                          [6U]
                                                          [vlSelfRef.index_i] 
                                                          >> 0x20U)) 
                                                 << 0x1eU));
    vlSelfRef.tag_way_flat_o[0xbU] = ((0xfff80000U 
                                       & vlSelfRef.tag_way_flat_o[0xbU]) 
                                      | ((IData)((vlSelfRef.rv64g_l1_arrays__DOT__tag_q
                                                  [6U]
                                                  [vlSelfRef.index_i] 
                                                  >> 0x20U)) 
                                         >> 2U));
    vlSelfRef.state_way_flat_o = ((0xcfffU & (IData)(vlSelfRef.state_way_flat_o)) 
                                  | (vlSelfRef.rv64g_l1_arrays__DOT__state_q
                                     [6U][vlSelfRef.index_i] 
                                     << 0xcU));
    vlSelfRef.tag_way_flat_o[0xbU] = ((0x7ffffU & vlSelfRef.tag_way_flat_o[0xbU]) 
                                      | ((IData)(vlSelfRef.rv64g_l1_arrays__DOT__tag_q
                                                 [7U]
                                                 [vlSelfRef.index_i]) 
                                         << 0x13U));
    vlSelfRef.tag_way_flat_o[0xcU] = (((IData)(vlSelfRef.rv64g_l1_arrays__DOT__tag_q
                                               [7U]
                                               [vlSelfRef.index_i]) 
                                       >> 0xdU) | ((IData)(
                                                           (vlSelfRef.rv64g_l1_arrays__DOT__tag_q
                                                            [7U]
                                                            [vlSelfRef.index_i] 
                                                            >> 0x20U)) 
                                                   << 0x13U));
    vlSelfRef.tag_way_flat_o[0xdU] = (0xffU & ((IData)(
                                                       (vlSelfRef.rv64g_l1_arrays__DOT__tag_q
                                                        [7U]
                                                        [vlSelfRef.index_i] 
                                                        >> 0x20U)) 
                                               >> 0xdU));
    vlSelfRef.state_way_flat_o = ((0x3fffU & (IData)(vlSelfRef.state_way_flat_o)) 
                                  | (vlSelfRef.rv64g_l1_arrays__DOT__state_q
                                     [7U][vlSelfRef.index_i] 
                                     << 0xeU));
    vlSelfRef.rv64g_l1_arrays__DOT__line_idx = (((IData)(vlSelfRef.index_i) 
                                                 << 3U) 
                                                | (IData)(vlSelfRef.word_sel_i));
    vlSelfRef.rdata_selected_o = vlSelfRef.rv64g_l1_arrays__DOT__data_q
        [vlSelfRef.way_sel_i][vlSelfRef.rv64g_l1_arrays__DOT__line_idx];
    vlSelfRef.rdata_way_flat_o[0U] = (IData)(vlSelfRef.rv64g_l1_arrays__DOT__data_q
                                             [0U][vlSelfRef.rv64g_l1_arrays__DOT__line_idx]);
    vlSelfRef.rdata_way_flat_o[1U] = (IData)((vlSelfRef.rv64g_l1_arrays__DOT__data_q
                                              [0U][vlSelfRef.rv64g_l1_arrays__DOT__line_idx] 
                                              >> 0x20U));
    vlSelfRef.rdata_way_flat_o[2U] = (IData)(vlSelfRef.rv64g_l1_arrays__DOT__data_q
                                             [1U][vlSelfRef.rv64g_l1_arrays__DOT__line_idx]);
    vlSelfRef.rdata_way_flat_o[3U] = (IData)((vlSelfRef.rv64g_l1_arrays__DOT__data_q
                                              [1U][vlSelfRef.rv64g_l1_arrays__DOT__line_idx] 
                                              >> 0x20U));
    vlSelfRef.rdata_way_flat_o[4U] = (IData)(vlSelfRef.rv64g_l1_arrays__DOT__data_q
                                             [2U][vlSelfRef.rv64g_l1_arrays__DOT__line_idx]);
    vlSelfRef.rdata_way_flat_o[5U] = (IData)((vlSelfRef.rv64g_l1_arrays__DOT__data_q
                                              [2U][vlSelfRef.rv64g_l1_arrays__DOT__line_idx] 
                                              >> 0x20U));
    vlSelfRef.rdata_way_flat_o[6U] = (IData)(vlSelfRef.rv64g_l1_arrays__DOT__data_q
                                             [3U][vlSelfRef.rv64g_l1_arrays__DOT__line_idx]);
    vlSelfRef.rdata_way_flat_o[7U] = (IData)((vlSelfRef.rv64g_l1_arrays__DOT__data_q
                                              [3U][vlSelfRef.rv64g_l1_arrays__DOT__line_idx] 
                                              >> 0x20U));
    vlSelfRef.rdata_way_flat_o[8U] = (IData)(vlSelfRef.rv64g_l1_arrays__DOT__data_q
                                             [4U][vlSelfRef.rv64g_l1_arrays__DOT__line_idx]);
    vlSelfRef.rdata_way_flat_o[9U] = (IData)((vlSelfRef.rv64g_l1_arrays__DOT__data_q
                                              [4U][vlSelfRef.rv64g_l1_arrays__DOT__line_idx] 
                                              >> 0x20U));
    vlSelfRef.rdata_way_flat_o[0xaU] = (IData)(vlSelfRef.rv64g_l1_arrays__DOT__data_q
                                               [5U]
                                               [vlSelfRef.rv64g_l1_arrays__DOT__line_idx]);
    vlSelfRef.rdata_way_flat_o[0xbU] = (IData)((vlSelfRef.rv64g_l1_arrays__DOT__data_q
                                                [5U]
                                                [vlSelfRef.rv64g_l1_arrays__DOT__line_idx] 
                                                >> 0x20U));
    vlSelfRef.rdata_way_flat_o[0xcU] = (IData)(vlSelfRef.rv64g_l1_arrays__DOT__data_q
                                               [6U]
                                               [vlSelfRef.rv64g_l1_arrays__DOT__line_idx]);
    vlSelfRef.rdata_way_flat_o[0xdU] = (IData)((vlSelfRef.rv64g_l1_arrays__DOT__data_q
                                                [6U]
                                                [vlSelfRef.rv64g_l1_arrays__DOT__line_idx] 
                                                >> 0x20U));
    vlSelfRef.rdata_way_flat_o[0xeU] = (IData)(vlSelfRef.rv64g_l1_arrays__DOT__data_q
                                               [7U]
                                               [vlSelfRef.rv64g_l1_arrays__DOT__line_idx]);
    vlSelfRef.rdata_way_flat_o[0xfU] = (IData)((vlSelfRef.rv64g_l1_arrays__DOT__data_q
                                                [7U]
                                                [vlSelfRef.rv64g_l1_arrays__DOT__line_idx] 
                                                >> 0x20U));
}

void Vrv64g_cache_system_tb___024root___eval_triggers__ico(Vrv64g_cache_system_tb___024root* vlSelf);

bool Vrv64g_cache_system_tb___024root___eval_phase__ico(Vrv64g_cache_system_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv64g_cache_system_tb___024root___eval_phase__ico\n"); );
    Vrv64g_cache_system_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vrv64g_cache_system_tb___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vrv64g_cache_system_tb___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

VL_INLINE_OPT void Vrv64g_cache_system_tb___024root___nba_sequent__TOP__0(Vrv64g_cache_system_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv64g_cache_system_tb___024root___nba_sequent__TOP__0\n"); );
    Vrv64g_cache_system_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*63:0*/ __VdlyVal__rv64g_l1_arrays__DOT__data_q__v0;
    __VdlyVal__rv64g_l1_arrays__DOT__data_q__v0 = 0;
    CData/*7:0*/ __VdlyDim0__rv64g_l1_arrays__DOT__data_q__v0;
    __VdlyDim0__rv64g_l1_arrays__DOT__data_q__v0 = 0;
    CData/*2:0*/ __VdlyDim1__rv64g_l1_arrays__DOT__data_q__v0;
    __VdlyDim1__rv64g_l1_arrays__DOT__data_q__v0 = 0;
    CData/*0:0*/ __VdlySet__rv64g_l1_arrays__DOT__data_q__v0;
    __VdlySet__rv64g_l1_arrays__DOT__data_q__v0 = 0;
    QData/*52:0*/ __VdlyVal__rv64g_l1_arrays__DOT__tag_q__v0;
    __VdlyVal__rv64g_l1_arrays__DOT__tag_q__v0 = 0;
    CData/*4:0*/ __VdlyDim0__rv64g_l1_arrays__DOT__tag_q__v0;
    __VdlyDim0__rv64g_l1_arrays__DOT__tag_q__v0 = 0;
    CData/*2:0*/ __VdlyDim1__rv64g_l1_arrays__DOT__tag_q__v0;
    __VdlyDim1__rv64g_l1_arrays__DOT__tag_q__v0 = 0;
    CData/*0:0*/ __VdlySet__rv64g_l1_arrays__DOT__tag_q__v0;
    __VdlySet__rv64g_l1_arrays__DOT__tag_q__v0 = 0;
    CData/*0:0*/ __VdlySet__rv64g_l1_arrays__DOT__state_q__v0;
    __VdlySet__rv64g_l1_arrays__DOT__state_q__v0 = 0;
    CData/*1:0*/ __VdlyVal__rv64g_l1_arrays__DOT__state_q__v256;
    __VdlyVal__rv64g_l1_arrays__DOT__state_q__v256 = 0;
    CData/*4:0*/ __VdlyDim0__rv64g_l1_arrays__DOT__state_q__v256;
    __VdlyDim0__rv64g_l1_arrays__DOT__state_q__v256 = 0;
    CData/*2:0*/ __VdlyDim1__rv64g_l1_arrays__DOT__state_q__v256;
    __VdlyDim1__rv64g_l1_arrays__DOT__state_q__v256 = 0;
    CData/*0:0*/ __VdlySet__rv64g_l1_arrays__DOT__state_q__v256;
    __VdlySet__rv64g_l1_arrays__DOT__state_q__v256 = 0;
    CData/*0:0*/ __VdlySet__rv64g_l1_arrays__DOT__state_q__v257;
    __VdlySet__rv64g_l1_arrays__DOT__state_q__v257 = 0;
    // Body
    __VdlySet__rv64g_l1_arrays__DOT__tag_q__v0 = 0U;
    __VdlySet__rv64g_l1_arrays__DOT__data_q__v0 = 0U;
    __VdlySet__rv64g_l1_arrays__DOT__state_q__v0 = 0U;
    __VdlySet__rv64g_l1_arrays__DOT__state_q__v256 = 0U;
    __VdlySet__rv64g_l1_arrays__DOT__state_q__v257 = 0U;
    if (vlSelfRef.rst_ni) {
        if (vlSelfRef.invalidate_all_i) {
            vlSelfRef.rv64g_l1_arrays__DOT__i = 8U;
            vlSelfRef.rv64g_l1_arrays__DOT__j = 0x20U;
            __VdlySet__rv64g_l1_arrays__DOT__state_q__v0 = 1U;
        } else if (vlSelfRef.write_en_i) {
            __VdlyVal__rv64g_l1_arrays__DOT__state_q__v256 
                = vlSelfRef.state_i;
            __VdlyDim0__rv64g_l1_arrays__DOT__state_q__v256 
                = vlSelfRef.index_i;
            __VdlyDim1__rv64g_l1_arrays__DOT__state_q__v256 
                = vlSelfRef.way_sel_i;
            __VdlySet__rv64g_l1_arrays__DOT__state_q__v256 = 1U;
        }
        if ((1U & (~ (IData)(vlSelfRef.invalidate_all_i)))) {
            if (vlSelfRef.write_en_i) {
                vlSelfRef.rv64g_l1_arrays__DOT__b = 8U;
                __VdlyVal__rv64g_l1_arrays__DOT__tag_q__v0 
                    = vlSelfRef.tag_in_i;
                __VdlyDim0__rv64g_l1_arrays__DOT__tag_q__v0 
                    = vlSelfRef.index_i;
                __VdlyDim1__rv64g_l1_arrays__DOT__tag_q__v0 
                    = vlSelfRef.way_sel_i;
                __VdlySet__rv64g_l1_arrays__DOT__tag_q__v0 = 1U;
                vlSelfRef.rv64g_l1_arrays__DOT__be_mask = 0ULL;
                if ((1U & (IData)(vlSelfRef.be_i))) {
                    vlSelfRef.rv64g_l1_arrays__DOT__be_mask 
                        = (0xffULL | vlSelfRef.rv64g_l1_arrays__DOT__be_mask);
                }
                if ((2U & (IData)(vlSelfRef.be_i))) {
                    vlSelfRef.rv64g_l1_arrays__DOT__be_mask 
                        = (0xff00ULL | vlSelfRef.rv64g_l1_arrays__DOT__be_mask);
                }
                if ((4U & (IData)(vlSelfRef.be_i))) {
                    vlSelfRef.rv64g_l1_arrays__DOT__be_mask 
                        = (0xff0000ULL | vlSelfRef.rv64g_l1_arrays__DOT__be_mask);
                }
                if ((8U & (IData)(vlSelfRef.be_i))) {
                    vlSelfRef.rv64g_l1_arrays__DOT__be_mask 
                        = (0xff000000ULL | vlSelfRef.rv64g_l1_arrays__DOT__be_mask);
                }
                if ((0x10U & (IData)(vlSelfRef.be_i))) {
                    vlSelfRef.rv64g_l1_arrays__DOT__be_mask 
                        = (0xff00000000ULL | vlSelfRef.rv64g_l1_arrays__DOT__be_mask);
                }
                if ((0x20U & (IData)(vlSelfRef.be_i))) {
                    vlSelfRef.rv64g_l1_arrays__DOT__be_mask 
                        = (0xff0000000000ULL | vlSelfRef.rv64g_l1_arrays__DOT__be_mask);
                }
                if ((0x40U & (IData)(vlSelfRef.be_i))) {
                    vlSelfRef.rv64g_l1_arrays__DOT__be_mask 
                        = (0xff000000000000ULL | vlSelfRef.rv64g_l1_arrays__DOT__be_mask);
                }
                if ((0x80U & (IData)(vlSelfRef.be_i))) {
                    vlSelfRef.rv64g_l1_arrays__DOT__be_mask 
                        = (0xff00000000000000ULL | vlSelfRef.rv64g_l1_arrays__DOT__be_mask);
                }
                __VdlyVal__rv64g_l1_arrays__DOT__data_q__v0 
                    = ((vlSelfRef.wdata_i & vlSelfRef.rv64g_l1_arrays__DOT__be_mask) 
                       | (vlSelfRef.rv64g_l1_arrays__DOT__data_q
                          [vlSelfRef.way_sel_i][vlSelfRef.rv64g_l1_arrays__DOT__line_idx] 
                          & (~ vlSelfRef.rv64g_l1_arrays__DOT__be_mask)));
                __VdlyDim0__rv64g_l1_arrays__DOT__data_q__v0 
                    = vlSelfRef.rv64g_l1_arrays__DOT__line_idx;
                __VdlyDim1__rv64g_l1_arrays__DOT__data_q__v0 
                    = vlSelfRef.way_sel_i;
                __VdlySet__rv64g_l1_arrays__DOT__data_q__v0 = 1U;
            }
        }
    } else {
        vlSelfRef.rv64g_l1_arrays__DOT__i = 8U;
        vlSelfRef.rv64g_l1_arrays__DOT__j = 0x20U;
        __VdlySet__rv64g_l1_arrays__DOT__state_q__v257 = 1U;
    }
    if (__VdlySet__rv64g_l1_arrays__DOT__tag_q__v0) {
        vlSelfRef.rv64g_l1_arrays__DOT__tag_q[__VdlyDim1__rv64g_l1_arrays__DOT__tag_q__v0][__VdlyDim0__rv64g_l1_arrays__DOT__tag_q__v0] 
            = __VdlyVal__rv64g_l1_arrays__DOT__tag_q__v0;
    }
    if (__VdlySet__rv64g_l1_arrays__DOT__data_q__v0) {
        vlSelfRef.rv64g_l1_arrays__DOT__data_q[__VdlyDim1__rv64g_l1_arrays__DOT__data_q__v0][__VdlyDim0__rv64g_l1_arrays__DOT__data_q__v0] 
            = __VdlyVal__rv64g_l1_arrays__DOT__data_q__v0;
    }
    if (__VdlySet__rv64g_l1_arrays__DOT__state_q__v0) {
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[0U][0U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[0U][1U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[0U][2U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[0U][3U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[0U][4U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[0U][5U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[0U][6U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[0U][7U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[0U][8U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[0U][9U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[0U][0xaU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[0U][0xbU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[0U][0xcU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[0U][0xdU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[0U][0xeU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[0U][0xfU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[0U][0x10U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[0U][0x11U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[0U][0x12U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[0U][0x13U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[0U][0x14U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[0U][0x15U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[0U][0x16U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[0U][0x17U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[0U][0x18U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[0U][0x19U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[0U][0x1aU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[0U][0x1bU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[0U][0x1cU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[0U][0x1dU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[0U][0x1eU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[0U][0x1fU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[1U][0U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[1U][1U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[1U][2U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[1U][3U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[1U][4U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[1U][5U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[1U][6U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[1U][7U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[1U][8U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[1U][9U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[1U][0xaU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[1U][0xbU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[1U][0xcU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[1U][0xdU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[1U][0xeU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[1U][0xfU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[1U][0x10U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[1U][0x11U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[1U][0x12U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[1U][0x13U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[1U][0x14U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[1U][0x15U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[1U][0x16U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[1U][0x17U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[1U][0x18U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[1U][0x19U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[1U][0x1aU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[1U][0x1bU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[1U][0x1cU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[1U][0x1dU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[1U][0x1eU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[1U][0x1fU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[2U][0U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[2U][1U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[2U][2U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[2U][3U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[2U][4U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[2U][5U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[2U][6U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[2U][7U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[2U][8U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[2U][9U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[2U][0xaU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[2U][0xbU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[2U][0xcU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[2U][0xdU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[2U][0xeU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[2U][0xfU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[2U][0x10U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[2U][0x11U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[2U][0x12U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[2U][0x13U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[2U][0x14U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[2U][0x15U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[2U][0x16U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[2U][0x17U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[2U][0x18U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[2U][0x19U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[2U][0x1aU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[2U][0x1bU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[2U][0x1cU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[2U][0x1dU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[2U][0x1eU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[2U][0x1fU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[3U][0U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[3U][1U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[3U][2U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[3U][3U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[3U][4U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[3U][5U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[3U][6U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[3U][7U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[3U][8U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[3U][9U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[3U][0xaU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[3U][0xbU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[3U][0xcU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[3U][0xdU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[3U][0xeU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[3U][0xfU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[3U][0x10U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[3U][0x11U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[3U][0x12U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[3U][0x13U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[3U][0x14U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[3U][0x15U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[3U][0x16U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[3U][0x17U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[3U][0x18U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[3U][0x19U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[3U][0x1aU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[3U][0x1bU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[3U][0x1cU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[3U][0x1dU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[3U][0x1eU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[3U][0x1fU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[4U][0U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[4U][1U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[4U][2U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[4U][3U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[4U][4U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[4U][5U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[4U][6U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[4U][7U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[4U][8U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[4U][9U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[4U][0xaU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[4U][0xbU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[4U][0xcU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[4U][0xdU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[4U][0xeU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[4U][0xfU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[4U][0x10U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[4U][0x11U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[4U][0x12U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[4U][0x13U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[4U][0x14U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[4U][0x15U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[4U][0x16U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[4U][0x17U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[4U][0x18U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[4U][0x19U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[4U][0x1aU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[4U][0x1bU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[4U][0x1cU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[4U][0x1dU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[4U][0x1eU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[4U][0x1fU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[5U][0U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[5U][1U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[5U][2U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[5U][3U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[5U][4U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[5U][5U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[5U][6U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[5U][7U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[5U][8U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[5U][9U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[5U][0xaU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[5U][0xbU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[5U][0xcU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[5U][0xdU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[5U][0xeU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[5U][0xfU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[5U][0x10U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[5U][0x11U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[5U][0x12U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[5U][0x13U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[5U][0x14U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[5U][0x15U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[5U][0x16U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[5U][0x17U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[5U][0x18U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[5U][0x19U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[5U][0x1aU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[5U][0x1bU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[5U][0x1cU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[5U][0x1dU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[5U][0x1eU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[5U][0x1fU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[6U][0U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[6U][1U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[6U][2U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[6U][3U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[6U][4U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[6U][5U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[6U][6U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[6U][7U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[6U][8U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[6U][9U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[6U][0xaU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[6U][0xbU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[6U][0xcU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[6U][0xdU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[6U][0xeU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[6U][0xfU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[6U][0x10U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[6U][0x11U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[6U][0x12U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[6U][0x13U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[6U][0x14U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[6U][0x15U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[6U][0x16U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[6U][0x17U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[6U][0x18U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[6U][0x19U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[6U][0x1aU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[6U][0x1bU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[6U][0x1cU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[6U][0x1dU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[6U][0x1eU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[6U][0x1fU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[7U][0U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[7U][1U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[7U][2U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[7U][3U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[7U][4U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[7U][5U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[7U][6U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[7U][7U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[7U][8U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[7U][9U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[7U][0xaU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[7U][0xbU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[7U][0xcU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[7U][0xdU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[7U][0xeU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[7U][0xfU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[7U][0x10U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[7U][0x11U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[7U][0x12U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[7U][0x13U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[7U][0x14U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[7U][0x15U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[7U][0x16U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[7U][0x17U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[7U][0x18U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[7U][0x19U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[7U][0x1aU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[7U][0x1bU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[7U][0x1cU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[7U][0x1dU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[7U][0x1eU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[7U][0x1fU] = 0U;
    }
    if (__VdlySet__rv64g_l1_arrays__DOT__state_q__v256) {
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[__VdlyDim1__rv64g_l1_arrays__DOT__state_q__v256][__VdlyDim0__rv64g_l1_arrays__DOT__state_q__v256] 
            = __VdlyVal__rv64g_l1_arrays__DOT__state_q__v256;
    }
    if (__VdlySet__rv64g_l1_arrays__DOT__state_q__v257) {
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[0U][0U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[0U][1U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[0U][2U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[0U][3U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[0U][4U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[0U][5U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[0U][6U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[0U][7U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[0U][8U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[0U][9U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[0U][0xaU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[0U][0xbU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[0U][0xcU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[0U][0xdU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[0U][0xeU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[0U][0xfU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[0U][0x10U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[0U][0x11U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[0U][0x12U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[0U][0x13U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[0U][0x14U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[0U][0x15U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[0U][0x16U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[0U][0x17U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[0U][0x18U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[0U][0x19U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[0U][0x1aU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[0U][0x1bU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[0U][0x1cU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[0U][0x1dU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[0U][0x1eU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[0U][0x1fU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[1U][0U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[1U][1U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[1U][2U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[1U][3U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[1U][4U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[1U][5U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[1U][6U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[1U][7U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[1U][8U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[1U][9U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[1U][0xaU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[1U][0xbU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[1U][0xcU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[1U][0xdU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[1U][0xeU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[1U][0xfU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[1U][0x10U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[1U][0x11U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[1U][0x12U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[1U][0x13U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[1U][0x14U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[1U][0x15U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[1U][0x16U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[1U][0x17U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[1U][0x18U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[1U][0x19U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[1U][0x1aU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[1U][0x1bU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[1U][0x1cU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[1U][0x1dU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[1U][0x1eU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[1U][0x1fU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[2U][0U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[2U][1U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[2U][2U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[2U][3U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[2U][4U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[2U][5U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[2U][6U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[2U][7U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[2U][8U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[2U][9U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[2U][0xaU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[2U][0xbU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[2U][0xcU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[2U][0xdU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[2U][0xeU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[2U][0xfU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[2U][0x10U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[2U][0x11U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[2U][0x12U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[2U][0x13U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[2U][0x14U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[2U][0x15U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[2U][0x16U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[2U][0x17U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[2U][0x18U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[2U][0x19U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[2U][0x1aU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[2U][0x1bU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[2U][0x1cU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[2U][0x1dU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[2U][0x1eU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[2U][0x1fU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[3U][0U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[3U][1U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[3U][2U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[3U][3U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[3U][4U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[3U][5U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[3U][6U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[3U][7U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[3U][8U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[3U][9U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[3U][0xaU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[3U][0xbU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[3U][0xcU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[3U][0xdU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[3U][0xeU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[3U][0xfU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[3U][0x10U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[3U][0x11U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[3U][0x12U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[3U][0x13U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[3U][0x14U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[3U][0x15U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[3U][0x16U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[3U][0x17U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[3U][0x18U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[3U][0x19U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[3U][0x1aU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[3U][0x1bU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[3U][0x1cU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[3U][0x1dU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[3U][0x1eU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[3U][0x1fU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[4U][0U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[4U][1U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[4U][2U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[4U][3U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[4U][4U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[4U][5U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[4U][6U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[4U][7U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[4U][8U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[4U][9U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[4U][0xaU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[4U][0xbU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[4U][0xcU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[4U][0xdU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[4U][0xeU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[4U][0xfU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[4U][0x10U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[4U][0x11U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[4U][0x12U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[4U][0x13U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[4U][0x14U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[4U][0x15U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[4U][0x16U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[4U][0x17U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[4U][0x18U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[4U][0x19U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[4U][0x1aU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[4U][0x1bU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[4U][0x1cU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[4U][0x1dU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[4U][0x1eU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[4U][0x1fU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[5U][0U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[5U][1U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[5U][2U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[5U][3U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[5U][4U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[5U][5U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[5U][6U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[5U][7U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[5U][8U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[5U][9U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[5U][0xaU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[5U][0xbU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[5U][0xcU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[5U][0xdU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[5U][0xeU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[5U][0xfU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[5U][0x10U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[5U][0x11U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[5U][0x12U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[5U][0x13U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[5U][0x14U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[5U][0x15U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[5U][0x16U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[5U][0x17U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[5U][0x18U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[5U][0x19U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[5U][0x1aU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[5U][0x1bU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[5U][0x1cU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[5U][0x1dU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[5U][0x1eU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[5U][0x1fU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[6U][0U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[6U][1U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[6U][2U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[6U][3U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[6U][4U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[6U][5U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[6U][6U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[6U][7U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[6U][8U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[6U][9U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[6U][0xaU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[6U][0xbU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[6U][0xcU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[6U][0xdU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[6U][0xeU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[6U][0xfU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[6U][0x10U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[6U][0x11U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[6U][0x12U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[6U][0x13U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[6U][0x14U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[6U][0x15U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[6U][0x16U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[6U][0x17U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[6U][0x18U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[6U][0x19U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[6U][0x1aU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[6U][0x1bU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[6U][0x1cU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[6U][0x1dU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[6U][0x1eU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[6U][0x1fU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[7U][0U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[7U][1U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[7U][2U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[7U][3U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[7U][4U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[7U][5U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[7U][6U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[7U][7U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[7U][8U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[7U][9U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[7U][0xaU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[7U][0xbU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[7U][0xcU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[7U][0xdU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[7U][0xeU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[7U][0xfU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[7U][0x10U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[7U][0x11U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[7U][0x12U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[7U][0x13U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[7U][0x14U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[7U][0x15U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[7U][0x16U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[7U][0x17U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[7U][0x18U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[7U][0x19U] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[7U][0x1aU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[7U][0x1bU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[7U][0x1cU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[7U][0x1dU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[7U][0x1eU] = 0U;
        vlSelfRef.rv64g_l1_arrays__DOT__state_q[7U][0x1fU] = 0U;
    }
    vlSelfRef.tag_selected_o = vlSelfRef.rv64g_l1_arrays__DOT__tag_q
        [vlSelfRef.way_sel_i][vlSelfRef.index_i];
    vlSelfRef.tag_way_flat_o[0U] = (IData)(vlSelfRef.rv64g_l1_arrays__DOT__tag_q
                                           [0U][vlSelfRef.index_i]);
    vlSelfRef.tag_way_flat_o[1U] = (((IData)(vlSelfRef.rv64g_l1_arrays__DOT__tag_q
                                             [1U][vlSelfRef.index_i]) 
                                     << 0x15U) | (IData)(
                                                         (vlSelfRef.rv64g_l1_arrays__DOT__tag_q
                                                          [0U]
                                                          [vlSelfRef.index_i] 
                                                          >> 0x20U)));
    vlSelfRef.tag_way_flat_o[2U] = (((IData)(vlSelfRef.rv64g_l1_arrays__DOT__tag_q
                                             [1U][vlSelfRef.index_i]) 
                                     >> 0xbU) | ((IData)(
                                                         (vlSelfRef.rv64g_l1_arrays__DOT__tag_q
                                                          [1U]
                                                          [vlSelfRef.index_i] 
                                                          >> 0x20U)) 
                                                 << 0x15U));
    vlSelfRef.tag_way_flat_o[3U] = ((0xfffffc00U & 
                                     vlSelfRef.tag_way_flat_o[3U]) 
                                    | ((IData)((vlSelfRef.rv64g_l1_arrays__DOT__tag_q
                                                [1U]
                                                [vlSelfRef.index_i] 
                                                >> 0x20U)) 
                                       >> 0xbU));
    vlSelfRef.tag_way_flat_o[3U] = ((0x3ffU & vlSelfRef.tag_way_flat_o[3U]) 
                                    | ((IData)(vlSelfRef.rv64g_l1_arrays__DOT__tag_q
                                               [2U]
                                               [vlSelfRef.index_i]) 
                                       << 0xaU));
    vlSelfRef.tag_way_flat_o[4U] = (((IData)(vlSelfRef.rv64g_l1_arrays__DOT__tag_q
                                             [2U][vlSelfRef.index_i]) 
                                     >> 0x16U) | (((IData)(
                                                           vlSelfRef.rv64g_l1_arrays__DOT__tag_q
                                                           [3U]
                                                           [vlSelfRef.index_i]) 
                                                   << 0x1fU) 
                                                  | ((IData)(
                                                             (vlSelfRef.rv64g_l1_arrays__DOT__tag_q
                                                              [2U]
                                                              [vlSelfRef.index_i] 
                                                              >> 0x20U)) 
                                                     << 0xaU)));
    vlSelfRef.tag_way_flat_o[5U] = (((0x3ffU & ((IData)(
                                                        vlSelfRef.rv64g_l1_arrays__DOT__tag_q
                                                        [3U]
                                                        [vlSelfRef.index_i]) 
                                                >> 1U)) 
                                     | ((IData)((vlSelfRef.rv64g_l1_arrays__DOT__tag_q
                                                 [2U]
                                                 [vlSelfRef.index_i] 
                                                 >> 0x20U)) 
                                        >> 0x16U)) 
                                    | ((0x7ffffc00U 
                                        & ((IData)(
                                                   vlSelfRef.rv64g_l1_arrays__DOT__tag_q
                                                   [3U]
                                                   [vlSelfRef.index_i]) 
                                           >> 1U)) 
                                       | ((IData)((
                                                   vlSelfRef.rv64g_l1_arrays__DOT__tag_q
                                                   [3U]
                                                   [vlSelfRef.index_i] 
                                                   >> 0x20U)) 
                                          << 0x1fU)));
    vlSelfRef.tag_way_flat_o[6U] = ((0xfff00000U & 
                                     vlSelfRef.tag_way_flat_o[6U]) 
                                    | ((0x3ffU & ((IData)(
                                                          (vlSelfRef.rv64g_l1_arrays__DOT__tag_q
                                                           [3U]
                                                           [vlSelfRef.index_i] 
                                                           >> 0x20U)) 
                                                  >> 1U)) 
                                       | (0x7ffffc00U 
                                          & ((IData)(
                                                     (vlSelfRef.rv64g_l1_arrays__DOT__tag_q
                                                      [3U]
                                                      [vlSelfRef.index_i] 
                                                      >> 0x20U)) 
                                             >> 1U))));
    vlSelfRef.tag_way_flat_o[6U] = ((0xfffffU & vlSelfRef.tag_way_flat_o[6U]) 
                                    | ((IData)(vlSelfRef.rv64g_l1_arrays__DOT__tag_q
                                               [4U]
                                               [vlSelfRef.index_i]) 
                                       << 0x14U));
    vlSelfRef.tag_way_flat_o[7U] = (((IData)(vlSelfRef.rv64g_l1_arrays__DOT__tag_q
                                             [4U][vlSelfRef.index_i]) 
                                     >> 0xcU) | ((IData)(
                                                         (vlSelfRef.rv64g_l1_arrays__DOT__tag_q
                                                          [4U]
                                                          [vlSelfRef.index_i] 
                                                          >> 0x20U)) 
                                                 << 0x14U));
    vlSelfRef.tag_way_flat_o[8U] = (((0xffe00U & ((IData)(
                                                          vlSelfRef.rv64g_l1_arrays__DOT__tag_q
                                                          [5U]
                                                          [vlSelfRef.index_i]) 
                                                  << 9U)) 
                                     | ((IData)((vlSelfRef.rv64g_l1_arrays__DOT__tag_q
                                                 [4U]
                                                 [vlSelfRef.index_i] 
                                                 >> 0x20U)) 
                                        >> 0xcU)) | 
                                    (0xfff00000U & 
                                     ((IData)(vlSelfRef.rv64g_l1_arrays__DOT__tag_q
                                              [5U][vlSelfRef.index_i]) 
                                      << 9U)));
    vlSelfRef.tag_way_flat_o[9U] = ((0xc0000000U & 
                                     vlSelfRef.tag_way_flat_o[9U]) 
                                    | ((((IData)(vlSelfRef.rv64g_l1_arrays__DOT__tag_q
                                                 [5U]
                                                 [vlSelfRef.index_i]) 
                                         >> 0x17U) 
                                        | (0xffe00U 
                                           & ((IData)(
                                                      (vlSelfRef.rv64g_l1_arrays__DOT__tag_q
                                                       [5U]
                                                       [vlSelfRef.index_i] 
                                                       >> 0x20U)) 
                                              << 9U))) 
                                       | (0xfff00000U 
                                          & ((IData)(
                                                     (vlSelfRef.rv64g_l1_arrays__DOT__tag_q
                                                      [5U]
                                                      [vlSelfRef.index_i] 
                                                      >> 0x20U)) 
                                             << 9U))));
    vlSelfRef.tag_way_flat_o[9U] = ((0x3fffffffU & 
                                     vlSelfRef.tag_way_flat_o[9U]) 
                                    | ((IData)(vlSelfRef.rv64g_l1_arrays__DOT__tag_q
                                               [6U]
                                               [vlSelfRef.index_i]) 
                                       << 0x1eU));
    vlSelfRef.tag_way_flat_o[0xaU] = (((IData)(vlSelfRef.rv64g_l1_arrays__DOT__tag_q
                                               [6U]
                                               [vlSelfRef.index_i]) 
                                       >> 2U) | ((IData)(
                                                         (vlSelfRef.rv64g_l1_arrays__DOT__tag_q
                                                          [6U]
                                                          [vlSelfRef.index_i] 
                                                          >> 0x20U)) 
                                                 << 0x1eU));
    vlSelfRef.tag_way_flat_o[0xbU] = (((0x3ff80000U 
                                        & ((IData)(
                                                   vlSelfRef.rv64g_l1_arrays__DOT__tag_q
                                                   [7U]
                                                   [vlSelfRef.index_i]) 
                                           << 0x13U)) 
                                       | ((IData)((
                                                   vlSelfRef.rv64g_l1_arrays__DOT__tag_q
                                                   [6U]
                                                   [vlSelfRef.index_i] 
                                                   >> 0x20U)) 
                                          >> 2U)) | 
                                      (0xc0000000U 
                                       & ((IData)(vlSelfRef.rv64g_l1_arrays__DOT__tag_q
                                                  [7U]
                                                  [vlSelfRef.index_i]) 
                                          << 0x13U)));
    vlSelfRef.tag_way_flat_o[0xcU] = ((((IData)(vlSelfRef.rv64g_l1_arrays__DOT__tag_q
                                                [7U]
                                                [vlSelfRef.index_i]) 
                                        >> 0xdU) | 
                                       (0x3ff80000U 
                                        & ((IData)(
                                                   (vlSelfRef.rv64g_l1_arrays__DOT__tag_q
                                                    [7U]
                                                    [vlSelfRef.index_i] 
                                                    >> 0x20U)) 
                                           << 0x13U))) 
                                      | (0xc0000000U 
                                         & ((IData)(
                                                    (vlSelfRef.rv64g_l1_arrays__DOT__tag_q
                                                     [7U]
                                                     [vlSelfRef.index_i] 
                                                     >> 0x20U)) 
                                            << 0x13U)));
    vlSelfRef.tag_way_flat_o[0xdU] = (0xffU & ((IData)(
                                                       (vlSelfRef.rv64g_l1_arrays__DOT__tag_q
                                                        [7U]
                                                        [vlSelfRef.index_i] 
                                                        >> 0x20U)) 
                                               >> 0xdU));
    vlSelfRef.rdata_selected_o = vlSelfRef.rv64g_l1_arrays__DOT__data_q
        [vlSelfRef.way_sel_i][vlSelfRef.rv64g_l1_arrays__DOT__line_idx];
    vlSelfRef.rdata_way_flat_o[0U] = (IData)(vlSelfRef.rv64g_l1_arrays__DOT__data_q
                                             [0U][vlSelfRef.rv64g_l1_arrays__DOT__line_idx]);
    vlSelfRef.rdata_way_flat_o[1U] = (IData)((vlSelfRef.rv64g_l1_arrays__DOT__data_q
                                              [0U][vlSelfRef.rv64g_l1_arrays__DOT__line_idx] 
                                              >> 0x20U));
    vlSelfRef.rdata_way_flat_o[2U] = (IData)(vlSelfRef.rv64g_l1_arrays__DOT__data_q
                                             [1U][vlSelfRef.rv64g_l1_arrays__DOT__line_idx]);
    vlSelfRef.rdata_way_flat_o[3U] = (IData)((vlSelfRef.rv64g_l1_arrays__DOT__data_q
                                              [1U][vlSelfRef.rv64g_l1_arrays__DOT__line_idx] 
                                              >> 0x20U));
    vlSelfRef.rdata_way_flat_o[4U] = (IData)(vlSelfRef.rv64g_l1_arrays__DOT__data_q
                                             [2U][vlSelfRef.rv64g_l1_arrays__DOT__line_idx]);
    vlSelfRef.rdata_way_flat_o[5U] = (IData)((vlSelfRef.rv64g_l1_arrays__DOT__data_q
                                              [2U][vlSelfRef.rv64g_l1_arrays__DOT__line_idx] 
                                              >> 0x20U));
    vlSelfRef.rdata_way_flat_o[6U] = (IData)(vlSelfRef.rv64g_l1_arrays__DOT__data_q
                                             [3U][vlSelfRef.rv64g_l1_arrays__DOT__line_idx]);
    vlSelfRef.rdata_way_flat_o[7U] = (IData)((vlSelfRef.rv64g_l1_arrays__DOT__data_q
                                              [3U][vlSelfRef.rv64g_l1_arrays__DOT__line_idx] 
                                              >> 0x20U));
    vlSelfRef.rdata_way_flat_o[8U] = (IData)(vlSelfRef.rv64g_l1_arrays__DOT__data_q
                                             [4U][vlSelfRef.rv64g_l1_arrays__DOT__line_idx]);
    vlSelfRef.rdata_way_flat_o[9U] = (IData)((vlSelfRef.rv64g_l1_arrays__DOT__data_q
                                              [4U][vlSelfRef.rv64g_l1_arrays__DOT__line_idx] 
                                              >> 0x20U));
    vlSelfRef.rdata_way_flat_o[0xaU] = (IData)(vlSelfRef.rv64g_l1_arrays__DOT__data_q
                                               [5U]
                                               [vlSelfRef.rv64g_l1_arrays__DOT__line_idx]);
    vlSelfRef.rdata_way_flat_o[0xbU] = (IData)((vlSelfRef.rv64g_l1_arrays__DOT__data_q
                                                [5U]
                                                [vlSelfRef.rv64g_l1_arrays__DOT__line_idx] 
                                                >> 0x20U));
    vlSelfRef.rdata_way_flat_o[0xcU] = (IData)(vlSelfRef.rv64g_l1_arrays__DOT__data_q
                                               [6U]
                                               [vlSelfRef.rv64g_l1_arrays__DOT__line_idx]);
    vlSelfRef.rdata_way_flat_o[0xdU] = (IData)((vlSelfRef.rv64g_l1_arrays__DOT__data_q
                                                [6U]
                                                [vlSelfRef.rv64g_l1_arrays__DOT__line_idx] 
                                                >> 0x20U));
    vlSelfRef.rdata_way_flat_o[0xeU] = (IData)(vlSelfRef.rv64g_l1_arrays__DOT__data_q
                                               [7U]
                                               [vlSelfRef.rv64g_l1_arrays__DOT__line_idx]);
    vlSelfRef.rdata_way_flat_o[0xfU] = (IData)((vlSelfRef.rv64g_l1_arrays__DOT__data_q
                                                [7U]
                                                [vlSelfRef.rv64g_l1_arrays__DOT__line_idx] 
                                                >> 0x20U));
    vlSelfRef.state_selected_o = vlSelfRef.rv64g_l1_arrays__DOT__state_q
        [vlSelfRef.way_sel_i][vlSelfRef.index_i];
    vlSelfRef.state_way_flat_o = ((0xfff0U & (IData)(vlSelfRef.state_way_flat_o)) 
                                  | ((vlSelfRef.rv64g_l1_arrays__DOT__state_q
                                      [1U][vlSelfRef.index_i] 
                                      << 2U) | vlSelfRef.rv64g_l1_arrays__DOT__state_q
                                     [0U][vlSelfRef.index_i]));
    vlSelfRef.state_way_flat_o = ((0xff0fU & (IData)(vlSelfRef.state_way_flat_o)) 
                                  | ((vlSelfRef.rv64g_l1_arrays__DOT__state_q
                                      [3U][vlSelfRef.index_i] 
                                      << 6U) | (vlSelfRef.rv64g_l1_arrays__DOT__state_q
                                                [2U]
                                                [vlSelfRef.index_i] 
                                                << 4U)));
    vlSelfRef.state_way_flat_o = ((0xf0ffU & (IData)(vlSelfRef.state_way_flat_o)) 
                                  | ((vlSelfRef.rv64g_l1_arrays__DOT__state_q
                                      [5U][vlSelfRef.index_i] 
                                      << 0xaU) | (vlSelfRef.rv64g_l1_arrays__DOT__state_q
                                                  [4U]
                                                  [vlSelfRef.index_i] 
                                                  << 8U)));
    vlSelfRef.state_way_flat_o = ((0xfffU & (IData)(vlSelfRef.state_way_flat_o)) 
                                  | ((vlSelfRef.rv64g_l1_arrays__DOT__state_q
                                      [7U][vlSelfRef.index_i] 
                                      << 0xeU) | (vlSelfRef.rv64g_l1_arrays__DOT__state_q
                                                  [6U]
                                                  [vlSelfRef.index_i] 
                                                  << 0xcU)));
}

VL_INLINE_OPT void Vrv64g_cache_system_tb___024root___nba_sequent__TOP__2(Vrv64g_cache_system_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv64g_cache_system_tb___024root___nba_sequent__TOP__2\n"); );
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
    if ((0x20000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h3c4e1133__0.resume(
                                                   "@( rv64g_cache_system_tb.dut.gen_l1[0].l1.gnt_o)");
    }
    if ((0x40000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_ha55c2679__0.resume(
                                                   "@( rv64g_cache_system_tb.dut.gen_l1[0].l1.rvalid_o)");
    }
    if ((0x80000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h15eb0316__0.resume(
                                                   "@( rv64g_cache_system_tb.dut.gen_l1[1].l1.gnt_o)");
    }
    if ((0x100000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h1e159713__0.resume(
                                                   "@( rv64g_cache_system_tb.dut.gen_l1[1].l1.rvalid_o)");
    }
    if ((0x10000000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vrv64g_cache_system_tb___024root___timing_commit(Vrv64g_cache_system_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrv64g_cache_system_tb___024root___timing_commit\n"); );
    Vrv64g_cache_system_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (0x20000000000ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h3c4e1133__0.commit(
                                                   "@( rv64g_cache_system_tb.dut.gen_l1[0].l1.gnt_o)");
    }
    if ((! (0x40000000000ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_ha55c2679__0.commit(
                                                   "@( rv64g_cache_system_tb.dut.gen_l1[0].l1.rvalid_o)");
    }
    if ((! (0x80000000000ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h15eb0316__0.commit(
                                                   "@( rv64g_cache_system_tb.dut.gen_l1[1].l1.gnt_o)");
    }
    if ((! (0x100000000000ULL & vlSelfRef.__VactTriggered.word(0U)))) {
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
    VlTriggerVec<45> __VpreTriggered;
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
VL_ATTR_COLD void Vrv64g_cache_system_tb___024root___dump_triggers__ico(Vrv64g_cache_system_tb___024root* vlSelf);
#endif  // VL_DEBUG
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
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vrv64g_cache_system_tb___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("rtl/l1/rv64g_l1_arrays.v", 8, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vrv64g_cache_system_tb___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vrv64g_cache_system_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("rtl/l1/rv64g_l1_arrays.v", 8, "", "NBA region did not converge.");
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
                VL_FATAL_MT("rtl/l1/rv64g_l1_arrays.v", 8, "", "Active region did not converge.");
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
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk_i & 0xfeU)))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY(((vlSelfRef.rst_ni & 0xfeU)))) {
        Verilated::overWidthError("rst_ni");}
    if (VL_UNLIKELY(((vlSelfRef.invalidate_all_i & 0xfeU)))) {
        Verilated::overWidthError("invalidate_all_i");}
    if (VL_UNLIKELY(((vlSelfRef.index_i & 0xe0U)))) {
        Verilated::overWidthError("index_i");}
    if (VL_UNLIKELY(((vlSelfRef.word_sel_i & 0xf8U)))) {
        Verilated::overWidthError("word_sel_i");}
    if (VL_UNLIKELY(((vlSelfRef.way_sel_i & 0xf8U)))) {
        Verilated::overWidthError("way_sel_i");}
    if (VL_UNLIKELY(((vlSelfRef.write_en_i & 0xfeU)))) {
        Verilated::overWidthError("write_en_i");}
    if (VL_UNLIKELY(((vlSelfRef.state_i & 0xfcU)))) {
        Verilated::overWidthError("state_i");}
    if (VL_UNLIKELY(((vlSelfRef.tag_in_i & 0ULL)))) {
        Verilated::overWidthError("tag_in_i");}
}
#endif  // VL_DEBUG
