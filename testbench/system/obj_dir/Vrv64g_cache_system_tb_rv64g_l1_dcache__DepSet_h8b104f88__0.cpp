// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrv64g_cache_system_tb.h for the primary calling header

#include "Vrv64g_cache_system_tb__pch.h"
#include "Vrv64g_cache_system_tb_rv64g_l1_dcache.h"

VL_INLINE_OPT void Vrv64g_cache_system_tb_rv64g_l1_dcache___eval_initial__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1(Vrv64g_cache_system_tb_rv64g_l1_dcache* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv64g_cache_system_tb_rv64g_l1_dcache___eval_initial__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1\n"); );
    Vrv64g_cache_system_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__i = 8U;
    vlSelfRef.__PVT__i = 8U;
    vlSelfRef.__PVT__u_vlsu_hit__DOT__hit_way_r = 0U;
    vlSelfRef.__PVT__u_vlsu_hit__DOT__state_r = 0U;
    vlSelfRef.__PVT__u_vlsu_hit__DOT__hit_r = 0U;
    vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_tag[0U] = 0ULL;
    vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_tag[1U] = 0ULL;
    vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_tag[2U] = 0ULL;
    vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_tag[3U] = 0ULL;
    vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_tag[4U] = 0ULL;
    vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_tag[5U] = 0ULL;
    vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_tag[6U] = 0ULL;
    vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_tag[7U] = 0ULL;
    vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank[0U] = 0U;
    vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank[1U] = 0U;
    vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank[2U] = 0U;
    vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank[3U] = 0U;
    vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank[4U] = 0U;
    vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank[5U] = 0U;
    vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank[6U] = 0U;
    vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank[7U] = 0U;
}

VL_INLINE_OPT void Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__0(Vrv64g_cache_system_tb_rv64g_l1_dcache* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__0\n"); );
    Vrv64g_cache_system_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__tag_way_o[0U] 
        = (IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__tag_q
                  [0U][vlSelfRef.__PVT__u_arrays__DOT__arb_bank_index__BRA__4__03a0__KET__]);
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__tag_way_o[1U] 
        = (((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__tag_q
                    [1U][vlSelfRef.__PVT__u_arrays__DOT__arb_bank_index__BRA__4__03a0__KET__]) 
            << 0x15U) | (IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__tag_q
                                 [0U][vlSelfRef.__PVT__u_arrays__DOT__arb_bank_index__BRA__4__03a0__KET__] 
                                 >> 0x20U)));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__tag_way_o[2U] 
        = (((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__tag_q
                    [1U][vlSelfRef.__PVT__u_arrays__DOT__arb_bank_index__BRA__4__03a0__KET__]) 
            >> 0xbU) | ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__tag_q
                                 [1U][vlSelfRef.__PVT__u_arrays__DOT__arb_bank_index__BRA__4__03a0__KET__] 
                                 >> 0x20U)) << 0x15U));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__tag_way_o[3U] 
        = ((0xfffffc00U & vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__tag_way_o[3U]) 
           | ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__tag_q
                       [1U][vlSelfRef.__PVT__u_arrays__DOT__arb_bank_index__BRA__4__03a0__KET__] 
                       >> 0x20U)) >> 0xbU));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__tag_way_o[3U] 
        = ((0x3ffU & vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__tag_way_o[3U]) 
           | ((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__tag_q
                      [2U][vlSelfRef.__PVT__u_arrays__DOT__arb_bank_index__BRA__4__03a0__KET__]) 
              << 0xaU));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__tag_way_o[4U] 
        = (((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__tag_q
                    [2U][vlSelfRef.__PVT__u_arrays__DOT__arb_bank_index__BRA__4__03a0__KET__]) 
            >> 0x16U) | (((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__tag_q
                                  [3U][vlSelfRef.__PVT__u_arrays__DOT__arb_bank_index__BRA__4__03a0__KET__]) 
                          << 0x1fU) | ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__tag_q
                                                [2U]
                                                [vlSelfRef.__PVT__u_arrays__DOT__arb_bank_index__BRA__4__03a0__KET__] 
                                                >> 0x20U)) 
                                       << 0xaU)));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__tag_way_o[5U] 
        = (((0x3ffU & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__tag_q
                               [3U][vlSelfRef.__PVT__u_arrays__DOT__arb_bank_index__BRA__4__03a0__KET__]) 
                       >> 1U)) | ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__tag_q
                                           [2U][vlSelfRef.__PVT__u_arrays__DOT__arb_bank_index__BRA__4__03a0__KET__] 
                                           >> 0x20U)) 
                                  >> 0x16U)) | ((0x7ffffc00U 
                                                 & ((IData)(
                                                            vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__tag_q
                                                            [3U]
                                                            [vlSelfRef.__PVT__u_arrays__DOT__arb_bank_index__BRA__4__03a0__KET__]) 
                                                    >> 1U)) 
                                                | ((IData)(
                                                           (vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__tag_q
                                                            [3U]
                                                            [vlSelfRef.__PVT__u_arrays__DOT__arb_bank_index__BRA__4__03a0__KET__] 
                                                            >> 0x20U)) 
                                                   << 0x1fU)));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__tag_way_o[6U] 
        = ((0xfff00000U & vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__tag_way_o[6U]) 
           | ((0x3ffU & ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__tag_q
                                  [3U][vlSelfRef.__PVT__u_arrays__DOT__arb_bank_index__BRA__4__03a0__KET__] 
                                  >> 0x20U)) >> 1U)) 
              | (0x7ffffc00U & ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__tag_q
                                         [3U][vlSelfRef.__PVT__u_arrays__DOT__arb_bank_index__BRA__4__03a0__KET__] 
                                         >> 0x20U)) 
                                >> 1U))));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__tag_way_o[6U] 
        = ((0xfffffU & vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__tag_way_o[6U]) 
           | ((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__tag_q
                      [4U][vlSelfRef.__PVT__u_arrays__DOT__arb_bank_index__BRA__4__03a0__KET__]) 
              << 0x14U));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__tag_way_o[7U] 
        = (((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__tag_q
                    [4U][vlSelfRef.__PVT__u_arrays__DOT__arb_bank_index__BRA__4__03a0__KET__]) 
            >> 0xcU) | ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__tag_q
                                 [4U][vlSelfRef.__PVT__u_arrays__DOT__arb_bank_index__BRA__4__03a0__KET__] 
                                 >> 0x20U)) << 0x14U));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__tag_way_o[8U] 
        = (((0xffe00U & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__tag_q
                                 [5U][vlSelfRef.__PVT__u_arrays__DOT__arb_bank_index__BRA__4__03a0__KET__]) 
                         << 9U)) | ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__tag_q
                                             [4U][vlSelfRef.__PVT__u_arrays__DOT__arb_bank_index__BRA__4__03a0__KET__] 
                                             >> 0x20U)) 
                                    >> 0xcU)) | (0xfff00000U 
                                                 & ((IData)(
                                                            vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__tag_q
                                                            [5U]
                                                            [vlSelfRef.__PVT__u_arrays__DOT__arb_bank_index__BRA__4__03a0__KET__]) 
                                                    << 9U)));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__tag_way_o[9U] 
        = ((0xc0000000U & vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__tag_way_o[9U]) 
           | ((((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__tag_q
                        [5U][vlSelfRef.__PVT__u_arrays__DOT__arb_bank_index__BRA__4__03a0__KET__]) 
                >> 0x17U) | (0xffe00U & ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__tag_q
                                                  [5U]
                                                  [vlSelfRef.__PVT__u_arrays__DOT__arb_bank_index__BRA__4__03a0__KET__] 
                                                  >> 0x20U)) 
                                         << 9U))) | 
              (0xfff00000U & ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__tag_q
                                       [5U][vlSelfRef.__PVT__u_arrays__DOT__arb_bank_index__BRA__4__03a0__KET__] 
                                       >> 0x20U)) << 9U))));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__tag_way_o[9U] 
        = ((0x3fffffffU & vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__tag_way_o[9U]) 
           | ((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__tag_q
                      [6U][vlSelfRef.__PVT__u_arrays__DOT__arb_bank_index__BRA__4__03a0__KET__]) 
              << 0x1eU));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__tag_way_o[0xaU] 
        = (((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__tag_q
                    [6U][vlSelfRef.__PVT__u_arrays__DOT__arb_bank_index__BRA__4__03a0__KET__]) 
            >> 2U) | ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__tag_q
                               [6U][vlSelfRef.__PVT__u_arrays__DOT__arb_bank_index__BRA__4__03a0__KET__] 
                               >> 0x20U)) << 0x1eU));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__tag_way_o[0xbU] 
        = (((0x3ff80000U & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__tag_q
                                    [7U][vlSelfRef.__PVT__u_arrays__DOT__arb_bank_index__BRA__4__03a0__KET__]) 
                            << 0x13U)) | ((IData)((
                                                   vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__tag_q
                                                   [6U]
                                                   [vlSelfRef.__PVT__u_arrays__DOT__arb_bank_index__BRA__4__03a0__KET__] 
                                                   >> 0x20U)) 
                                          >> 2U)) | 
           (0xc0000000U & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__tag_q
                                   [7U][vlSelfRef.__PVT__u_arrays__DOT__arb_bank_index__BRA__4__03a0__KET__]) 
                           << 0x13U)));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__tag_way_o[0xcU] 
        = ((((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__tag_q
                     [7U][vlSelfRef.__PVT__u_arrays__DOT__arb_bank_index__BRA__4__03a0__KET__]) 
             >> 0xdU) | (0x3ff80000U & ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__tag_q
                                                 [7U]
                                                 [vlSelfRef.__PVT__u_arrays__DOT__arb_bank_index__BRA__4__03a0__KET__] 
                                                 >> 0x20U)) 
                                        << 0x13U))) 
           | (0xc0000000U & ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__tag_q
                                      [7U][vlSelfRef.__PVT__u_arrays__DOT__arb_bank_index__BRA__4__03a0__KET__] 
                                      >> 0x20U)) << 0x13U)));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__tag_way_o[0xdU] 
        = (0xffU & ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__tag_q
                             [7U][vlSelfRef.__PVT__u_arrays__DOT__arb_bank_index__BRA__4__03a0__KET__] 
                             >> 0x20U)) >> 0xdU));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__state_way_o 
        = ((0xfff0U & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__state_way_o)) 
           | ((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q
               [1U][vlSelfRef.__PVT__u_arrays__DOT__arb_bank_index__BRA__4__03a0__KET__] 
               << 2U) | vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q
              [0U][vlSelfRef.__PVT__u_arrays__DOT__arb_bank_index__BRA__4__03a0__KET__]));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__state_way_o 
        = ((0xff0fU & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__state_way_o)) 
           | ((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q
               [3U][vlSelfRef.__PVT__u_arrays__DOT__arb_bank_index__BRA__4__03a0__KET__] 
               << 6U) | (vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q
                         [2U][vlSelfRef.__PVT__u_arrays__DOT__arb_bank_index__BRA__4__03a0__KET__] 
                         << 4U)));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__state_way_o 
        = ((0xf0ffU & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__state_way_o)) 
           | ((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q
               [5U][vlSelfRef.__PVT__u_arrays__DOT__arb_bank_index__BRA__4__03a0__KET__] 
               << 0xaU) | (vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q
                           [4U][vlSelfRef.__PVT__u_arrays__DOT__arb_bank_index__BRA__4__03a0__KET__] 
                           << 8U)));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__state_way_o 
        = ((0xfffU & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__state_way_o)) 
           | ((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q
               [7U][vlSelfRef.__PVT__u_arrays__DOT__arb_bank_index__BRA__4__03a0__KET__] 
               << 0xeU) | (vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q
                           [6U][vlSelfRef.__PVT__u_arrays__DOT__arb_bank_index__BRA__4__03a0__KET__] 
                           << 0xcU)));
}

VL_INLINE_OPT void Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__1(Vrv64g_cache_system_tb_rv64g_l1_dcache* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__1\n"); );
    Vrv64g_cache_system_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__tag_way_o[0U] 
        = (IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__tag_q
                  [0U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_index_o]);
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__tag_way_o[1U] 
        = (((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__tag_q
                    [1U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_index_o]) 
            << 0x15U) | (IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__tag_q
                                 [0U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_index_o] 
                                 >> 0x20U)));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__tag_way_o[2U] 
        = (((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__tag_q
                    [1U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_index_o]) 
            >> 0xbU) | ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__tag_q
                                 [1U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_index_o] 
                                 >> 0x20U)) << 0x15U));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__tag_way_o[3U] 
        = ((0xfffffc00U & vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__tag_way_o[3U]) 
           | ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__tag_q
                       [1U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_index_o] 
                       >> 0x20U)) >> 0xbU));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__tag_way_o[3U] 
        = ((0x3ffU & vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__tag_way_o[3U]) 
           | ((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__tag_q
                      [2U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_index_o]) 
              << 0xaU));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__tag_way_o[4U] 
        = (((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__tag_q
                    [2U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_index_o]) 
            >> 0x16U) | (((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__tag_q
                                  [3U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_index_o]) 
                          << 0x1fU) | ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__tag_q
                                                [2U]
                                                [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_index_o] 
                                                >> 0x20U)) 
                                       << 0xaU)));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__tag_way_o[5U] 
        = (((0x3ffU & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__tag_q
                               [3U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_index_o]) 
                       >> 1U)) | ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__tag_q
                                           [2U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_index_o] 
                                           >> 0x20U)) 
                                  >> 0x16U)) | ((0x7ffffc00U 
                                                 & ((IData)(
                                                            vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__tag_q
                                                            [3U]
                                                            [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_index_o]) 
                                                    >> 1U)) 
                                                | ((IData)(
                                                           (vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__tag_q
                                                            [3U]
                                                            [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_index_o] 
                                                            >> 0x20U)) 
                                                   << 0x1fU)));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__tag_way_o[6U] 
        = ((0xfff00000U & vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__tag_way_o[6U]) 
           | ((0x3ffU & ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__tag_q
                                  [3U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_index_o] 
                                  >> 0x20U)) >> 1U)) 
              | (0x7ffffc00U & ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__tag_q
                                         [3U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_index_o] 
                                         >> 0x20U)) 
                                >> 1U))));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__tag_way_o[6U] 
        = ((0xfffffU & vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__tag_way_o[6U]) 
           | ((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__tag_q
                      [4U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_index_o]) 
              << 0x14U));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__tag_way_o[7U] 
        = (((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__tag_q
                    [4U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_index_o]) 
            >> 0xcU) | ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__tag_q
                                 [4U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_index_o] 
                                 >> 0x20U)) << 0x14U));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__tag_way_o[8U] 
        = (((0xffe00U & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__tag_q
                                 [5U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_index_o]) 
                         << 9U)) | ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__tag_q
                                             [4U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_index_o] 
                                             >> 0x20U)) 
                                    >> 0xcU)) | (0xfff00000U 
                                                 & ((IData)(
                                                            vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__tag_q
                                                            [5U]
                                                            [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_index_o]) 
                                                    << 9U)));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__tag_way_o[9U] 
        = ((0xc0000000U & vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__tag_way_o[9U]) 
           | ((((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__tag_q
                        [5U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_index_o]) 
                >> 0x17U) | (0xffe00U & ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__tag_q
                                                  [5U]
                                                  [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_index_o] 
                                                  >> 0x20U)) 
                                         << 9U))) | 
              (0xfff00000U & ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__tag_q
                                       [5U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_index_o] 
                                       >> 0x20U)) << 9U))));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__tag_way_o[9U] 
        = ((0x3fffffffU & vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__tag_way_o[9U]) 
           | ((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__tag_q
                      [6U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_index_o]) 
              << 0x1eU));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__tag_way_o[0xaU] 
        = (((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__tag_q
                    [6U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_index_o]) 
            >> 2U) | ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__tag_q
                               [6U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_index_o] 
                               >> 0x20U)) << 0x1eU));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__tag_way_o[0xbU] 
        = (((0x3ff80000U & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__tag_q
                                    [7U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_index_o]) 
                            << 0x13U)) | ((IData)((
                                                   vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__tag_q
                                                   [6U]
                                                   [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_index_o] 
                                                   >> 0x20U)) 
                                          >> 2U)) | 
           (0xc0000000U & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__tag_q
                                   [7U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_index_o]) 
                           << 0x13U)));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__tag_way_o[0xcU] 
        = ((((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__tag_q
                     [7U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_index_o]) 
             >> 0xdU) | (0x3ff80000U & ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__tag_q
                                                 [7U]
                                                 [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_index_o] 
                                                 >> 0x20U)) 
                                        << 0x13U))) 
           | (0xc0000000U & ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__tag_q
                                      [7U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_index_o] 
                                      >> 0x20U)) << 0x13U)));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__tag_way_o[0xdU] 
        = (0xffU & ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__tag_q
                             [7U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_index_o] 
                             >> 0x20U)) >> 0xdU));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__state_way_o 
        = ((0xfff0U & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__state_way_o)) 
           | ((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q
               [1U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_index_o] 
               << 2U) | vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q
              [0U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_index_o]));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__state_way_o 
        = ((0xff0fU & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__state_way_o)) 
           | ((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q
               [3U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_index_o] 
               << 6U) | (vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q
                         [2U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_index_o] 
                         << 4U)));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__state_way_o 
        = ((0xf0ffU & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__state_way_o)) 
           | ((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q
               [5U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_index_o] 
               << 0xaU) | (vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q
                           [4U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_index_o] 
                           << 8U)));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__state_way_o 
        = ((0xfffU & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__state_way_o)) 
           | ((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q
               [7U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_index_o] 
               << 0xeU) | (vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q
                           [6U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_index_o] 
                           << 0xcU)));
}

VL_INLINE_OPT void Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__2(Vrv64g_cache_system_tb_rv64g_l1_dcache* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__2\n"); );
    Vrv64g_cache_system_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__tag_way_o[0U] 
        = (IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__tag_q
                  [0U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_index_o]);
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__tag_way_o[1U] 
        = (((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__tag_q
                    [1U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_index_o]) 
            << 0x15U) | (IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__tag_q
                                 [0U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_index_o] 
                                 >> 0x20U)));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__tag_way_o[2U] 
        = (((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__tag_q
                    [1U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_index_o]) 
            >> 0xbU) | ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__tag_q
                                 [1U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_index_o] 
                                 >> 0x20U)) << 0x15U));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__tag_way_o[3U] 
        = ((0xfffffc00U & vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__tag_way_o[3U]) 
           | ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__tag_q
                       [1U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_index_o] 
                       >> 0x20U)) >> 0xbU));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__tag_way_o[3U] 
        = ((0x3ffU & vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__tag_way_o[3U]) 
           | ((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__tag_q
                      [2U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_index_o]) 
              << 0xaU));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__tag_way_o[4U] 
        = (((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__tag_q
                    [2U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_index_o]) 
            >> 0x16U) | (((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__tag_q
                                  [3U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_index_o]) 
                          << 0x1fU) | ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__tag_q
                                                [2U]
                                                [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_index_o] 
                                                >> 0x20U)) 
                                       << 0xaU)));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__tag_way_o[5U] 
        = (((0x3ffU & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__tag_q
                               [3U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_index_o]) 
                       >> 1U)) | ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__tag_q
                                           [2U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_index_o] 
                                           >> 0x20U)) 
                                  >> 0x16U)) | ((0x7ffffc00U 
                                                 & ((IData)(
                                                            vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__tag_q
                                                            [3U]
                                                            [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_index_o]) 
                                                    >> 1U)) 
                                                | ((IData)(
                                                           (vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__tag_q
                                                            [3U]
                                                            [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_index_o] 
                                                            >> 0x20U)) 
                                                   << 0x1fU)));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__tag_way_o[6U] 
        = ((0xfff00000U & vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__tag_way_o[6U]) 
           | ((0x3ffU & ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__tag_q
                                  [3U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_index_o] 
                                  >> 0x20U)) >> 1U)) 
              | (0x7ffffc00U & ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__tag_q
                                         [3U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_index_o] 
                                         >> 0x20U)) 
                                >> 1U))));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__tag_way_o[6U] 
        = ((0xfffffU & vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__tag_way_o[6U]) 
           | ((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__tag_q
                      [4U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_index_o]) 
              << 0x14U));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__tag_way_o[7U] 
        = (((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__tag_q
                    [4U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_index_o]) 
            >> 0xcU) | ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__tag_q
                                 [4U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_index_o] 
                                 >> 0x20U)) << 0x14U));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__tag_way_o[8U] 
        = (((0xffe00U & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__tag_q
                                 [5U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_index_o]) 
                         << 9U)) | ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__tag_q
                                             [4U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_index_o] 
                                             >> 0x20U)) 
                                    >> 0xcU)) | (0xfff00000U 
                                                 & ((IData)(
                                                            vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__tag_q
                                                            [5U]
                                                            [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_index_o]) 
                                                    << 9U)));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__tag_way_o[9U] 
        = ((0xc0000000U & vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__tag_way_o[9U]) 
           | ((((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__tag_q
                        [5U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_index_o]) 
                >> 0x17U) | (0xffe00U & ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__tag_q
                                                  [5U]
                                                  [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_index_o] 
                                                  >> 0x20U)) 
                                         << 9U))) | 
              (0xfff00000U & ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__tag_q
                                       [5U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_index_o] 
                                       >> 0x20U)) << 9U))));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__tag_way_o[9U] 
        = ((0x3fffffffU & vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__tag_way_o[9U]) 
           | ((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__tag_q
                      [6U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_index_o]) 
              << 0x1eU));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__tag_way_o[0xaU] 
        = (((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__tag_q
                    [6U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_index_o]) 
            >> 2U) | ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__tag_q
                               [6U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_index_o] 
                               >> 0x20U)) << 0x1eU));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__tag_way_o[0xbU] 
        = (((0x3ff80000U & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__tag_q
                                    [7U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_index_o]) 
                            << 0x13U)) | ((IData)((
                                                   vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__tag_q
                                                   [6U]
                                                   [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_index_o] 
                                                   >> 0x20U)) 
                                          >> 2U)) | 
           (0xc0000000U & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__tag_q
                                   [7U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_index_o]) 
                           << 0x13U)));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__tag_way_o[0xcU] 
        = ((((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__tag_q
                     [7U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_index_o]) 
             >> 0xdU) | (0x3ff80000U & ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__tag_q
                                                 [7U]
                                                 [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_index_o] 
                                                 >> 0x20U)) 
                                        << 0x13U))) 
           | (0xc0000000U & ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__tag_q
                                      [7U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_index_o] 
                                      >> 0x20U)) << 0x13U)));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__tag_way_o[0xdU] 
        = (0xffU & ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__tag_q
                             [7U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_index_o] 
                             >> 0x20U)) >> 0xdU));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__state_way_o 
        = ((0xfff0U & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__state_way_o)) 
           | ((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q
               [1U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_index_o] 
               << 2U) | vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q
              [0U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_index_o]));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__state_way_o 
        = ((0xff0fU & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__state_way_o)) 
           | ((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q
               [3U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_index_o] 
               << 6U) | (vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q
                         [2U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_index_o] 
                         << 4U)));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__state_way_o 
        = ((0xf0ffU & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__state_way_o)) 
           | ((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q
               [5U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_index_o] 
               << 0xaU) | (vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q
                           [4U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_index_o] 
                           << 8U)));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__state_way_o 
        = ((0xfffU & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__state_way_o)) 
           | ((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q
               [7U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_index_o] 
               << 0xeU) | (vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q
                           [6U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_index_o] 
                           << 0xcU)));
}

VL_INLINE_OPT void Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__3(Vrv64g_cache_system_tb_rv64g_l1_dcache* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__3\n"); );
    Vrv64g_cache_system_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__tag_way_o[0U] 
        = (IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__tag_q
                  [0U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_index_o]);
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__tag_way_o[1U] 
        = (((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__tag_q
                    [1U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_index_o]) 
            << 0x15U) | (IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__tag_q
                                 [0U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_index_o] 
                                 >> 0x20U)));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__tag_way_o[2U] 
        = (((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__tag_q
                    [1U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_index_o]) 
            >> 0xbU) | ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__tag_q
                                 [1U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_index_o] 
                                 >> 0x20U)) << 0x15U));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__tag_way_o[3U] 
        = ((0xfffffc00U & vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__tag_way_o[3U]) 
           | ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__tag_q
                       [1U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_index_o] 
                       >> 0x20U)) >> 0xbU));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__tag_way_o[3U] 
        = ((0x3ffU & vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__tag_way_o[3U]) 
           | ((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__tag_q
                      [2U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_index_o]) 
              << 0xaU));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__tag_way_o[4U] 
        = (((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__tag_q
                    [2U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_index_o]) 
            >> 0x16U) | (((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__tag_q
                                  [3U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_index_o]) 
                          << 0x1fU) | ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__tag_q
                                                [2U]
                                                [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_index_o] 
                                                >> 0x20U)) 
                                       << 0xaU)));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__tag_way_o[5U] 
        = (((0x3ffU & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__tag_q
                               [3U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_index_o]) 
                       >> 1U)) | ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__tag_q
                                           [2U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_index_o] 
                                           >> 0x20U)) 
                                  >> 0x16U)) | ((0x7ffffc00U 
                                                 & ((IData)(
                                                            vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__tag_q
                                                            [3U]
                                                            [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_index_o]) 
                                                    >> 1U)) 
                                                | ((IData)(
                                                           (vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__tag_q
                                                            [3U]
                                                            [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_index_o] 
                                                            >> 0x20U)) 
                                                   << 0x1fU)));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__tag_way_o[6U] 
        = ((0xfff00000U & vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__tag_way_o[6U]) 
           | ((0x3ffU & ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__tag_q
                                  [3U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_index_o] 
                                  >> 0x20U)) >> 1U)) 
              | (0x7ffffc00U & ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__tag_q
                                         [3U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_index_o] 
                                         >> 0x20U)) 
                                >> 1U))));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__tag_way_o[6U] 
        = ((0xfffffU & vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__tag_way_o[6U]) 
           | ((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__tag_q
                      [4U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_index_o]) 
              << 0x14U));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__tag_way_o[7U] 
        = (((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__tag_q
                    [4U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_index_o]) 
            >> 0xcU) | ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__tag_q
                                 [4U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_index_o] 
                                 >> 0x20U)) << 0x14U));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__tag_way_o[8U] 
        = (((0xffe00U & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__tag_q
                                 [5U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_index_o]) 
                         << 9U)) | ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__tag_q
                                             [4U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_index_o] 
                                             >> 0x20U)) 
                                    >> 0xcU)) | (0xfff00000U 
                                                 & ((IData)(
                                                            vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__tag_q
                                                            [5U]
                                                            [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_index_o]) 
                                                    << 9U)));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__tag_way_o[9U] 
        = ((0xc0000000U & vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__tag_way_o[9U]) 
           | ((((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__tag_q
                        [5U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_index_o]) 
                >> 0x17U) | (0xffe00U & ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__tag_q
                                                  [5U]
                                                  [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_index_o] 
                                                  >> 0x20U)) 
                                         << 9U))) | 
              (0xfff00000U & ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__tag_q
                                       [5U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_index_o] 
                                       >> 0x20U)) << 9U))));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__tag_way_o[9U] 
        = ((0x3fffffffU & vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__tag_way_o[9U]) 
           | ((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__tag_q
                      [6U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_index_o]) 
              << 0x1eU));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__tag_way_o[0xaU] 
        = (((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__tag_q
                    [6U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_index_o]) 
            >> 2U) | ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__tag_q
                               [6U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_index_o] 
                               >> 0x20U)) << 0x1eU));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__tag_way_o[0xbU] 
        = (((0x3ff80000U & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__tag_q
                                    [7U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_index_o]) 
                            << 0x13U)) | ((IData)((
                                                   vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__tag_q
                                                   [6U]
                                                   [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_index_o] 
                                                   >> 0x20U)) 
                                          >> 2U)) | 
           (0xc0000000U & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__tag_q
                                   [7U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_index_o]) 
                           << 0x13U)));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__tag_way_o[0xcU] 
        = ((((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__tag_q
                     [7U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_index_o]) 
             >> 0xdU) | (0x3ff80000U & ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__tag_q
                                                 [7U]
                                                 [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_index_o] 
                                                 >> 0x20U)) 
                                        << 0x13U))) 
           | (0xc0000000U & ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__tag_q
                                      [7U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_index_o] 
                                      >> 0x20U)) << 0x13U)));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__tag_way_o[0xdU] 
        = (0xffU & ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__tag_q
                             [7U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_index_o] 
                             >> 0x20U)) >> 0xdU));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__state_way_o 
        = ((0xfff0U & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__state_way_o)) 
           | ((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q
               [1U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_index_o] 
               << 2U) | vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q
              [0U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_index_o]));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__state_way_o 
        = ((0xff0fU & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__state_way_o)) 
           | ((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q
               [3U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_index_o] 
               << 6U) | (vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q
                         [2U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_index_o] 
                         << 4U)));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__state_way_o 
        = ((0xf0ffU & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__state_way_o)) 
           | ((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q
               [5U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_index_o] 
               << 0xaU) | (vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q
                           [4U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_index_o] 
                           << 8U)));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__state_way_o 
        = ((0xfffU & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__state_way_o)) 
           | ((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q
               [7U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_index_o] 
               << 0xeU) | (vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q
                           [6U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_index_o] 
                           << 0xcU)));
}

VL_INLINE_OPT void Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__4(Vrv64g_cache_system_tb_rv64g_l1_dcache* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__4\n"); );
    Vrv64g_cache_system_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__tag_way_o[0U] 
        = (IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__tag_q
                  [0U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_index_o]);
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__tag_way_o[1U] 
        = (((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__tag_q
                    [1U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_index_o]) 
            << 0x15U) | (IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__tag_q
                                 [0U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_index_o] 
                                 >> 0x20U)));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__tag_way_o[2U] 
        = (((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__tag_q
                    [1U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_index_o]) 
            >> 0xbU) | ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__tag_q
                                 [1U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_index_o] 
                                 >> 0x20U)) << 0x15U));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__tag_way_o[3U] 
        = ((0xfffffc00U & vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__tag_way_o[3U]) 
           | ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__tag_q
                       [1U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_index_o] 
                       >> 0x20U)) >> 0xbU));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__tag_way_o[3U] 
        = ((0x3ffU & vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__tag_way_o[3U]) 
           | ((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__tag_q
                      [2U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_index_o]) 
              << 0xaU));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__tag_way_o[4U] 
        = (((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__tag_q
                    [2U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_index_o]) 
            >> 0x16U) | (((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__tag_q
                                  [3U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_index_o]) 
                          << 0x1fU) | ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__tag_q
                                                [2U]
                                                [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_index_o] 
                                                >> 0x20U)) 
                                       << 0xaU)));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__tag_way_o[5U] 
        = (((0x3ffU & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__tag_q
                               [3U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_index_o]) 
                       >> 1U)) | ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__tag_q
                                           [2U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_index_o] 
                                           >> 0x20U)) 
                                  >> 0x16U)) | ((0x7ffffc00U 
                                                 & ((IData)(
                                                            vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__tag_q
                                                            [3U]
                                                            [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_index_o]) 
                                                    >> 1U)) 
                                                | ((IData)(
                                                           (vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__tag_q
                                                            [3U]
                                                            [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_index_o] 
                                                            >> 0x20U)) 
                                                   << 0x1fU)));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__tag_way_o[6U] 
        = ((0xfff00000U & vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__tag_way_o[6U]) 
           | ((0x3ffU & ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__tag_q
                                  [3U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_index_o] 
                                  >> 0x20U)) >> 1U)) 
              | (0x7ffffc00U & ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__tag_q
                                         [3U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_index_o] 
                                         >> 0x20U)) 
                                >> 1U))));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__tag_way_o[6U] 
        = ((0xfffffU & vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__tag_way_o[6U]) 
           | ((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__tag_q
                      [4U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_index_o]) 
              << 0x14U));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__tag_way_o[7U] 
        = (((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__tag_q
                    [4U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_index_o]) 
            >> 0xcU) | ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__tag_q
                                 [4U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_index_o] 
                                 >> 0x20U)) << 0x14U));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__tag_way_o[8U] 
        = (((0xffe00U & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__tag_q
                                 [5U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_index_o]) 
                         << 9U)) | ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__tag_q
                                             [4U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_index_o] 
                                             >> 0x20U)) 
                                    >> 0xcU)) | (0xfff00000U 
                                                 & ((IData)(
                                                            vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__tag_q
                                                            [5U]
                                                            [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_index_o]) 
                                                    << 9U)));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__tag_way_o[9U] 
        = ((0xc0000000U & vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__tag_way_o[9U]) 
           | ((((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__tag_q
                        [5U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_index_o]) 
                >> 0x17U) | (0xffe00U & ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__tag_q
                                                  [5U]
                                                  [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_index_o] 
                                                  >> 0x20U)) 
                                         << 9U))) | 
              (0xfff00000U & ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__tag_q
                                       [5U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_index_o] 
                                       >> 0x20U)) << 9U))));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__tag_way_o[9U] 
        = ((0x3fffffffU & vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__tag_way_o[9U]) 
           | ((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__tag_q
                      [6U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_index_o]) 
              << 0x1eU));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__tag_way_o[0xaU] 
        = (((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__tag_q
                    [6U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_index_o]) 
            >> 2U) | ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__tag_q
                               [6U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_index_o] 
                               >> 0x20U)) << 0x1eU));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__tag_way_o[0xbU] 
        = (((0x3ff80000U & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__tag_q
                                    [7U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_index_o]) 
                            << 0x13U)) | ((IData)((
                                                   vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__tag_q
                                                   [6U]
                                                   [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_index_o] 
                                                   >> 0x20U)) 
                                          >> 2U)) | 
           (0xc0000000U & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__tag_q
                                   [7U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_index_o]) 
                           << 0x13U)));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__tag_way_o[0xcU] 
        = ((((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__tag_q
                     [7U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_index_o]) 
             >> 0xdU) | (0x3ff80000U & ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__tag_q
                                                 [7U]
                                                 [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_index_o] 
                                                 >> 0x20U)) 
                                        << 0x13U))) 
           | (0xc0000000U & ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__tag_q
                                      [7U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_index_o] 
                                      >> 0x20U)) << 0x13U)));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__tag_way_o[0xdU] 
        = (0xffU & ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__tag_q
                             [7U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_index_o] 
                             >> 0x20U)) >> 0xdU));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__state_way_o 
        = ((0xfff0U & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__state_way_o)) 
           | ((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q
               [1U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_index_o] 
               << 2U) | vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q
              [0U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_index_o]));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__state_way_o 
        = ((0xff0fU & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__state_way_o)) 
           | ((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q
               [3U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_index_o] 
               << 6U) | (vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q
                         [2U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_index_o] 
                         << 4U)));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__state_way_o 
        = ((0xf0ffU & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__state_way_o)) 
           | ((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q
               [5U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_index_o] 
               << 0xaU) | (vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q
                           [4U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_index_o] 
                           << 8U)));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__state_way_o 
        = ((0xfffU & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__state_way_o)) 
           | ((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q
               [7U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_index_o] 
               << 0xeU) | (vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q
                           [6U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_index_o] 
                           << 0xcU)));
}

VL_INLINE_OPT void Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__5(Vrv64g_cache_system_tb_rv64g_l1_dcache* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__5\n"); );
    Vrv64g_cache_system_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__tag_way_o[0U] 
        = (IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__tag_q
                  [0U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_index_o]);
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__tag_way_o[1U] 
        = (((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__tag_q
                    [1U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_index_o]) 
            << 0x15U) | (IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__tag_q
                                 [0U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_index_o] 
                                 >> 0x20U)));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__tag_way_o[2U] 
        = (((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__tag_q
                    [1U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_index_o]) 
            >> 0xbU) | ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__tag_q
                                 [1U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_index_o] 
                                 >> 0x20U)) << 0x15U));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__tag_way_o[3U] 
        = ((0xfffffc00U & vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__tag_way_o[3U]) 
           | ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__tag_q
                       [1U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_index_o] 
                       >> 0x20U)) >> 0xbU));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__tag_way_o[3U] 
        = ((0x3ffU & vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__tag_way_o[3U]) 
           | ((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__tag_q
                      [2U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_index_o]) 
              << 0xaU));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__tag_way_o[4U] 
        = (((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__tag_q
                    [2U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_index_o]) 
            >> 0x16U) | (((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__tag_q
                                  [3U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_index_o]) 
                          << 0x1fU) | ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__tag_q
                                                [2U]
                                                [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_index_o] 
                                                >> 0x20U)) 
                                       << 0xaU)));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__tag_way_o[5U] 
        = (((0x3ffU & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__tag_q
                               [3U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_index_o]) 
                       >> 1U)) | ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__tag_q
                                           [2U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_index_o] 
                                           >> 0x20U)) 
                                  >> 0x16U)) | ((0x7ffffc00U 
                                                 & ((IData)(
                                                            vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__tag_q
                                                            [3U]
                                                            [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_index_o]) 
                                                    >> 1U)) 
                                                | ((IData)(
                                                           (vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__tag_q
                                                            [3U]
                                                            [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_index_o] 
                                                            >> 0x20U)) 
                                                   << 0x1fU)));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__tag_way_o[6U] 
        = ((0xfff00000U & vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__tag_way_o[6U]) 
           | ((0x3ffU & ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__tag_q
                                  [3U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_index_o] 
                                  >> 0x20U)) >> 1U)) 
              | (0x7ffffc00U & ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__tag_q
                                         [3U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_index_o] 
                                         >> 0x20U)) 
                                >> 1U))));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__tag_way_o[6U] 
        = ((0xfffffU & vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__tag_way_o[6U]) 
           | ((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__tag_q
                      [4U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_index_o]) 
              << 0x14U));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__tag_way_o[7U] 
        = (((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__tag_q
                    [4U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_index_o]) 
            >> 0xcU) | ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__tag_q
                                 [4U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_index_o] 
                                 >> 0x20U)) << 0x14U));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__tag_way_o[8U] 
        = (((0xffe00U & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__tag_q
                                 [5U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_index_o]) 
                         << 9U)) | ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__tag_q
                                             [4U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_index_o] 
                                             >> 0x20U)) 
                                    >> 0xcU)) | (0xfff00000U 
                                                 & ((IData)(
                                                            vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__tag_q
                                                            [5U]
                                                            [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_index_o]) 
                                                    << 9U)));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__tag_way_o[9U] 
        = ((0xc0000000U & vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__tag_way_o[9U]) 
           | ((((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__tag_q
                        [5U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_index_o]) 
                >> 0x17U) | (0xffe00U & ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__tag_q
                                                  [5U]
                                                  [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_index_o] 
                                                  >> 0x20U)) 
                                         << 9U))) | 
              (0xfff00000U & ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__tag_q
                                       [5U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_index_o] 
                                       >> 0x20U)) << 9U))));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__tag_way_o[9U] 
        = ((0x3fffffffU & vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__tag_way_o[9U]) 
           | ((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__tag_q
                      [6U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_index_o]) 
              << 0x1eU));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__tag_way_o[0xaU] 
        = (((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__tag_q
                    [6U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_index_o]) 
            >> 2U) | ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__tag_q
                               [6U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_index_o] 
                               >> 0x20U)) << 0x1eU));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__tag_way_o[0xbU] 
        = (((0x3ff80000U & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__tag_q
                                    [7U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_index_o]) 
                            << 0x13U)) | ((IData)((
                                                   vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__tag_q
                                                   [6U]
                                                   [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_index_o] 
                                                   >> 0x20U)) 
                                          >> 2U)) | 
           (0xc0000000U & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__tag_q
                                   [7U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_index_o]) 
                           << 0x13U)));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__tag_way_o[0xcU] 
        = ((((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__tag_q
                     [7U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_index_o]) 
             >> 0xdU) | (0x3ff80000U & ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__tag_q
                                                 [7U]
                                                 [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_index_o] 
                                                 >> 0x20U)) 
                                        << 0x13U))) 
           | (0xc0000000U & ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__tag_q
                                      [7U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_index_o] 
                                      >> 0x20U)) << 0x13U)));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__tag_way_o[0xdU] 
        = (0xffU & ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__tag_q
                             [7U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_index_o] 
                             >> 0x20U)) >> 0xdU));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__state_way_o 
        = ((0xfff0U & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__state_way_o)) 
           | ((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q
               [1U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_index_o] 
               << 2U) | vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q
              [0U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_index_o]));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__state_way_o 
        = ((0xff0fU & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__state_way_o)) 
           | ((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q
               [3U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_index_o] 
               << 6U) | (vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q
                         [2U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_index_o] 
                         << 4U)));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__state_way_o 
        = ((0xf0ffU & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__state_way_o)) 
           | ((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q
               [5U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_index_o] 
               << 0xaU) | (vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q
                           [4U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_index_o] 
                           << 8U)));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__state_way_o 
        = ((0xfffU & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__state_way_o)) 
           | ((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q
               [7U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_index_o] 
               << 0xeU) | (vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q
                           [6U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_index_o] 
                           << 0xcU)));
}

VL_INLINE_OPT void Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__6(Vrv64g_cache_system_tb_rv64g_l1_dcache* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__6\n"); );
    Vrv64g_cache_system_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__tag_way_o[0U] 
        = (IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__tag_q
                  [0U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_index_o]);
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__tag_way_o[1U] 
        = (((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__tag_q
                    [1U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_index_o]) 
            << 0x15U) | (IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__tag_q
                                 [0U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_index_o] 
                                 >> 0x20U)));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__tag_way_o[2U] 
        = (((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__tag_q
                    [1U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_index_o]) 
            >> 0xbU) | ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__tag_q
                                 [1U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_index_o] 
                                 >> 0x20U)) << 0x15U));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__tag_way_o[3U] 
        = ((0xfffffc00U & vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__tag_way_o[3U]) 
           | ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__tag_q
                       [1U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_index_o] 
                       >> 0x20U)) >> 0xbU));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__tag_way_o[3U] 
        = ((0x3ffU & vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__tag_way_o[3U]) 
           | ((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__tag_q
                      [2U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_index_o]) 
              << 0xaU));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__tag_way_o[4U] 
        = (((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__tag_q
                    [2U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_index_o]) 
            >> 0x16U) | (((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__tag_q
                                  [3U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_index_o]) 
                          << 0x1fU) | ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__tag_q
                                                [2U]
                                                [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_index_o] 
                                                >> 0x20U)) 
                                       << 0xaU)));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__tag_way_o[5U] 
        = (((0x3ffU & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__tag_q
                               [3U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_index_o]) 
                       >> 1U)) | ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__tag_q
                                           [2U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_index_o] 
                                           >> 0x20U)) 
                                  >> 0x16U)) | ((0x7ffffc00U 
                                                 & ((IData)(
                                                            vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__tag_q
                                                            [3U]
                                                            [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_index_o]) 
                                                    >> 1U)) 
                                                | ((IData)(
                                                           (vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__tag_q
                                                            [3U]
                                                            [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_index_o] 
                                                            >> 0x20U)) 
                                                   << 0x1fU)));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__tag_way_o[6U] 
        = ((0xfff00000U & vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__tag_way_o[6U]) 
           | ((0x3ffU & ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__tag_q
                                  [3U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_index_o] 
                                  >> 0x20U)) >> 1U)) 
              | (0x7ffffc00U & ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__tag_q
                                         [3U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_index_o] 
                                         >> 0x20U)) 
                                >> 1U))));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__tag_way_o[6U] 
        = ((0xfffffU & vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__tag_way_o[6U]) 
           | ((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__tag_q
                      [4U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_index_o]) 
              << 0x14U));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__tag_way_o[7U] 
        = (((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__tag_q
                    [4U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_index_o]) 
            >> 0xcU) | ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__tag_q
                                 [4U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_index_o] 
                                 >> 0x20U)) << 0x14U));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__tag_way_o[8U] 
        = (((0xffe00U & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__tag_q
                                 [5U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_index_o]) 
                         << 9U)) | ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__tag_q
                                             [4U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_index_o] 
                                             >> 0x20U)) 
                                    >> 0xcU)) | (0xfff00000U 
                                                 & ((IData)(
                                                            vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__tag_q
                                                            [5U]
                                                            [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_index_o]) 
                                                    << 9U)));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__tag_way_o[9U] 
        = ((0xc0000000U & vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__tag_way_o[9U]) 
           | ((((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__tag_q
                        [5U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_index_o]) 
                >> 0x17U) | (0xffe00U & ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__tag_q
                                                  [5U]
                                                  [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_index_o] 
                                                  >> 0x20U)) 
                                         << 9U))) | 
              (0xfff00000U & ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__tag_q
                                       [5U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_index_o] 
                                       >> 0x20U)) << 9U))));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__tag_way_o[9U] 
        = ((0x3fffffffU & vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__tag_way_o[9U]) 
           | ((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__tag_q
                      [6U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_index_o]) 
              << 0x1eU));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__tag_way_o[0xaU] 
        = (((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__tag_q
                    [6U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_index_o]) 
            >> 2U) | ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__tag_q
                               [6U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_index_o] 
                               >> 0x20U)) << 0x1eU));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__tag_way_o[0xbU] 
        = (((0x3ff80000U & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__tag_q
                                    [7U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_index_o]) 
                            << 0x13U)) | ((IData)((
                                                   vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__tag_q
                                                   [6U]
                                                   [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_index_o] 
                                                   >> 0x20U)) 
                                          >> 2U)) | 
           (0xc0000000U & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__tag_q
                                   [7U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_index_o]) 
                           << 0x13U)));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__tag_way_o[0xcU] 
        = ((((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__tag_q
                     [7U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_index_o]) 
             >> 0xdU) | (0x3ff80000U & ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__tag_q
                                                 [7U]
                                                 [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_index_o] 
                                                 >> 0x20U)) 
                                        << 0x13U))) 
           | (0xc0000000U & ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__tag_q
                                      [7U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_index_o] 
                                      >> 0x20U)) << 0x13U)));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__tag_way_o[0xdU] 
        = (0xffU & ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__tag_q
                             [7U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_index_o] 
                             >> 0x20U)) >> 0xdU));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__state_way_o 
        = ((0xfff0U & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__state_way_o)) 
           | ((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q
               [1U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_index_o] 
               << 2U) | vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q
              [0U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_index_o]));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__state_way_o 
        = ((0xff0fU & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__state_way_o)) 
           | ((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q
               [3U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_index_o] 
               << 6U) | (vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q
                         [2U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_index_o] 
                         << 4U)));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__state_way_o 
        = ((0xf0ffU & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__state_way_o)) 
           | ((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q
               [5U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_index_o] 
               << 0xaU) | (vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q
                           [4U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_index_o] 
                           << 8U)));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__state_way_o 
        = ((0xfffU & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__state_way_o)) 
           | ((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q
               [7U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_index_o] 
               << 0xeU) | (vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q
                           [6U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_index_o] 
                           << 0xcU)));
}

VL_INLINE_OPT void Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__7(Vrv64g_cache_system_tb_rv64g_l1_dcache* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv64g_cache_system_tb_rv64g_l1_dcache___act_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__7\n"); );
    Vrv64g_cache_system_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__tag_way_o[0U] 
        = (IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__tag_q
                  [0U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_index_o]);
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__tag_way_o[1U] 
        = (((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__tag_q
                    [1U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_index_o]) 
            << 0x15U) | (IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__tag_q
                                 [0U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_index_o] 
                                 >> 0x20U)));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__tag_way_o[2U] 
        = (((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__tag_q
                    [1U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_index_o]) 
            >> 0xbU) | ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__tag_q
                                 [1U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_index_o] 
                                 >> 0x20U)) << 0x15U));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__tag_way_o[3U] 
        = ((0xfffffc00U & vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__tag_way_o[3U]) 
           | ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__tag_q
                       [1U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_index_o] 
                       >> 0x20U)) >> 0xbU));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__tag_way_o[3U] 
        = ((0x3ffU & vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__tag_way_o[3U]) 
           | ((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__tag_q
                      [2U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_index_o]) 
              << 0xaU));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__tag_way_o[4U] 
        = (((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__tag_q
                    [2U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_index_o]) 
            >> 0x16U) | (((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__tag_q
                                  [3U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_index_o]) 
                          << 0x1fU) | ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__tag_q
                                                [2U]
                                                [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_index_o] 
                                                >> 0x20U)) 
                                       << 0xaU)));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__tag_way_o[5U] 
        = (((0x3ffU & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__tag_q
                               [3U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_index_o]) 
                       >> 1U)) | ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__tag_q
                                           [2U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_index_o] 
                                           >> 0x20U)) 
                                  >> 0x16U)) | ((0x7ffffc00U 
                                                 & ((IData)(
                                                            vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__tag_q
                                                            [3U]
                                                            [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_index_o]) 
                                                    >> 1U)) 
                                                | ((IData)(
                                                           (vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__tag_q
                                                            [3U]
                                                            [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_index_o] 
                                                            >> 0x20U)) 
                                                   << 0x1fU)));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__tag_way_o[6U] 
        = ((0xfff00000U & vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__tag_way_o[6U]) 
           | ((0x3ffU & ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__tag_q
                                  [3U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_index_o] 
                                  >> 0x20U)) >> 1U)) 
              | (0x7ffffc00U & ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__tag_q
                                         [3U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_index_o] 
                                         >> 0x20U)) 
                                >> 1U))));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__tag_way_o[6U] 
        = ((0xfffffU & vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__tag_way_o[6U]) 
           | ((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__tag_q
                      [4U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_index_o]) 
              << 0x14U));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__tag_way_o[7U] 
        = (((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__tag_q
                    [4U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_index_o]) 
            >> 0xcU) | ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__tag_q
                                 [4U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_index_o] 
                                 >> 0x20U)) << 0x14U));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__tag_way_o[8U] 
        = (((0xffe00U & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__tag_q
                                 [5U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_index_o]) 
                         << 9U)) | ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__tag_q
                                             [4U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_index_o] 
                                             >> 0x20U)) 
                                    >> 0xcU)) | (0xfff00000U 
                                                 & ((IData)(
                                                            vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__tag_q
                                                            [5U]
                                                            [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_index_o]) 
                                                    << 9U)));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__tag_way_o[9U] 
        = ((0xc0000000U & vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__tag_way_o[9U]) 
           | ((((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__tag_q
                        [5U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_index_o]) 
                >> 0x17U) | (0xffe00U & ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__tag_q
                                                  [5U]
                                                  [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_index_o] 
                                                  >> 0x20U)) 
                                         << 9U))) | 
              (0xfff00000U & ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__tag_q
                                       [5U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_index_o] 
                                       >> 0x20U)) << 9U))));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__tag_way_o[9U] 
        = ((0x3fffffffU & vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__tag_way_o[9U]) 
           | ((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__tag_q
                      [6U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_index_o]) 
              << 0x1eU));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__tag_way_o[0xaU] 
        = (((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__tag_q
                    [6U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_index_o]) 
            >> 2U) | ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__tag_q
                               [6U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_index_o] 
                               >> 0x20U)) << 0x1eU));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__tag_way_o[0xbU] 
        = (((0x3ff80000U & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__tag_q
                                    [7U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_index_o]) 
                            << 0x13U)) | ((IData)((
                                                   vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__tag_q
                                                   [6U]
                                                   [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_index_o] 
                                                   >> 0x20U)) 
                                          >> 2U)) | 
           (0xc0000000U & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__tag_q
                                   [7U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_index_o]) 
                           << 0x13U)));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__tag_way_o[0xcU] 
        = ((((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__tag_q
                     [7U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_index_o]) 
             >> 0xdU) | (0x3ff80000U & ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__tag_q
                                                 [7U]
                                                 [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_index_o] 
                                                 >> 0x20U)) 
                                        << 0x13U))) 
           | (0xc0000000U & ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__tag_q
                                      [7U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_index_o] 
                                      >> 0x20U)) << 0x13U)));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__tag_way_o[0xdU] 
        = (0xffU & ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__tag_q
                             [7U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_index_o] 
                             >> 0x20U)) >> 0xdU));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__state_way_o 
        = ((0xfff0U & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__state_way_o)) 
           | ((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q
               [1U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_index_o] 
               << 2U) | vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q
              [0U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_index_o]));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__state_way_o 
        = ((0xff0fU & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__state_way_o)) 
           | ((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q
               [3U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_index_o] 
               << 6U) | (vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q
                         [2U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_index_o] 
                         << 4U)));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__state_way_o 
        = ((0xf0ffU & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__state_way_o)) 
           | ((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q
               [5U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_index_o] 
               << 0xaU) | (vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q
                           [4U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_index_o] 
                           << 8U)));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__state_way_o 
        = ((0xfffU & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__state_way_o)) 
           | ((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q
               [7U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_index_o] 
               << 0xeU) | (vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q
                           [6U][vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_index_o] 
                           << 0xcU)));
}

VL_INLINE_OPT void Vrv64g_cache_system_tb_rv64g_l1_dcache___act_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__2(Vrv64g_cache_system_tb_rv64g_l1_dcache* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv64g_cache_system_tb_rv64g_l1_dcache___act_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__2\n"); );
    Vrv64g_cache_system_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__tag_way_o[0U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[1U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__tag_way_o[1U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[2U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__tag_way_o[2U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[3U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__tag_way_o[3U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[4U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__tag_way_o[4U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[5U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__tag_way_o[5U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[6U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__tag_way_o[6U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[7U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__tag_way_o[7U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[8U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__tag_way_o[8U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[9U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__tag_way_o[9U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0xaU] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__tag_way_o[0xaU];
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0xbU] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__tag_way_o[0xbU];
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0xcU] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__tag_way_o[0xcU];
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0xdU] 
        = ((vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__tag_way_o[0U] 
            << 8U) | vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__tag_way_o[0xdU]);
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0xeU] 
        = ((vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__tag_way_o[0U] 
            >> 0x18U) | (vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__tag_way_o[1U] 
                         << 8U));
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0xfU] 
        = ((vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__tag_way_o[1U] 
            >> 0x18U) | (vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__tag_way_o[2U] 
                         << 8U));
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x10U] 
        = ((vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__tag_way_o[2U] 
            >> 0x18U) | (vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__tag_way_o[3U] 
                         << 8U));
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x11U] 
        = ((vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__tag_way_o[3U] 
            >> 0x18U) | (vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__tag_way_o[4U] 
                         << 8U));
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x12U] 
        = ((vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__tag_way_o[4U] 
            >> 0x18U) | (vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__tag_way_o[5U] 
                         << 8U));
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x13U] 
        = ((vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__tag_way_o[5U] 
            >> 0x18U) | (vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__tag_way_o[6U] 
                         << 8U));
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x14U] 
        = ((vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__tag_way_o[6U] 
            >> 0x18U) | (vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__tag_way_o[7U] 
                         << 8U));
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x15U] 
        = ((vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__tag_way_o[7U] 
            >> 0x18U) | (vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__tag_way_o[8U] 
                         << 8U));
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x16U] 
        = ((vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__tag_way_o[8U] 
            >> 0x18U) | (vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__tag_way_o[9U] 
                         << 8U));
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x17U] 
        = ((vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__tag_way_o[9U] 
            >> 0x18U) | (vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__tag_way_o[0xaU] 
                         << 8U));
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x18U] 
        = ((vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__tag_way_o[0xaU] 
            >> 0x18U) | (vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__tag_way_o[0xbU] 
                         << 8U));
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x19U] 
        = ((vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__tag_way_o[0xbU] 
            >> 0x18U) | (vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__tag_way_o[0xcU] 
                         << 8U));
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x1aU] 
        = ((vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__tag_way_o[0U] 
            << 0x10U) | ((vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__tag_way_o[0xcU] 
                          >> 0x18U) | (vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__tag_way_o[0xdU] 
                                       << 8U)));
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x1bU] 
        = ((vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__tag_way_o[0U] 
            >> 0x10U) | (vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__tag_way_o[1U] 
                         << 0x10U));
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x1cU] 
        = ((vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__tag_way_o[1U] 
            >> 0x10U) | (vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__tag_way_o[2U] 
                         << 0x10U));
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x1dU] 
        = ((vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__tag_way_o[2U] 
            >> 0x10U) | (vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__tag_way_o[3U] 
                         << 0x10U));
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x1eU] 
        = ((vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__tag_way_o[3U] 
            >> 0x10U) | (vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__tag_way_o[4U] 
                         << 0x10U));
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x1fU] 
        = ((vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__tag_way_o[4U] 
            >> 0x10U) | (vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__tag_way_o[5U] 
                         << 0x10U));
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x20U] 
        = ((vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__tag_way_o[5U] 
            >> 0x10U) | (vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__tag_way_o[6U] 
                         << 0x10U));
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x21U] 
        = ((vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__tag_way_o[6U] 
            >> 0x10U) | (vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__tag_way_o[7U] 
                         << 0x10U));
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x22U] 
        = ((vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__tag_way_o[7U] 
            >> 0x10U) | (vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__tag_way_o[8U] 
                         << 0x10U));
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x23U] 
        = ((vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__tag_way_o[8U] 
            >> 0x10U) | (vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__tag_way_o[9U] 
                         << 0x10U));
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x24U] 
        = ((vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__tag_way_o[9U] 
            >> 0x10U) | (vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__tag_way_o[0xaU] 
                         << 0x10U));
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x25U] 
        = ((vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__tag_way_o[0xaU] 
            >> 0x10U) | (vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__tag_way_o[0xbU] 
                         << 0x10U));
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x26U] 
        = ((vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__tag_way_o[0xbU] 
            >> 0x10U) | (vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__tag_way_o[0xcU] 
                         << 0x10U));
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x27U] 
        = ((vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__tag_way_o[0U] 
            << 0x18U) | ((vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__tag_way_o[0xcU] 
                          >> 0x10U) | (vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__tag_way_o[0xdU] 
                                       << 0x10U)));
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x28U] 
        = ((vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__tag_way_o[0U] 
            >> 8U) | (vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__tag_way_o[1U] 
                      << 0x18U));
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x29U] 
        = ((vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__tag_way_o[1U] 
            >> 8U) | (vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__tag_way_o[2U] 
                      << 0x18U));
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x2aU] 
        = ((vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__tag_way_o[2U] 
            >> 8U) | (vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__tag_way_o[3U] 
                      << 0x18U));
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x2bU] 
        = ((vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__tag_way_o[3U] 
            >> 8U) | (vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__tag_way_o[4U] 
                      << 0x18U));
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x2cU] 
        = ((vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__tag_way_o[4U] 
            >> 8U) | (vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__tag_way_o[5U] 
                      << 0x18U));
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x2dU] 
        = ((vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__tag_way_o[5U] 
            >> 8U) | (vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__tag_way_o[6U] 
                      << 0x18U));
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x2eU] 
        = ((vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__tag_way_o[6U] 
            >> 8U) | (vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__tag_way_o[7U] 
                      << 0x18U));
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x2fU] 
        = ((vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__tag_way_o[7U] 
            >> 8U) | (vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__tag_way_o[8U] 
                      << 0x18U));
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x30U] 
        = ((vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__tag_way_o[8U] 
            >> 8U) | (vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__tag_way_o[9U] 
                      << 0x18U));
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x31U] 
        = ((vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__tag_way_o[9U] 
            >> 8U) | (vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__tag_way_o[0xaU] 
                      << 0x18U));
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x32U] 
        = ((vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__tag_way_o[0xaU] 
            >> 8U) | (vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__tag_way_o[0xbU] 
                      << 0x18U));
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x33U] 
        = ((vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__tag_way_o[0xbU] 
            >> 8U) | (vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__tag_way_o[0xcU] 
                      << 0x18U));
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x34U] 
        = ((vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__tag_way_o[0xcU] 
            >> 8U) | (vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__tag_way_o[0xdU] 
                      << 0x18U));
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x35U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__tag_way_o[0U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x36U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__tag_way_o[1U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x37U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__tag_way_o[2U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x38U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__tag_way_o[3U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x39U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__tag_way_o[4U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x3aU] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__tag_way_o[5U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x3bU] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__tag_way_o[6U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x3cU] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__tag_way_o[7U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x3dU] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__tag_way_o[8U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x3eU] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__tag_way_o[9U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x3fU] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__tag_way_o[0xaU];
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x40U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__tag_way_o[0xbU];
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x41U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__tag_way_o[0xcU];
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x42U] 
        = ((vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__tag_way_o[0U] 
            << 8U) | vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__tag_way_o[0xdU]);
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x43U] 
        = ((vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__tag_way_o[0U] 
            >> 0x18U) | (vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__tag_way_o[1U] 
                         << 8U));
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x44U] 
        = ((vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__tag_way_o[1U] 
            >> 0x18U) | (vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__tag_way_o[2U] 
                         << 8U));
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x45U] 
        = ((vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__tag_way_o[2U] 
            >> 0x18U) | (vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__tag_way_o[3U] 
                         << 8U));
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x46U] 
        = ((vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__tag_way_o[3U] 
            >> 0x18U) | (vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__tag_way_o[4U] 
                         << 8U));
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x47U] 
        = ((vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__tag_way_o[4U] 
            >> 0x18U) | (vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__tag_way_o[5U] 
                         << 8U));
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x48U] 
        = ((vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__tag_way_o[5U] 
            >> 0x18U) | (vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__tag_way_o[6U] 
                         << 8U));
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x49U] 
        = ((vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__tag_way_o[6U] 
            >> 0x18U) | (vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__tag_way_o[7U] 
                         << 8U));
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x4aU] 
        = ((vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__tag_way_o[7U] 
            >> 0x18U) | (vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__tag_way_o[8U] 
                         << 8U));
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x4bU] 
        = ((vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__tag_way_o[8U] 
            >> 0x18U) | (vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__tag_way_o[9U] 
                         << 8U));
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x4cU] 
        = ((vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__tag_way_o[9U] 
            >> 0x18U) | (vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__tag_way_o[0xaU] 
                         << 8U));
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x4dU] 
        = ((vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__tag_way_o[0xaU] 
            >> 0x18U) | (vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__tag_way_o[0xbU] 
                         << 8U));
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x4eU] 
        = ((vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__tag_way_o[0xbU] 
            >> 0x18U) | (vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__tag_way_o[0xcU] 
                         << 8U));
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x4fU] 
        = ((vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__tag_way_o[0U] 
            << 0x10U) | ((vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__tag_way_o[0xcU] 
                          >> 0x18U) | (vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__tag_way_o[0xdU] 
                                       << 8U)));
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x50U] 
        = ((vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__tag_way_o[0U] 
            >> 0x10U) | (vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__tag_way_o[1U] 
                         << 0x10U));
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x51U] 
        = ((vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__tag_way_o[1U] 
            >> 0x10U) | (vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__tag_way_o[2U] 
                         << 0x10U));
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x52U] 
        = ((vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__tag_way_o[2U] 
            >> 0x10U) | (vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__tag_way_o[3U] 
                         << 0x10U));
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x53U] 
        = ((vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__tag_way_o[3U] 
            >> 0x10U) | (vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__tag_way_o[4U] 
                         << 0x10U));
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x54U] 
        = ((vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__tag_way_o[4U] 
            >> 0x10U) | (vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__tag_way_o[5U] 
                         << 0x10U));
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x55U] 
        = ((vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__tag_way_o[5U] 
            >> 0x10U) | (vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__tag_way_o[6U] 
                         << 0x10U));
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x56U] 
        = ((vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__tag_way_o[6U] 
            >> 0x10U) | (vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__tag_way_o[7U] 
                         << 0x10U));
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x57U] 
        = ((vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__tag_way_o[7U] 
            >> 0x10U) | (vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__tag_way_o[8U] 
                         << 0x10U));
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x58U] 
        = ((vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__tag_way_o[8U] 
            >> 0x10U) | (vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__tag_way_o[9U] 
                         << 0x10U));
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x59U] 
        = ((vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__tag_way_o[9U] 
            >> 0x10U) | (vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__tag_way_o[0xaU] 
                         << 0x10U));
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x5aU] 
        = ((vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__tag_way_o[0xaU] 
            >> 0x10U) | (vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__tag_way_o[0xbU] 
                         << 0x10U));
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x5bU] 
        = ((vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__tag_way_o[0xbU] 
            >> 0x10U) | (vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__tag_way_o[0xcU] 
                         << 0x10U));
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x5cU] 
        = ((vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__tag_way_o[0U] 
            << 0x18U) | ((vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__tag_way_o[0xcU] 
                          >> 0x10U) | (vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__tag_way_o[0xdU] 
                                       << 0x10U)));
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x5dU] 
        = ((vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__tag_way_o[0U] 
            >> 8U) | (vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__tag_way_o[1U] 
                      << 0x18U));
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x5eU] 
        = ((vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__tag_way_o[1U] 
            >> 8U) | (vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__tag_way_o[2U] 
                      << 0x18U));
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x5fU] 
        = ((vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__tag_way_o[2U] 
            >> 8U) | (vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__tag_way_o[3U] 
                      << 0x18U));
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x60U] 
        = ((vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__tag_way_o[3U] 
            >> 8U) | (vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__tag_way_o[4U] 
                      << 0x18U));
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x61U] 
        = ((vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__tag_way_o[4U] 
            >> 8U) | (vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__tag_way_o[5U] 
                      << 0x18U));
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x62U] 
        = ((vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__tag_way_o[5U] 
            >> 8U) | (vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__tag_way_o[6U] 
                      << 0x18U));
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x63U] 
        = ((vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__tag_way_o[6U] 
            >> 8U) | (vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__tag_way_o[7U] 
                      << 0x18U));
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x64U] 
        = ((vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__tag_way_o[7U] 
            >> 8U) | (vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__tag_way_o[8U] 
                      << 0x18U));
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x65U] 
        = ((vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__tag_way_o[8U] 
            >> 8U) | (vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__tag_way_o[9U] 
                      << 0x18U));
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x66U] 
        = ((vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__tag_way_o[9U] 
            >> 8U) | (vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__tag_way_o[0xaU] 
                      << 0x18U));
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x67U] 
        = ((vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__tag_way_o[0xaU] 
            >> 8U) | (vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__tag_way_o[0xbU] 
                      << 0x18U));
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x68U] 
        = ((vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__tag_way_o[0xbU] 
            >> 8U) | (vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__tag_way_o[0xcU] 
                      << 0x18U));
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x69U] 
        = ((vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__tag_way_o[0xcU] 
            >> 8U) | (vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__tag_way_o[0xdU] 
                      << 0x18U));
    vlSelfRef.__PVT__u_arrays__DOT__bank_state_way[0U] 
        = (((IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__state_way_o) 
            << 0x10U) | (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__state_way_o));
    vlSelfRef.__PVT__u_arrays__DOT__bank_state_way[1U] 
        = (IData)((((QData)((IData)((((IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__state_way_o) 
                                      << 0x10U) | (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__state_way_o)))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__state_way_o) 
                                                  << 0x10U) 
                                                 | (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__state_way_o))))));
    vlSelfRef.__PVT__u_arrays__DOT__bank_state_way[2U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__state_way_o) 
                                       << 0x10U) | (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__state_way_o)))) 
                     << 0x20U) | (QData)((IData)((((IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__state_way_o) 
                                                   << 0x10U) 
                                                  | (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__state_way_o))))) 
                   >> 0x20U));
    vlSelfRef.__PVT__u_arrays__DOT__bank_state_way[3U] 
        = (((IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__state_way_o) 
            << 0x10U) | (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__state_way_o));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags[0U][0U] 
        = (0x1fffffffffffffULL & (((QData)((IData)(
                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0U]))));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags[0U][1U] 
        = (0x1fffffffffffffULL & (((QData)((IData)(
                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[3U])) 
                                   << 0x2bU) | (((QData)((IData)(
                                                                 vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[2U])) 
                                                 << 0xbU) 
                                                | ((QData)((IData)(
                                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[1U])) 
                                                   >> 0x15U))));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags[0U][2U] 
        = (0x1fffffffffffffULL & (((QData)((IData)(
                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[4U])) 
                                   << 0x16U) | ((QData)((IData)(
                                                                vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[3U])) 
                                                >> 0xaU)));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags[0U][3U] 
        = (0x1fffffffffffffULL & (((QData)((IData)(
                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[6U])) 
                                   << 0x21U) | (((QData)((IData)(
                                                                 vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[5U])) 
                                                 << 1U) 
                                                | ((QData)((IData)(
                                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[4U])) 
                                                   >> 0x1fU))));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags[0U][4U] 
        = (0x1fffffffffffffULL & (((QData)((IData)(
                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[8U])) 
                                   << 0x2cU) | (((QData)((IData)(
                                                                 vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[7U])) 
                                                 << 0xcU) 
                                                | ((QData)((IData)(
                                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[6U])) 
                                                   >> 0x14U))));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags[0U][5U] 
        = (0x1fffffffffffffULL & (((QData)((IData)(
                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[9U])) 
                                   << 0x17U) | ((QData)((IData)(
                                                                vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[8U])) 
                                                >> 9U)));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags[0U][6U] 
        = (0x1fffffffffffffULL & (((QData)((IData)(
                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0xbU])) 
                                   << 0x22U) | (((QData)((IData)(
                                                                 vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0xaU])) 
                                                 << 2U) 
                                                | ((QData)((IData)(
                                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[9U])) 
                                                   >> 0x1eU))));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags[0U][7U] 
        = (0x1fffffffffffffULL & (((QData)((IData)(
                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0xdU])) 
                                   << 0x2dU) | (((QData)((IData)(
                                                                 vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0xcU])) 
                                                 << 0xdU) 
                                                | ((QData)((IData)(
                                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0xbU])) 
                                                   >> 0x13U))));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags[1U][0U] 
        = (0x1fffffffffffffULL & (((QData)((IData)(
                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0xeU])) 
                                   << 0x18U) | ((QData)((IData)(
                                                                vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0xdU])) 
                                                >> 8U)));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags[1U][1U] 
        = (0x1fffffffffffffULL & (((QData)((IData)(
                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x10U])) 
                                   << 0x23U) | (((QData)((IData)(
                                                                 vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0xfU])) 
                                                 << 3U) 
                                                | ((QData)((IData)(
                                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0xeU])) 
                                                   >> 0x1dU))));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags[1U][2U] 
        = (0x1fffffffffffffULL & (((QData)((IData)(
                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x12U])) 
                                   << 0x2eU) | (((QData)((IData)(
                                                                 vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x11U])) 
                                                 << 0xeU) 
                                                | ((QData)((IData)(
                                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x10U])) 
                                                   >> 0x12U))));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags[1U][3U] 
        = (0x1fffffffffffffULL & (((QData)((IData)(
                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x13U])) 
                                   << 0x19U) | ((QData)((IData)(
                                                                vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x12U])) 
                                                >> 7U)));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags[1U][4U] 
        = (0x1fffffffffffffULL & (((QData)((IData)(
                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x15U])) 
                                   << 0x24U) | (((QData)((IData)(
                                                                 vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x14U])) 
                                                 << 4U) 
                                                | ((QData)((IData)(
                                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x13U])) 
                                                   >> 0x1cU))));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags[1U][5U] 
        = (0x1fffffffffffffULL & (((QData)((IData)(
                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x17U])) 
                                   << 0x2fU) | (((QData)((IData)(
                                                                 vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x16U])) 
                                                 << 0xfU) 
                                                | ((QData)((IData)(
                                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x15U])) 
                                                   >> 0x11U))));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags[1U][6U] 
        = (0x1fffffffffffffULL & (((QData)((IData)(
                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x18U])) 
                                   << 0x1aU) | ((QData)((IData)(
                                                                vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x17U])) 
                                                >> 6U)));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags[1U][7U] 
        = (0x1fffffffffffffULL & (((QData)((IData)(
                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x1aU])) 
                                   << 0x25U) | (((QData)((IData)(
                                                                 vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x19U])) 
                                                 << 5U) 
                                                | ((QData)((IData)(
                                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x18U])) 
                                                   >> 0x1bU))));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags[2U][0U] 
        = (0x1fffffffffffffULL & (((QData)((IData)(
                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x1cU])) 
                                   << 0x30U) | (((QData)((IData)(
                                                                 vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x1bU])) 
                                                 << 0x10U) 
                                                | ((QData)((IData)(
                                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x1aU])) 
                                                   >> 0x10U))));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags[2U][1U] 
        = (0x1fffffffffffffULL & (((QData)((IData)(
                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x1dU])) 
                                   << 0x1bU) | ((QData)((IData)(
                                                                vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x1cU])) 
                                                >> 5U)));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags[2U][2U] 
        = (0x1fffffffffffffULL & (((QData)((IData)(
                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x1fU])) 
                                   << 0x26U) | (((QData)((IData)(
                                                                 vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x1eU])) 
                                                 << 6U) 
                                                | ((QData)((IData)(
                                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x1dU])) 
                                                   >> 0x1aU))));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags[2U][3U] 
        = (0x1fffffffffffffULL & (((QData)((IData)(
                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x21U])) 
                                   << 0x31U) | (((QData)((IData)(
                                                                 vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x20U])) 
                                                 << 0x11U) 
                                                | ((QData)((IData)(
                                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x1fU])) 
                                                   >> 0xfU))));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags[2U][4U] 
        = (0x1fffffffffffffULL & (((QData)((IData)(
                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x22U])) 
                                   << 0x1cU) | ((QData)((IData)(
                                                                vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x21U])) 
                                                >> 4U)));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags[2U][5U] 
        = (0x1fffffffffffffULL & (((QData)((IData)(
                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x24U])) 
                                   << 0x27U) | (((QData)((IData)(
                                                                 vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x23U])) 
                                                 << 7U) 
                                                | ((QData)((IData)(
                                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x22U])) 
                                                   >> 0x19U))));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags[2U][6U] 
        = (0x1fffffffffffffULL & (((QData)((IData)(
                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x26U])) 
                                   << 0x32U) | (((QData)((IData)(
                                                                 vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x25U])) 
                                                 << 0x12U) 
                                                | ((QData)((IData)(
                                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x24U])) 
                                                   >> 0xeU))));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags[2U][7U] 
        = (0x1fffffffffffffULL & (((QData)((IData)(
                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x27U])) 
                                   << 0x1dU) | ((QData)((IData)(
                                                                vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x26U])) 
                                                >> 3U)));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags[3U][0U] 
        = (0x1fffffffffffffULL & (((QData)((IData)(
                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x29U])) 
                                   << 0x28U) | (((QData)((IData)(
                                                                 vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x28U])) 
                                                 << 8U) 
                                                | ((QData)((IData)(
                                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x27U])) 
                                                   >> 0x18U))));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags[3U][1U] 
        = (0x1fffffffffffffULL & (((QData)((IData)(
                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x2bU])) 
                                   << 0x33U) | (((QData)((IData)(
                                                                 vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x2aU])) 
                                                 << 0x13U) 
                                                | ((QData)((IData)(
                                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x29U])) 
                                                   >> 0xdU))));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags[3U][2U] 
        = (0x1fffffffffffffULL & (((QData)((IData)(
                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x2cU])) 
                                   << 0x1eU) | ((QData)((IData)(
                                                                vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x2bU])) 
                                                >> 2U)));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags[3U][3U] 
        = (0x1fffffffffffffULL & (((QData)((IData)(
                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x2eU])) 
                                   << 0x29U) | (((QData)((IData)(
                                                                 vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x2dU])) 
                                                 << 9U) 
                                                | ((QData)((IData)(
                                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x2cU])) 
                                                   >> 0x17U))));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags[3U][4U] 
        = (0x1fffffffffffffULL & (((QData)((IData)(
                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x30U])) 
                                   << 0x34U) | (((QData)((IData)(
                                                                 vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x2fU])) 
                                                 << 0x14U) 
                                                | ((QData)((IData)(
                                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x2eU])) 
                                                   >> 0xcU))));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags[3U][5U] 
        = (0x1fffffffffffffULL & (((QData)((IData)(
                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x31U])) 
                                   << 0x1fU) | ((QData)((IData)(
                                                                vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x30U])) 
                                                >> 1U)));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags[3U][6U] 
        = (0x1fffffffffffffULL & (((QData)((IData)(
                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x33U])) 
                                   << 0x2aU) | (((QData)((IData)(
                                                                 vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x32U])) 
                                                 << 0xaU) 
                                                | ((QData)((IData)(
                                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x31U])) 
                                                   >> 0x16U))));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags[3U][7U] 
        = (0x1fffffffffffffULL & (((QData)((IData)(
                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x34U])) 
                                   << 0x15U) | ((QData)((IData)(
                                                                vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x33U])) 
                                                >> 0xbU)));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags[4U][0U] 
        = (0x1fffffffffffffULL & (((QData)((IData)(
                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x36U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x35U]))));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags[4U][1U] 
        = (0x1fffffffffffffULL & (((QData)((IData)(
                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x38U])) 
                                   << 0x2bU) | (((QData)((IData)(
                                                                 vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x37U])) 
                                                 << 0xbU) 
                                                | ((QData)((IData)(
                                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x36U])) 
                                                   >> 0x15U))));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags[4U][2U] 
        = (0x1fffffffffffffULL & (((QData)((IData)(
                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x39U])) 
                                   << 0x16U) | ((QData)((IData)(
                                                                vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x38U])) 
                                                >> 0xaU)));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags[4U][3U] 
        = (0x1fffffffffffffULL & (((QData)((IData)(
                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x3bU])) 
                                   << 0x21U) | (((QData)((IData)(
                                                                 vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x3aU])) 
                                                 << 1U) 
                                                | ((QData)((IData)(
                                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x39U])) 
                                                   >> 0x1fU))));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags[4U][4U] 
        = (0x1fffffffffffffULL & (((QData)((IData)(
                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x3dU])) 
                                   << 0x2cU) | (((QData)((IData)(
                                                                 vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x3cU])) 
                                                 << 0xcU) 
                                                | ((QData)((IData)(
                                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x3bU])) 
                                                   >> 0x14U))));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags[4U][5U] 
        = (0x1fffffffffffffULL & (((QData)((IData)(
                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x3eU])) 
                                   << 0x17U) | ((QData)((IData)(
                                                                vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x3dU])) 
                                                >> 9U)));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags[4U][6U] 
        = (0x1fffffffffffffULL & (((QData)((IData)(
                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x40U])) 
                                   << 0x22U) | (((QData)((IData)(
                                                                 vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x3fU])) 
                                                 << 2U) 
                                                | ((QData)((IData)(
                                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x3eU])) 
                                                   >> 0x1eU))));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags[4U][7U] 
        = (0x1fffffffffffffULL & (((QData)((IData)(
                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x42U])) 
                                   << 0x2dU) | (((QData)((IData)(
                                                                 vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x41U])) 
                                                 << 0xdU) 
                                                | ((QData)((IData)(
                                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x40U])) 
                                                   >> 0x13U))));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags[5U][0U] 
        = (0x1fffffffffffffULL & (((QData)((IData)(
                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x43U])) 
                                   << 0x18U) | ((QData)((IData)(
                                                                vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x42U])) 
                                                >> 8U)));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags[5U][1U] 
        = (0x1fffffffffffffULL & (((QData)((IData)(
                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x45U])) 
                                   << 0x23U) | (((QData)((IData)(
                                                                 vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x44U])) 
                                                 << 3U) 
                                                | ((QData)((IData)(
                                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x43U])) 
                                                   >> 0x1dU))));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags[5U][2U] 
        = (0x1fffffffffffffULL & (((QData)((IData)(
                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x47U])) 
                                   << 0x2eU) | (((QData)((IData)(
                                                                 vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x46U])) 
                                                 << 0xeU) 
                                                | ((QData)((IData)(
                                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x45U])) 
                                                   >> 0x12U))));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags[5U][3U] 
        = (0x1fffffffffffffULL & (((QData)((IData)(
                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x48U])) 
                                   << 0x19U) | ((QData)((IData)(
                                                                vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x47U])) 
                                                >> 7U)));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags[5U][4U] 
        = (0x1fffffffffffffULL & (((QData)((IData)(
                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x4aU])) 
                                   << 0x24U) | (((QData)((IData)(
                                                                 vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x49U])) 
                                                 << 4U) 
                                                | ((QData)((IData)(
                                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x48U])) 
                                                   >> 0x1cU))));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags[5U][5U] 
        = (0x1fffffffffffffULL & (((QData)((IData)(
                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x4cU])) 
                                   << 0x2fU) | (((QData)((IData)(
                                                                 vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x4bU])) 
                                                 << 0xfU) 
                                                | ((QData)((IData)(
                                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x4aU])) 
                                                   >> 0x11U))));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags[5U][6U] 
        = (0x1fffffffffffffULL & (((QData)((IData)(
                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x4dU])) 
                                   << 0x1aU) | ((QData)((IData)(
                                                                vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x4cU])) 
                                                >> 6U)));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags[5U][7U] 
        = (0x1fffffffffffffULL & (((QData)((IData)(
                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x4fU])) 
                                   << 0x25U) | (((QData)((IData)(
                                                                 vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x4eU])) 
                                                 << 5U) 
                                                | ((QData)((IData)(
                                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x4dU])) 
                                                   >> 0x1bU))));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags[6U][0U] 
        = (0x1fffffffffffffULL & (((QData)((IData)(
                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x51U])) 
                                   << 0x30U) | (((QData)((IData)(
                                                                 vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x50U])) 
                                                 << 0x10U) 
                                                | ((QData)((IData)(
                                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x4fU])) 
                                                   >> 0x10U))));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags[6U][1U] 
        = (0x1fffffffffffffULL & (((QData)((IData)(
                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x52U])) 
                                   << 0x1bU) | ((QData)((IData)(
                                                                vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x51U])) 
                                                >> 5U)));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags[6U][2U] 
        = (0x1fffffffffffffULL & (((QData)((IData)(
                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x54U])) 
                                   << 0x26U) | (((QData)((IData)(
                                                                 vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x53U])) 
                                                 << 6U) 
                                                | ((QData)((IData)(
                                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x52U])) 
                                                   >> 0x1aU))));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags[6U][3U] 
        = (0x1fffffffffffffULL & (((QData)((IData)(
                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x56U])) 
                                   << 0x31U) | (((QData)((IData)(
                                                                 vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x55U])) 
                                                 << 0x11U) 
                                                | ((QData)((IData)(
                                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x54U])) 
                                                   >> 0xfU))));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags[6U][4U] 
        = (0x1fffffffffffffULL & (((QData)((IData)(
                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x57U])) 
                                   << 0x1cU) | ((QData)((IData)(
                                                                vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x56U])) 
                                                >> 4U)));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags[6U][5U] 
        = (0x1fffffffffffffULL & (((QData)((IData)(
                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x59U])) 
                                   << 0x27U) | (((QData)((IData)(
                                                                 vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x58U])) 
                                                 << 7U) 
                                                | ((QData)((IData)(
                                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x57U])) 
                                                   >> 0x19U))));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags[6U][6U] 
        = (0x1fffffffffffffULL & (((QData)((IData)(
                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x5bU])) 
                                   << 0x32U) | (((QData)((IData)(
                                                                 vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x5aU])) 
                                                 << 0x12U) 
                                                | ((QData)((IData)(
                                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x59U])) 
                                                   >> 0xeU))));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags[6U][7U] 
        = (0x1fffffffffffffULL & (((QData)((IData)(
                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x5cU])) 
                                   << 0x1dU) | ((QData)((IData)(
                                                                vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x5bU])) 
                                                >> 3U)));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags[7U][0U] 
        = (0x1fffffffffffffULL & (((QData)((IData)(
                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x5eU])) 
                                   << 0x28U) | (((QData)((IData)(
                                                                 vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x5dU])) 
                                                 << 8U) 
                                                | ((QData)((IData)(
                                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x5cU])) 
                                                   >> 0x18U))));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags[7U][1U] 
        = (0x1fffffffffffffULL & (((QData)((IData)(
                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x60U])) 
                                   << 0x33U) | (((QData)((IData)(
                                                                 vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x5fU])) 
                                                 << 0x13U) 
                                                | ((QData)((IData)(
                                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x5eU])) 
                                                   >> 0xdU))));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags[7U][2U] 
        = (0x1fffffffffffffULL & (((QData)((IData)(
                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x61U])) 
                                   << 0x1eU) | ((QData)((IData)(
                                                                vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x60U])) 
                                                >> 2U)));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags[7U][3U] 
        = (0x1fffffffffffffULL & (((QData)((IData)(
                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x63U])) 
                                   << 0x29U) | (((QData)((IData)(
                                                                 vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x62U])) 
                                                 << 9U) 
                                                | ((QData)((IData)(
                                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x61U])) 
                                                   >> 0x17U))));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags[7U][4U] 
        = (0x1fffffffffffffULL & (((QData)((IData)(
                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x65U])) 
                                   << 0x34U) | (((QData)((IData)(
                                                                 vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x64U])) 
                                                 << 0x14U) 
                                                | ((QData)((IData)(
                                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x63U])) 
                                                   >> 0xcU))));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags[7U][5U] 
        = (0x1fffffffffffffULL & (((QData)((IData)(
                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x66U])) 
                                   << 0x1fU) | ((QData)((IData)(
                                                                vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x65U])) 
                                                >> 1U)));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags[7U][6U] 
        = (0x1fffffffffffffULL & (((QData)((IData)(
                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x68U])) 
                                   << 0x2aU) | (((QData)((IData)(
                                                                 vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x67U])) 
                                                 << 0xaU) 
                                                | ((QData)((IData)(
                                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x66U])) 
                                                   >> 0x16U))));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags[7U][7U] 
        = (0x1fffffffffffffULL & (((QData)((IData)(
                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x69U])) 
                                   << 0x15U) | ((QData)((IData)(
                                                                vlSelfRef.__PVT__u_arrays__DOT__bank_tag_way[0x68U])) 
                                                >> 0xbU)));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states[0U][0U] 
        = (3U & vlSelfRef.__PVT__u_arrays__DOT__bank_state_way[0U]);
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states[0U][1U] 
        = (3U & (vlSelfRef.__PVT__u_arrays__DOT__bank_state_way[0U] 
                 >> 2U));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states[0U][2U] 
        = (3U & (vlSelfRef.__PVT__u_arrays__DOT__bank_state_way[0U] 
                 >> 4U));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states[0U][3U] 
        = (3U & (vlSelfRef.__PVT__u_arrays__DOT__bank_state_way[0U] 
                 >> 6U));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states[0U][4U] 
        = (3U & (vlSelfRef.__PVT__u_arrays__DOT__bank_state_way[0U] 
                 >> 8U));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states[0U][5U] 
        = (3U & (vlSelfRef.__PVT__u_arrays__DOT__bank_state_way[0U] 
                 >> 0xaU));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states[0U][6U] 
        = (3U & (vlSelfRef.__PVT__u_arrays__DOT__bank_state_way[0U] 
                 >> 0xcU));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states[0U][7U] 
        = (3U & (vlSelfRef.__PVT__u_arrays__DOT__bank_state_way[0U] 
                 >> 0xeU));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states[1U][0U] 
        = (3U & (vlSelfRef.__PVT__u_arrays__DOT__bank_state_way[0U] 
                 >> 0x10U));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states[1U][1U] 
        = (3U & (vlSelfRef.__PVT__u_arrays__DOT__bank_state_way[0U] 
                 >> 0x12U));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states[1U][2U] 
        = (3U & (vlSelfRef.__PVT__u_arrays__DOT__bank_state_way[0U] 
                 >> 0x14U));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states[1U][3U] 
        = (3U & (vlSelfRef.__PVT__u_arrays__DOT__bank_state_way[0U] 
                 >> 0x16U));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states[1U][4U] 
        = (3U & (vlSelfRef.__PVT__u_arrays__DOT__bank_state_way[0U] 
                 >> 0x18U));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states[1U][5U] 
        = (3U & (vlSelfRef.__PVT__u_arrays__DOT__bank_state_way[0U] 
                 >> 0x1aU));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states[1U][6U] 
        = (3U & (vlSelfRef.__PVT__u_arrays__DOT__bank_state_way[0U] 
                 >> 0x1cU));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states[1U][7U] 
        = (vlSelfRef.__PVT__u_arrays__DOT__bank_state_way[0U] 
           >> 0x1eU);
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states[2U][0U] 
        = (3U & vlSelfRef.__PVT__u_arrays__DOT__bank_state_way[1U]);
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states[2U][1U] 
        = (3U & (vlSelfRef.__PVT__u_arrays__DOT__bank_state_way[1U] 
                 >> 2U));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states[2U][2U] 
        = (3U & (vlSelfRef.__PVT__u_arrays__DOT__bank_state_way[1U] 
                 >> 4U));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states[2U][3U] 
        = (3U & (vlSelfRef.__PVT__u_arrays__DOT__bank_state_way[1U] 
                 >> 6U));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states[2U][4U] 
        = (3U & (vlSelfRef.__PVT__u_arrays__DOT__bank_state_way[1U] 
                 >> 8U));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states[2U][5U] 
        = (3U & (vlSelfRef.__PVT__u_arrays__DOT__bank_state_way[1U] 
                 >> 0xaU));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states[2U][6U] 
        = (3U & (vlSelfRef.__PVT__u_arrays__DOT__bank_state_way[1U] 
                 >> 0xcU));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states[2U][7U] 
        = (3U & (vlSelfRef.__PVT__u_arrays__DOT__bank_state_way[1U] 
                 >> 0xeU));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states[3U][0U] 
        = (3U & (vlSelfRef.__PVT__u_arrays__DOT__bank_state_way[1U] 
                 >> 0x10U));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states[3U][1U] 
        = (3U & (vlSelfRef.__PVT__u_arrays__DOT__bank_state_way[1U] 
                 >> 0x12U));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states[3U][2U] 
        = (3U & (vlSelfRef.__PVT__u_arrays__DOT__bank_state_way[1U] 
                 >> 0x14U));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states[3U][3U] 
        = (3U & (vlSelfRef.__PVT__u_arrays__DOT__bank_state_way[1U] 
                 >> 0x16U));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states[3U][4U] 
        = (3U & (vlSelfRef.__PVT__u_arrays__DOT__bank_state_way[1U] 
                 >> 0x18U));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states[3U][5U] 
        = (3U & (vlSelfRef.__PVT__u_arrays__DOT__bank_state_way[1U] 
                 >> 0x1aU));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states[3U][6U] 
        = (3U & (vlSelfRef.__PVT__u_arrays__DOT__bank_state_way[1U] 
                 >> 0x1cU));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states[3U][7U] 
        = (vlSelfRef.__PVT__u_arrays__DOT__bank_state_way[1U] 
           >> 0x1eU);
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states[4U][0U] 
        = (3U & vlSelfRef.__PVT__u_arrays__DOT__bank_state_way[2U]);
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states[4U][1U] 
        = (3U & (vlSelfRef.__PVT__u_arrays__DOT__bank_state_way[2U] 
                 >> 2U));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states[4U][2U] 
        = (3U & (vlSelfRef.__PVT__u_arrays__DOT__bank_state_way[2U] 
                 >> 4U));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states[4U][3U] 
        = (3U & (vlSelfRef.__PVT__u_arrays__DOT__bank_state_way[2U] 
                 >> 6U));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states[4U][4U] 
        = (3U & (vlSelfRef.__PVT__u_arrays__DOT__bank_state_way[2U] 
                 >> 8U));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states[4U][5U] 
        = (3U & (vlSelfRef.__PVT__u_arrays__DOT__bank_state_way[2U] 
                 >> 0xaU));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states[4U][6U] 
        = (3U & (vlSelfRef.__PVT__u_arrays__DOT__bank_state_way[2U] 
                 >> 0xcU));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states[4U][7U] 
        = (3U & (vlSelfRef.__PVT__u_arrays__DOT__bank_state_way[2U] 
                 >> 0xeU));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states[5U][0U] 
        = (3U & (vlSelfRef.__PVT__u_arrays__DOT__bank_state_way[2U] 
                 >> 0x10U));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states[5U][1U] 
        = (3U & (vlSelfRef.__PVT__u_arrays__DOT__bank_state_way[2U] 
                 >> 0x12U));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states[5U][2U] 
        = (3U & (vlSelfRef.__PVT__u_arrays__DOT__bank_state_way[2U] 
                 >> 0x14U));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states[5U][3U] 
        = (3U & (vlSelfRef.__PVT__u_arrays__DOT__bank_state_way[2U] 
                 >> 0x16U));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states[5U][4U] 
        = (3U & (vlSelfRef.__PVT__u_arrays__DOT__bank_state_way[2U] 
                 >> 0x18U));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states[5U][5U] 
        = (3U & (vlSelfRef.__PVT__u_arrays__DOT__bank_state_way[2U] 
                 >> 0x1aU));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states[5U][6U] 
        = (3U & (vlSelfRef.__PVT__u_arrays__DOT__bank_state_way[2U] 
                 >> 0x1cU));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states[5U][7U] 
        = (vlSelfRef.__PVT__u_arrays__DOT__bank_state_way[2U] 
           >> 0x1eU);
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states[6U][0U] 
        = (3U & vlSelfRef.__PVT__u_arrays__DOT__bank_state_way[3U]);
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states[6U][1U] 
        = (3U & (vlSelfRef.__PVT__u_arrays__DOT__bank_state_way[3U] 
                 >> 2U));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states[6U][2U] 
        = (3U & (vlSelfRef.__PVT__u_arrays__DOT__bank_state_way[3U] 
                 >> 4U));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states[6U][3U] 
        = (3U & (vlSelfRef.__PVT__u_arrays__DOT__bank_state_way[3U] 
                 >> 6U));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states[6U][4U] 
        = (3U & (vlSelfRef.__PVT__u_arrays__DOT__bank_state_way[3U] 
                 >> 8U));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states[6U][5U] 
        = (3U & (vlSelfRef.__PVT__u_arrays__DOT__bank_state_way[3U] 
                 >> 0xaU));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states[6U][6U] 
        = (3U & (vlSelfRef.__PVT__u_arrays__DOT__bank_state_way[3U] 
                 >> 0xcU));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states[6U][7U] 
        = (3U & (vlSelfRef.__PVT__u_arrays__DOT__bank_state_way[3U] 
                 >> 0xeU));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states[7U][0U] 
        = (3U & (vlSelfRef.__PVT__u_arrays__DOT__bank_state_way[3U] 
                 >> 0x10U));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states[7U][1U] 
        = (3U & (vlSelfRef.__PVT__u_arrays__DOT__bank_state_way[3U] 
                 >> 0x12U));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states[7U][2U] 
        = (3U & (vlSelfRef.__PVT__u_arrays__DOT__bank_state_way[3U] 
                 >> 0x14U));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states[7U][3U] 
        = (3U & (vlSelfRef.__PVT__u_arrays__DOT__bank_state_way[3U] 
                 >> 0x16U));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states[7U][4U] 
        = (3U & (vlSelfRef.__PVT__u_arrays__DOT__bank_state_way[3U] 
                 >> 0x18U));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states[7U][5U] 
        = (3U & (vlSelfRef.__PVT__u_arrays__DOT__bank_state_way[3U] 
                 >> 0x1aU));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states[7U][6U] 
        = (3U & (vlSelfRef.__PVT__u_arrays__DOT__bank_state_way[3U] 
                 >> 0x1cU));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states[7U][7U] 
        = (vlSelfRef.__PVT__u_arrays__DOT__bank_state_way[3U] 
           >> 0x1eU);
    vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match[0U] 
        = ((0xfeU & vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match
            [0U]) | ((0U != vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states
                      [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                      [0U]][0U]) & (vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags
                                    [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                                    [0U]][0U] == vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_tag
                                    [0U])));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match[0U] 
        = ((0xfdU & vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match
            [0U]) | (((0U != vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states
                       [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                       [0U]][1U]) & (vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags
                                     [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                                     [0U]][1U] == vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_tag
                                     [0U])) << 1U));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match[0U] 
        = ((0xfbU & vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match
            [0U]) | (((0U != vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states
                       [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                       [0U]][2U]) & (vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags
                                     [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                                     [0U]][2U] == vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_tag
                                     [0U])) << 2U));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match[0U] 
        = ((0xf7U & vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match
            [0U]) | (((0U != vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states
                       [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                       [0U]][3U]) & (vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags
                                     [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                                     [0U]][3U] == vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_tag
                                     [0U])) << 3U));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match[0U] 
        = ((0xefU & vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match
            [0U]) | (((0U != vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states
                       [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                       [0U]][4U]) & (vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags
                                     [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                                     [0U]][4U] == vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_tag
                                     [0U])) << 4U));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match[0U] 
        = ((0xdfU & vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match
            [0U]) | (((0U != vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states
                       [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                       [0U]][5U]) & (vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags
                                     [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                                     [0U]][5U] == vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_tag
                                     [0U])) << 5U));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match[0U] 
        = ((0xbfU & vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match
            [0U]) | (((0U != vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states
                       [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                       [0U]][6U]) & (vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags
                                     [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                                     [0U]][6U] == vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_tag
                                     [0U])) << 6U));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match[0U] 
        = ((0x7fU & vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match
            [0U]) | (((0U != vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states
                       [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                       [0U]][7U]) & (vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags
                                     [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                                     [0U]][7U] == vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_tag
                                     [0U])) << 7U));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match[1U] 
        = ((0xfeU & vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match
            [1U]) | ((0U != vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states
                      [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                      [1U]][0U]) & (vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags
                                    [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                                    [1U]][0U] == vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_tag
                                    [1U])));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match[1U] 
        = ((0xfdU & vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match
            [1U]) | (((0U != vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states
                       [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                       [1U]][1U]) & (vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags
                                     [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                                     [1U]][1U] == vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_tag
                                     [1U])) << 1U));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match[1U] 
        = ((0xfbU & vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match
            [1U]) | (((0U != vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states
                       [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                       [1U]][2U]) & (vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags
                                     [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                                     [1U]][2U] == vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_tag
                                     [1U])) << 2U));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match[1U] 
        = ((0xf7U & vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match
            [1U]) | (((0U != vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states
                       [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                       [1U]][3U]) & (vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags
                                     [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                                     [1U]][3U] == vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_tag
                                     [1U])) << 3U));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match[1U] 
        = ((0xefU & vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match
            [1U]) | (((0U != vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states
                       [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                       [1U]][4U]) & (vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags
                                     [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                                     [1U]][4U] == vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_tag
                                     [1U])) << 4U));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match[1U] 
        = ((0xdfU & vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match
            [1U]) | (((0U != vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states
                       [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                       [1U]][5U]) & (vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags
                                     [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                                     [1U]][5U] == vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_tag
                                     [1U])) << 5U));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match[1U] 
        = ((0xbfU & vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match
            [1U]) | (((0U != vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states
                       [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                       [1U]][6U]) & (vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags
                                     [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                                     [1U]][6U] == vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_tag
                                     [1U])) << 6U));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match[1U] 
        = ((0x7fU & vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match
            [1U]) | (((0U != vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states
                       [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                       [1U]][7U]) & (vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags
                                     [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                                     [1U]][7U] == vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_tag
                                     [1U])) << 7U));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match[2U] 
        = ((0xfeU & vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match
            [2U]) | ((0U != vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states
                      [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                      [2U]][0U]) & (vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags
                                    [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                                    [2U]][0U] == vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_tag
                                    [2U])));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match[2U] 
        = ((0xfdU & vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match
            [2U]) | (((0U != vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states
                       [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                       [2U]][1U]) & (vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags
                                     [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                                     [2U]][1U] == vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_tag
                                     [2U])) << 1U));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match[2U] 
        = ((0xfbU & vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match
            [2U]) | (((0U != vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states
                       [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                       [2U]][2U]) & (vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags
                                     [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                                     [2U]][2U] == vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_tag
                                     [2U])) << 2U));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match[2U] 
        = ((0xf7U & vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match
            [2U]) | (((0U != vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states
                       [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                       [2U]][3U]) & (vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags
                                     [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                                     [2U]][3U] == vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_tag
                                     [2U])) << 3U));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match[2U] 
        = ((0xefU & vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match
            [2U]) | (((0U != vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states
                       [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                       [2U]][4U]) & (vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags
                                     [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                                     [2U]][4U] == vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_tag
                                     [2U])) << 4U));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match[2U] 
        = ((0xdfU & vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match
            [2U]) | (((0U != vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states
                       [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                       [2U]][5U]) & (vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags
                                     [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                                     [2U]][5U] == vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_tag
                                     [2U])) << 5U));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match[2U] 
        = ((0xbfU & vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match
            [2U]) | (((0U != vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states
                       [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                       [2U]][6U]) & (vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags
                                     [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                                     [2U]][6U] == vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_tag
                                     [2U])) << 6U));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match[2U] 
        = ((0x7fU & vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match
            [2U]) | (((0U != vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states
                       [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                       [2U]][7U]) & (vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags
                                     [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                                     [2U]][7U] == vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_tag
                                     [2U])) << 7U));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match[3U] 
        = ((0xfeU & vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match
            [3U]) | ((0U != vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states
                      [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                      [3U]][0U]) & (vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags
                                    [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                                    [3U]][0U] == vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_tag
                                    [3U])));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match[3U] 
        = ((0xfdU & vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match
            [3U]) | (((0U != vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states
                       [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                       [3U]][1U]) & (vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags
                                     [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                                     [3U]][1U] == vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_tag
                                     [3U])) << 1U));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match[3U] 
        = ((0xfbU & vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match
            [3U]) | (((0U != vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states
                       [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                       [3U]][2U]) & (vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags
                                     [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                                     [3U]][2U] == vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_tag
                                     [3U])) << 2U));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match[3U] 
        = ((0xf7U & vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match
            [3U]) | (((0U != vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states
                       [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                       [3U]][3U]) & (vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags
                                     [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                                     [3U]][3U] == vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_tag
                                     [3U])) << 3U));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match[3U] 
        = ((0xefU & vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match
            [3U]) | (((0U != vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states
                       [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                       [3U]][4U]) & (vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags
                                     [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                                     [3U]][4U] == vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_tag
                                     [3U])) << 4U));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match[3U] 
        = ((0xdfU & vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match
            [3U]) | (((0U != vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states
                       [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                       [3U]][5U]) & (vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags
                                     [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                                     [3U]][5U] == vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_tag
                                     [3U])) << 5U));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match[3U] 
        = ((0xbfU & vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match
            [3U]) | (((0U != vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states
                       [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                       [3U]][6U]) & (vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags
                                     [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                                     [3U]][6U] == vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_tag
                                     [3U])) << 6U));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match[3U] 
        = ((0x7fU & vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match
            [3U]) | (((0U != vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states
                       [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                       [3U]][7U]) & (vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags
                                     [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                                     [3U]][7U] == vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_tag
                                     [3U])) << 7U));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match[4U] 
        = ((0xfeU & vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match
            [4U]) | ((0U != vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states
                      [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                      [4U]][0U]) & (vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags
                                    [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                                    [4U]][0U] == vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_tag
                                    [4U])));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match[4U] 
        = ((0xfdU & vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match
            [4U]) | (((0U != vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states
                       [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                       [4U]][1U]) & (vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags
                                     [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                                     [4U]][1U] == vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_tag
                                     [4U])) << 1U));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match[4U] 
        = ((0xfbU & vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match
            [4U]) | (((0U != vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states
                       [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                       [4U]][2U]) & (vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags
                                     [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                                     [4U]][2U] == vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_tag
                                     [4U])) << 2U));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match[4U] 
        = ((0xf7U & vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match
            [4U]) | (((0U != vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states
                       [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                       [4U]][3U]) & (vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags
                                     [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                                     [4U]][3U] == vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_tag
                                     [4U])) << 3U));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match[4U] 
        = ((0xefU & vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match
            [4U]) | (((0U != vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states
                       [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                       [4U]][4U]) & (vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags
                                     [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                                     [4U]][4U] == vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_tag
                                     [4U])) << 4U));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match[4U] 
        = ((0xdfU & vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match
            [4U]) | (((0U != vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states
                       [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                       [4U]][5U]) & (vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags
                                     [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                                     [4U]][5U] == vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_tag
                                     [4U])) << 5U));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match[4U] 
        = ((0xbfU & vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match
            [4U]) | (((0U != vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states
                       [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                       [4U]][6U]) & (vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags
                                     [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                                     [4U]][6U] == vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_tag
                                     [4U])) << 6U));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match[4U] 
        = ((0x7fU & vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match
            [4U]) | (((0U != vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states
                       [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                       [4U]][7U]) & (vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags
                                     [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                                     [4U]][7U] == vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_tag
                                     [4U])) << 7U));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match[5U] 
        = ((0xfeU & vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match
            [5U]) | ((0U != vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states
                      [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                      [5U]][0U]) & (vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags
                                    [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                                    [5U]][0U] == vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_tag
                                    [5U])));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match[5U] 
        = ((0xfdU & vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match
            [5U]) | (((0U != vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states
                       [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                       [5U]][1U]) & (vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags
                                     [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                                     [5U]][1U] == vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_tag
                                     [5U])) << 1U));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match[5U] 
        = ((0xfbU & vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match
            [5U]) | (((0U != vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states
                       [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                       [5U]][2U]) & (vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags
                                     [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                                     [5U]][2U] == vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_tag
                                     [5U])) << 2U));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match[5U] 
        = ((0xf7U & vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match
            [5U]) | (((0U != vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states
                       [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                       [5U]][3U]) & (vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags
                                     [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                                     [5U]][3U] == vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_tag
                                     [5U])) << 3U));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match[5U] 
        = ((0xefU & vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match
            [5U]) | (((0U != vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states
                       [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                       [5U]][4U]) & (vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags
                                     [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                                     [5U]][4U] == vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_tag
                                     [5U])) << 4U));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match[5U] 
        = ((0xdfU & vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match
            [5U]) | (((0U != vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states
                       [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                       [5U]][5U]) & (vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags
                                     [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                                     [5U]][5U] == vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_tag
                                     [5U])) << 5U));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match[5U] 
        = ((0xbfU & vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match
            [5U]) | (((0U != vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states
                       [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                       [5U]][6U]) & (vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags
                                     [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                                     [5U]][6U] == vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_tag
                                     [5U])) << 6U));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match[5U] 
        = ((0x7fU & vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match
            [5U]) | (((0U != vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states
                       [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                       [5U]][7U]) & (vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags
                                     [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                                     [5U]][7U] == vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_tag
                                     [5U])) << 7U));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match[6U] 
        = ((0xfeU & vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match
            [6U]) | ((0U != vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states
                      [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                      [6U]][0U]) & (vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags
                                    [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                                    [6U]][0U] == vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_tag
                                    [6U])));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match[6U] 
        = ((0xfdU & vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match
            [6U]) | (((0U != vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states
                       [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                       [6U]][1U]) & (vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags
                                     [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                                     [6U]][1U] == vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_tag
                                     [6U])) << 1U));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match[6U] 
        = ((0xfbU & vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match
            [6U]) | (((0U != vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states
                       [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                       [6U]][2U]) & (vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags
                                     [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                                     [6U]][2U] == vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_tag
                                     [6U])) << 2U));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match[6U] 
        = ((0xf7U & vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match
            [6U]) | (((0U != vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states
                       [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                       [6U]][3U]) & (vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags
                                     [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                                     [6U]][3U] == vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_tag
                                     [6U])) << 3U));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match[6U] 
        = ((0xefU & vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match
            [6U]) | (((0U != vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states
                       [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                       [6U]][4U]) & (vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags
                                     [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                                     [6U]][4U] == vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_tag
                                     [6U])) << 4U));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match[6U] 
        = ((0xdfU & vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match
            [6U]) | (((0U != vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states
                       [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                       [6U]][5U]) & (vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags
                                     [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                                     [6U]][5U] == vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_tag
                                     [6U])) << 5U));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match[6U] 
        = ((0xbfU & vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match
            [6U]) | (((0U != vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states
                       [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                       [6U]][6U]) & (vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags
                                     [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                                     [6U]][6U] == vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_tag
                                     [6U])) << 6U));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match[6U] 
        = ((0x7fU & vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match
            [6U]) | (((0U != vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states
                       [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                       [6U]][7U]) & (vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags
                                     [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                                     [6U]][7U] == vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_tag
                                     [6U])) << 7U));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match[7U] 
        = ((0xfeU & vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match
            [7U]) | ((0U != vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states
                      [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                      [7U]][0U]) & (vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags
                                    [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                                    [7U]][0U] == vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_tag
                                    [7U])));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match[7U] 
        = ((0xfdU & vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match
            [7U]) | (((0U != vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states
                       [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                       [7U]][1U]) & (vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags
                                     [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                                     [7U]][1U] == vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_tag
                                     [7U])) << 1U));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match[7U] 
        = ((0xfbU & vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match
            [7U]) | (((0U != vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states
                       [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                       [7U]][2U]) & (vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags
                                     [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                                     [7U]][2U] == vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_tag
                                     [7U])) << 2U));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match[7U] 
        = ((0xf7U & vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match
            [7U]) | (((0U != vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states
                       [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                       [7U]][3U]) & (vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags
                                     [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                                     [7U]][3U] == vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_tag
                                     [7U])) << 3U));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match[7U] 
        = ((0xefU & vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match
            [7U]) | (((0U != vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states
                       [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                       [7U]][4U]) & (vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags
                                     [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                                     [7U]][4U] == vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_tag
                                     [7U])) << 4U));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match[7U] 
        = ((0xdfU & vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match
            [7U]) | (((0U != vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states
                       [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                       [7U]][5U]) & (vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags
                                     [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                                     [7U]][5U] == vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_tag
                                     [7U])) << 5U));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match[7U] 
        = ((0xbfU & vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match
            [7U]) | (((0U != vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states
                       [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                       [7U]][6U]) & (vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags
                                     [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                                     [7U]][6U] == vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_tag
                                     [7U])) << 6U));
    vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match[7U] 
        = ((0x7fU & vlSelfRef.__PVT__u_vlsu_hit__DOT__way_match
            [7U]) | (((0U != vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_states
                       [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                       [7U]][7U]) & (vlSelfRef.__PVT__u_vlsu_hit__DOT__bank_tags
                                     [vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_bank
                                     [7U]][7U] == vlSelfRef.__PVT__u_vlsu_hit__DOT__lane_tag
                                     [7U])) << 7U));
}

VL_INLINE_OPT void Vrv64g_cache_system_tb_rv64g_l1_dcache___act_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__3(Vrv64g_cache_system_tb_rv64g_l1_dcache* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv64g_cache_system_tb_rv64g_l1_dcache___act_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__3\n"); );
    Vrv64g_cache_system_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_index_o 
        = (0x1fU & ((7U == (IData)(vlSelfRef.__PVT__arr_word_sel))
                     ? (IData)(vlSelfRef.__PVT__arr_index_w)
                     : (IData)((vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_index_r 
                                >> 0x23U))));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_index_o 
        = (0x1fU & ((6U == (IData)(vlSelfRef.__PVT__arr_word_sel))
                     ? (IData)(vlSelfRef.__PVT__arr_index_w)
                     : (IData)((vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_index_r 
                                >> 0x1eU))));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_index_o 
        = (0x1fU & ((5U == (IData)(vlSelfRef.__PVT__arr_word_sel))
                     ? (IData)(vlSelfRef.__PVT__arr_index_w)
                     : (IData)((vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_index_r 
                                >> 0x19U))));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_index_o 
        = (0x1fU & ((4U == (IData)(vlSelfRef.__PVT__arr_word_sel))
                     ? (IData)(vlSelfRef.__PVT__arr_index_w)
                     : (IData)((vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_index_r 
                                >> 0x14U))));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_index_o 
        = (0x1fU & ((3U == (IData)(vlSelfRef.__PVT__arr_word_sel))
                     ? (IData)(vlSelfRef.__PVT__arr_index_w)
                     : (IData)((vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_index_r 
                                >> 0xfU))));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_index_o 
        = (0x1fU & ((2U == (IData)(vlSelfRef.__PVT__arr_word_sel))
                     ? (IData)(vlSelfRef.__PVT__arr_index_w)
                     : (IData)((vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_index_r 
                                >> 0xaU))));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_index_o 
        = (0x1fU & ((1U == (IData)(vlSelfRef.__PVT__arr_word_sel))
                     ? (IData)(vlSelfRef.__PVT__arr_index_w)
                     : (IData)((vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_index_r 
                                >> 5U))));
    vlSelfRef.__PVT__u_arrays__DOT__arb_bank_index__BRA__4__03a0__KET__ 
        = (0x1fU & ((0U == (IData)(vlSelfRef.__PVT__arr_word_sel))
                     ? (IData)(vlSelfRef.__PVT__arr_index_w)
                     : (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_index_r)));
}

extern const VlWide<16>/*511:0*/ Vrv64g_cache_system_tb__ConstPool__CONST_h93e1b771_0;
extern const VlWide<14>/*447:0*/ Vrv64g_cache_system_tb__ConstPool__CONST_hba6586cf_0;

VL_INLINE_OPT void Vrv64g_cache_system_tb_rv64g_l1_dcache___nba_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__1(Vrv64g_cache_system_tb_rv64g_l1_dcache* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv64g_cache_system_tb_rv64g_l1_dcache___nba_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__1\n"); );
    Vrv64g_cache_system_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__4__KET____DOT__winner = 0U;
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__4__KET____DOT__has_req = 0U;
    if ((1U & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_requesters
         [4U])) {
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__4__KET____DOT__winner = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__4__KET____DOT__has_req = 1U;
    }
    if ((1U & ((vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_requesters
                [4U] >> 1U) & (~ (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__4__KET____DOT__has_req))))) {
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__4__KET____DOT__winner = 1U;
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__4__KET____DOT__has_req = 1U;
    }
    if ((1U & ((vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_requesters
                [4U] >> 2U) & (~ (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__4__KET____DOT__has_req))))) {
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__4__KET____DOT__winner = 2U;
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__4__KET____DOT__has_req = 1U;
    }
    if ((1U & ((vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_requesters
                [4U] >> 3U) & (~ (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__4__KET____DOT__has_req))))) {
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__4__KET____DOT__winner = 3U;
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__4__KET____DOT__has_req = 1U;
    }
    if ((1U & ((vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_requesters
                [4U] >> 4U) & (~ (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__4__KET____DOT__has_req))))) {
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__4__KET____DOT__winner = 4U;
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__4__KET____DOT__has_req = 1U;
    }
    if ((1U & ((vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_requesters
                [4U] >> 5U) & (~ (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__4__KET____DOT__has_req))))) {
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__4__KET____DOT__winner = 5U;
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__4__KET____DOT__has_req = 1U;
    }
    if ((1U & ((vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_requesters
                [4U] >> 6U) & (~ (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__4__KET____DOT__has_req))))) {
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__4__KET____DOT__winner = 6U;
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__4__KET____DOT__has_req = 1U;
    }
    if ((1U & ((vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_requesters
                [4U] >> 7U) & (~ (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__4__KET____DOT__has_req))))) {
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__4__KET____DOT__winner = 7U;
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__4__KET____DOT__has_req = 1U;
    }
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__5__KET____DOT__winner = 0U;
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__5__KET____DOT__has_req = 0U;
    if ((1U & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_requesters
         [5U])) {
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__5__KET____DOT__winner = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__5__KET____DOT__has_req = 1U;
    }
    if ((1U & ((vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_requesters
                [5U] >> 1U) & (~ (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__5__KET____DOT__has_req))))) {
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__5__KET____DOT__winner = 1U;
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__5__KET____DOT__has_req = 1U;
    }
    if ((1U & ((vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_requesters
                [5U] >> 2U) & (~ (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__5__KET____DOT__has_req))))) {
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__5__KET____DOT__winner = 2U;
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__5__KET____DOT__has_req = 1U;
    }
    if ((1U & ((vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_requesters
                [5U] >> 3U) & (~ (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__5__KET____DOT__has_req))))) {
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__5__KET____DOT__winner = 3U;
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__5__KET____DOT__has_req = 1U;
    }
    if ((1U & ((vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_requesters
                [5U] >> 4U) & (~ (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__5__KET____DOT__has_req))))) {
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__5__KET____DOT__winner = 4U;
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__5__KET____DOT__has_req = 1U;
    }
    if ((1U & ((vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_requesters
                [5U] >> 5U) & (~ (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__5__KET____DOT__has_req))))) {
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__5__KET____DOT__winner = 5U;
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__5__KET____DOT__has_req = 1U;
    }
    if ((1U & ((vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_requesters
                [5U] >> 6U) & (~ (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__5__KET____DOT__has_req))))) {
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__5__KET____DOT__winner = 6U;
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__5__KET____DOT__has_req = 1U;
    }
    if ((1U & ((vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_requesters
                [5U] >> 7U) & (~ (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__5__KET____DOT__has_req))))) {
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__5__KET____DOT__winner = 7U;
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__5__KET____DOT__has_req = 1U;
    }
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__6__KET____DOT__winner = 0U;
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__6__KET____DOT__has_req = 0U;
    if ((1U & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_requesters
         [6U])) {
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__6__KET____DOT__winner = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__6__KET____DOT__has_req = 1U;
    }
    if ((1U & ((vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_requesters
                [6U] >> 1U) & (~ (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__6__KET____DOT__has_req))))) {
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__6__KET____DOT__winner = 1U;
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__6__KET____DOT__has_req = 1U;
    }
    if ((1U & ((vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_requesters
                [6U] >> 2U) & (~ (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__6__KET____DOT__has_req))))) {
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__6__KET____DOT__winner = 2U;
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__6__KET____DOT__has_req = 1U;
    }
    if ((1U & ((vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_requesters
                [6U] >> 3U) & (~ (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__6__KET____DOT__has_req))))) {
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__6__KET____DOT__winner = 3U;
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__6__KET____DOT__has_req = 1U;
    }
    if ((1U & ((vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_requesters
                [6U] >> 4U) & (~ (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__6__KET____DOT__has_req))))) {
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__6__KET____DOT__winner = 4U;
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__6__KET____DOT__has_req = 1U;
    }
    if ((1U & ((vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_requesters
                [6U] >> 5U) & (~ (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__6__KET____DOT__has_req))))) {
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__6__KET____DOT__winner = 5U;
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__6__KET____DOT__has_req = 1U;
    }
    if ((1U & ((vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_requesters
                [6U] >> 6U) & (~ (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__6__KET____DOT__has_req))))) {
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__6__KET____DOT__winner = 6U;
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__6__KET____DOT__has_req = 1U;
    }
    if ((1U & ((vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_requesters
                [6U] >> 7U) & (~ (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__6__KET____DOT__has_req))))) {
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__6__KET____DOT__winner = 7U;
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__6__KET____DOT__has_req = 1U;
    }
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__7__KET____DOT__winner = 0U;
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__7__KET____DOT__has_req = 0U;
    if ((1U & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_requesters
         [7U])) {
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__7__KET____DOT__winner = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__7__KET____DOT__has_req = 1U;
    }
    if ((1U & ((vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_requesters
                [7U] >> 1U) & (~ (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__7__KET____DOT__has_req))))) {
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__7__KET____DOT__winner = 1U;
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__7__KET____DOT__has_req = 1U;
    }
    if ((1U & ((vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_requesters
                [7U] >> 2U) & (~ (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__7__KET____DOT__has_req))))) {
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__7__KET____DOT__winner = 2U;
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__7__KET____DOT__has_req = 1U;
    }
    if ((1U & ((vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_requesters
                [7U] >> 3U) & (~ (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__7__KET____DOT__has_req))))) {
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__7__KET____DOT__winner = 3U;
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__7__KET____DOT__has_req = 1U;
    }
    if ((1U & ((vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_requesters
                [7U] >> 4U) & (~ (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__7__KET____DOT__has_req))))) {
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__7__KET____DOT__winner = 4U;
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__7__KET____DOT__has_req = 1U;
    }
    if ((1U & ((vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_requesters
                [7U] >> 5U) & (~ (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__7__KET____DOT__has_req))))) {
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__7__KET____DOT__winner = 5U;
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__7__KET____DOT__has_req = 1U;
    }
    if ((1U & ((vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_requesters
                [7U] >> 6U) & (~ (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__7__KET____DOT__has_req))))) {
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__7__KET____DOT__winner = 6U;
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__7__KET____DOT__has_req = 1U;
    }
    if ((1U & ((vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_requesters
                [7U] >> 7U) & (~ (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__7__KET____DOT__has_req))))) {
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__7__KET____DOT__winner = 7U;
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__7__KET____DOT__has_req = 1U;
    }
    vlSelfRef.__PVT__u_vlsu_miss__DOT__refill_idx_n 
        = vlSelfRef.__PVT__u_vlsu_miss__DOT__refill_idx_q;
    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_vlsu_miss__DOT__state_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.__PVT__u_vlsu_miss__DOT__state_q))) {
            if ((1U & (IData)(vlSelfRef.__PVT__u_vlsu_miss__DOT__state_q))) {
                if (vlSelfRef.__PVT__vlsu_miss_refill_done) {
                    if ((((IData)(1U) + (IData)(vlSelfRef.__PVT__u_vlsu_miss__DOT__refill_idx_q)) 
                         < (IData)(vlSelfRef.__PVT__u_vlsu_miss__DOT__miss_count_q))) {
                        vlSelfRef.__PVT__u_vlsu_miss__DOT__refill_idx_n 
                            = (0xfU & ((IData)(1U) 
                                       + (IData)(vlSelfRef.__PVT__u_vlsu_miss__DOT__refill_idx_q)));
                    }
                }
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__u_vlsu_miss__DOT__state_q))) {
            if ((0U < (IData)(vlSelfRef.__PVT__u_vlsu_miss__DOT__miss_count_n))) {
                vlSelfRef.__PVT__u_vlsu_miss__DOT__refill_idx_n = 0U;
            }
        }
    }
    vlSelfRef.__PVT__u_vlsu_miss__DOT__state_n = vlSelfRef.__PVT__u_vlsu_miss__DOT__state_q;
    if ((4U & (IData)(vlSelfRef.__PVT__u_vlsu_miss__DOT__state_q))) {
        vlSelfRef.__PVT__u_vlsu_miss__DOT__state_n = 0U;
    } else if ((2U & (IData)(vlSelfRef.__PVT__u_vlsu_miss__DOT__state_q))) {
        if ((1U & (IData)(vlSelfRef.__PVT__u_vlsu_miss__DOT__state_q))) {
            if (vlSelfRef.__PVT__vlsu_miss_refill_done) {
                vlSelfRef.__PVT__u_vlsu_miss__DOT__state_n 
                    = ((((IData)(1U) + (IData)(vlSelfRef.__PVT__u_vlsu_miss__DOT__refill_idx_q)) 
                        < (IData)(vlSelfRef.__PVT__u_vlsu_miss__DOT__miss_count_q))
                        ? 2U : 4U);
            }
        } else {
            vlSelfRef.__PVT__u_vlsu_miss__DOT__state_n = 3U;
        }
    } else if ((1U & (IData)(vlSelfRef.__PVT__u_vlsu_miss__DOT__state_q))) {
        vlSelfRef.__PVT__u_vlsu_miss__DOT__state_n 
            = ((0U < (IData)(vlSelfRef.__PVT__u_vlsu_miss__DOT__miss_count_n))
                ? 2U : 0U);
    }
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner[0U] 
        = vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__0__KET____DOT__winner;
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner[1U] 
        = vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__1__KET____DOT__winner;
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner[2U] 
        = vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__2__KET____DOT__winner;
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner[3U] 
        = vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__3__KET____DOT__winner;
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner[4U] 
        = vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__4__KET____DOT__winner;
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner[5U] 
        = vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__5__KET____DOT__winner;
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner[6U] 
        = vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__6__KET____DOT__winner;
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner[7U] 
        = vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__7__KET____DOT__winner;
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_state_r = 0U;
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_wdata_r[0U] 
        = Vrv64g_cache_system_tb__ConstPool__CONST_h93e1b771_0[0U];
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_wdata_r[1U] 
        = Vrv64g_cache_system_tb__ConstPool__CONST_h93e1b771_0[1U];
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_wdata_r[2U] 
        = Vrv64g_cache_system_tb__ConstPool__CONST_h93e1b771_0[2U];
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_wdata_r[3U] 
        = Vrv64g_cache_system_tb__ConstPool__CONST_h93e1b771_0[3U];
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_wdata_r[4U] 
        = Vrv64g_cache_system_tb__ConstPool__CONST_h93e1b771_0[4U];
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_wdata_r[5U] 
        = Vrv64g_cache_system_tb__ConstPool__CONST_h93e1b771_0[5U];
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_wdata_r[6U] 
        = Vrv64g_cache_system_tb__ConstPool__CONST_h93e1b771_0[6U];
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_wdata_r[7U] 
        = Vrv64g_cache_system_tb__ConstPool__CONST_h93e1b771_0[7U];
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_wdata_r[8U] 
        = Vrv64g_cache_system_tb__ConstPool__CONST_h93e1b771_0[8U];
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_wdata_r[9U] 
        = Vrv64g_cache_system_tb__ConstPool__CONST_h93e1b771_0[9U];
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_wdata_r[0xaU] 
        = Vrv64g_cache_system_tb__ConstPool__CONST_h93e1b771_0[0xaU];
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_wdata_r[0xbU] 
        = Vrv64g_cache_system_tb__ConstPool__CONST_h93e1b771_0[0xbU];
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_wdata_r[0xcU] 
        = Vrv64g_cache_system_tb__ConstPool__CONST_h93e1b771_0[0xcU];
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_wdata_r[0xdU] 
        = Vrv64g_cache_system_tb__ConstPool__CONST_h93e1b771_0[0xdU];
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_wdata_r[0xeU] 
        = Vrv64g_cache_system_tb__ConstPool__CONST_h93e1b771_0[0xeU];
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_wdata_r[0xfU] 
        = Vrv64g_cache_system_tb__ConstPool__CONST_h93e1b771_0[0xfU];
    if (((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_active) 
         & ((1U == (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_q)) 
            | (2U == (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_q))))) {
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_state_r 
            = ((0xfffcU & (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_state_r)) 
               | (3U & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_state_q) 
                        >> (0xfU & ((VL_SHIFTL_III(4,32,32, 
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                    [0U]), 1U) 
                                     - (IData)(1U)) 
                                    - (IData)(1U))))));
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_wdata_r[0U] 
            = (IData)((((QData)((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_wdata_q[
                                        (((IData)(0x3fU) 
                                          + (0x1ffU 
                                             & ((VL_SHIFTL_III(9,32,32, 
                                                               ((IData)(1U) 
                                                                + 
                                                                vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                [0U]), 6U) 
                                                 - (IData)(1U)) 
                                                - (IData)(0x3fU)))) 
                                         >> 5U)])) 
                        << ((0U == (0x1fU & ((VL_SHIFTL_III(9,32,32, 
                                                            ((IData)(1U) 
                                                             + 
                                                             vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                             [0U]), 6U) 
                                              - (IData)(1U)) 
                                             - (IData)(0x3fU))))
                             ? 0x20U : ((IData)(0x40U) 
                                        - (0x1fU & 
                                           ((VL_SHIFTL_III(9,32,32, 
                                                           ((IData)(1U) 
                                                            + 
                                                            vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                            [0U]), 6U) 
                                             - (IData)(1U)) 
                                            - (IData)(0x3fU)))))) 
                       | (((0U == (0x1fU & ((VL_SHIFTL_III(9,32,32, 
                                                           ((IData)(1U) 
                                                            + 
                                                            vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                            [0U]), 6U) 
                                             - (IData)(1U)) 
                                            - (IData)(0x3fU))))
                            ? 0ULL : ((QData)((IData)(
                                                      vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_wdata_q[
                                                      (((IData)(0x1fU) 
                                                        + 
                                                        (0x1ffU 
                                                         & ((VL_SHIFTL_III(9,32,32, 
                                                                           ((IData)(1U) 
                                                                            + 
                                                                            vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                            [0U]), 6U) 
                                                             - (IData)(1U)) 
                                                            - (IData)(0x3fU)))) 
                                                       >> 5U)])) 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((VL_SHIFTL_III(9,32,32, 
                                                               ((IData)(1U) 
                                                                + 
                                                                vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                [0U]), 6U) 
                                                 - (IData)(1U)) 
                                                - (IData)(0x3fU)))))) 
                          | ((QData)((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_wdata_q[
                                             (0xfU 
                                              & (((VL_SHIFTL_III(9,32,32, 
                                                                 ((IData)(1U) 
                                                                  + 
                                                                  vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                  [0U]), 6U) 
                                                   - (IData)(1U)) 
                                                  - (IData)(0x3fU)) 
                                                 >> 5U))])) 
                             >> (0x1fU & ((VL_SHIFTL_III(9,32,32, 
                                                         ((IData)(1U) 
                                                          + 
                                                          vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                          [0U]), 6U) 
                                           - (IData)(1U)) 
                                          - (IData)(0x3fU)))))));
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_wdata_r[1U] 
            = (IData)(((((QData)((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_wdata_q[
                                         (((IData)(0x3fU) 
                                           + (0x1ffU 
                                              & ((VL_SHIFTL_III(9,32,32, 
                                                                ((IData)(1U) 
                                                                 + 
                                                                 vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                 [0U]), 6U) 
                                                  - (IData)(1U)) 
                                                 - (IData)(0x3fU)))) 
                                          >> 5U)])) 
                         << ((0U == (0x1fU & ((VL_SHIFTL_III(9,32,32, 
                                                             ((IData)(1U) 
                                                              + 
                                                              vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                              [0U]), 6U) 
                                               - (IData)(1U)) 
                                              - (IData)(0x3fU))))
                              ? 0x20U : ((IData)(0x40U) 
                                         - (0x1fU & 
                                            ((VL_SHIFTL_III(9,32,32, 
                                                            ((IData)(1U) 
                                                             + 
                                                             vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                             [0U]), 6U) 
                                              - (IData)(1U)) 
                                             - (IData)(0x3fU)))))) 
                        | (((0U == (0x1fU & ((VL_SHIFTL_III(9,32,32, 
                                                            ((IData)(1U) 
                                                             + 
                                                             vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                             [0U]), 6U) 
                                              - (IData)(1U)) 
                                             - (IData)(0x3fU))))
                             ? 0ULL : ((QData)((IData)(
                                                       vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_wdata_q[
                                                       (((IData)(0x1fU) 
                                                         + 
                                                         (0x1ffU 
                                                          & ((VL_SHIFTL_III(9,32,32, 
                                                                            ((IData)(1U) 
                                                                             + 
                                                                             vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                             [0U]), 6U) 
                                                              - (IData)(1U)) 
                                                             - (IData)(0x3fU)))) 
                                                        >> 5U)])) 
                                       << ((IData)(0x20U) 
                                           - (0x1fU 
                                              & ((VL_SHIFTL_III(9,32,32, 
                                                                ((IData)(1U) 
                                                                 + 
                                                                 vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                 [0U]), 6U) 
                                                  - (IData)(1U)) 
                                                 - (IData)(0x3fU)))))) 
                           | ((QData)((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_wdata_q[
                                              (0xfU 
                                               & (((VL_SHIFTL_III(9,32,32, 
                                                                  ((IData)(1U) 
                                                                   + 
                                                                   vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                   [0U]), 6U) 
                                                    - (IData)(1U)) 
                                                   - (IData)(0x3fU)) 
                                                  >> 5U))])) 
                              >> (0x1fU & ((VL_SHIFTL_III(9,32,32, 
                                                          ((IData)(1U) 
                                                           + 
                                                           vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                           [0U]), 6U) 
                                            - (IData)(1U)) 
                                           - (IData)(0x3fU)))))) 
                       >> 0x20U));
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_src_lane_r = 0U;
        vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_h69f63477__0 
            = vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
            [0U];
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_src_lane_r 
            = ((0xfffff8U & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_src_lane_r) 
               | (IData)(vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_h69f63477__0));
    } else {
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_src_lane_r = 0U;
    }
    if ((((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_active) 
          >> 1U) & ((1U == (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_q)) 
                    | (2U == (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_q))))) {
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_state_r 
            = ((0xfff3U & (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_state_r)) 
               | (0xcU & (((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_state_q) 
                           >> (0xfU & ((VL_SHIFTL_III(4,32,32, 
                                                      ((IData)(1U) 
                                                       + 
                                                       vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                       [1U]), 1U) 
                                        - (IData)(1U)) 
                                       - (IData)(1U)))) 
                          << 2U)));
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_wdata_r[2U] 
            = (IData)((((QData)((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_wdata_q[
                                        (((IData)(0x3fU) 
                                          + (0x1ffU 
                                             & ((VL_SHIFTL_III(9,32,32, 
                                                               ((IData)(1U) 
                                                                + 
                                                                vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                [1U]), 6U) 
                                                 - (IData)(1U)) 
                                                - (IData)(0x3fU)))) 
                                         >> 5U)])) 
                        << ((0U == (0x1fU & ((VL_SHIFTL_III(9,32,32, 
                                                            ((IData)(1U) 
                                                             + 
                                                             vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                             [1U]), 6U) 
                                              - (IData)(1U)) 
                                             - (IData)(0x3fU))))
                             ? 0x20U : ((IData)(0x40U) 
                                        - (0x1fU & 
                                           ((VL_SHIFTL_III(9,32,32, 
                                                           ((IData)(1U) 
                                                            + 
                                                            vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                            [1U]), 6U) 
                                             - (IData)(1U)) 
                                            - (IData)(0x3fU)))))) 
                       | (((0U == (0x1fU & ((VL_SHIFTL_III(9,32,32, 
                                                           ((IData)(1U) 
                                                            + 
                                                            vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                            [1U]), 6U) 
                                             - (IData)(1U)) 
                                            - (IData)(0x3fU))))
                            ? 0ULL : ((QData)((IData)(
                                                      vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_wdata_q[
                                                      (((IData)(0x1fU) 
                                                        + 
                                                        (0x1ffU 
                                                         & ((VL_SHIFTL_III(9,32,32, 
                                                                           ((IData)(1U) 
                                                                            + 
                                                                            vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                            [1U]), 6U) 
                                                             - (IData)(1U)) 
                                                            - (IData)(0x3fU)))) 
                                                       >> 5U)])) 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((VL_SHIFTL_III(9,32,32, 
                                                               ((IData)(1U) 
                                                                + 
                                                                vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                [1U]), 6U) 
                                                 - (IData)(1U)) 
                                                - (IData)(0x3fU)))))) 
                          | ((QData)((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_wdata_q[
                                             (0xfU 
                                              & (((VL_SHIFTL_III(9,32,32, 
                                                                 ((IData)(1U) 
                                                                  + 
                                                                  vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                  [1U]), 6U) 
                                                   - (IData)(1U)) 
                                                  - (IData)(0x3fU)) 
                                                 >> 5U))])) 
                             >> (0x1fU & ((VL_SHIFTL_III(9,32,32, 
                                                         ((IData)(1U) 
                                                          + 
                                                          vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                          [1U]), 6U) 
                                           - (IData)(1U)) 
                                          - (IData)(0x3fU)))))));
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_wdata_r[3U] 
            = (IData)(((((QData)((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_wdata_q[
                                         (((IData)(0x3fU) 
                                           + (0x1ffU 
                                              & ((VL_SHIFTL_III(9,32,32, 
                                                                ((IData)(1U) 
                                                                 + 
                                                                 vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                 [1U]), 6U) 
                                                  - (IData)(1U)) 
                                                 - (IData)(0x3fU)))) 
                                          >> 5U)])) 
                         << ((0U == (0x1fU & ((VL_SHIFTL_III(9,32,32, 
                                                             ((IData)(1U) 
                                                              + 
                                                              vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                              [1U]), 6U) 
                                               - (IData)(1U)) 
                                              - (IData)(0x3fU))))
                              ? 0x20U : ((IData)(0x40U) 
                                         - (0x1fU & 
                                            ((VL_SHIFTL_III(9,32,32, 
                                                            ((IData)(1U) 
                                                             + 
                                                             vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                             [1U]), 6U) 
                                              - (IData)(1U)) 
                                             - (IData)(0x3fU)))))) 
                        | (((0U == (0x1fU & ((VL_SHIFTL_III(9,32,32, 
                                                            ((IData)(1U) 
                                                             + 
                                                             vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                             [1U]), 6U) 
                                              - (IData)(1U)) 
                                             - (IData)(0x3fU))))
                             ? 0ULL : ((QData)((IData)(
                                                       vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_wdata_q[
                                                       (((IData)(0x1fU) 
                                                         + 
                                                         (0x1ffU 
                                                          & ((VL_SHIFTL_III(9,32,32, 
                                                                            ((IData)(1U) 
                                                                             + 
                                                                             vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                             [1U]), 6U) 
                                                              - (IData)(1U)) 
                                                             - (IData)(0x3fU)))) 
                                                        >> 5U)])) 
                                       << ((IData)(0x20U) 
                                           - (0x1fU 
                                              & ((VL_SHIFTL_III(9,32,32, 
                                                                ((IData)(1U) 
                                                                 + 
                                                                 vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                 [1U]), 6U) 
                                                  - (IData)(1U)) 
                                                 - (IData)(0x3fU)))))) 
                           | ((QData)((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_wdata_q[
                                              (0xfU 
                                               & (((VL_SHIFTL_III(9,32,32, 
                                                                  ((IData)(1U) 
                                                                   + 
                                                                   vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                   [1U]), 6U) 
                                                    - (IData)(1U)) 
                                                   - (IData)(0x3fU)) 
                                                  >> 5U))])) 
                              >> (0x1fU & ((VL_SHIFTL_III(9,32,32, 
                                                          ((IData)(1U) 
                                                           + 
                                                           vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                           [1U]), 6U) 
                                            - (IData)(1U)) 
                                           - (IData)(0x3fU)))))) 
                       >> 0x20U));
        vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_h69f63477__0 
            = vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
            [1U];
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_src_lane_r 
            = ((0xffffc7U & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_src_lane_r) 
               | ((IData)(vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_h69f63477__0) 
                  << 3U));
    }
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_tag_r[0U] 
        = Vrv64g_cache_system_tb__ConstPool__CONST_hba6586cf_0[0U];
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_tag_r[1U] 
        = Vrv64g_cache_system_tb__ConstPool__CONST_hba6586cf_0[1U];
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_tag_r[2U] 
        = Vrv64g_cache_system_tb__ConstPool__CONST_hba6586cf_0[2U];
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_tag_r[3U] 
        = Vrv64g_cache_system_tb__ConstPool__CONST_hba6586cf_0[3U];
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_tag_r[4U] 
        = Vrv64g_cache_system_tb__ConstPool__CONST_hba6586cf_0[4U];
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_tag_r[5U] 
        = Vrv64g_cache_system_tb__ConstPool__CONST_hba6586cf_0[5U];
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_tag_r[6U] 
        = Vrv64g_cache_system_tb__ConstPool__CONST_hba6586cf_0[6U];
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_tag_r[7U] 
        = Vrv64g_cache_system_tb__ConstPool__CONST_hba6586cf_0[7U];
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_tag_r[8U] 
        = Vrv64g_cache_system_tb__ConstPool__CONST_hba6586cf_0[8U];
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_tag_r[9U] 
        = Vrv64g_cache_system_tb__ConstPool__CONST_hba6586cf_0[9U];
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_tag_r[0xaU] 
        = Vrv64g_cache_system_tb__ConstPool__CONST_hba6586cf_0[0xaU];
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_tag_r[0xbU] 
        = Vrv64g_cache_system_tb__ConstPool__CONST_hba6586cf_0[0xbU];
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_tag_r[0xcU] 
        = Vrv64g_cache_system_tb__ConstPool__CONST_hba6586cf_0[0xcU];
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_tag_r[0xdU] 
        = Vrv64g_cache_system_tb__ConstPool__CONST_hba6586cf_0[0xdU];
    if (((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_active) 
         & ((1U == (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_q)) 
            | (2U == (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_q))))) {
        vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_h603b0530__0 
            = ((0x1a7U >= (0x1ffU & ((((IData)(0x35U) 
                                       * ((IData)(1U) 
                                          + vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                          [0U])) - (IData)(1U)) 
                                     - (IData)(0x34U))))
                ? (0x1fffffffffffffULL & (((QData)((IData)(
                                                           vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_tag_q[
                                                           (((IData)(0x34U) 
                                                             + 
                                                             (0x1ffU 
                                                              & ((((IData)(0x35U) 
                                                                   * 
                                                                   ((IData)(1U) 
                                                                    + 
                                                                    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                    [0U])) 
                                                                  - (IData)(1U)) 
                                                                 - (IData)(0x34U)))) 
                                                            >> 5U)])) 
                                           << ((0U 
                                                == 
                                                (0x1fU 
                                                 & ((((IData)(0x35U) 
                                                      * 
                                                      ((IData)(1U) 
                                                       + 
                                                       vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                       [0U])) 
                                                     - (IData)(1U)) 
                                                    - (IData)(0x34U))))
                                                ? 0x20U
                                                : ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((((IData)(0x35U) 
                                                         * 
                                                         ((IData)(1U) 
                                                          + 
                                                          vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                          [0U])) 
                                                        - (IData)(1U)) 
                                                       - (IData)(0x34U)))))) 
                                          | (((0U == 
                                               (0x1fU 
                                                & ((((IData)(0x35U) 
                                                     * 
                                                     ((IData)(1U) 
                                                      + 
                                                      vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                      [0U])) 
                                                    - (IData)(1U)) 
                                                   - (IData)(0x34U))))
                                               ? 0ULL
                                               : ((QData)((IData)(
                                                                  vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_tag_q[
                                                                  (((IData)(0x1fU) 
                                                                    + 
                                                                    (0x1ffU 
                                                                     & ((((IData)(0x35U) 
                                                                          * 
                                                                          ((IData)(1U) 
                                                                           + 
                                                                           vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                           [0U])) 
                                                                         - (IData)(1U)) 
                                                                        - (IData)(0x34U)))) 
                                                                   >> 5U)])) 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((((IData)(0x35U) 
                                                         * 
                                                         ((IData)(1U) 
                                                          + 
                                                          vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                          [0U])) 
                                                        - (IData)(1U)) 
                                                       - (IData)(0x34U)))))) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_tag_q[
                                                                (0xfU 
                                                                 & (((((IData)(0x35U) 
                                                                       * 
                                                                       ((IData)(1U) 
                                                                        + 
                                                                        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                        [0U])) 
                                                                      - (IData)(1U)) 
                                                                     - (IData)(0x34U)) 
                                                                    >> 5U))])) 
                                                >> 
                                                (0x1fU 
                                                 & ((((IData)(0x35U) 
                                                      * 
                                                      ((IData)(1U) 
                                                       + 
                                                       vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                       [0U])) 
                                                     - (IData)(1U)) 
                                                    - (IData)(0x34U)))))))
                : 0ULL);
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_tag_r[0U] 
            = (IData)(vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_h603b0530__0);
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_tag_r[1U] 
            = ((0xffe00000U & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_tag_r[1U]) 
               | (IData)((vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_h603b0530__0 
                          >> 0x20U)));
    }
    if ((((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_active) 
          >> 1U) & ((1U == (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_q)) 
                    | (2U == (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_q))))) {
        vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_h603b0530__0 
            = ((0x1a7U >= (0x1ffU & ((((IData)(0x35U) 
                                       * ((IData)(1U) 
                                          + vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                          [1U])) - (IData)(1U)) 
                                     - (IData)(0x34U))))
                ? (0x1fffffffffffffULL & (((QData)((IData)(
                                                           vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_tag_q[
                                                           (((IData)(0x34U) 
                                                             + 
                                                             (0x1ffU 
                                                              & ((((IData)(0x35U) 
                                                                   * 
                                                                   ((IData)(1U) 
                                                                    + 
                                                                    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                    [1U])) 
                                                                  - (IData)(1U)) 
                                                                 - (IData)(0x34U)))) 
                                                            >> 5U)])) 
                                           << ((0U 
                                                == 
                                                (0x1fU 
                                                 & ((((IData)(0x35U) 
                                                      * 
                                                      ((IData)(1U) 
                                                       + 
                                                       vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                       [1U])) 
                                                     - (IData)(1U)) 
                                                    - (IData)(0x34U))))
                                                ? 0x20U
                                                : ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((((IData)(0x35U) 
                                                         * 
                                                         ((IData)(1U) 
                                                          + 
                                                          vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                          [1U])) 
                                                        - (IData)(1U)) 
                                                       - (IData)(0x34U)))))) 
                                          | (((0U == 
                                               (0x1fU 
                                                & ((((IData)(0x35U) 
                                                     * 
                                                     ((IData)(1U) 
                                                      + 
                                                      vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                      [1U])) 
                                                    - (IData)(1U)) 
                                                   - (IData)(0x34U))))
                                               ? 0ULL
                                               : ((QData)((IData)(
                                                                  vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_tag_q[
                                                                  (((IData)(0x1fU) 
                                                                    + 
                                                                    (0x1ffU 
                                                                     & ((((IData)(0x35U) 
                                                                          * 
                                                                          ((IData)(1U) 
                                                                           + 
                                                                           vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                           [1U])) 
                                                                         - (IData)(1U)) 
                                                                        - (IData)(0x34U)))) 
                                                                   >> 5U)])) 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((((IData)(0x35U) 
                                                         * 
                                                         ((IData)(1U) 
                                                          + 
                                                          vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                          [1U])) 
                                                        - (IData)(1U)) 
                                                       - (IData)(0x34U)))))) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_tag_q[
                                                                (0xfU 
                                                                 & (((((IData)(0x35U) 
                                                                       * 
                                                                       ((IData)(1U) 
                                                                        + 
                                                                        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                        [1U])) 
                                                                      - (IData)(1U)) 
                                                                     - (IData)(0x34U)) 
                                                                    >> 5U))])) 
                                                >> 
                                                (0x1fU 
                                                 & ((((IData)(0x35U) 
                                                      * 
                                                      ((IData)(1U) 
                                                       + 
                                                       vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                       [1U])) 
                                                     - (IData)(1U)) 
                                                    - (IData)(0x34U)))))))
                : 0ULL);
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_tag_r[1U] 
            = ((0x1fffffU & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_tag_r[1U]) 
               | ((IData)(vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_h603b0530__0) 
                  << 0x15U));
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_tag_r[2U] 
            = (((IData)(vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_h603b0530__0) 
                >> 0xbU) | ((IData)((vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_h603b0530__0 
                                     >> 0x20U)) << 0x15U));
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_tag_r[3U] 
            = ((0xfffffc00U & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_tag_r[3U]) 
               | ((IData)((vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_h603b0530__0 
                           >> 0x20U)) >> 0xbU));
    }
    if ((((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_active) 
          >> 2U) & ((1U == (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_q)) 
                    | (2U == (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_q))))) {
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_state_r 
            = ((0xffcfU & (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_state_r)) 
               | (0x30U & (((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_state_q) 
                            >> (0xfU & ((VL_SHIFTL_III(4,32,32, 
                                                       ((IData)(1U) 
                                                        + 
                                                        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                        [2U]), 1U) 
                                         - (IData)(1U)) 
                                        - (IData)(1U)))) 
                           << 4U)));
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_wdata_r[4U] 
            = (IData)((((QData)((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_wdata_q[
                                        (((IData)(0x3fU) 
                                          + (0x1ffU 
                                             & ((VL_SHIFTL_III(9,32,32, 
                                                               ((IData)(1U) 
                                                                + 
                                                                vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                [2U]), 6U) 
                                                 - (IData)(1U)) 
                                                - (IData)(0x3fU)))) 
                                         >> 5U)])) 
                        << ((0U == (0x1fU & ((VL_SHIFTL_III(9,32,32, 
                                                            ((IData)(1U) 
                                                             + 
                                                             vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                             [2U]), 6U) 
                                              - (IData)(1U)) 
                                             - (IData)(0x3fU))))
                             ? 0x20U : ((IData)(0x40U) 
                                        - (0x1fU & 
                                           ((VL_SHIFTL_III(9,32,32, 
                                                           ((IData)(1U) 
                                                            + 
                                                            vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                            [2U]), 6U) 
                                             - (IData)(1U)) 
                                            - (IData)(0x3fU)))))) 
                       | (((0U == (0x1fU & ((VL_SHIFTL_III(9,32,32, 
                                                           ((IData)(1U) 
                                                            + 
                                                            vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                            [2U]), 6U) 
                                             - (IData)(1U)) 
                                            - (IData)(0x3fU))))
                            ? 0ULL : ((QData)((IData)(
                                                      vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_wdata_q[
                                                      (((IData)(0x1fU) 
                                                        + 
                                                        (0x1ffU 
                                                         & ((VL_SHIFTL_III(9,32,32, 
                                                                           ((IData)(1U) 
                                                                            + 
                                                                            vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                            [2U]), 6U) 
                                                             - (IData)(1U)) 
                                                            - (IData)(0x3fU)))) 
                                                       >> 5U)])) 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((VL_SHIFTL_III(9,32,32, 
                                                               ((IData)(1U) 
                                                                + 
                                                                vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                [2U]), 6U) 
                                                 - (IData)(1U)) 
                                                - (IData)(0x3fU)))))) 
                          | ((QData)((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_wdata_q[
                                             (0xfU 
                                              & (((VL_SHIFTL_III(9,32,32, 
                                                                 ((IData)(1U) 
                                                                  + 
                                                                  vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                  [2U]), 6U) 
                                                   - (IData)(1U)) 
                                                  - (IData)(0x3fU)) 
                                                 >> 5U))])) 
                             >> (0x1fU & ((VL_SHIFTL_III(9,32,32, 
                                                         ((IData)(1U) 
                                                          + 
                                                          vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                          [2U]), 6U) 
                                           - (IData)(1U)) 
                                          - (IData)(0x3fU)))))));
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_wdata_r[5U] 
            = (IData)(((((QData)((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_wdata_q[
                                         (((IData)(0x3fU) 
                                           + (0x1ffU 
                                              & ((VL_SHIFTL_III(9,32,32, 
                                                                ((IData)(1U) 
                                                                 + 
                                                                 vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                 [2U]), 6U) 
                                                  - (IData)(1U)) 
                                                 - (IData)(0x3fU)))) 
                                          >> 5U)])) 
                         << ((0U == (0x1fU & ((VL_SHIFTL_III(9,32,32, 
                                                             ((IData)(1U) 
                                                              + 
                                                              vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                              [2U]), 6U) 
                                               - (IData)(1U)) 
                                              - (IData)(0x3fU))))
                              ? 0x20U : ((IData)(0x40U) 
                                         - (0x1fU & 
                                            ((VL_SHIFTL_III(9,32,32, 
                                                            ((IData)(1U) 
                                                             + 
                                                             vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                             [2U]), 6U) 
                                              - (IData)(1U)) 
                                             - (IData)(0x3fU)))))) 
                        | (((0U == (0x1fU & ((VL_SHIFTL_III(9,32,32, 
                                                            ((IData)(1U) 
                                                             + 
                                                             vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                             [2U]), 6U) 
                                              - (IData)(1U)) 
                                             - (IData)(0x3fU))))
                             ? 0ULL : ((QData)((IData)(
                                                       vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_wdata_q[
                                                       (((IData)(0x1fU) 
                                                         + 
                                                         (0x1ffU 
                                                          & ((VL_SHIFTL_III(9,32,32, 
                                                                            ((IData)(1U) 
                                                                             + 
                                                                             vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                             [2U]), 6U) 
                                                              - (IData)(1U)) 
                                                             - (IData)(0x3fU)))) 
                                                        >> 5U)])) 
                                       << ((IData)(0x20U) 
                                           - (0x1fU 
                                              & ((VL_SHIFTL_III(9,32,32, 
                                                                ((IData)(1U) 
                                                                 + 
                                                                 vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                 [2U]), 6U) 
                                                  - (IData)(1U)) 
                                                 - (IData)(0x3fU)))))) 
                           | ((QData)((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_wdata_q[
                                              (0xfU 
                                               & (((VL_SHIFTL_III(9,32,32, 
                                                                  ((IData)(1U) 
                                                                   + 
                                                                   vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                   [2U]), 6U) 
                                                    - (IData)(1U)) 
                                                   - (IData)(0x3fU)) 
                                                  >> 5U))])) 
                              >> (0x1fU & ((VL_SHIFTL_III(9,32,32, 
                                                          ((IData)(1U) 
                                                           + 
                                                           vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                           [2U]), 6U) 
                                            - (IData)(1U)) 
                                           - (IData)(0x3fU)))))) 
                       >> 0x20U));
        vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_h69f63477__0 
            = vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
            [2U];
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_src_lane_r 
            = ((0xfffe3fU & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_src_lane_r) 
               | ((IData)(vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_h69f63477__0) 
                  << 6U));
        vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_h603b0530__0 
            = ((0x1a7U >= (0x1ffU & ((((IData)(0x35U) 
                                       * ((IData)(1U) 
                                          + vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                          [2U])) - (IData)(1U)) 
                                     - (IData)(0x34U))))
                ? (0x1fffffffffffffULL & (((QData)((IData)(
                                                           vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_tag_q[
                                                           (((IData)(0x34U) 
                                                             + 
                                                             (0x1ffU 
                                                              & ((((IData)(0x35U) 
                                                                   * 
                                                                   ((IData)(1U) 
                                                                    + 
                                                                    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                    [2U])) 
                                                                  - (IData)(1U)) 
                                                                 - (IData)(0x34U)))) 
                                                            >> 5U)])) 
                                           << ((0U 
                                                == 
                                                (0x1fU 
                                                 & ((((IData)(0x35U) 
                                                      * 
                                                      ((IData)(1U) 
                                                       + 
                                                       vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                       [2U])) 
                                                     - (IData)(1U)) 
                                                    - (IData)(0x34U))))
                                                ? 0x20U
                                                : ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((((IData)(0x35U) 
                                                         * 
                                                         ((IData)(1U) 
                                                          + 
                                                          vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                          [2U])) 
                                                        - (IData)(1U)) 
                                                       - (IData)(0x34U)))))) 
                                          | (((0U == 
                                               (0x1fU 
                                                & ((((IData)(0x35U) 
                                                     * 
                                                     ((IData)(1U) 
                                                      + 
                                                      vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                      [2U])) 
                                                    - (IData)(1U)) 
                                                   - (IData)(0x34U))))
                                               ? 0ULL
                                               : ((QData)((IData)(
                                                                  vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_tag_q[
                                                                  (((IData)(0x1fU) 
                                                                    + 
                                                                    (0x1ffU 
                                                                     & ((((IData)(0x35U) 
                                                                          * 
                                                                          ((IData)(1U) 
                                                                           + 
                                                                           vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                           [2U])) 
                                                                         - (IData)(1U)) 
                                                                        - (IData)(0x34U)))) 
                                                                   >> 5U)])) 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((((IData)(0x35U) 
                                                         * 
                                                         ((IData)(1U) 
                                                          + 
                                                          vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                          [2U])) 
                                                        - (IData)(1U)) 
                                                       - (IData)(0x34U)))))) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_tag_q[
                                                                (0xfU 
                                                                 & (((((IData)(0x35U) 
                                                                       * 
                                                                       ((IData)(1U) 
                                                                        + 
                                                                        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                        [2U])) 
                                                                      - (IData)(1U)) 
                                                                     - (IData)(0x34U)) 
                                                                    >> 5U))])) 
                                                >> 
                                                (0x1fU 
                                                 & ((((IData)(0x35U) 
                                                      * 
                                                      ((IData)(1U) 
                                                       + 
                                                       vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                       [2U])) 
                                                     - (IData)(1U)) 
                                                    - (IData)(0x34U)))))))
                : 0ULL);
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_tag_r[3U] 
            = ((0x3ffU & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_tag_r[3U]) 
               | ((IData)(vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_h603b0530__0) 
                  << 0xaU));
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_tag_r[4U] 
            = ((0x80000000U & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_tag_r[4U]) 
               | (((IData)(vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_h603b0530__0) 
                   >> 0x16U) | ((IData)((vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_h603b0530__0 
                                         >> 0x20U)) 
                                << 0xaU)));
    }
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__lane_grant 
        = ((((0xffffff80U & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__pending_q) 
                             & ((7U == vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                 [(7U & (vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[0xeU] 
                                         >> 3U))]) 
                                << 7U))) | (0xffffffc0U 
                                            & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__pending_q) 
                                               & ((6U 
                                                   == 
                                                   vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                   [
                                                   (7U 
                                                    & (vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[0xcU] 
                                                       >> 3U))]) 
                                                  << 6U)))) 
            | ((0xffffffe0U & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__pending_q) 
                               & ((5U == vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                   [(7U & (vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[0xaU] 
                                           >> 3U))]) 
                                  << 5U))) | (0xfffffff0U 
                                              & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__pending_q) 
                                                 & ((4U 
                                                     == 
                                                     vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                     [
                                                     (7U 
                                                      & (vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[8U] 
                                                         >> 3U))]) 
                                                    << 4U))))) 
           | (((0xfffffff8U & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__pending_q) 
                               & ((3U == vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                   [(7U & (vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[6U] 
                                           >> 3U))]) 
                                  << 3U))) | (0xfffffffcU 
                                              & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__pending_q) 
                                                 & ((2U 
                                                     == 
                                                     vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                     [
                                                     (7U 
                                                      & (vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[4U] 
                                                         >> 3U))]) 
                                                    << 2U)))) 
              | ((0xfffffffeU & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__pending_q) 
                                 & ((1U == vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                     [(7U & (vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[2U] 
                                             >> 3U))]) 
                                    << 1U))) | ((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__pending_q) 
                                                & (0U 
                                                   == 
                                                   vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                   [
                                                   (7U 
                                                    & (vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[0U] 
                                                       >> 3U))])))));
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_be_r = 0ULL;
    if (((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_active) 
         & ((1U == (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_q)) 
            | (2U == (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_q))))) {
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_be_r 
            = ((0xffffffffffffff00ULL & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_be_r) 
               | (IData)((IData)((0xffU & (IData)((vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_be_q 
                                                   >> 
                                                   (0x3fU 
                                                    & ((VL_SHIFTL_III(6,32,32, 
                                                                      ((IData)(1U) 
                                                                       + 
                                                                       vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                       [0U]), 3U) 
                                                        - (IData)(1U)) 
                                                       - (IData)(7U)))))))));
    }
    if ((((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_active) 
          >> 1U) & ((1U == (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_q)) 
                    | (2U == (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_q))))) {
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_be_r 
            = ((0xffffffffffff00ffULL & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_be_r) 
               | ((QData)((IData)((0xffU & (IData)(
                                                   (vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_be_q 
                                                    >> 
                                                    (0x3fU 
                                                     & ((VL_SHIFTL_III(6,32,32, 
                                                                       ((IData)(1U) 
                                                                        + 
                                                                        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                        [1U]), 3U) 
                                                         - (IData)(1U)) 
                                                        - (IData)(7U)))))))) 
                  << 8U));
    }
    if ((((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_active) 
          >> 2U) & ((1U == (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_q)) 
                    | (2U == (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_q))))) {
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_be_r 
            = ((0xffffffffff00ffffULL & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_be_r) 
               | ((QData)((IData)((0xffU & (IData)(
                                                   (vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_be_q 
                                                    >> 
                                                    (0x3fU 
                                                     & ((VL_SHIFTL_III(6,32,32, 
                                                                       ((IData)(1U) 
                                                                        + 
                                                                        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                        [2U]), 3U) 
                                                         - (IData)(1U)) 
                                                        - (IData)(7U)))))))) 
                  << 0x10U));
    }
    if ((((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_active) 
          >> 3U) & ((1U == (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_q)) 
                    | (2U == (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_q))))) {
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_state_r 
            = ((0xff3fU & (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_state_r)) 
               | (0xc0U & (((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_state_q) 
                            >> (0xfU & ((VL_SHIFTL_III(4,32,32, 
                                                       ((IData)(1U) 
                                                        + 
                                                        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                        [3U]), 1U) 
                                         - (IData)(1U)) 
                                        - (IData)(1U)))) 
                           << 6U)));
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_wdata_r[6U] 
            = (IData)((((QData)((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_wdata_q[
                                        (((IData)(0x3fU) 
                                          + (0x1ffU 
                                             & ((VL_SHIFTL_III(9,32,32, 
                                                               ((IData)(1U) 
                                                                + 
                                                                vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                [3U]), 6U) 
                                                 - (IData)(1U)) 
                                                - (IData)(0x3fU)))) 
                                         >> 5U)])) 
                        << ((0U == (0x1fU & ((VL_SHIFTL_III(9,32,32, 
                                                            ((IData)(1U) 
                                                             + 
                                                             vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                             [3U]), 6U) 
                                              - (IData)(1U)) 
                                             - (IData)(0x3fU))))
                             ? 0x20U : ((IData)(0x40U) 
                                        - (0x1fU & 
                                           ((VL_SHIFTL_III(9,32,32, 
                                                           ((IData)(1U) 
                                                            + 
                                                            vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                            [3U]), 6U) 
                                             - (IData)(1U)) 
                                            - (IData)(0x3fU)))))) 
                       | (((0U == (0x1fU & ((VL_SHIFTL_III(9,32,32, 
                                                           ((IData)(1U) 
                                                            + 
                                                            vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                            [3U]), 6U) 
                                             - (IData)(1U)) 
                                            - (IData)(0x3fU))))
                            ? 0ULL : ((QData)((IData)(
                                                      vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_wdata_q[
                                                      (((IData)(0x1fU) 
                                                        + 
                                                        (0x1ffU 
                                                         & ((VL_SHIFTL_III(9,32,32, 
                                                                           ((IData)(1U) 
                                                                            + 
                                                                            vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                            [3U]), 6U) 
                                                             - (IData)(1U)) 
                                                            - (IData)(0x3fU)))) 
                                                       >> 5U)])) 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((VL_SHIFTL_III(9,32,32, 
                                                               ((IData)(1U) 
                                                                + 
                                                                vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                [3U]), 6U) 
                                                 - (IData)(1U)) 
                                                - (IData)(0x3fU)))))) 
                          | ((QData)((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_wdata_q[
                                             (0xfU 
                                              & (((VL_SHIFTL_III(9,32,32, 
                                                                 ((IData)(1U) 
                                                                  + 
                                                                  vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                  [3U]), 6U) 
                                                   - (IData)(1U)) 
                                                  - (IData)(0x3fU)) 
                                                 >> 5U))])) 
                             >> (0x1fU & ((VL_SHIFTL_III(9,32,32, 
                                                         ((IData)(1U) 
                                                          + 
                                                          vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                          [3U]), 6U) 
                                           - (IData)(1U)) 
                                          - (IData)(0x3fU)))))));
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_wdata_r[7U] 
            = (IData)(((((QData)((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_wdata_q[
                                         (((IData)(0x3fU) 
                                           + (0x1ffU 
                                              & ((VL_SHIFTL_III(9,32,32, 
                                                                ((IData)(1U) 
                                                                 + 
                                                                 vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                 [3U]), 6U) 
                                                  - (IData)(1U)) 
                                                 - (IData)(0x3fU)))) 
                                          >> 5U)])) 
                         << ((0U == (0x1fU & ((VL_SHIFTL_III(9,32,32, 
                                                             ((IData)(1U) 
                                                              + 
                                                              vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                              [3U]), 6U) 
                                               - (IData)(1U)) 
                                              - (IData)(0x3fU))))
                              ? 0x20U : ((IData)(0x40U) 
                                         - (0x1fU & 
                                            ((VL_SHIFTL_III(9,32,32, 
                                                            ((IData)(1U) 
                                                             + 
                                                             vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                             [3U]), 6U) 
                                              - (IData)(1U)) 
                                             - (IData)(0x3fU)))))) 
                        | (((0U == (0x1fU & ((VL_SHIFTL_III(9,32,32, 
                                                            ((IData)(1U) 
                                                             + 
                                                             vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                             [3U]), 6U) 
                                              - (IData)(1U)) 
                                             - (IData)(0x3fU))))
                             ? 0ULL : ((QData)((IData)(
                                                       vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_wdata_q[
                                                       (((IData)(0x1fU) 
                                                         + 
                                                         (0x1ffU 
                                                          & ((VL_SHIFTL_III(9,32,32, 
                                                                            ((IData)(1U) 
                                                                             + 
                                                                             vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                             [3U]), 6U) 
                                                              - (IData)(1U)) 
                                                             - (IData)(0x3fU)))) 
                                                        >> 5U)])) 
                                       << ((IData)(0x20U) 
                                           - (0x1fU 
                                              & ((VL_SHIFTL_III(9,32,32, 
                                                                ((IData)(1U) 
                                                                 + 
                                                                 vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                 [3U]), 6U) 
                                                  - (IData)(1U)) 
                                                 - (IData)(0x3fU)))))) 
                           | ((QData)((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_wdata_q[
                                              (0xfU 
                                               & (((VL_SHIFTL_III(9,32,32, 
                                                                  ((IData)(1U) 
                                                                   + 
                                                                   vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                   [3U]), 6U) 
                                                    - (IData)(1U)) 
                                                   - (IData)(0x3fU)) 
                                                  >> 5U))])) 
                              >> (0x1fU & ((VL_SHIFTL_III(9,32,32, 
                                                          ((IData)(1U) 
                                                           + 
                                                           vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                           [3U]), 6U) 
                                            - (IData)(1U)) 
                                           - (IData)(0x3fU)))))) 
                       >> 0x20U));
        vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_h69f63477__0 
            = vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
            [3U];
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_src_lane_r 
            = ((0xfff1ffU & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_src_lane_r) 
               | ((IData)(vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_h69f63477__0) 
                  << 9U));
        vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_h603b0530__0 
            = ((0x1a7U >= (0x1ffU & ((((IData)(0x35U) 
                                       * ((IData)(1U) 
                                          + vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                          [3U])) - (IData)(1U)) 
                                     - (IData)(0x34U))))
                ? (0x1fffffffffffffULL & (((QData)((IData)(
                                                           vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_tag_q[
                                                           (((IData)(0x34U) 
                                                             + 
                                                             (0x1ffU 
                                                              & ((((IData)(0x35U) 
                                                                   * 
                                                                   ((IData)(1U) 
                                                                    + 
                                                                    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                    [3U])) 
                                                                  - (IData)(1U)) 
                                                                 - (IData)(0x34U)))) 
                                                            >> 5U)])) 
                                           << ((0U 
                                                == 
                                                (0x1fU 
                                                 & ((((IData)(0x35U) 
                                                      * 
                                                      ((IData)(1U) 
                                                       + 
                                                       vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                       [3U])) 
                                                     - (IData)(1U)) 
                                                    - (IData)(0x34U))))
                                                ? 0x20U
                                                : ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((((IData)(0x35U) 
                                                         * 
                                                         ((IData)(1U) 
                                                          + 
                                                          vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                          [3U])) 
                                                        - (IData)(1U)) 
                                                       - (IData)(0x34U)))))) 
                                          | (((0U == 
                                               (0x1fU 
                                                & ((((IData)(0x35U) 
                                                     * 
                                                     ((IData)(1U) 
                                                      + 
                                                      vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                      [3U])) 
                                                    - (IData)(1U)) 
                                                   - (IData)(0x34U))))
                                               ? 0ULL
                                               : ((QData)((IData)(
                                                                  vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_tag_q[
                                                                  (((IData)(0x1fU) 
                                                                    + 
                                                                    (0x1ffU 
                                                                     & ((((IData)(0x35U) 
                                                                          * 
                                                                          ((IData)(1U) 
                                                                           + 
                                                                           vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                           [3U])) 
                                                                         - (IData)(1U)) 
                                                                        - (IData)(0x34U)))) 
                                                                   >> 5U)])) 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((((IData)(0x35U) 
                                                         * 
                                                         ((IData)(1U) 
                                                          + 
                                                          vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                          [3U])) 
                                                        - (IData)(1U)) 
                                                       - (IData)(0x34U)))))) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_tag_q[
                                                                (0xfU 
                                                                 & (((((IData)(0x35U) 
                                                                       * 
                                                                       ((IData)(1U) 
                                                                        + 
                                                                        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                        [3U])) 
                                                                      - (IData)(1U)) 
                                                                     - (IData)(0x34U)) 
                                                                    >> 5U))])) 
                                                >> 
                                                (0x1fU 
                                                 & ((((IData)(0x35U) 
                                                      * 
                                                      ((IData)(1U) 
                                                       + 
                                                       vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                       [3U])) 
                                                     - (IData)(1U)) 
                                                    - (IData)(0x34U)))))))
                : 0ULL);
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_tag_r[4U] 
            = ((0x7fffffffU & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_tag_r[4U]) 
               | ((IData)(vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_h603b0530__0) 
                  << 0x1fU));
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_tag_r[5U] 
            = (((IData)(vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_h603b0530__0) 
                >> 1U) | ((IData)((vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_h603b0530__0 
                                   >> 0x20U)) << 0x1fU));
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_tag_r[6U] 
            = ((0xfff00000U & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_tag_r[6U]) 
               | ((IData)((vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_h603b0530__0 
                           >> 0x20U)) >> 1U));
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_be_r 
            = ((0xffffffff00ffffffULL & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_be_r) 
               | ((QData)((IData)((0xffU & (IData)(
                                                   (vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_be_q 
                                                    >> 
                                                    (0x3fU 
                                                     & ((VL_SHIFTL_III(6,32,32, 
                                                                       ((IData)(1U) 
                                                                        + 
                                                                        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                        [3U]), 3U) 
                                                         - (IData)(1U)) 
                                                        - (IData)(7U)))))))) 
                  << 0x18U));
    }
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_we_r = 0U;
    if (((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_active) 
         & ((1U == (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_q)) 
            | (2U == (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_q))))) {
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_we_r 
            = ((0xfeU & (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_we_r)) 
               | (1U & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_we_q) 
                        >> vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                        [0U])));
    }
    if ((((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_active) 
          >> 1U) & ((1U == (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_q)) 
                    | (2U == (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_q))))) {
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_we_r 
            = ((0xfdU & (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_we_r)) 
               | (2U & (((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_we_q) 
                         >> vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                         [1U]) << 1U)));
    }
    if ((((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_active) 
          >> 2U) & ((1U == (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_q)) 
                    | (2U == (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_q))))) {
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_we_r 
            = ((0xfbU & (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_we_r)) 
               | (4U & (((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_we_q) 
                         >> vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                         [2U]) << 2U)));
    }
    if ((((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_active) 
          >> 3U) & ((1U == (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_q)) 
                    | (2U == (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_q))))) {
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_we_r 
            = ((0xf7U & (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_we_r)) 
               | (8U & (((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_we_q) 
                         >> vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                         [3U]) << 3U)));
    }
    if ((((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_active) 
          >> 4U) & ((1U == (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_q)) 
                    | (2U == (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_q))))) {
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_state_r 
            = ((0xfcffU & (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_state_r)) 
               | (0x300U & (((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_state_q) 
                             >> (0xfU & ((VL_SHIFTL_III(4,32,32, 
                                                        ((IData)(1U) 
                                                         + 
                                                         vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                         [4U]), 1U) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))) 
                            << 8U)));
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_wdata_r[8U] 
            = (IData)((((QData)((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_wdata_q[
                                        (((IData)(0x3fU) 
                                          + (0x1ffU 
                                             & ((VL_SHIFTL_III(9,32,32, 
                                                               ((IData)(1U) 
                                                                + 
                                                                vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                [4U]), 6U) 
                                                 - (IData)(1U)) 
                                                - (IData)(0x3fU)))) 
                                         >> 5U)])) 
                        << ((0U == (0x1fU & ((VL_SHIFTL_III(9,32,32, 
                                                            ((IData)(1U) 
                                                             + 
                                                             vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                             [4U]), 6U) 
                                              - (IData)(1U)) 
                                             - (IData)(0x3fU))))
                             ? 0x20U : ((IData)(0x40U) 
                                        - (0x1fU & 
                                           ((VL_SHIFTL_III(9,32,32, 
                                                           ((IData)(1U) 
                                                            + 
                                                            vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                            [4U]), 6U) 
                                             - (IData)(1U)) 
                                            - (IData)(0x3fU)))))) 
                       | (((0U == (0x1fU & ((VL_SHIFTL_III(9,32,32, 
                                                           ((IData)(1U) 
                                                            + 
                                                            vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                            [4U]), 6U) 
                                             - (IData)(1U)) 
                                            - (IData)(0x3fU))))
                            ? 0ULL : ((QData)((IData)(
                                                      vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_wdata_q[
                                                      (((IData)(0x1fU) 
                                                        + 
                                                        (0x1ffU 
                                                         & ((VL_SHIFTL_III(9,32,32, 
                                                                           ((IData)(1U) 
                                                                            + 
                                                                            vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                            [4U]), 6U) 
                                                             - (IData)(1U)) 
                                                            - (IData)(0x3fU)))) 
                                                       >> 5U)])) 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((VL_SHIFTL_III(9,32,32, 
                                                               ((IData)(1U) 
                                                                + 
                                                                vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                [4U]), 6U) 
                                                 - (IData)(1U)) 
                                                - (IData)(0x3fU)))))) 
                          | ((QData)((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_wdata_q[
                                             (0xfU 
                                              & (((VL_SHIFTL_III(9,32,32, 
                                                                 ((IData)(1U) 
                                                                  + 
                                                                  vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                  [4U]), 6U) 
                                                   - (IData)(1U)) 
                                                  - (IData)(0x3fU)) 
                                                 >> 5U))])) 
                             >> (0x1fU & ((VL_SHIFTL_III(9,32,32, 
                                                         ((IData)(1U) 
                                                          + 
                                                          vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                          [4U]), 6U) 
                                           - (IData)(1U)) 
                                          - (IData)(0x3fU)))))));
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_wdata_r[9U] 
            = (IData)(((((QData)((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_wdata_q[
                                         (((IData)(0x3fU) 
                                           + (0x1ffU 
                                              & ((VL_SHIFTL_III(9,32,32, 
                                                                ((IData)(1U) 
                                                                 + 
                                                                 vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                 [4U]), 6U) 
                                                  - (IData)(1U)) 
                                                 - (IData)(0x3fU)))) 
                                          >> 5U)])) 
                         << ((0U == (0x1fU & ((VL_SHIFTL_III(9,32,32, 
                                                             ((IData)(1U) 
                                                              + 
                                                              vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                              [4U]), 6U) 
                                               - (IData)(1U)) 
                                              - (IData)(0x3fU))))
                              ? 0x20U : ((IData)(0x40U) 
                                         - (0x1fU & 
                                            ((VL_SHIFTL_III(9,32,32, 
                                                            ((IData)(1U) 
                                                             + 
                                                             vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                             [4U]), 6U) 
                                              - (IData)(1U)) 
                                             - (IData)(0x3fU)))))) 
                        | (((0U == (0x1fU & ((VL_SHIFTL_III(9,32,32, 
                                                            ((IData)(1U) 
                                                             + 
                                                             vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                             [4U]), 6U) 
                                              - (IData)(1U)) 
                                             - (IData)(0x3fU))))
                             ? 0ULL : ((QData)((IData)(
                                                       vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_wdata_q[
                                                       (((IData)(0x1fU) 
                                                         + 
                                                         (0x1ffU 
                                                          & ((VL_SHIFTL_III(9,32,32, 
                                                                            ((IData)(1U) 
                                                                             + 
                                                                             vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                             [4U]), 6U) 
                                                              - (IData)(1U)) 
                                                             - (IData)(0x3fU)))) 
                                                        >> 5U)])) 
                                       << ((IData)(0x20U) 
                                           - (0x1fU 
                                              & ((VL_SHIFTL_III(9,32,32, 
                                                                ((IData)(1U) 
                                                                 + 
                                                                 vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                 [4U]), 6U) 
                                                  - (IData)(1U)) 
                                                 - (IData)(0x3fU)))))) 
                           | ((QData)((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_wdata_q[
                                              (0xfU 
                                               & (((VL_SHIFTL_III(9,32,32, 
                                                                  ((IData)(1U) 
                                                                   + 
                                                                   vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                   [4U]), 6U) 
                                                    - (IData)(1U)) 
                                                   - (IData)(0x3fU)) 
                                                  >> 5U))])) 
                              >> (0x1fU & ((VL_SHIFTL_III(9,32,32, 
                                                          ((IData)(1U) 
                                                           + 
                                                           vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                           [4U]), 6U) 
                                            - (IData)(1U)) 
                                           - (IData)(0x3fU)))))) 
                       >> 0x20U));
        vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_h69f63477__0 
            = vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
            [4U];
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_src_lane_r 
            = ((0xff8fffU & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_src_lane_r) 
               | ((IData)(vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_h69f63477__0) 
                  << 0xcU));
        vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_h603b0530__0 
            = ((0x1a7U >= (0x1ffU & ((((IData)(0x35U) 
                                       * ((IData)(1U) 
                                          + vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                          [4U])) - (IData)(1U)) 
                                     - (IData)(0x34U))))
                ? (0x1fffffffffffffULL & (((QData)((IData)(
                                                           vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_tag_q[
                                                           (((IData)(0x34U) 
                                                             + 
                                                             (0x1ffU 
                                                              & ((((IData)(0x35U) 
                                                                   * 
                                                                   ((IData)(1U) 
                                                                    + 
                                                                    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                    [4U])) 
                                                                  - (IData)(1U)) 
                                                                 - (IData)(0x34U)))) 
                                                            >> 5U)])) 
                                           << ((0U 
                                                == 
                                                (0x1fU 
                                                 & ((((IData)(0x35U) 
                                                      * 
                                                      ((IData)(1U) 
                                                       + 
                                                       vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                       [4U])) 
                                                     - (IData)(1U)) 
                                                    - (IData)(0x34U))))
                                                ? 0x20U
                                                : ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((((IData)(0x35U) 
                                                         * 
                                                         ((IData)(1U) 
                                                          + 
                                                          vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                          [4U])) 
                                                        - (IData)(1U)) 
                                                       - (IData)(0x34U)))))) 
                                          | (((0U == 
                                               (0x1fU 
                                                & ((((IData)(0x35U) 
                                                     * 
                                                     ((IData)(1U) 
                                                      + 
                                                      vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                      [4U])) 
                                                    - (IData)(1U)) 
                                                   - (IData)(0x34U))))
                                               ? 0ULL
                                               : ((QData)((IData)(
                                                                  vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_tag_q[
                                                                  (((IData)(0x1fU) 
                                                                    + 
                                                                    (0x1ffU 
                                                                     & ((((IData)(0x35U) 
                                                                          * 
                                                                          ((IData)(1U) 
                                                                           + 
                                                                           vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                           [4U])) 
                                                                         - (IData)(1U)) 
                                                                        - (IData)(0x34U)))) 
                                                                   >> 5U)])) 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((((IData)(0x35U) 
                                                         * 
                                                         ((IData)(1U) 
                                                          + 
                                                          vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                          [4U])) 
                                                        - (IData)(1U)) 
                                                       - (IData)(0x34U)))))) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_tag_q[
                                                                (0xfU 
                                                                 & (((((IData)(0x35U) 
                                                                       * 
                                                                       ((IData)(1U) 
                                                                        + 
                                                                        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                        [4U])) 
                                                                      - (IData)(1U)) 
                                                                     - (IData)(0x34U)) 
                                                                    >> 5U))])) 
                                                >> 
                                                (0x1fU 
                                                 & ((((IData)(0x35U) 
                                                      * 
                                                      ((IData)(1U) 
                                                       + 
                                                       vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                       [4U])) 
                                                     - (IData)(1U)) 
                                                    - (IData)(0x34U)))))))
                : 0ULL);
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_tag_r[6U] 
            = ((0xfffffU & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_tag_r[6U]) 
               | ((IData)(vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_h603b0530__0) 
                  << 0x14U));
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_tag_r[7U] 
            = (((IData)(vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_h603b0530__0) 
                >> 0xcU) | ((IData)((vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_h603b0530__0 
                                     >> 0x20U)) << 0x14U));
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_tag_r[8U] 
            = ((0xfffffe00U & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_tag_r[8U]) 
               | ((IData)((vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_h603b0530__0 
                           >> 0x20U)) >> 0xcU));
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_be_r 
            = ((0xffffff00ffffffffULL & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_be_r) 
               | ((QData)((IData)((0xffU & (IData)(
                                                   (vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_be_q 
                                                    >> 
                                                    (0x3fU 
                                                     & ((VL_SHIFTL_III(6,32,32, 
                                                                       ((IData)(1U) 
                                                                        + 
                                                                        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                        [4U]), 3U) 
                                                         - (IData)(1U)) 
                                                        - (IData)(7U)))))))) 
                  << 0x20U));
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_we_r 
            = ((0xefU & (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_we_r)) 
               | (0x10U & (((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_we_q) 
                            >> vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                            [4U]) << 4U)));
    }
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_way_r = 0U;
    if (((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_active) 
         & ((1U == (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_q)) 
            | (2U == (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_q))))) {
        vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_h2d86f8f6__0 
            = ((0x17U >= (0x1fU & ((((IData)(3U) * 
                                     ((IData)(1U) + 
                                      vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                      [0U])) - (IData)(1U)) 
                                   - (IData)(2U))))
                ? (7U & (vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_way_q 
                         >> (0x1fU & ((((IData)(3U) 
                                        * ((IData)(1U) 
                                           + vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                           [0U])) - (IData)(1U)) 
                                      - (IData)(2U)))))
                : 0U);
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_way_r 
            = ((0xfffff8U & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_way_r) 
               | (IData)(vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_h2d86f8f6__0));
    }
    if ((((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_active) 
          >> 1U) & ((1U == (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_q)) 
                    | (2U == (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_q))))) {
        vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_h2d86f8f6__0 
            = ((0x17U >= (0x1fU & ((((IData)(3U) * 
                                     ((IData)(1U) + 
                                      vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                      [1U])) - (IData)(1U)) 
                                   - (IData)(2U))))
                ? (7U & (vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_way_q 
                         >> (0x1fU & ((((IData)(3U) 
                                        * ((IData)(1U) 
                                           + vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                           [1U])) - (IData)(1U)) 
                                      - (IData)(2U)))))
                : 0U);
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_way_r 
            = ((0xffffc7U & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_way_r) 
               | ((IData)(vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_h2d86f8f6__0) 
                  << 3U));
    }
    if ((((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_active) 
          >> 2U) & ((1U == (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_q)) 
                    | (2U == (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_q))))) {
        vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_h2d86f8f6__0 
            = ((0x17U >= (0x1fU & ((((IData)(3U) * 
                                     ((IData)(1U) + 
                                      vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                      [2U])) - (IData)(1U)) 
                                   - (IData)(2U))))
                ? (7U & (vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_way_q 
                         >> (0x1fU & ((((IData)(3U) 
                                        * ((IData)(1U) 
                                           + vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                           [2U])) - (IData)(1U)) 
                                      - (IData)(2U)))))
                : 0U);
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_way_r 
            = ((0xfffe3fU & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_way_r) 
               | ((IData)(vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_h2d86f8f6__0) 
                  << 6U));
    }
    if ((((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_active) 
          >> 3U) & ((1U == (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_q)) 
                    | (2U == (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_q))))) {
        vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_h2d86f8f6__0 
            = ((0x17U >= (0x1fU & ((((IData)(3U) * 
                                     ((IData)(1U) + 
                                      vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                      [3U])) - (IData)(1U)) 
                                   - (IData)(2U))))
                ? (7U & (vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_way_q 
                         >> (0x1fU & ((((IData)(3U) 
                                        * ((IData)(1U) 
                                           + vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                           [3U])) - (IData)(1U)) 
                                      - (IData)(2U)))))
                : 0U);
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_way_r 
            = ((0xfff1ffU & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_way_r) 
               | ((IData)(vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_h2d86f8f6__0) 
                  << 9U));
    }
    if ((((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_active) 
          >> 4U) & ((1U == (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_q)) 
                    | (2U == (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_q))))) {
        vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_h2d86f8f6__0 
            = ((0x17U >= (0x1fU & ((((IData)(3U) * 
                                     ((IData)(1U) + 
                                      vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                      [4U])) - (IData)(1U)) 
                                   - (IData)(2U))))
                ? (7U & (vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_way_q 
                         >> (0x1fU & ((((IData)(3U) 
                                        * ((IData)(1U) 
                                           + vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                           [4U])) - (IData)(1U)) 
                                      - (IData)(2U)))))
                : 0U);
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_way_r 
            = ((0xff8fffU & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_way_r) 
               | ((IData)(vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_h2d86f8f6__0) 
                  << 0xcU));
    }
    if ((((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_active) 
          >> 5U) & ((1U == (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_q)) 
                    | (2U == (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_q))))) {
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_state_r 
            = ((0xf3ffU & (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_state_r)) 
               | (0xc00U & (((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_state_q) 
                             >> (0xfU & ((VL_SHIFTL_III(4,32,32, 
                                                        ((IData)(1U) 
                                                         + 
                                                         vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                         [5U]), 1U) 
                                          - (IData)(1U)) 
                                         - (IData)(1U)))) 
                            << 0xaU)));
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_wdata_r[0xaU] 
            = (IData)((((QData)((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_wdata_q[
                                        (((IData)(0x3fU) 
                                          + (0x1ffU 
                                             & ((VL_SHIFTL_III(9,32,32, 
                                                               ((IData)(1U) 
                                                                + 
                                                                vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                [5U]), 6U) 
                                                 - (IData)(1U)) 
                                                - (IData)(0x3fU)))) 
                                         >> 5U)])) 
                        << ((0U == (0x1fU & ((VL_SHIFTL_III(9,32,32, 
                                                            ((IData)(1U) 
                                                             + 
                                                             vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                             [5U]), 6U) 
                                              - (IData)(1U)) 
                                             - (IData)(0x3fU))))
                             ? 0x20U : ((IData)(0x40U) 
                                        - (0x1fU & 
                                           ((VL_SHIFTL_III(9,32,32, 
                                                           ((IData)(1U) 
                                                            + 
                                                            vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                            [5U]), 6U) 
                                             - (IData)(1U)) 
                                            - (IData)(0x3fU)))))) 
                       | (((0U == (0x1fU & ((VL_SHIFTL_III(9,32,32, 
                                                           ((IData)(1U) 
                                                            + 
                                                            vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                            [5U]), 6U) 
                                             - (IData)(1U)) 
                                            - (IData)(0x3fU))))
                            ? 0ULL : ((QData)((IData)(
                                                      vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_wdata_q[
                                                      (((IData)(0x1fU) 
                                                        + 
                                                        (0x1ffU 
                                                         & ((VL_SHIFTL_III(9,32,32, 
                                                                           ((IData)(1U) 
                                                                            + 
                                                                            vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                            [5U]), 6U) 
                                                             - (IData)(1U)) 
                                                            - (IData)(0x3fU)))) 
                                                       >> 5U)])) 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((VL_SHIFTL_III(9,32,32, 
                                                               ((IData)(1U) 
                                                                + 
                                                                vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                [5U]), 6U) 
                                                 - (IData)(1U)) 
                                                - (IData)(0x3fU)))))) 
                          | ((QData)((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_wdata_q[
                                             (0xfU 
                                              & (((VL_SHIFTL_III(9,32,32, 
                                                                 ((IData)(1U) 
                                                                  + 
                                                                  vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                  [5U]), 6U) 
                                                   - (IData)(1U)) 
                                                  - (IData)(0x3fU)) 
                                                 >> 5U))])) 
                             >> (0x1fU & ((VL_SHIFTL_III(9,32,32, 
                                                         ((IData)(1U) 
                                                          + 
                                                          vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                          [5U]), 6U) 
                                           - (IData)(1U)) 
                                          - (IData)(0x3fU)))))));
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_wdata_r[0xbU] 
            = (IData)(((((QData)((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_wdata_q[
                                         (((IData)(0x3fU) 
                                           + (0x1ffU 
                                              & ((VL_SHIFTL_III(9,32,32, 
                                                                ((IData)(1U) 
                                                                 + 
                                                                 vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                 [5U]), 6U) 
                                                  - (IData)(1U)) 
                                                 - (IData)(0x3fU)))) 
                                          >> 5U)])) 
                         << ((0U == (0x1fU & ((VL_SHIFTL_III(9,32,32, 
                                                             ((IData)(1U) 
                                                              + 
                                                              vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                              [5U]), 6U) 
                                               - (IData)(1U)) 
                                              - (IData)(0x3fU))))
                              ? 0x20U : ((IData)(0x40U) 
                                         - (0x1fU & 
                                            ((VL_SHIFTL_III(9,32,32, 
                                                            ((IData)(1U) 
                                                             + 
                                                             vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                             [5U]), 6U) 
                                              - (IData)(1U)) 
                                             - (IData)(0x3fU)))))) 
                        | (((0U == (0x1fU & ((VL_SHIFTL_III(9,32,32, 
                                                            ((IData)(1U) 
                                                             + 
                                                             vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                             [5U]), 6U) 
                                              - (IData)(1U)) 
                                             - (IData)(0x3fU))))
                             ? 0ULL : ((QData)((IData)(
                                                       vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_wdata_q[
                                                       (((IData)(0x1fU) 
                                                         + 
                                                         (0x1ffU 
                                                          & ((VL_SHIFTL_III(9,32,32, 
                                                                            ((IData)(1U) 
                                                                             + 
                                                                             vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                             [5U]), 6U) 
                                                              - (IData)(1U)) 
                                                             - (IData)(0x3fU)))) 
                                                        >> 5U)])) 
                                       << ((IData)(0x20U) 
                                           - (0x1fU 
                                              & ((VL_SHIFTL_III(9,32,32, 
                                                                ((IData)(1U) 
                                                                 + 
                                                                 vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                 [5U]), 6U) 
                                                  - (IData)(1U)) 
                                                 - (IData)(0x3fU)))))) 
                           | ((QData)((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_wdata_q[
                                              (0xfU 
                                               & (((VL_SHIFTL_III(9,32,32, 
                                                                  ((IData)(1U) 
                                                                   + 
                                                                   vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                   [5U]), 6U) 
                                                    - (IData)(1U)) 
                                                   - (IData)(0x3fU)) 
                                                  >> 5U))])) 
                              >> (0x1fU & ((VL_SHIFTL_III(9,32,32, 
                                                          ((IData)(1U) 
                                                           + 
                                                           vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                           [5U]), 6U) 
                                            - (IData)(1U)) 
                                           - (IData)(0x3fU)))))) 
                       >> 0x20U));
        vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_h69f63477__0 
            = vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
            [5U];
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_src_lane_r 
            = ((0xfc7fffU & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_src_lane_r) 
               | ((IData)(vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_h69f63477__0) 
                  << 0xfU));
        vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_h603b0530__0 
            = ((0x1a7U >= (0x1ffU & ((((IData)(0x35U) 
                                       * ((IData)(1U) 
                                          + vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                          [5U])) - (IData)(1U)) 
                                     - (IData)(0x34U))))
                ? (0x1fffffffffffffULL & (((QData)((IData)(
                                                           vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_tag_q[
                                                           (((IData)(0x34U) 
                                                             + 
                                                             (0x1ffU 
                                                              & ((((IData)(0x35U) 
                                                                   * 
                                                                   ((IData)(1U) 
                                                                    + 
                                                                    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                    [5U])) 
                                                                  - (IData)(1U)) 
                                                                 - (IData)(0x34U)))) 
                                                            >> 5U)])) 
                                           << ((0U 
                                                == 
                                                (0x1fU 
                                                 & ((((IData)(0x35U) 
                                                      * 
                                                      ((IData)(1U) 
                                                       + 
                                                       vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                       [5U])) 
                                                     - (IData)(1U)) 
                                                    - (IData)(0x34U))))
                                                ? 0x20U
                                                : ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((((IData)(0x35U) 
                                                         * 
                                                         ((IData)(1U) 
                                                          + 
                                                          vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                          [5U])) 
                                                        - (IData)(1U)) 
                                                       - (IData)(0x34U)))))) 
                                          | (((0U == 
                                               (0x1fU 
                                                & ((((IData)(0x35U) 
                                                     * 
                                                     ((IData)(1U) 
                                                      + 
                                                      vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                      [5U])) 
                                                    - (IData)(1U)) 
                                                   - (IData)(0x34U))))
                                               ? 0ULL
                                               : ((QData)((IData)(
                                                                  vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_tag_q[
                                                                  (((IData)(0x1fU) 
                                                                    + 
                                                                    (0x1ffU 
                                                                     & ((((IData)(0x35U) 
                                                                          * 
                                                                          ((IData)(1U) 
                                                                           + 
                                                                           vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                           [5U])) 
                                                                         - (IData)(1U)) 
                                                                        - (IData)(0x34U)))) 
                                                                   >> 5U)])) 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((((IData)(0x35U) 
                                                         * 
                                                         ((IData)(1U) 
                                                          + 
                                                          vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                          [5U])) 
                                                        - (IData)(1U)) 
                                                       - (IData)(0x34U)))))) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_tag_q[
                                                                (0xfU 
                                                                 & (((((IData)(0x35U) 
                                                                       * 
                                                                       ((IData)(1U) 
                                                                        + 
                                                                        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                        [5U])) 
                                                                      - (IData)(1U)) 
                                                                     - (IData)(0x34U)) 
                                                                    >> 5U))])) 
                                                >> 
                                                (0x1fU 
                                                 & ((((IData)(0x35U) 
                                                      * 
                                                      ((IData)(1U) 
                                                       + 
                                                       vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                       [5U])) 
                                                     - (IData)(1U)) 
                                                    - (IData)(0x34U)))))))
                : 0ULL);
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_tag_r[8U] 
            = ((0x1ffU & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_tag_r[8U]) 
               | ((IData)(vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_h603b0530__0) 
                  << 9U));
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_tag_r[9U] 
            = ((0xc0000000U & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_tag_r[9U]) 
               | (((IData)(vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_h603b0530__0) 
                   >> 0x17U) | ((IData)((vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_h603b0530__0 
                                         >> 0x20U)) 
                                << 9U)));
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_be_r 
            = ((0xffff00ffffffffffULL & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_be_r) 
               | ((QData)((IData)((0xffU & (IData)(
                                                   (vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_be_q 
                                                    >> 
                                                    (0x3fU 
                                                     & ((VL_SHIFTL_III(6,32,32, 
                                                                       ((IData)(1U) 
                                                                        + 
                                                                        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                        [5U]), 3U) 
                                                         - (IData)(1U)) 
                                                        - (IData)(7U)))))))) 
                  << 0x28U));
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_we_r 
            = ((0xdfU & (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_we_r)) 
               | (0x20U & (((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_we_q) 
                            >> vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                            [5U]) << 5U)));
        vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_h2d86f8f6__0 
            = ((0x17U >= (0x1fU & ((((IData)(3U) * 
                                     ((IData)(1U) + 
                                      vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                      [5U])) - (IData)(1U)) 
                                   - (IData)(2U))))
                ? (7U & (vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_way_q 
                         >> (0x1fU & ((((IData)(3U) 
                                        * ((IData)(1U) 
                                           + vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                           [5U])) - (IData)(1U)) 
                                      - (IData)(2U)))))
                : 0U);
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_way_r 
            = ((0xfc7fffU & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_way_r) 
               | ((IData)(vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_h2d86f8f6__0) 
                  << 0xfU));
    }
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_word_r = 0U;
    if (((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_active) 
         & ((1U == (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_q)) 
            | (2U == (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_q))))) {
        vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_had3e542b__0 
            = vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__lane_word
            [vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
            [0U]];
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_word_r 
            = ((0xfffff8U & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_word_r) 
               | (IData)(vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_had3e542b__0));
    }
    if ((((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_active) 
          >> 1U) & ((1U == (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_q)) 
                    | (2U == (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_q))))) {
        vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_had3e542b__0 
            = vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__lane_word
            [vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
            [1U]];
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_word_r 
            = ((0xffffc7U & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_word_r) 
               | ((IData)(vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_had3e542b__0) 
                  << 3U));
    }
    if ((((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_active) 
          >> 2U) & ((1U == (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_q)) 
                    | (2U == (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_q))))) {
        vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_had3e542b__0 
            = vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__lane_word
            [vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
            [2U]];
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_word_r 
            = ((0xfffe3fU & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_word_r) 
               | ((IData)(vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_had3e542b__0) 
                  << 6U));
    }
    if ((((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_active) 
          >> 3U) & ((1U == (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_q)) 
                    | (2U == (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_q))))) {
        vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_had3e542b__0 
            = vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__lane_word
            [vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
            [3U]];
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_word_r 
            = ((0xfff1ffU & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_word_r) 
               | ((IData)(vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_had3e542b__0) 
                  << 9U));
    }
    if ((((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_active) 
          >> 4U) & ((1U == (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_q)) 
                    | (2U == (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_q))))) {
        vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_had3e542b__0 
            = vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__lane_word
            [vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
            [4U]];
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_word_r 
            = ((0xff8fffU & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_word_r) 
               | ((IData)(vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_had3e542b__0) 
                  << 0xcU));
    }
    if ((((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_active) 
          >> 5U) & ((1U == (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_q)) 
                    | (2U == (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_q))))) {
        vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_had3e542b__0 
            = vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__lane_word
            [vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
            [5U]];
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_word_r 
            = ((0xfc7fffU & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_word_r) 
               | ((IData)(vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_had3e542b__0) 
                  << 0xfU));
    }
    if ((((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_active) 
          >> 6U) & ((1U == (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_q)) 
                    | (2U == (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_q))))) {
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_state_r 
            = ((0xcfffU & (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_state_r)) 
               | (0x3000U & (((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_state_q) 
                              >> (0xfU & ((VL_SHIFTL_III(4,32,32, 
                                                         ((IData)(1U) 
                                                          + 
                                                          vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                          [6U]), 1U) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)))) 
                             << 0xcU)));
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_wdata_r[0xcU] 
            = (IData)((((QData)((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_wdata_q[
                                        (((IData)(0x3fU) 
                                          + (0x1ffU 
                                             & ((VL_SHIFTL_III(9,32,32, 
                                                               ((IData)(1U) 
                                                                + 
                                                                vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                [6U]), 6U) 
                                                 - (IData)(1U)) 
                                                - (IData)(0x3fU)))) 
                                         >> 5U)])) 
                        << ((0U == (0x1fU & ((VL_SHIFTL_III(9,32,32, 
                                                            ((IData)(1U) 
                                                             + 
                                                             vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                             [6U]), 6U) 
                                              - (IData)(1U)) 
                                             - (IData)(0x3fU))))
                             ? 0x20U : ((IData)(0x40U) 
                                        - (0x1fU & 
                                           ((VL_SHIFTL_III(9,32,32, 
                                                           ((IData)(1U) 
                                                            + 
                                                            vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                            [6U]), 6U) 
                                             - (IData)(1U)) 
                                            - (IData)(0x3fU)))))) 
                       | (((0U == (0x1fU & ((VL_SHIFTL_III(9,32,32, 
                                                           ((IData)(1U) 
                                                            + 
                                                            vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                            [6U]), 6U) 
                                             - (IData)(1U)) 
                                            - (IData)(0x3fU))))
                            ? 0ULL : ((QData)((IData)(
                                                      vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_wdata_q[
                                                      (((IData)(0x1fU) 
                                                        + 
                                                        (0x1ffU 
                                                         & ((VL_SHIFTL_III(9,32,32, 
                                                                           ((IData)(1U) 
                                                                            + 
                                                                            vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                            [6U]), 6U) 
                                                             - (IData)(1U)) 
                                                            - (IData)(0x3fU)))) 
                                                       >> 5U)])) 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((VL_SHIFTL_III(9,32,32, 
                                                               ((IData)(1U) 
                                                                + 
                                                                vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                [6U]), 6U) 
                                                 - (IData)(1U)) 
                                                - (IData)(0x3fU)))))) 
                          | ((QData)((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_wdata_q[
                                             (0xfU 
                                              & (((VL_SHIFTL_III(9,32,32, 
                                                                 ((IData)(1U) 
                                                                  + 
                                                                  vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                  [6U]), 6U) 
                                                   - (IData)(1U)) 
                                                  - (IData)(0x3fU)) 
                                                 >> 5U))])) 
                             >> (0x1fU & ((VL_SHIFTL_III(9,32,32, 
                                                         ((IData)(1U) 
                                                          + 
                                                          vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                          [6U]), 6U) 
                                           - (IData)(1U)) 
                                          - (IData)(0x3fU)))))));
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_wdata_r[0xdU] 
            = (IData)(((((QData)((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_wdata_q[
                                         (((IData)(0x3fU) 
                                           + (0x1ffU 
                                              & ((VL_SHIFTL_III(9,32,32, 
                                                                ((IData)(1U) 
                                                                 + 
                                                                 vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                 [6U]), 6U) 
                                                  - (IData)(1U)) 
                                                 - (IData)(0x3fU)))) 
                                          >> 5U)])) 
                         << ((0U == (0x1fU & ((VL_SHIFTL_III(9,32,32, 
                                                             ((IData)(1U) 
                                                              + 
                                                              vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                              [6U]), 6U) 
                                               - (IData)(1U)) 
                                              - (IData)(0x3fU))))
                              ? 0x20U : ((IData)(0x40U) 
                                         - (0x1fU & 
                                            ((VL_SHIFTL_III(9,32,32, 
                                                            ((IData)(1U) 
                                                             + 
                                                             vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                             [6U]), 6U) 
                                              - (IData)(1U)) 
                                             - (IData)(0x3fU)))))) 
                        | (((0U == (0x1fU & ((VL_SHIFTL_III(9,32,32, 
                                                            ((IData)(1U) 
                                                             + 
                                                             vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                             [6U]), 6U) 
                                              - (IData)(1U)) 
                                             - (IData)(0x3fU))))
                             ? 0ULL : ((QData)((IData)(
                                                       vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_wdata_q[
                                                       (((IData)(0x1fU) 
                                                         + 
                                                         (0x1ffU 
                                                          & ((VL_SHIFTL_III(9,32,32, 
                                                                            ((IData)(1U) 
                                                                             + 
                                                                             vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                             [6U]), 6U) 
                                                              - (IData)(1U)) 
                                                             - (IData)(0x3fU)))) 
                                                        >> 5U)])) 
                                       << ((IData)(0x20U) 
                                           - (0x1fU 
                                              & ((VL_SHIFTL_III(9,32,32, 
                                                                ((IData)(1U) 
                                                                 + 
                                                                 vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                 [6U]), 6U) 
                                                  - (IData)(1U)) 
                                                 - (IData)(0x3fU)))))) 
                           | ((QData)((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_wdata_q[
                                              (0xfU 
                                               & (((VL_SHIFTL_III(9,32,32, 
                                                                  ((IData)(1U) 
                                                                   + 
                                                                   vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                   [6U]), 6U) 
                                                    - (IData)(1U)) 
                                                   - (IData)(0x3fU)) 
                                                  >> 5U))])) 
                              >> (0x1fU & ((VL_SHIFTL_III(9,32,32, 
                                                          ((IData)(1U) 
                                                           + 
                                                           vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                           [6U]), 6U) 
                                            - (IData)(1U)) 
                                           - (IData)(0x3fU)))))) 
                       >> 0x20U));
        vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_h69f63477__0 
            = vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
            [6U];
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_src_lane_r 
            = ((0xe3ffffU & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_src_lane_r) 
               | ((IData)(vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_h69f63477__0) 
                  << 0x12U));
        vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_h603b0530__0 
            = ((0x1a7U >= (0x1ffU & ((((IData)(0x35U) 
                                       * ((IData)(1U) 
                                          + vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                          [6U])) - (IData)(1U)) 
                                     - (IData)(0x34U))))
                ? (0x1fffffffffffffULL & (((QData)((IData)(
                                                           vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_tag_q[
                                                           (((IData)(0x34U) 
                                                             + 
                                                             (0x1ffU 
                                                              & ((((IData)(0x35U) 
                                                                   * 
                                                                   ((IData)(1U) 
                                                                    + 
                                                                    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                    [6U])) 
                                                                  - (IData)(1U)) 
                                                                 - (IData)(0x34U)))) 
                                                            >> 5U)])) 
                                           << ((0U 
                                                == 
                                                (0x1fU 
                                                 & ((((IData)(0x35U) 
                                                      * 
                                                      ((IData)(1U) 
                                                       + 
                                                       vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                       [6U])) 
                                                     - (IData)(1U)) 
                                                    - (IData)(0x34U))))
                                                ? 0x20U
                                                : ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((((IData)(0x35U) 
                                                         * 
                                                         ((IData)(1U) 
                                                          + 
                                                          vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                          [6U])) 
                                                        - (IData)(1U)) 
                                                       - (IData)(0x34U)))))) 
                                          | (((0U == 
                                               (0x1fU 
                                                & ((((IData)(0x35U) 
                                                     * 
                                                     ((IData)(1U) 
                                                      + 
                                                      vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                      [6U])) 
                                                    - (IData)(1U)) 
                                                   - (IData)(0x34U))))
                                               ? 0ULL
                                               : ((QData)((IData)(
                                                                  vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_tag_q[
                                                                  (((IData)(0x1fU) 
                                                                    + 
                                                                    (0x1ffU 
                                                                     & ((((IData)(0x35U) 
                                                                          * 
                                                                          ((IData)(1U) 
                                                                           + 
                                                                           vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                           [6U])) 
                                                                         - (IData)(1U)) 
                                                                        - (IData)(0x34U)))) 
                                                                   >> 5U)])) 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((((IData)(0x35U) 
                                                         * 
                                                         ((IData)(1U) 
                                                          + 
                                                          vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                          [6U])) 
                                                        - (IData)(1U)) 
                                                       - (IData)(0x34U)))))) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_tag_q[
                                                                (0xfU 
                                                                 & (((((IData)(0x35U) 
                                                                       * 
                                                                       ((IData)(1U) 
                                                                        + 
                                                                        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                        [6U])) 
                                                                      - (IData)(1U)) 
                                                                     - (IData)(0x34U)) 
                                                                    >> 5U))])) 
                                                >> 
                                                (0x1fU 
                                                 & ((((IData)(0x35U) 
                                                      * 
                                                      ((IData)(1U) 
                                                       + 
                                                       vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                       [6U])) 
                                                     - (IData)(1U)) 
                                                    - (IData)(0x34U)))))))
                : 0ULL);
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_tag_r[9U] 
            = ((0x3fffffffU & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_tag_r[9U]) 
               | ((IData)(vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_h603b0530__0) 
                  << 0x1eU));
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_tag_r[0xaU] 
            = (((IData)(vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_h603b0530__0) 
                >> 2U) | ((IData)((vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_h603b0530__0 
                                   >> 0x20U)) << 0x1eU));
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_tag_r[0xbU] 
            = ((0xfff80000U & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_tag_r[0xbU]) 
               | ((IData)((vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_h603b0530__0 
                           >> 0x20U)) >> 2U));
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_be_r 
            = ((0xff00ffffffffffffULL & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_be_r) 
               | ((QData)((IData)((0xffU & (IData)(
                                                   (vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_be_q 
                                                    >> 
                                                    (0x3fU 
                                                     & ((VL_SHIFTL_III(6,32,32, 
                                                                       ((IData)(1U) 
                                                                        + 
                                                                        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                        [6U]), 3U) 
                                                         - (IData)(1U)) 
                                                        - (IData)(7U)))))))) 
                  << 0x30U));
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_we_r 
            = ((0xbfU & (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_we_r)) 
               | (0x40U & (((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_we_q) 
                            >> vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                            [6U]) << 6U)));
        vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_h2d86f8f6__0 
            = ((0x17U >= (0x1fU & ((((IData)(3U) * 
                                     ((IData)(1U) + 
                                      vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                      [6U])) - (IData)(1U)) 
                                   - (IData)(2U))))
                ? (7U & (vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_way_q 
                         >> (0x1fU & ((((IData)(3U) 
                                        * ((IData)(1U) 
                                           + vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                           [6U])) - (IData)(1U)) 
                                      - (IData)(2U)))))
                : 0U);
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_way_r 
            = ((0xe3ffffU & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_way_r) 
               | ((IData)(vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_h2d86f8f6__0) 
                  << 0x12U));
        vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_had3e542b__0 
            = vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__lane_word
            [vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
            [6U]];
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_word_r 
            = ((0xe3ffffU & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_word_r) 
               | ((IData)(vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_had3e542b__0) 
                  << 0x12U));
    }
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_index_r = 0ULL;
    if (((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_active) 
         & ((1U == (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_q)) 
            | (2U == (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_q))))) {
        vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_hc1d0273f__0 
            = vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__lane_index
            [vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
            [0U]];
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_index_r 
            = ((0xffffffffe0ULL & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_index_r) 
               | (IData)((IData)(vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_hc1d0273f__0)));
    }
    if ((((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_active) 
          >> 1U) & ((1U == (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_q)) 
                    | (2U == (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_q))))) {
        vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_hc1d0273f__0 
            = vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__lane_index
            [vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
            [1U]];
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_index_r 
            = ((0xfffffffc1fULL & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_index_r) 
               | ((QData)((IData)(vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_hc1d0273f__0)) 
                  << 5U));
    }
    if ((((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_active) 
          >> 2U) & ((1U == (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_q)) 
                    | (2U == (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_q))))) {
        vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_hc1d0273f__0 
            = vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__lane_index
            [vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
            [2U]];
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_index_r 
            = ((0xffffff83ffULL & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_index_r) 
               | ((QData)((IData)(vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_hc1d0273f__0)) 
                  << 0xaU));
    }
    if ((((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_active) 
          >> 3U) & ((1U == (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_q)) 
                    | (2U == (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_q))))) {
        vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_hc1d0273f__0 
            = vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__lane_index
            [vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
            [3U]];
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_index_r 
            = ((0xfffff07fffULL & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_index_r) 
               | ((QData)((IData)(vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_hc1d0273f__0)) 
                  << 0xfU));
    }
    if ((((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_active) 
          >> 4U) & ((1U == (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_q)) 
                    | (2U == (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_q))))) {
        vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_hc1d0273f__0 
            = vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__lane_index
            [vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
            [4U]];
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_index_r 
            = ((0xfffe0fffffULL & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_index_r) 
               | ((QData)((IData)(vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_hc1d0273f__0)) 
                  << 0x14U));
    }
    if ((((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_active) 
          >> 5U) & ((1U == (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_q)) 
                    | (2U == (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_q))))) {
        vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_hc1d0273f__0 
            = vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__lane_index
            [vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
            [5U]];
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_index_r 
            = ((0xffc1ffffffULL & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_index_r) 
               | ((QData)((IData)(vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_hc1d0273f__0)) 
                  << 0x19U));
    }
    if ((((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_active) 
          >> 6U) & ((1U == (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_q)) 
                    | (2U == (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_q))))) {
        vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_hc1d0273f__0 
            = vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__lane_index
            [vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
            [6U]];
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_index_r 
            = ((0xf83fffffffULL & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_index_r) 
               | ((QData)((IData)(vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_hc1d0273f__0)) 
                  << 0x1eU));
    }
    if ((((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_active) 
          >> 7U) & ((1U == (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_q)) 
                    | (2U == (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_q))))) {
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_state_r 
            = ((0x3fffU & (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_state_r)) 
               | (0xc000U & (((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_state_q) 
                              >> (0xfU & ((VL_SHIFTL_III(4,32,32, 
                                                         ((IData)(1U) 
                                                          + 
                                                          vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                          [7U]), 1U) 
                                           - (IData)(1U)) 
                                          - (IData)(1U)))) 
                             << 0xeU)));
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_wdata_r[0xeU] 
            = (IData)((((QData)((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_wdata_q[
                                        (((IData)(0x3fU) 
                                          + (0x1ffU 
                                             & ((VL_SHIFTL_III(9,32,32, 
                                                               ((IData)(1U) 
                                                                + 
                                                                vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                [7U]), 6U) 
                                                 - (IData)(1U)) 
                                                - (IData)(0x3fU)))) 
                                         >> 5U)])) 
                        << ((0U == (0x1fU & ((VL_SHIFTL_III(9,32,32, 
                                                            ((IData)(1U) 
                                                             + 
                                                             vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                             [7U]), 6U) 
                                              - (IData)(1U)) 
                                             - (IData)(0x3fU))))
                             ? 0x20U : ((IData)(0x40U) 
                                        - (0x1fU & 
                                           ((VL_SHIFTL_III(9,32,32, 
                                                           ((IData)(1U) 
                                                            + 
                                                            vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                            [7U]), 6U) 
                                             - (IData)(1U)) 
                                            - (IData)(0x3fU)))))) 
                       | (((0U == (0x1fU & ((VL_SHIFTL_III(9,32,32, 
                                                           ((IData)(1U) 
                                                            + 
                                                            vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                            [7U]), 6U) 
                                             - (IData)(1U)) 
                                            - (IData)(0x3fU))))
                            ? 0ULL : ((QData)((IData)(
                                                      vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_wdata_q[
                                                      (((IData)(0x1fU) 
                                                        + 
                                                        (0x1ffU 
                                                         & ((VL_SHIFTL_III(9,32,32, 
                                                                           ((IData)(1U) 
                                                                            + 
                                                                            vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                            [7U]), 6U) 
                                                             - (IData)(1U)) 
                                                            - (IData)(0x3fU)))) 
                                                       >> 5U)])) 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((VL_SHIFTL_III(9,32,32, 
                                                               ((IData)(1U) 
                                                                + 
                                                                vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                [7U]), 6U) 
                                                 - (IData)(1U)) 
                                                - (IData)(0x3fU)))))) 
                          | ((QData)((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_wdata_q[
                                             (0xfU 
                                              & (((VL_SHIFTL_III(9,32,32, 
                                                                 ((IData)(1U) 
                                                                  + 
                                                                  vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                  [7U]), 6U) 
                                                   - (IData)(1U)) 
                                                  - (IData)(0x3fU)) 
                                                 >> 5U))])) 
                             >> (0x1fU & ((VL_SHIFTL_III(9,32,32, 
                                                         ((IData)(1U) 
                                                          + 
                                                          vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                          [7U]), 6U) 
                                           - (IData)(1U)) 
                                          - (IData)(0x3fU)))))));
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_wdata_r[0xfU] 
            = (IData)(((((QData)((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_wdata_q[
                                         (((IData)(0x3fU) 
                                           + (0x1ffU 
                                              & ((VL_SHIFTL_III(9,32,32, 
                                                                ((IData)(1U) 
                                                                 + 
                                                                 vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                 [7U]), 6U) 
                                                  - (IData)(1U)) 
                                                 - (IData)(0x3fU)))) 
                                          >> 5U)])) 
                         << ((0U == (0x1fU & ((VL_SHIFTL_III(9,32,32, 
                                                             ((IData)(1U) 
                                                              + 
                                                              vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                              [7U]), 6U) 
                                               - (IData)(1U)) 
                                              - (IData)(0x3fU))))
                              ? 0x20U : ((IData)(0x40U) 
                                         - (0x1fU & 
                                            ((VL_SHIFTL_III(9,32,32, 
                                                            ((IData)(1U) 
                                                             + 
                                                             vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                             [7U]), 6U) 
                                              - (IData)(1U)) 
                                             - (IData)(0x3fU)))))) 
                        | (((0U == (0x1fU & ((VL_SHIFTL_III(9,32,32, 
                                                            ((IData)(1U) 
                                                             + 
                                                             vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                             [7U]), 6U) 
                                              - (IData)(1U)) 
                                             - (IData)(0x3fU))))
                             ? 0ULL : ((QData)((IData)(
                                                       vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_wdata_q[
                                                       (((IData)(0x1fU) 
                                                         + 
                                                         (0x1ffU 
                                                          & ((VL_SHIFTL_III(9,32,32, 
                                                                            ((IData)(1U) 
                                                                             + 
                                                                             vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                             [7U]), 6U) 
                                                              - (IData)(1U)) 
                                                             - (IData)(0x3fU)))) 
                                                        >> 5U)])) 
                                       << ((IData)(0x20U) 
                                           - (0x1fU 
                                              & ((VL_SHIFTL_III(9,32,32, 
                                                                ((IData)(1U) 
                                                                 + 
                                                                 vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                 [7U]), 6U) 
                                                  - (IData)(1U)) 
                                                 - (IData)(0x3fU)))))) 
                           | ((QData)((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_wdata_q[
                                              (0xfU 
                                               & (((VL_SHIFTL_III(9,32,32, 
                                                                  ((IData)(1U) 
                                                                   + 
                                                                   vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                   [7U]), 6U) 
                                                    - (IData)(1U)) 
                                                   - (IData)(0x3fU)) 
                                                  >> 5U))])) 
                              >> (0x1fU & ((VL_SHIFTL_III(9,32,32, 
                                                          ((IData)(1U) 
                                                           + 
                                                           vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                           [7U]), 6U) 
                                            - (IData)(1U)) 
                                           - (IData)(0x3fU)))))) 
                       >> 0x20U));
        vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_h69f63477__0 
            = vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
            [7U];
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_src_lane_r 
            = ((0x1fffffU & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_src_lane_r) 
               | ((IData)(vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_h69f63477__0) 
                  << 0x15U));
        vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_h603b0530__0 
            = ((0x1a7U >= (0x1ffU & ((((IData)(0x35U) 
                                       * ((IData)(1U) 
                                          + vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                          [7U])) - (IData)(1U)) 
                                     - (IData)(0x34U))))
                ? (0x1fffffffffffffULL & (((QData)((IData)(
                                                           vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_tag_q[
                                                           (((IData)(0x34U) 
                                                             + 
                                                             (0x1ffU 
                                                              & ((((IData)(0x35U) 
                                                                   * 
                                                                   ((IData)(1U) 
                                                                    + 
                                                                    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                    [7U])) 
                                                                  - (IData)(1U)) 
                                                                 - (IData)(0x34U)))) 
                                                            >> 5U)])) 
                                           << ((0U 
                                                == 
                                                (0x1fU 
                                                 & ((((IData)(0x35U) 
                                                      * 
                                                      ((IData)(1U) 
                                                       + 
                                                       vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                       [7U])) 
                                                     - (IData)(1U)) 
                                                    - (IData)(0x34U))))
                                                ? 0x20U
                                                : ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((((IData)(0x35U) 
                                                         * 
                                                         ((IData)(1U) 
                                                          + 
                                                          vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                          [7U])) 
                                                        - (IData)(1U)) 
                                                       - (IData)(0x34U)))))) 
                                          | (((0U == 
                                               (0x1fU 
                                                & ((((IData)(0x35U) 
                                                     * 
                                                     ((IData)(1U) 
                                                      + 
                                                      vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                      [7U])) 
                                                    - (IData)(1U)) 
                                                   - (IData)(0x34U))))
                                               ? 0ULL
                                               : ((QData)((IData)(
                                                                  vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_tag_q[
                                                                  (((IData)(0x1fU) 
                                                                    + 
                                                                    (0x1ffU 
                                                                     & ((((IData)(0x35U) 
                                                                          * 
                                                                          ((IData)(1U) 
                                                                           + 
                                                                           vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                           [7U])) 
                                                                         - (IData)(1U)) 
                                                                        - (IData)(0x34U)))) 
                                                                   >> 5U)])) 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((((IData)(0x35U) 
                                                         * 
                                                         ((IData)(1U) 
                                                          + 
                                                          vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                          [7U])) 
                                                        - (IData)(1U)) 
                                                       - (IData)(0x34U)))))) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_tag_q[
                                                                (0xfU 
                                                                 & (((((IData)(0x35U) 
                                                                       * 
                                                                       ((IData)(1U) 
                                                                        + 
                                                                        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                        [7U])) 
                                                                      - (IData)(1U)) 
                                                                     - (IData)(0x34U)) 
                                                                    >> 5U))])) 
                                                >> 
                                                (0x1fU 
                                                 & ((((IData)(0x35U) 
                                                      * 
                                                      ((IData)(1U) 
                                                       + 
                                                       vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                       [7U])) 
                                                     - (IData)(1U)) 
                                                    - (IData)(0x34U)))))))
                : 0ULL);
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_tag_r[0xbU] 
            = ((0x7ffffU & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_tag_r[0xbU]) 
               | ((IData)(vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_h603b0530__0) 
                  << 0x13U));
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_tag_r[0xcU] 
            = (((IData)(vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_h603b0530__0) 
                >> 0xdU) | ((IData)((vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_h603b0530__0 
                                     >> 0x20U)) << 0x13U));
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_tag_r[0xdU] 
            = (0xffU & ((IData)((vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_h603b0530__0 
                                 >> 0x20U)) >> 0xdU));
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_be_r 
            = ((0xffffffffffffffULL & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_be_r) 
               | ((QData)((IData)((0xffU & (IData)(
                                                   (vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_be_q 
                                                    >> 
                                                    (0x3fU 
                                                     & ((VL_SHIFTL_III(6,32,32, 
                                                                       ((IData)(1U) 
                                                                        + 
                                                                        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                                                        [7U]), 3U) 
                                                         - (IData)(1U)) 
                                                        - (IData)(7U)))))))) 
                  << 0x38U));
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_we_r 
            = ((0x7fU & (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_we_r)) 
               | (0x80U & (((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_we_q) 
                            >> vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                            [7U]) << 7U)));
        vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_h2d86f8f6__0 
            = ((0x17U >= (0x1fU & ((((IData)(3U) * 
                                     ((IData)(1U) + 
                                      vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                      [7U])) - (IData)(1U)) 
                                   - (IData)(2U))))
                ? (7U & (vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_way_q 
                         >> (0x1fU & ((((IData)(3U) 
                                        * ((IData)(1U) 
                                           + vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
                                           [7U])) - (IData)(1U)) 
                                      - (IData)(2U)))))
                : 0U);
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_way_r 
            = ((0x1fffffU & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_way_r) 
               | ((IData)(vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_h2d86f8f6__0) 
                  << 0x15U));
        vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_had3e542b__0 
            = vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__lane_word
            [vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
            [7U]];
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_word_r 
            = ((0x1fffffU & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_word_r) 
               | ((IData)(vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_had3e542b__0) 
                  << 0x15U));
        vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_hc1d0273f__0 
            = vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__lane_index
            [vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner
            [7U]];
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_index_r 
            = ((0x7ffffffffULL & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_index_r) 
               | ((QData)((IData)(vlSelfRef.u_arrays__DOT__u_crossbar__DOT____Vlvbound_hc1d0273f__0)) 
                  << 0x23U));
    }
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_n 
        = vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_q;
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__pending_n 
        = vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__pending_q;
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__done_n 
        = vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__done_q;
    if ((0U != (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_q))) {
        if (((1U == (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_q)) 
             || (2U == (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_q)))) {
            vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_n 
                = ((0U == ((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__pending_q) 
                           & (~ (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__lane_grant))))
                    ? 0U : 2U);
            vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__pending_n 
                = ((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__pending_q) 
                   & (~ (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__lane_grant)));
            vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__done_n 
                = ((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__done_q) 
                   | (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__lane_grant));
        } else {
            vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_n = 0U;
        }
    }
}

VL_INLINE_OPT void Vrv64g_cache_system_tb_rv64g_l1_dcache___nba_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__8(Vrv64g_cache_system_tb_rv64g_l1_dcache* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv64g_cache_system_tb_rv64g_l1_dcache___nba_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__8\n"); );
    Vrv64g_cache_system_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((7U == (IData)(vlSelfRef.__PVT__arr_word_sel))) {
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[0U] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__tag_way_o[0U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[1U] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__tag_way_o[1U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[2U] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__tag_way_o[2U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[3U] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__tag_way_o[3U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[4U] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__tag_way_o[4U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[5U] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__tag_way_o[5U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[6U] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__tag_way_o[6U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[7U] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__tag_way_o[7U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[8U] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__tag_way_o[8U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[9U] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__tag_way_o[9U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[0xaU] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__tag_way_o[0xaU];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[0xbU] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__tag_way_o[0xbU];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[0xcU] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__tag_way_o[0xcU];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[0xdU] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__tag_way_o[0xdU];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_state_way_r 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__state_way_o;
    } else if ((6U == (IData)(vlSelfRef.__PVT__arr_word_sel))) {
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[0U] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__tag_way_o[0U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[1U] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__tag_way_o[1U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[2U] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__tag_way_o[2U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[3U] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__tag_way_o[3U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[4U] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__tag_way_o[4U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[5U] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__tag_way_o[5U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[6U] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__tag_way_o[6U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[7U] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__tag_way_o[7U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[8U] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__tag_way_o[8U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[9U] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__tag_way_o[9U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[0xaU] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__tag_way_o[0xaU];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[0xbU] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__tag_way_o[0xbU];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[0xcU] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__tag_way_o[0xcU];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[0xdU] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__tag_way_o[0xdU];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_state_way_r 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__state_way_o;
    } else if ((5U == (IData)(vlSelfRef.__PVT__arr_word_sel))) {
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[0U] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__tag_way_o[0U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[1U] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__tag_way_o[1U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[2U] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__tag_way_o[2U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[3U] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__tag_way_o[3U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[4U] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__tag_way_o[4U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[5U] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__tag_way_o[5U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[6U] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__tag_way_o[6U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[7U] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__tag_way_o[7U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[8U] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__tag_way_o[8U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[9U] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__tag_way_o[9U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[0xaU] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__tag_way_o[0xaU];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[0xbU] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__tag_way_o[0xbU];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[0xcU] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__tag_way_o[0xcU];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[0xdU] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__tag_way_o[0xdU];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_state_way_r 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__state_way_o;
    } else if ((4U == (IData)(vlSelfRef.__PVT__arr_word_sel))) {
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[0U] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__tag_way_o[0U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[1U] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__tag_way_o[1U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[2U] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__tag_way_o[2U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[3U] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__tag_way_o[3U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[4U] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__tag_way_o[4U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[5U] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__tag_way_o[5U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[6U] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__tag_way_o[6U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[7U] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__tag_way_o[7U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[8U] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__tag_way_o[8U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[9U] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__tag_way_o[9U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[0xaU] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__tag_way_o[0xaU];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[0xbU] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__tag_way_o[0xbU];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[0xcU] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__tag_way_o[0xcU];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[0xdU] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__tag_way_o[0xdU];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_state_way_r 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__state_way_o;
    } else if ((3U == (IData)(vlSelfRef.__PVT__arr_word_sel))) {
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[0U] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__tag_way_o[0U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[1U] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__tag_way_o[1U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[2U] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__tag_way_o[2U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[3U] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__tag_way_o[3U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[4U] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__tag_way_o[4U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[5U] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__tag_way_o[5U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[6U] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__tag_way_o[6U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[7U] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__tag_way_o[7U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[8U] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__tag_way_o[8U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[9U] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__tag_way_o[9U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[0xaU] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__tag_way_o[0xaU];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[0xbU] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__tag_way_o[0xbU];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[0xcU] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__tag_way_o[0xcU];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[0xdU] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__tag_way_o[0xdU];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_state_way_r 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__state_way_o;
    } else if ((2U == (IData)(vlSelfRef.__PVT__arr_word_sel))) {
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[0U] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__tag_way_o[0U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[1U] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__tag_way_o[1U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[2U] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__tag_way_o[2U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[3U] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__tag_way_o[3U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[4U] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__tag_way_o[4U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[5U] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__tag_way_o[5U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[6U] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__tag_way_o[6U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[7U] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__tag_way_o[7U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[8U] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__tag_way_o[8U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[9U] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__tag_way_o[9U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[0xaU] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__tag_way_o[0xaU];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[0xbU] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__tag_way_o[0xbU];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[0xcU] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__tag_way_o[0xcU];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[0xdU] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__tag_way_o[0xdU];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_state_way_r 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__state_way_o;
    } else if ((1U == (IData)(vlSelfRef.__PVT__arr_word_sel))) {
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[0U] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__tag_way_o[0U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[1U] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__tag_way_o[1U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[2U] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__tag_way_o[2U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[3U] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__tag_way_o[3U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[4U] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__tag_way_o[4U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[5U] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__tag_way_o[5U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[6U] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__tag_way_o[6U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[7U] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__tag_way_o[7U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[8U] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__tag_way_o[8U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[9U] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__tag_way_o[9U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[0xaU] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__tag_way_o[0xaU];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[0xbU] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__tag_way_o[0xbU];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[0xcU] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__tag_way_o[0xcU];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[0xdU] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__tag_way_o[0xdU];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_state_way_r 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__state_way_o;
    } else if ((0U == (IData)(vlSelfRef.__PVT__arr_word_sel))) {
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[0U] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__tag_way_o[0U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[1U] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__tag_way_o[1U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[2U] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__tag_way_o[2U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[3U] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__tag_way_o[3U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[4U] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__tag_way_o[4U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[5U] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__tag_way_o[5U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[6U] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__tag_way_o[6U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[7U] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__tag_way_o[7U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[8U] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__tag_way_o[8U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[9U] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__tag_way_o[9U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[0xaU] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__tag_way_o[0xaU];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[0xbU] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__tag_way_o[0xbU];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[0xcU] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__tag_way_o[0xcU];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[0xdU] 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__tag_way_o[0xdU];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_state_way_r 
            = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__state_way_o;
    } else {
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[0U] 
            = Vrv64g_cache_system_tb__ConstPool__CONST_hba6586cf_0[0U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[1U] 
            = Vrv64g_cache_system_tb__ConstPool__CONST_hba6586cf_0[1U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[2U] 
            = Vrv64g_cache_system_tb__ConstPool__CONST_hba6586cf_0[2U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[3U] 
            = Vrv64g_cache_system_tb__ConstPool__CONST_hba6586cf_0[3U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[4U] 
            = Vrv64g_cache_system_tb__ConstPool__CONST_hba6586cf_0[4U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[5U] 
            = Vrv64g_cache_system_tb__ConstPool__CONST_hba6586cf_0[5U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[6U] 
            = Vrv64g_cache_system_tb__ConstPool__CONST_hba6586cf_0[6U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[7U] 
            = Vrv64g_cache_system_tb__ConstPool__CONST_hba6586cf_0[7U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[8U] 
            = Vrv64g_cache_system_tb__ConstPool__CONST_hba6586cf_0[8U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[9U] 
            = Vrv64g_cache_system_tb__ConstPool__CONST_hba6586cf_0[9U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[0xaU] 
            = Vrv64g_cache_system_tb__ConstPool__CONST_hba6586cf_0[0xaU];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[0xbU] 
            = Vrv64g_cache_system_tb__ConstPool__CONST_hba6586cf_0[0xbU];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[0xcU] 
            = Vrv64g_cache_system_tb__ConstPool__CONST_hba6586cf_0[0xcU];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[0xdU] 
            = Vrv64g_cache_system_tb__ConstPool__CONST_hba6586cf_0[0xdU];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_state_way_r = 0U;
    }
    vlSelfRef.__PVT__arr_dirty_way = (((((3U == (3U 
                                                 & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__scalar_state_way_r) 
                                                    >> 0xeU))) 
                                         << 7U) | (
                                                   (3U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__scalar_state_way_r) 
                                                        >> 0xcU))) 
                                                   << 6U)) 
                                       | (((3U == (3U 
                                                   & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__scalar_state_way_r) 
                                                      >> 0xaU))) 
                                           << 5U) | 
                                          ((3U == (3U 
                                                   & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__scalar_state_way_r) 
                                                      >> 8U))) 
                                           << 4U))) 
                                      | ((((3U == (3U 
                                                   & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__scalar_state_way_r) 
                                                      >> 6U))) 
                                           << 3U) | 
                                          ((3U == (3U 
                                                   & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__scalar_state_way_r) 
                                                      >> 4U))) 
                                           << 2U)) 
                                         | (((3U == 
                                              (3U & 
                                               ((IData)(vlSelfRef.__PVT__u_arrays__DOT__scalar_state_way_r) 
                                                >> 2U))) 
                                             << 1U) 
                                            | (3U == 
                                               (3U 
                                                & (IData)(vlSelfRef.__PVT__u_arrays__DOT__scalar_state_way_r))))));
    vlSelfRef.__PVT__arr_valid_way = (((((0U != (3U 
                                                 & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__scalar_state_way_r) 
                                                    >> 0xeU))) 
                                         << 7U) | (
                                                   (0U 
                                                    != 
                                                    (3U 
                                                     & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__scalar_state_way_r) 
                                                        >> 0xcU))) 
                                                   << 6U)) 
                                       | (((0U != (3U 
                                                   & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__scalar_state_way_r) 
                                                      >> 0xaU))) 
                                           << 5U) | 
                                          ((0U != (3U 
                                                   & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__scalar_state_way_r) 
                                                      >> 8U))) 
                                           << 4U))) 
                                      | ((((0U != (3U 
                                                   & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__scalar_state_way_r) 
                                                      >> 6U))) 
                                           << 3U) | 
                                          ((0U != (3U 
                                                   & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__scalar_state_way_r) 
                                                      >> 4U))) 
                                           << 2U)) 
                                         | (((0U != 
                                              (3U & 
                                               ((IData)(vlSelfRef.__PVT__u_arrays__DOT__scalar_state_way_r) 
                                                >> 2U))) 
                                             << 1U) 
                                            | (0U != 
                                               (3U 
                                                & (IData)(vlSelfRef.__PVT__u_arrays__DOT__scalar_state_way_r))))));
}
