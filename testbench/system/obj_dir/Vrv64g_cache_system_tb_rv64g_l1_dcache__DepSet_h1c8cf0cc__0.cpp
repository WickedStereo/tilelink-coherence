// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrv64g_cache_system_tb.h for the primary calling header

#include "Vrv64g_cache_system_tb__pch.h"
#include "Vrv64g_cache_system_tb__Syms.h"
#include "Vrv64g_cache_system_tb_rv64g_l1_dcache.h"

VL_INLINE_OPT void Vrv64g_cache_system_tb_rv64g_l1_dcache___act_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__0(Vrv64g_cache_system_tb_rv64g_l1_dcache* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv64g_cache_system_tb_rv64g_l1_dcache___act_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__0\n"); );
    Vrv64g_cache_system_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__arr_index_w = (0x1fU & (((5U == (IData)(vlSelfRef.__PVT__state)) 
                                              | ((6U 
                                                  == (IData)(vlSelfRef.__PVT__state)) 
                                                 | ((7U 
                                                     == (IData)(vlSelfRef.__PVT__state)) 
                                                    | ((2U 
                                                        == (IData)(vlSelfRef.__PVT__state)) 
                                                       | ((4U 
                                                           == (IData)(vlSelfRef.__PVT__state)) 
                                                          | (0xbU 
                                                             == (IData)(vlSelfRef.__PVT__state)))))))
                                              ? (IData)(vlSelfRef.__PVT__pend_index_q)
                                              : ((9U 
                                                  == (IData)(vlSelfRef.__PVT__state))
                                                  ? (IData)(vlSelfRef.__PVT__probe_pend_index_q)
                                                  : 
                                                 (((0U 
                                                    == (IData)(vlSelfRef.__PVT__state)) 
                                                   & (IData)(vlSelfRef.tl_b_valid_i))
                                                   ? (IData)(
                                                             (vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__l2_b_address 
                                                              >> 6U))
                                                   : 
                                                  ((vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[0U] 
                                                    << 0x1aU) 
                                                   | (vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[0U] 
                                                      >> 6U))))));
}

extern const VlWide<14>/*447:0*/ Vrv64g_cache_system_tb__ConstPool__CONST_hba6586cf_0;

VL_INLINE_OPT void Vrv64g_cache_system_tb_rv64g_l1_dcache___act_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__1(Vrv64g_cache_system_tb_rv64g_l1_dcache* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv64g_cache_system_tb_rv64g_l1_dcache___act_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__1\n"); );
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
    vlSelfRef.__PVT__tl_a_mask_n = 0U;
    vlSelfRef.__PVT__tl_a_size_n = 0U;
    vlSelfRef.__PVT__tl_a_source_n = 0U;
    vlSelfRef.__PVT__tl_a_opcode_n = 0U;
    vlSelfRef.__PVT__tl_a_param_n = 0U;
    vlSelfRef.__PVT__tl_a_valid_n = 0U;
    vlSelfRef.__PVT__tl_a_address_n = 0ULL;
    vlSelfRef.__PVT__return_state_n = vlSelfRef.__PVT__return_state_q;
    if ((8U & (IData)(vlSelfRef.__PVT__state))) {
        if ((4U & (IData)(vlSelfRef.__PVT__state))) {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__state)))) {
                    if ((1U & (~ (((IData)(vlSelfRef.__PVT__arr_valid_way) 
                                   & (IData)(vlSelfRef.__PVT__arr_dirty_way)) 
                                  >> (IData)(vlSelfRef.__PVT__pend_victim_q))))) {
                        if ((1U & (~ ((IData)(vlSelfRef.__PVT__arr_valid_way) 
                                      >> (IData)(vlSelfRef.__PVT__pend_victim_q))))) {
                            vlSelfRef.__PVT__tl_a_mask_n = 0xffU;
                            vlSelfRef.__PVT__tl_a_size_n = 6U;
                            vlSelfRef.__PVT__tl_a_source_n = 1U;
                            vlSelfRef.__PVT__tl_a_opcode_n = 6U;
                            vlSelfRef.__PVT__tl_a_param_n = 0U;
                            vlSelfRef.__PVT__tl_a_valid_n = 1U;
                            if (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__l1_a_ready) 
                                 & (IData)(vlSelfRef.tl_a_valid_o))) {
                                vlSelfRef.__PVT__tl_a_valid_n = 0U;
                            }
                            vlSelfRef.__PVT__tl_a_address_n 
                                = ((vlSelfRef.__PVT__pend_tag_q 
                                    << 0xbU) | (QData)((IData)(
                                                               ((IData)(vlSelfRef.__PVT__pend_index_q) 
                                                                << 6U))));
                        }
                    }
                    if ((1U & (((IData)(vlSelfRef.__PVT__arr_valid_way) 
                                & (IData)(vlSelfRef.__PVT__arr_dirty_way)) 
                               >> (IData)(vlSelfRef.__PVT__pend_victim_q)))) {
                        vlSelfRef.__PVT__return_state_n = 0xcU;
                    } else if ((1U & ((IData)(vlSelfRef.__PVT__arr_valid_way) 
                                      >> (IData)(vlSelfRef.__PVT__pend_victim_q)))) {
                        vlSelfRef.__PVT__return_state_n = 0xcU;
                    } else if (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__l1_a_ready) 
                                & (IData)(vlSelfRef.tl_a_valid_o))) {
                        vlSelfRef.__PVT__return_state_n = 0xdU;
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlSelfRef.__PVT__state) 
                             >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__state)))) {
                if ((1U & (~ ((IData)(vlSelfRef.tl_b_valid_i) 
                              & (IData)(vlSelfRef.tl_b_ready_o))))) {
                    vlSelfRef.__PVT__tl_a_mask_n = 0xffU;
                    vlSelfRef.__PVT__tl_a_size_n = 6U;
                    vlSelfRef.__PVT__tl_a_source_n = 0U;
                    vlSelfRef.__PVT__tl_a_opcode_n = 7U;
                    vlSelfRef.__PVT__tl_a_param_n = 2U;
                    vlSelfRef.__PVT__tl_a_valid_n = 1U;
                    if (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__l1_a_ready) 
                         & (IData)(vlSelfRef.tl_a_valid_o))) {
                        vlSelfRef.__PVT__tl_a_valid_n = 0U;
                    }
                    vlSelfRef.__PVT__tl_a_address_n 
                        = ((vlSelfRef.__PVT__pend_tag_q 
                            << 0xbU) | (QData)((IData)(
                                                       ((IData)(vlSelfRef.__PVT__pend_index_q) 
                                                        << 6U))));
                }
                if (((IData)(vlSelfRef.tl_b_valid_i) 
                     & (IData)(vlSelfRef.tl_b_ready_o))) {
                    vlSelfRef.__PVT__return_state_n = 8U;
                }
            }
        }
    } else if ((1U & (~ ((IData)(vlSelfRef.__PVT__state) 
                         >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.__PVT__state))) {
                vlSelfRef.__PVT__tl_a_mask_n = 0xffU;
                vlSelfRef.__PVT__tl_a_size_n = 6U;
                vlSelfRef.__PVT__tl_a_source_n = 0U;
                vlSelfRef.__PVT__tl_a_opcode_n = 6U;
                vlSelfRef.__PVT__tl_a_param_n = ((IData)(vlSelfRef.__PVT__pend_is_store_q)
                                                  ? 1U
                                                  : 0U);
                vlSelfRef.__PVT__tl_a_valid_n = 1U;
                if (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__l1_a_ready) 
                     & (IData)(vlSelfRef.tl_a_valid_o))) {
                    vlSelfRef.__PVT__tl_a_valid_n = 0U;
                }
                vlSelfRef.__PVT__tl_a_address_n = (
                                                   (vlSelfRef.__PVT__pend_tag_q 
                                                    << 0xbU) 
                                                   | (QData)((IData)(
                                                                     ((IData)(vlSelfRef.__PVT__pend_index_q) 
                                                                      << 6U))));
            }
        }
        if ((2U & (IData)(vlSelfRef.__PVT__state))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__state)))) {
                if (((IData)(vlSelfRef.tl_b_valid_i) 
                     & (IData)(vlSelfRef.tl_b_ready_o))) {
                    vlSelfRef.__PVT__return_state_n = 2U;
                }
            }
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__state)))) {
            if (((IData)(vlSelfRef.tl_b_valid_i) & (IData)(vlSelfRef.tl_b_ready_o))) {
                vlSelfRef.__PVT__return_state_n = 0U;
            }
        }
    }
}

extern const VlWide<16>/*511:0*/ Vrv64g_cache_system_tb__ConstPool__CONST_h93e1b771_0;

VL_INLINE_OPT void Vrv64g_cache_system_tb_rv64g_l1_dcache___act_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__4(Vrv64g_cache_system_tb_rv64g_l1_dcache* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv64g_cache_system_tb_rv64g_l1_dcache___act_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__4\n"); );
    Vrv64g_cache_system_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_plru__DOT__d2 = (1U & vlSelfRef.__PVT__u_plru__DOT__plru_bits_q
                                        [(0x1fU & (
                                                   vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[0U] 
                                                   >> 6U))]);
    if (vlSelfRef.__PVT__u_plru__DOT__d2) {
        vlSelfRef.__PVT__u_plru__DOT__d1 = (1U & (vlSelfRef.__PVT__u_plru__DOT__plru_bits_q
                                                  [
                                                  (0x1fU 
                                                   & (vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[0U] 
                                                      >> 6U))] 
                                                  >> 2U));
        vlSelfRef.__PVT__u_plru__DOT__d0 = (1U & ((IData)(vlSelfRef.__PVT__u_plru__DOT__d1)
                                                   ? 
                                                  (vlSelfRef.__PVT__u_plru__DOT__plru_bits_q
                                                   [
                                                   (0x1fU 
                                                    & (vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[0U] 
                                                       >> 6U))] 
                                                   >> 6U)
                                                   : 
                                                  (vlSelfRef.__PVT__u_plru__DOT__plru_bits_q
                                                   [
                                                   (0x1fU 
                                                    & (vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[0U] 
                                                       >> 6U))] 
                                                   >> 5U)));
    } else {
        vlSelfRef.__PVT__u_plru__DOT__d1 = (1U & (vlSelfRef.__PVT__u_plru__DOT__plru_bits_q
                                                  [
                                                  (0x1fU 
                                                   & (vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[0U] 
                                                      >> 6U))] 
                                                  >> 1U));
        vlSelfRef.__PVT__u_plru__DOT__d0 = (1U & ((IData)(vlSelfRef.__PVT__u_plru__DOT__d1)
                                                   ? 
                                                  (vlSelfRef.__PVT__u_plru__DOT__plru_bits_q
                                                   [
                                                   (0x1fU 
                                                    & (vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[0U] 
                                                       >> 6U))] 
                                                   >> 4U)
                                                   : 
                                                  (vlSelfRef.__PVT__u_plru__DOT__plru_bits_q
                                                   [
                                                   (0x1fU 
                                                    & (vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[0U] 
                                                       >> 6U))] 
                                                   >> 3U)));
    }
    vlSelfRef.__PVT__u_plru__DOT__plru_leaf_victim 
        = (((IData)(vlSelfRef.__PVT__u_plru__DOT__d2) 
            << 2U) | (((IData)(vlSelfRef.__PVT__u_plru__DOT__d1) 
                       << 1U) | (IData)(vlSelfRef.__PVT__u_plru__DOT__d0)));
    vlSelfRef.__PVT__u_plru__DOT__has_invalid = 0U;
    vlSelfRef.__PVT__u_plru__DOT__invalid_choice = 0U;
    if ((1U & (~ (IData)(vlSelfRef.__PVT__arr_valid_way)))) {
        vlSelfRef.__PVT__u_plru__DOT__invalid_choice = 0U;
        vlSelfRef.__PVT__u_plru__DOT__has_invalid = 1U;
    }
    if ((1U & ((~ ((IData)(vlSelfRef.__PVT__arr_valid_way) 
                   >> 1U)) & (~ (IData)(vlSelfRef.__PVT__u_plru__DOT__has_invalid))))) {
        vlSelfRef.__PVT__u_plru__DOT__invalid_choice = 1U;
        vlSelfRef.__PVT__u_plru__DOT__has_invalid = 1U;
    }
    if ((1U & ((~ ((IData)(vlSelfRef.__PVT__arr_valid_way) 
                   >> 2U)) & (~ (IData)(vlSelfRef.__PVT__u_plru__DOT__has_invalid))))) {
        vlSelfRef.__PVT__u_plru__DOT__invalid_choice = 2U;
        vlSelfRef.__PVT__u_plru__DOT__has_invalid = 1U;
    }
    if ((1U & ((~ ((IData)(vlSelfRef.__PVT__arr_valid_way) 
                   >> 3U)) & (~ (IData)(vlSelfRef.__PVT__u_plru__DOT__has_invalid))))) {
        vlSelfRef.__PVT__u_plru__DOT__invalid_choice = 3U;
        vlSelfRef.__PVT__u_plru__DOT__has_invalid = 1U;
    }
    if ((1U & ((~ ((IData)(vlSelfRef.__PVT__arr_valid_way) 
                   >> 4U)) & (~ (IData)(vlSelfRef.__PVT__u_plru__DOT__has_invalid))))) {
        vlSelfRef.__PVT__u_plru__DOT__invalid_choice = 4U;
        vlSelfRef.__PVT__u_plru__DOT__has_invalid = 1U;
    }
    if ((1U & ((~ ((IData)(vlSelfRef.__PVT__arr_valid_way) 
                   >> 5U)) & (~ (IData)(vlSelfRef.__PVT__u_plru__DOT__has_invalid))))) {
        vlSelfRef.__PVT__u_plru__DOT__invalid_choice = 5U;
        vlSelfRef.__PVT__u_plru__DOT__has_invalid = 1U;
    }
    if ((1U & ((~ ((IData)(vlSelfRef.__PVT__arr_valid_way) 
                   >> 6U)) & (~ (IData)(vlSelfRef.__PVT__u_plru__DOT__has_invalid))))) {
        vlSelfRef.__PVT__u_plru__DOT__invalid_choice = 6U;
        vlSelfRef.__PVT__u_plru__DOT__has_invalid = 1U;
    }
    if ((1U & ((~ ((IData)(vlSelfRef.__PVT__arr_valid_way) 
                   >> 7U)) & (~ (IData)(vlSelfRef.__PVT__u_plru__DOT__has_invalid))))) {
        vlSelfRef.__PVT__u_plru__DOT__invalid_choice = 7U;
        vlSelfRef.__PVT__u_plru__DOT__has_invalid = 1U;
    }
    vlSelfRef.__PVT__victim_way = ((IData)(vlSelfRef.__PVT__u_plru__DOT__has_invalid)
                                    ? (IData)(vlSelfRef.__PVT__u_plru__DOT__invalid_choice)
                                    : (IData)(vlSelfRef.__PVT__u_plru__DOT__plru_leaf_victim));
    vlSelfRef.__PVT__hit = 0U;
    vlSelfRef.__PVT__hit_way = 0U;
    vlSelfRef.__PVT__tag_slice = (0x1fffffffffffffULL 
                                  & (((QData)((IData)(
                                                      vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[0U]))));
    if (((IData)(vlSelfRef.__PVT__arr_valid_way) & 
         (vlSelfRef.__PVT__tag_slice == (0x1fffffffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[1U])) 
                                             << 0x15U) 
                                            | ((QData)((IData)(
                                                               vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[0U])) 
                                               >> 0xbU)))))) {
        vlSelfRef.__PVT__hit = 1U;
        vlSelfRef.__PVT__hit_way = 0U;
    }
    vlSelfRef.__PVT__tag_slice = (0x1fffffffffffffULL 
                                  & (((QData)((IData)(
                                                      vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[3U])) 
                                      << 0x2bU) | (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[2U])) 
                                                    << 0xbU) 
                                                   | ((QData)((IData)(
                                                                      vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[1U])) 
                                                      >> 0x15U))));
    if ((((IData)(vlSelfRef.__PVT__arr_valid_way) >> 1U) 
         & (vlSelfRef.__PVT__tag_slice == (0x1fffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[1U])) 
                                               << 0x15U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[0U])) 
                                                 >> 0xbU)))))) {
        vlSelfRef.__PVT__hit = 1U;
        vlSelfRef.__PVT__hit_way = 1U;
    }
    vlSelfRef.__PVT__tag_slice = (0x1fffffffffffffULL 
                                  & (((QData)((IData)(
                                                      vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[4U])) 
                                      << 0x16U) | ((QData)((IData)(
                                                                   vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[3U])) 
                                                   >> 0xaU)));
    if ((((IData)(vlSelfRef.__PVT__arr_valid_way) >> 2U) 
         & (vlSelfRef.__PVT__tag_slice == (0x1fffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[1U])) 
                                               << 0x15U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[0U])) 
                                                 >> 0xbU)))))) {
        vlSelfRef.__PVT__hit = 1U;
        vlSelfRef.__PVT__hit_way = 2U;
    }
    vlSelfRef.__PVT__tag_slice = (0x1fffffffffffffULL 
                                  & (((QData)((IData)(
                                                      vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[6U])) 
                                      << 0x21U) | (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[5U])) 
                                                    << 1U) 
                                                   | ((QData)((IData)(
                                                                      vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[4U])) 
                                                      >> 0x1fU))));
    if ((((IData)(vlSelfRef.__PVT__arr_valid_way) >> 3U) 
         & (vlSelfRef.__PVT__tag_slice == (0x1fffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[1U])) 
                                               << 0x15U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[0U])) 
                                                 >> 0xbU)))))) {
        vlSelfRef.__PVT__hit = 1U;
        vlSelfRef.__PVT__hit_way = 3U;
    }
    vlSelfRef.__PVT__tag_slice = (0x1fffffffffffffULL 
                                  & (((QData)((IData)(
                                                      vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[8U])) 
                                      << 0x2cU) | (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[7U])) 
                                                    << 0xcU) 
                                                   | ((QData)((IData)(
                                                                      vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[6U])) 
                                                      >> 0x14U))));
    if ((((IData)(vlSelfRef.__PVT__arr_valid_way) >> 4U) 
         & (vlSelfRef.__PVT__tag_slice == (0x1fffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[1U])) 
                                               << 0x15U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[0U])) 
                                                 >> 0xbU)))))) {
        vlSelfRef.__PVT__hit = 1U;
        vlSelfRef.__PVT__hit_way = 4U;
    }
    vlSelfRef.__PVT__tag_slice = (0x1fffffffffffffULL 
                                  & (((QData)((IData)(
                                                      vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[9U])) 
                                      << 0x17U) | ((QData)((IData)(
                                                                   vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[8U])) 
                                                   >> 9U)));
    if ((((IData)(vlSelfRef.__PVT__arr_valid_way) >> 5U) 
         & (vlSelfRef.__PVT__tag_slice == (0x1fffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[1U])) 
                                               << 0x15U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[0U])) 
                                                 >> 0xbU)))))) {
        vlSelfRef.__PVT__hit = 1U;
        vlSelfRef.__PVT__hit_way = 5U;
    }
    vlSelfRef.__PVT__tag_slice = (0x1fffffffffffffULL 
                                  & (((QData)((IData)(
                                                      vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[0xbU])) 
                                      << 0x22U) | (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[0xaU])) 
                                                    << 2U) 
                                                   | ((QData)((IData)(
                                                                      vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[9U])) 
                                                      >> 0x1eU))));
    if ((((IData)(vlSelfRef.__PVT__arr_valid_way) >> 6U) 
         & (vlSelfRef.__PVT__tag_slice == (0x1fffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[1U])) 
                                               << 0x15U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[0U])) 
                                                 >> 0xbU)))))) {
        vlSelfRef.__PVT__hit = 1U;
        vlSelfRef.__PVT__hit_way = 6U;
    }
    vlSelfRef.__PVT__tag_slice = (0x1fffffffffffffULL 
                                  & (((QData)((IData)(
                                                      vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[0xdU])) 
                                      << 0x2dU) | (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[0xcU])) 
                                                    << 0xdU) 
                                                   | ((QData)((IData)(
                                                                      vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[0xbU])) 
                                                      >> 0x13U))));
    if ((((IData)(vlSelfRef.__PVT__arr_valid_way) >> 7U) 
         & (vlSelfRef.__PVT__tag_slice == (0x1fffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[1U])) 
                                               << 0x15U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[0U])) 
                                                 >> 0xbU)))))) {
        vlSelfRef.__PVT__hit = 1U;
        vlSelfRef.__PVT__hit_way = 7U;
    }
    vlSelfRef.__PVT__pend_is_lr_n = vlSelfRef.__PVT__pend_is_lr_q;
    vlSelfRef.__PVT__pend_is_amo_n = vlSelfRef.__PVT__pend_is_amo_q;
    vlSelfRef.__PVT__resv_word_n = vlSelfRef.__PVT__resv_word_q;
    vlSelfRef.__PVT__plru_access_n = 0U;
    vlSelfRef.__PVT__resv_addr_n = vlSelfRef.__PVT__resv_addr_q;
    vlSelfRef.__PVT__pend_amo_op_n = vlSelfRef.__PVT__pend_amo_op_q;
    vlSelfRef.__PVT__plru_used_way_n = 0U;
    vlSelfRef.__PVT__gnt_n = 0U;
    vlSelfRef.__PVT__pend_is_sc_n = vlSelfRef.__PVT__pend_is_sc_q;
    vlSelfRef.__PVT__pend_has_data_n = vlSelfRef.__PVT__pend_has_data_q;
    vlSelfRef.__PVT__pend_is_probe_n = vlSelfRef.__PVT__pend_is_probe_q;
    vlSelfRef.__PVT__pend_evict_state_n = vlSelfRef.__PVT__pend_evict_state_q;
    vlSelfRef.__PVT__pend_evict_tag_n = vlSelfRef.__PVT__pend_evict_tag_q;
    vlSelfRef.__PVT__sc_success_n = vlSelfRef.__PVT__sc_success_q;
    vlSelfRef.__PVT__pend_amo_word_n = vlSelfRef.__PVT__pend_amo_word_q;
    vlSelfRef.__PVT__pend_be_n = vlSelfRef.__PVT__pend_be_q;
    vlSelfRef.__PVT__pend_wdata_n = vlSelfRef.__PVT__pend_wdata_q;
    vlSelfRef.__PVT__pend_word_n = vlSelfRef.__PVT__pend_word_q;
    vlSelfRef.__PVT__rvalid_n = 0U;
    vlSelfRef.__PVT__pend_index_n = vlSelfRef.__PVT__pend_index_q;
    vlSelfRef.__PVT__pend_tag_n = vlSelfRef.__PVT__pend_tag_q;
    vlSelfRef.__PVT__pend_victim_n = vlSelfRef.__PVT__pend_victim_q;
    vlSelfRef.__PVT__pend_is_store_n = vlSelfRef.__PVT__pend_is_store_q;
    vlSelfRef.__PVT__arr_tag_in = 0ULL;
    vlSelfRef.__PVT__state_n = vlSelfRef.__PVT__state;
    vlSelfRef.__PVT__beat_n = vlSelfRef.__PVT__beat_q;
    vlSelfRef.__PVT__resv_valid_n = vlSelfRef.__PVT__resv_valid_q;
    vlSelfRef.__PVT__probe_pend_index_n = vlSelfRef.__PVT__probe_pend_index_q;
    vlSelfRef.__PVT__probe_pend_tag_n = vlSelfRef.__PVT__probe_pend_tag_q;
    vlSelfRef.__PVT__probe_pend_has_data_n = vlSelfRef.__PVT__probe_pend_has_data_q;
    vlSelfRef.__PVT__probe_pend_hit_n = vlSelfRef.__PVT__probe_pend_hit_q;
    vlSelfRef.__PVT__probe_pend_way_n = vlSelfRef.__PVT__probe_pend_way_q;
    vlSelfRef.__PVT__arr_word_sel = (7U & (vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[0U] 
                                           >> 3U));
    vlSelfRef.__PVT__arr_way_sel = vlSelfRef.__PVT__hit_way;
    vlSelfRef.__PVT__arr_write_en = 0U;
    vlSelfRef.__PVT__arr_state_in = 0U;
    vlSelfRef.__PVT__arr_be = 0U;
    vlSelfRef.__PVT__binv_index = (0x1fU & (IData)(
                                                   (vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__l2_b_address 
                                                    >> 6U)));
    vlSelfRef.__PVT__binv_tag = (vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__l2_b_address 
                                 >> 0xbU);
    vlSelfRef.__PVT__binv_hit = 0U;
    vlSelfRef.__PVT__binv_way = 0U;
    vlSelfRef.__PVT__tag_slice = (0x1fffffffffffffULL 
                                  & (((QData)((IData)(
                                                      vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[0U]))));
    if (((IData)(vlSelfRef.__PVT__arr_valid_way) & 
         (vlSelfRef.__PVT__tag_slice == vlSelfRef.__PVT__binv_tag))) {
        vlSelfRef.__PVT__binv_hit = 1U;
        vlSelfRef.__PVT__binv_way = 0U;
    }
    vlSelfRef.__PVT__tag_slice = (0x1fffffffffffffULL 
                                  & (((QData)((IData)(
                                                      vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[3U])) 
                                      << 0x2bU) | (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[2U])) 
                                                    << 0xbU) 
                                                   | ((QData)((IData)(
                                                                      vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[1U])) 
                                                      >> 0x15U))));
    if ((((IData)(vlSelfRef.__PVT__arr_valid_way) >> 1U) 
         & (vlSelfRef.__PVT__tag_slice == vlSelfRef.__PVT__binv_tag))) {
        vlSelfRef.__PVT__binv_hit = 1U;
        vlSelfRef.__PVT__binv_way = 1U;
    }
    vlSelfRef.__PVT__tag_slice = (0x1fffffffffffffULL 
                                  & (((QData)((IData)(
                                                      vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[4U])) 
                                      << 0x16U) | ((QData)((IData)(
                                                                   vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[3U])) 
                                                   >> 0xaU)));
    if ((((IData)(vlSelfRef.__PVT__arr_valid_way) >> 2U) 
         & (vlSelfRef.__PVT__tag_slice == vlSelfRef.__PVT__binv_tag))) {
        vlSelfRef.__PVT__binv_hit = 1U;
        vlSelfRef.__PVT__binv_way = 2U;
    }
    vlSelfRef.__PVT__tag_slice = (0x1fffffffffffffULL 
                                  & (((QData)((IData)(
                                                      vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[6U])) 
                                      << 0x21U) | (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[5U])) 
                                                    << 1U) 
                                                   | ((QData)((IData)(
                                                                      vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[4U])) 
                                                      >> 0x1fU))));
    if ((((IData)(vlSelfRef.__PVT__arr_valid_way) >> 3U) 
         & (vlSelfRef.__PVT__tag_slice == vlSelfRef.__PVT__binv_tag))) {
        vlSelfRef.__PVT__binv_hit = 1U;
        vlSelfRef.__PVT__binv_way = 3U;
    }
    vlSelfRef.__PVT__tag_slice = (0x1fffffffffffffULL 
                                  & (((QData)((IData)(
                                                      vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[8U])) 
                                      << 0x2cU) | (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[7U])) 
                                                    << 0xcU) 
                                                   | ((QData)((IData)(
                                                                      vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[6U])) 
                                                      >> 0x14U))));
    if ((((IData)(vlSelfRef.__PVT__arr_valid_way) >> 4U) 
         & (vlSelfRef.__PVT__tag_slice == vlSelfRef.__PVT__binv_tag))) {
        vlSelfRef.__PVT__binv_hit = 1U;
        vlSelfRef.__PVT__binv_way = 4U;
    }
    vlSelfRef.__PVT__tag_slice = (0x1fffffffffffffULL 
                                  & (((QData)((IData)(
                                                      vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[9U])) 
                                      << 0x17U) | ((QData)((IData)(
                                                                   vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[8U])) 
                                                   >> 9U)));
    if ((((IData)(vlSelfRef.__PVT__arr_valid_way) >> 5U) 
         & (vlSelfRef.__PVT__tag_slice == vlSelfRef.__PVT__binv_tag))) {
        vlSelfRef.__PVT__binv_hit = 1U;
        vlSelfRef.__PVT__binv_way = 5U;
    }
    vlSelfRef.__PVT__tag_slice = (0x1fffffffffffffULL 
                                  & (((QData)((IData)(
                                                      vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[0xbU])) 
                                      << 0x22U) | (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[0xaU])) 
                                                    << 2U) 
                                                   | ((QData)((IData)(
                                                                      vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[9U])) 
                                                      >> 0x1eU))));
    if ((((IData)(vlSelfRef.__PVT__arr_valid_way) >> 6U) 
         & (vlSelfRef.__PVT__tag_slice == vlSelfRef.__PVT__binv_tag))) {
        vlSelfRef.__PVT__binv_hit = 1U;
        vlSelfRef.__PVT__binv_way = 6U;
    }
    vlSelfRef.__PVT__tag_slice = (0x1fffffffffffffULL 
                                  & (((QData)((IData)(
                                                      vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[0xdU])) 
                                      << 0x2dU) | (
                                                   ((QData)((IData)(
                                                                    vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[0xcU])) 
                                                    << 0xdU) 
                                                   | ((QData)((IData)(
                                                                      vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[0xbU])) 
                                                      >> 0x13U))));
    if ((((IData)(vlSelfRef.__PVT__arr_valid_way) >> 7U) 
         & (vlSelfRef.__PVT__tag_slice == vlSelfRef.__PVT__binv_tag))) {
        vlSelfRef.__PVT__binv_hit = 1U;
        vlSelfRef.__PVT__binv_way = 7U;
    }
    vlSelfRef.__PVT__arr_wdata = 0ULL;
    if ((8U & (IData)(vlSelfRef.__PVT__state))) {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__state) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelfRef.__PVT__state))) {
                if ((1U & (IData)(vlSelfRef.__PVT__state))) {
                    vlSelfRef.__PVT__pend_is_amo_n = 0U;
                    vlSelfRef.__PVT__plru_access_n = 1U;
                    vlSelfRef.__PVT__plru_used_way_n 
                        = vlSelfRef.__PVT__pend_victim_q;
                    vlSelfRef.__PVT__rvalid_n = 1U;
                    vlSelfRef.__PVT__arr_tag_in = vlSelfRef.__PVT__pend_tag_q;
                }
            }
        }
        if ((4U & (IData)(vlSelfRef.__PVT__state))) {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__state)))) {
                    if ((1U & (((IData)(vlSelfRef.__PVT__arr_valid_way) 
                                & (IData)(vlSelfRef.__PVT__arr_dirty_way)) 
                               >> (IData)(vlSelfRef.__PVT__pend_victim_q)))) {
                        vlSelfRef.__PVT__pend_has_data_n = 1U;
                        vlSelfRef.__PVT__pend_is_probe_n = 0U;
                    } else if ((1U & ((IData)(vlSelfRef.__PVT__arr_valid_way) 
                                      >> (IData)(vlSelfRef.__PVT__pend_victim_q)))) {
                        vlSelfRef.__PVT__pend_has_data_n = 0U;
                        vlSelfRef.__PVT__pend_is_probe_n = 0U;
                    }
                }
                if ((1U & (IData)(vlSelfRef.__PVT__state))) {
                    if ((1U & (~ (IData)(vlSelfRef.__PVT__vlsu_miss_ready_for_replay)))) {
                        if (vlSelfRef.__PVT__vlsu_miss_refill_req) {
                            vlSelfRef.__PVT__pend_evict_state_n 
                                = (3U & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__scalar_state_way_r) 
                                         >> (0xfU & 
                                             VL_SHIFTL_III(4,32,32, (IData)(vlSelfRef.__PVT__victim_way), 1U))));
                            vlSelfRef.__PVT__pend_evict_tag_n 
                                = ((0x1a7U >= (0x1ffU 
                                               & ((((IData)(0x35U) 
                                                    * 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__victim_way))) 
                                                   - (IData)(1U)) 
                                                  - (IData)(0x34U))))
                                    ? (0x1fffffffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[
                                                           (((IData)(0x34U) 
                                                             + 
                                                             (0x1ffU 
                                                              & ((((IData)(0x35U) 
                                                                   * 
                                                                   ((IData)(1U) 
                                                                    + (IData)(vlSelfRef.__PVT__victim_way))) 
                                                                  - (IData)(1U)) 
                                                                 - (IData)(0x34U)))) 
                                                            >> 5U)])) 
                                           << ((0U 
                                                == 
                                                (0x1fU 
                                                 & ((((IData)(0x35U) 
                                                      * 
                                                      ((IData)(1U) 
                                                       + (IData)(vlSelfRef.__PVT__victim_way))) 
                                                     - (IData)(1U)) 
                                                    - (IData)(0x34U))))
                                                ? 0x20U
                                                : ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((((IData)(0x35U) 
                                                         * 
                                                         ((IData)(1U) 
                                                          + (IData)(vlSelfRef.__PVT__victim_way))) 
                                                        - (IData)(1U)) 
                                                       - (IData)(0x34U)))))) 
                                          | (((0U == 
                                               (0x1fU 
                                                & ((((IData)(0x35U) 
                                                     * 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__victim_way))) 
                                                    - (IData)(1U)) 
                                                   - (IData)(0x34U))))
                                               ? 0ULL
                                               : ((QData)((IData)(
                                                                  vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[
                                                                  (((IData)(0x1fU) 
                                                                    + 
                                                                    (0x1ffU 
                                                                     & ((((IData)(0x35U) 
                                                                          * 
                                                                          ((IData)(1U) 
                                                                           + (IData)(vlSelfRef.__PVT__victim_way))) 
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
                                                          + (IData)(vlSelfRef.__PVT__victim_way))) 
                                                        - (IData)(1U)) 
                                                       - (IData)(0x34U)))))) 
                                             | ((QData)((IData)(
                                                                vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[
                                                                (0xfU 
                                                                 & (((((IData)(0x35U) 
                                                                       * 
                                                                       ((IData)(1U) 
                                                                        + (IData)(vlSelfRef.__PVT__victim_way))) 
                                                                      - (IData)(1U)) 
                                                                     - (IData)(0x34U)) 
                                                                    >> 5U))])) 
                                                >> 
                                                (0x1fU 
                                                 & ((((IData)(0x35U) 
                                                      * 
                                                      ((IData)(1U) 
                                                       + (IData)(vlSelfRef.__PVT__victim_way))) 
                                                     - (IData)(1U)) 
                                                    - (IData)(0x34U)))))))
                                    : 0ULL);
                            vlSelfRef.__PVT__pend_word_n = 0U;
                            vlSelfRef.__PVT__pend_index_n 
                                = (0x1fU & (IData)(
                                                   (vlSelfRef.__PVT__vlsu_miss_refill_addr 
                                                    >> 6U)));
                            vlSelfRef.__PVT__pend_tag_n 
                                = (vlSelfRef.__PVT__vlsu_miss_refill_addr 
                                   >> 0xbU);
                            vlSelfRef.__PVT__pend_victim_n 
                                = vlSelfRef.__PVT__victim_way;
                            vlSelfRef.__PVT__pend_is_store_n = 0U;
                        }
                    }
                }
            }
            if ((2U & (IData)(vlSelfRef.__PVT__state))) {
                vlSelfRef.__PVT__state_n = 0U;
            } else if ((1U & (IData)(vlSelfRef.__PVT__state))) {
                if (vlSelfRef.__PVT__vlsu_miss_ready_for_replay) {
                    vlSelfRef.__PVT__state_n = 0U;
                } else if (vlSelfRef.__PVT__vlsu_miss_refill_req) {
                    vlSelfRef.__PVT__beat_n = 0U;
                    vlSelfRef.__PVT__state_n = 0xcU;
                }
            } else if ((1U & (((IData)(vlSelfRef.__PVT__arr_valid_way) 
                               & (IData)(vlSelfRef.__PVT__arr_dirty_way)) 
                              >> (IData)(vlSelfRef.__PVT__pend_victim_q)))) {
                vlSelfRef.__PVT__state_n = 5U;
                vlSelfRef.__PVT__arr_word_sel = 0U;
                vlSelfRef.__PVT__arr_way_sel = vlSelfRef.__PVT__pend_victim_q;
            } else if ((1U & ((IData)(vlSelfRef.__PVT__arr_valid_way) 
                              >> (IData)(vlSelfRef.__PVT__pend_victim_q)))) {
                vlSelfRef.__PVT__state_n = 5U;
            } else if (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__l1_a_ready) 
                        & (IData)(vlSelfRef.tl_a_valid_o))) {
                vlSelfRef.__PVT__state_n = 2U;
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__state))) {
            if ((1U & (IData)(vlSelfRef.__PVT__state))) {
                vlSelfRef.__PVT__arr_word_sel = vlSelfRef.__PVT__pend_word_q;
                vlSelfRef.__PVT__arr_way_sel = vlSelfRef.__PVT__pend_victim_q;
                vlSelfRef.__PVT__arr_write_en = 1U;
                vlSelfRef.__PVT__arr_state_in = 3U;
                vlSelfRef.__PVT__arr_be = ((IData)(vlSelfRef.__PVT__pend_amo_word_q)
                                            ? 0xfU : 0xffU);
                vlSelfRef.__PVT__state_n = 0U;
            } else {
                vlSelfRef.__PVT__state_n = 0xbU;
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__state))) {
            if (vlSelfRef.__PVT__probe_pend_has_data_q) {
                vlSelfRef.__PVT__arr_way_sel = vlSelfRef.__PVT__probe_pend_way_q;
                vlSelfRef.__PVT__arr_word_sel = vlSelfRef.__PVT__beat_q;
                if (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__l1_c_ready) 
                     & (IData)(vlSelfRef.tl_c_valid_o))) {
                    if ((7U == (IData)(vlSelfRef.__PVT__beat_q))) {
                        vlSelfRef.__PVT__beat_n = 0U;
                        vlSelfRef.__PVT__state_n = vlSelfRef.__PVT__return_state_q;
                    } else {
                        vlSelfRef.__PVT__beat_n = (7U 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelfRef.__PVT__beat_q)));
                    }
                }
            } else if (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__l1_c_ready) 
                        & (IData)(vlSelfRef.tl_c_valid_o))) {
                vlSelfRef.__PVT__state_n = vlSelfRef.__PVT__return_state_q;
            }
        } else if (((IData)(vlSelfRef.tl_b_valid_i) 
                    & (IData)(vlSelfRef.tl_b_ready_o))) {
            vlSelfRef.__PVT__probe_pend_index_n = vlSelfRef.__PVT__binv_index;
            if (vlSelfRef.__PVT__binv_hit) {
                vlSelfRef.__PVT__arr_way_sel = vlSelfRef.__PVT__binv_way;
                vlSelfRef.__PVT__probe_pend_hit_n = 1U;
                vlSelfRef.__PVT__probe_pend_way_n = vlSelfRef.__PVT__binv_way;
                if ((1U & ((IData)(vlSelfRef.__PVT__arr_dirty_way) 
                           >> (IData)(vlSelfRef.__PVT__binv_way)))) {
                    vlSelfRef.__PVT__beat_n = 0U;
                    vlSelfRef.__PVT__state_n = 9U;
                    vlSelfRef.__PVT__probe_pend_has_data_n = 1U;
                    vlSelfRef.__PVT__arr_write_en = 1U;
                    vlSelfRef.__PVT__arr_state_in = 0U;
                    vlSelfRef.__PVT__arr_be = 0U;
                    vlSelfRef.__PVT__arr_word_sel = 0U;
                } else {
                    vlSelfRef.__PVT__arr_write_en = 1U;
                    vlSelfRef.__PVT__arr_state_in = 0U;
                    vlSelfRef.__PVT__arr_be = 0U;
                    vlSelfRef.__PVT__state_n = 9U;
                    vlSelfRef.__PVT__probe_pend_has_data_n = 0U;
                }
            } else {
                vlSelfRef.__PVT__state_n = 9U;
                vlSelfRef.__PVT__probe_pend_has_data_n = 0U;
                vlSelfRef.__PVT__probe_pend_hit_n = 0U;
            }
            vlSelfRef.__PVT__probe_pend_tag_n = vlSelfRef.__PVT__binv_tag;
            if (((IData)(vlSelfRef.__PVT__resv_valid_q) 
                 & (((vlSelfRef.__PVT__binv_tag << 5U) 
                     | (QData)((IData)(vlSelfRef.__PVT__binv_index))) 
                    == vlSelfRef.__PVT__resv_addr_q))) {
                vlSelfRef.__PVT__resv_valid_n = 0U;
            }
        } else if (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__l1_a_ready) 
                    & (IData)(vlSelfRef.tl_a_valid_o))) {
            vlSelfRef.__PVT__state_n = 2U;
        }
    } else {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__state)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.tl_b_valid_i) 
                                  & (IData)(vlSelfRef.tl_b_ready_o))))) {
                        if ((1U & (~ (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                       & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_lr_i)) 
                                      & (IData)(vlSelfRef.__PVT__hit))))) {
                            if ((1U & (~ (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                           & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_lr_i)) 
                                          & (~ (IData)(vlSelfRef.__PVT__hit)))))) {
                                if ((1U & (~ (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                               & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_sc_i)) 
                                              & (IData)(vlSelfRef.__PVT__hit))))) {
                                    if ((1U & (~ (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                                   & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_sc_i)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__hit)))))) {
                                        if ((((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                              & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_amo_i)) 
                                             & (IData)(vlSelfRef.__PVT__hit))) {
                                            vlSelfRef.__PVT__pend_is_amo_n = 1U;
                                        } else if (
                                                   (1U 
                                                    & (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                                        & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_amo_i)) 
                                                       & (~ (IData)(vlSelfRef.__PVT__hit))))) {
                                            vlSelfRef.__PVT__pend_is_amo_n = 1U;
                                        }
                                    }
                                }
                            }
                            if ((1U & (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                        & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_lr_i)) 
                                       & (~ (IData)(vlSelfRef.__PVT__hit))))) {
                                if ((1U & ((IData)(vlSelfRef.__PVT__arr_valid_way) 
                                           >> (IData)(vlSelfRef.__PVT__victim_way)))) {
                                    vlSelfRef.__PVT__pend_has_data_n 
                                        = (1U & ((IData)(vlSelfRef.__PVT__arr_dirty_way) 
                                                 >> (IData)(vlSelfRef.__PVT__victim_way)));
                                    vlSelfRef.__PVT__pend_is_probe_n = 0U;
                                }
                                vlSelfRef.__PVT__pend_evict_state_n 
                                    = (3U & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__scalar_state_way_r) 
                                             >> (0xfU 
                                                 & VL_SHIFTL_III(4,32,32, (IData)(vlSelfRef.__PVT__victim_way), 1U))));
                                vlSelfRef.__PVT__pend_evict_tag_n 
                                    = ((0x1a7U >= (0x1ffU 
                                                   & ((((IData)(0x35U) 
                                                        * 
                                                        ((IData)(1U) 
                                                         + (IData)(vlSelfRef.__PVT__victim_way))) 
                                                       - (IData)(1U)) 
                                                      - (IData)(0x34U))))
                                        ? (0x1fffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[
                                                               (((IData)(0x34U) 
                                                                 + 
                                                                 (0x1ffU 
                                                                  & ((((IData)(0x35U) 
                                                                       * 
                                                                       ((IData)(1U) 
                                                                        + (IData)(vlSelfRef.__PVT__victim_way))) 
                                                                      - (IData)(1U)) 
                                                                     - (IData)(0x34U)))) 
                                                                >> 5U)])) 
                                               << (
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & ((((IData)(0x35U) 
                                                          * 
                                                          ((IData)(1U) 
                                                           + (IData)(vlSelfRef.__PVT__victim_way))) 
                                                         - (IData)(1U)) 
                                                        - (IData)(0x34U))))
                                                    ? 0x20U
                                                    : 
                                                   ((IData)(0x40U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((((IData)(0x35U) 
                                                          * 
                                                          ((IData)(1U) 
                                                           + (IData)(vlSelfRef.__PVT__victim_way))) 
                                                         - (IData)(1U)) 
                                                        - (IData)(0x34U)))))) 
                                              | (((0U 
                                                   == 
                                                   (0x1fU 
                                                    & ((((IData)(0x35U) 
                                                         * 
                                                         ((IData)(1U) 
                                                          + (IData)(vlSelfRef.__PVT__victim_way))) 
                                                        - (IData)(1U)) 
                                                       - (IData)(0x34U))))
                                                   ? 0ULL
                                                   : 
                                                  ((QData)((IData)(
                                                                   vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[
                                                                   (((IData)(0x1fU) 
                                                                     + 
                                                                     (0x1ffU 
                                                                      & ((((IData)(0x35U) 
                                                                           * 
                                                                           ((IData)(1U) 
                                                                            + (IData)(vlSelfRef.__PVT__victim_way))) 
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
                                                           + (IData)(vlSelfRef.__PVT__victim_way))) 
                                                         - (IData)(1U)) 
                                                        - (IData)(0x34U)))))) 
                                                 | ((QData)((IData)(
                                                                    vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[
                                                                    (0xfU 
                                                                     & (((((IData)(0x35U) 
                                                                           * 
                                                                           ((IData)(1U) 
                                                                            + (IData)(vlSelfRef.__PVT__victim_way))) 
                                                                          - (IData)(1U)) 
                                                                         - (IData)(0x34U)) 
                                                                        >> 5U))])) 
                                                    >> 
                                                    (0x1fU 
                                                     & ((((IData)(0x35U) 
                                                          * 
                                                          ((IData)(1U) 
                                                           + (IData)(vlSelfRef.__PVT__victim_way))) 
                                                         - (IData)(1U)) 
                                                        - (IData)(0x34U)))))))
                                        : 0ULL);
                                vlSelfRef.__PVT__pend_word_n 
                                    = (7U & (vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[0U] 
                                             >> 3U));
                                vlSelfRef.__PVT__pend_index_n 
                                    = (0x1fU & (vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[0U] 
                                                >> 6U));
                                vlSelfRef.__PVT__pend_tag_n 
                                    = (0x1fffffffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[1U])) 
                                           << 0x15U) 
                                          | ((QData)((IData)(
                                                             vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[0U])) 
                                             >> 0xbU)));
                                vlSelfRef.__PVT__pend_victim_n 
                                    = vlSelfRef.__PVT__victim_way;
                            } else {
                                if ((1U & (~ (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                               & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_sc_i)) 
                                              & (IData)(vlSelfRef.__PVT__hit))))) {
                                    if ((1U & (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                                & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_sc_i)) 
                                               & (~ (IData)(vlSelfRef.__PVT__hit))))) {
                                        if ((1U & ((IData)(vlSelfRef.__PVT__arr_valid_way) 
                                                   >> (IData)(vlSelfRef.__PVT__victim_way)))) {
                                            vlSelfRef.__PVT__pend_has_data_n 
                                                = (1U 
                                                   & ((IData)(vlSelfRef.__PVT__arr_dirty_way) 
                                                      >> (IData)(vlSelfRef.__PVT__victim_way)));
                                            vlSelfRef.__PVT__pend_is_probe_n = 0U;
                                        }
                                        vlSelfRef.__PVT__pend_evict_state_n 
                                            = (3U & 
                                               ((IData)(vlSelfRef.__PVT__u_arrays__DOT__scalar_state_way_r) 
                                                >> 
                                                (0xfU 
                                                 & VL_SHIFTL_III(4,32,32, (IData)(vlSelfRef.__PVT__victim_way), 1U))));
                                        vlSelfRef.__PVT__pend_evict_tag_n 
                                            = ((0x1a7U 
                                                >= 
                                                (0x1ffU 
                                                 & ((((IData)(0x35U) 
                                                      * 
                                                      ((IData)(1U) 
                                                       + (IData)(vlSelfRef.__PVT__victim_way))) 
                                                     - (IData)(1U)) 
                                                    - (IData)(0x34U))))
                                                ? (0x1fffffffffffffULL 
                                                   & (((QData)((IData)(
                                                                       vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[
                                                                       (((IData)(0x34U) 
                                                                         + 
                                                                         (0x1ffU 
                                                                          & ((((IData)(0x35U) 
                                                                               * 
                                                                               ((IData)(1U) 
                                                                                + (IData)(vlSelfRef.__PVT__victim_way))) 
                                                                              - (IData)(1U)) 
                                                                             - (IData)(0x34U)))) 
                                                                        >> 5U)])) 
                                                       << 
                                                       ((0U 
                                                         == 
                                                         (0x1fU 
                                                          & ((((IData)(0x35U) 
                                                               * 
                                                               ((IData)(1U) 
                                                                + (IData)(vlSelfRef.__PVT__victim_way))) 
                                                              - (IData)(1U)) 
                                                             - (IData)(0x34U))))
                                                         ? 0x20U
                                                         : 
                                                        ((IData)(0x40U) 
                                                         - 
                                                         (0x1fU 
                                                          & ((((IData)(0x35U) 
                                                               * 
                                                               ((IData)(1U) 
                                                                + (IData)(vlSelfRef.__PVT__victim_way))) 
                                                              - (IData)(1U)) 
                                                             - (IData)(0x34U)))))) 
                                                      | (((0U 
                                                           == 
                                                           (0x1fU 
                                                            & ((((IData)(0x35U) 
                                                                 * 
                                                                 ((IData)(1U) 
                                                                  + (IData)(vlSelfRef.__PVT__victim_way))) 
                                                                - (IData)(1U)) 
                                                               - (IData)(0x34U))))
                                                           ? 0ULL
                                                           : 
                                                          ((QData)((IData)(
                                                                           vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[
                                                                           (((IData)(0x1fU) 
                                                                             + 
                                                                             (0x1ffU 
                                                                              & ((((IData)(0x35U) 
                                                                                * 
                                                                                ((IData)(1U) 
                                                                                + (IData)(vlSelfRef.__PVT__victim_way))) 
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
                                                                   + (IData)(vlSelfRef.__PVT__victim_way))) 
                                                                 - (IData)(1U)) 
                                                                - (IData)(0x34U)))))) 
                                                         | ((QData)((IData)(
                                                                            vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[
                                                                            (0xfU 
                                                                             & (((((IData)(0x35U) 
                                                                                * 
                                                                                ((IData)(1U) 
                                                                                + (IData)(vlSelfRef.__PVT__victim_way))) 
                                                                                - (IData)(1U)) 
                                                                                - (IData)(0x34U)) 
                                                                                >> 5U))])) 
                                                            >> 
                                                            (0x1fU 
                                                             & ((((IData)(0x35U) 
                                                                  * 
                                                                  ((IData)(1U) 
                                                                   + (IData)(vlSelfRef.__PVT__victim_way))) 
                                                                 - (IData)(1U)) 
                                                                - (IData)(0x34U)))))))
                                                : 0ULL);
                                    } else if ((1U 
                                                & (~ 
                                                   (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                                     & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_amo_i)) 
                                                    & (IData)(vlSelfRef.__PVT__hit))))) {
                                        if ((1U & (
                                                   ((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                                    & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_amo_i)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__hit))))) {
                                            if ((1U 
                                                 & ((IData)(vlSelfRef.__PVT__arr_valid_way) 
                                                    >> (IData)(vlSelfRef.__PVT__victim_way)))) {
                                                vlSelfRef.__PVT__pend_has_data_n 
                                                    = 
                                                    (1U 
                                                     & ((IData)(vlSelfRef.__PVT__arr_dirty_way) 
                                                        >> (IData)(vlSelfRef.__PVT__victim_way)));
                                                vlSelfRef.__PVT__pend_is_probe_n = 0U;
                                            }
                                            vlSelfRef.__PVT__pend_evict_state_n 
                                                = (3U 
                                                   & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__scalar_state_way_r) 
                                                      >> 
                                                      (0xfU 
                                                       & VL_SHIFTL_III(4,32,32, (IData)(vlSelfRef.__PVT__victim_way), 1U))));
                                            vlSelfRef.__PVT__pend_evict_tag_n 
                                                = (
                                                   (0x1a7U 
                                                    >= 
                                                    (0x1ffU 
                                                     & ((((IData)(0x35U) 
                                                          * 
                                                          ((IData)(1U) 
                                                           + (IData)(vlSelfRef.__PVT__victim_way))) 
                                                         - (IData)(1U)) 
                                                        - (IData)(0x34U))))
                                                    ? 
                                                   (0x1fffffffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[
                                                                        (((IData)(0x34U) 
                                                                          + 
                                                                          (0x1ffU 
                                                                           & ((((IData)(0x35U) 
                                                                                * 
                                                                                ((IData)(1U) 
                                                                                + (IData)(vlSelfRef.__PVT__victim_way))) 
                                                                               - (IData)(1U)) 
                                                                              - (IData)(0x34U)))) 
                                                                         >> 5U)])) 
                                                        << 
                                                        ((0U 
                                                          == 
                                                          (0x1fU 
                                                           & ((((IData)(0x35U) 
                                                                * 
                                                                ((IData)(1U) 
                                                                 + (IData)(vlSelfRef.__PVT__victim_way))) 
                                                               - (IData)(1U)) 
                                                              - (IData)(0x34U))))
                                                          ? 0x20U
                                                          : 
                                                         ((IData)(0x40U) 
                                                          - 
                                                          (0x1fU 
                                                           & ((((IData)(0x35U) 
                                                                * 
                                                                ((IData)(1U) 
                                                                 + (IData)(vlSelfRef.__PVT__victim_way))) 
                                                               - (IData)(1U)) 
                                                              - (IData)(0x34U)))))) 
                                                       | (((0U 
                                                            == 
                                                            (0x1fU 
                                                             & ((((IData)(0x35U) 
                                                                  * 
                                                                  ((IData)(1U) 
                                                                   + (IData)(vlSelfRef.__PVT__victim_way))) 
                                                                 - (IData)(1U)) 
                                                                - (IData)(0x34U))))
                                                            ? 0ULL
                                                            : 
                                                           ((QData)((IData)(
                                                                            vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[
                                                                            (((IData)(0x1fU) 
                                                                              + 
                                                                              (0x1ffU 
                                                                               & ((((IData)(0x35U) 
                                                                                * 
                                                                                ((IData)(1U) 
                                                                                + (IData)(vlSelfRef.__PVT__victim_way))) 
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
                                                                    + (IData)(vlSelfRef.__PVT__victim_way))) 
                                                                  - (IData)(1U)) 
                                                                 - (IData)(0x34U)))))) 
                                                          | ((QData)((IData)(
                                                                             vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[
                                                                             (0xfU 
                                                                              & (((((IData)(0x35U) 
                                                                                * 
                                                                                ((IData)(1U) 
                                                                                + (IData)(vlSelfRef.__PVT__victim_way))) 
                                                                                - (IData)(1U)) 
                                                                                - (IData)(0x34U)) 
                                                                                >> 5U))])) 
                                                             >> 
                                                             (0x1fU 
                                                              & ((((IData)(0x35U) 
                                                                   * 
                                                                   ((IData)(1U) 
                                                                    + (IData)(vlSelfRef.__PVT__victim_way))) 
                                                                  - (IData)(1U)) 
                                                                 - (IData)(0x34U)))))))
                                                    : 0ULL);
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                                         & (~ (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_we))) 
                                                        & (IData)(vlSelfRef.__PVT__hit))))) {
                                            if ((1U 
                                                 & (~ 
                                                    (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                                      & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_we)) 
                                                     & (IData)(vlSelfRef.__PVT__hit))))) {
                                                if (
                                                    (1U 
                                                     & (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                                         & (~ (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_we))) 
                                                        & (~ (IData)(vlSelfRef.__PVT__hit))))) {
                                                    if (
                                                        (1U 
                                                         & (((IData)(vlSelfRef.__PVT__arr_valid_way) 
                                                             & (IData)(vlSelfRef.__PVT__arr_dirty_way)) 
                                                            >> (IData)(vlSelfRef.__PVT__victim_way)))) {
                                                        vlSelfRef.__PVT__pend_has_data_n = 1U;
                                                        vlSelfRef.__PVT__pend_is_probe_n = 0U;
                                                    } else if (
                                                               (1U 
                                                                & ((IData)(vlSelfRef.__PVT__arr_valid_way) 
                                                                   >> (IData)(vlSelfRef.__PVT__victim_way)))) {
                                                        vlSelfRef.__PVT__pend_has_data_n = 0U;
                                                        vlSelfRef.__PVT__pend_is_probe_n = 0U;
                                                    }
                                                    vlSelfRef.__PVT__pend_evict_state_n 
                                                        = 
                                                        (3U 
                                                         & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__scalar_state_way_r) 
                                                            >> 
                                                            (0xfU 
                                                             & VL_SHIFTL_III(4,32,32, (IData)(vlSelfRef.__PVT__victim_way), 1U))));
                                                    vlSelfRef.__PVT__pend_evict_tag_n 
                                                        = 
                                                        ((0x1a7U 
                                                          >= 
                                                          (0x1ffU 
                                                           & ((((IData)(0x35U) 
                                                                * 
                                                                ((IData)(1U) 
                                                                 + (IData)(vlSelfRef.__PVT__victim_way))) 
                                                               - (IData)(1U)) 
                                                              - (IData)(0x34U))))
                                                          ? 
                                                         (0x1fffffffffffffULL 
                                                          & (((QData)((IData)(
                                                                              vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[
                                                                              (((IData)(0x34U) 
                                                                                + 
                                                                                (0x1ffU 
                                                                                & ((((IData)(0x35U) 
                                                                                * 
                                                                                ((IData)(1U) 
                                                                                + (IData)(vlSelfRef.__PVT__victim_way))) 
                                                                                - (IData)(1U)) 
                                                                                - (IData)(0x34U)))) 
                                                                               >> 5U)])) 
                                                              << 
                                                              ((0U 
                                                                == 
                                                                (0x1fU 
                                                                 & ((((IData)(0x35U) 
                                                                      * 
                                                                      ((IData)(1U) 
                                                                       + (IData)(vlSelfRef.__PVT__victim_way))) 
                                                                     - (IData)(1U)) 
                                                                    - (IData)(0x34U))))
                                                                ? 0x20U
                                                                : 
                                                               ((IData)(0x40U) 
                                                                - 
                                                                (0x1fU 
                                                                 & ((((IData)(0x35U) 
                                                                      * 
                                                                      ((IData)(1U) 
                                                                       + (IData)(vlSelfRef.__PVT__victim_way))) 
                                                                     - (IData)(1U)) 
                                                                    - (IData)(0x34U)))))) 
                                                             | (((0U 
                                                                  == 
                                                                  (0x1fU 
                                                                   & ((((IData)(0x35U) 
                                                                        * 
                                                                        ((IData)(1U) 
                                                                         + (IData)(vlSelfRef.__PVT__victim_way))) 
                                                                       - (IData)(1U)) 
                                                                      - (IData)(0x34U))))
                                                                  ? 0ULL
                                                                  : 
                                                                 ((QData)((IData)(
                                                                                vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[
                                                                                (((IData)(0x1fU) 
                                                                                + 
                                                                                (0x1ffU 
                                                                                & ((((IData)(0x35U) 
                                                                                * 
                                                                                ((IData)(1U) 
                                                                                + (IData)(vlSelfRef.__PVT__victim_way))) 
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
                                                                          + (IData)(vlSelfRef.__PVT__victim_way))) 
                                                                        - (IData)(1U)) 
                                                                       - (IData)(0x34U)))))) 
                                                                | ((QData)((IData)(
                                                                                vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[
                                                                                (0xfU 
                                                                                & (((((IData)(0x35U) 
                                                                                * 
                                                                                ((IData)(1U) 
                                                                                + (IData)(vlSelfRef.__PVT__victim_way))) 
                                                                                - (IData)(1U)) 
                                                                                - (IData)(0x34U)) 
                                                                                >> 5U))])) 
                                                                   >> 
                                                                   (0x1fU 
                                                                    & ((((IData)(0x35U) 
                                                                         * 
                                                                         ((IData)(1U) 
                                                                          + (IData)(vlSelfRef.__PVT__victim_way))) 
                                                                        - (IData)(1U)) 
                                                                       - (IData)(0x34U)))))))
                                                          : 0ULL);
                                                } else if (
                                                           (1U 
                                                            & (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                                                & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_we)) 
                                                               & (~ (IData)(vlSelfRef.__PVT__hit))))) {
                                                    if (
                                                        (1U 
                                                         & (((IData)(vlSelfRef.__PVT__arr_valid_way) 
                                                             & (IData)(vlSelfRef.__PVT__arr_dirty_way)) 
                                                            >> (IData)(vlSelfRef.__PVT__victim_way)))) {
                                                        vlSelfRef.__PVT__pend_has_data_n = 1U;
                                                        vlSelfRef.__PVT__pend_is_probe_n = 0U;
                                                    } else if (
                                                               (1U 
                                                                & ((IData)(vlSelfRef.__PVT__arr_valid_way) 
                                                                   >> (IData)(vlSelfRef.__PVT__victim_way)))) {
                                                        vlSelfRef.__PVT__pend_has_data_n = 0U;
                                                        vlSelfRef.__PVT__pend_is_probe_n = 0U;
                                                    }
                                                    vlSelfRef.__PVT__pend_evict_state_n 
                                                        = 
                                                        (3U 
                                                         & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__scalar_state_way_r) 
                                                            >> 
                                                            (0xfU 
                                                             & VL_SHIFTL_III(4,32,32, (IData)(vlSelfRef.__PVT__victim_way), 1U))));
                                                    vlSelfRef.__PVT__pend_evict_tag_n 
                                                        = 
                                                        ((0x1a7U 
                                                          >= 
                                                          (0x1ffU 
                                                           & ((((IData)(0x35U) 
                                                                * 
                                                                ((IData)(1U) 
                                                                 + (IData)(vlSelfRef.__PVT__victim_way))) 
                                                               - (IData)(1U)) 
                                                              - (IData)(0x34U))))
                                                          ? 
                                                         (0x1fffffffffffffULL 
                                                          & (((QData)((IData)(
                                                                              vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[
                                                                              (((IData)(0x34U) 
                                                                                + 
                                                                                (0x1ffU 
                                                                                & ((((IData)(0x35U) 
                                                                                * 
                                                                                ((IData)(1U) 
                                                                                + (IData)(vlSelfRef.__PVT__victim_way))) 
                                                                                - (IData)(1U)) 
                                                                                - (IData)(0x34U)))) 
                                                                               >> 5U)])) 
                                                              << 
                                                              ((0U 
                                                                == 
                                                                (0x1fU 
                                                                 & ((((IData)(0x35U) 
                                                                      * 
                                                                      ((IData)(1U) 
                                                                       + (IData)(vlSelfRef.__PVT__victim_way))) 
                                                                     - (IData)(1U)) 
                                                                    - (IData)(0x34U))))
                                                                ? 0x20U
                                                                : 
                                                               ((IData)(0x40U) 
                                                                - 
                                                                (0x1fU 
                                                                 & ((((IData)(0x35U) 
                                                                      * 
                                                                      ((IData)(1U) 
                                                                       + (IData)(vlSelfRef.__PVT__victim_way))) 
                                                                     - (IData)(1U)) 
                                                                    - (IData)(0x34U)))))) 
                                                             | (((0U 
                                                                  == 
                                                                  (0x1fU 
                                                                   & ((((IData)(0x35U) 
                                                                        * 
                                                                        ((IData)(1U) 
                                                                         + (IData)(vlSelfRef.__PVT__victim_way))) 
                                                                       - (IData)(1U)) 
                                                                      - (IData)(0x34U))))
                                                                  ? 0ULL
                                                                  : 
                                                                 ((QData)((IData)(
                                                                                vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[
                                                                                (((IData)(0x1fU) 
                                                                                + 
                                                                                (0x1ffU 
                                                                                & ((((IData)(0x35U) 
                                                                                * 
                                                                                ((IData)(1U) 
                                                                                + (IData)(vlSelfRef.__PVT__victim_way))) 
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
                                                                          + (IData)(vlSelfRef.__PVT__victim_way))) 
                                                                        - (IData)(1U)) 
                                                                       - (IData)(0x34U)))))) 
                                                                | ((QData)((IData)(
                                                                                vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[
                                                                                (0xfU 
                                                                                & (((((IData)(0x35U) 
                                                                                * 
                                                                                ((IData)(1U) 
                                                                                + (IData)(vlSelfRef.__PVT__victim_way))) 
                                                                                - (IData)(1U)) 
                                                                                - (IData)(0x34U)) 
                                                                                >> 5U))])) 
                                                                   >> 
                                                                   (0x1fU 
                                                                    & ((((IData)(0x35U) 
                                                                         * 
                                                                         ((IData)(1U) 
                                                                          + (IData)(vlSelfRef.__PVT__victim_way))) 
                                                                        - (IData)(1U)) 
                                                                       - (IData)(0x34U)))))))
                                                          : 0ULL);
                                                } else if (vlSelfRef.__PVT__vlsu_miss_refill_req) {
                                                    vlSelfRef.__PVT__pend_evict_state_n 
                                                        = 
                                                        (3U 
                                                         & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__scalar_state_way_r) 
                                                            >> 
                                                            (0xfU 
                                                             & VL_SHIFTL_III(4,32,32, (IData)(vlSelfRef.__PVT__victim_way), 1U))));
                                                    vlSelfRef.__PVT__pend_evict_tag_n 
                                                        = 
                                                        ((0x1a7U 
                                                          >= 
                                                          (0x1ffU 
                                                           & ((((IData)(0x35U) 
                                                                * 
                                                                ((IData)(1U) 
                                                                 + (IData)(vlSelfRef.__PVT__victim_way))) 
                                                               - (IData)(1U)) 
                                                              - (IData)(0x34U))))
                                                          ? 
                                                         (0x1fffffffffffffULL 
                                                          & (((QData)((IData)(
                                                                              vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[
                                                                              (((IData)(0x34U) 
                                                                                + 
                                                                                (0x1ffU 
                                                                                & ((((IData)(0x35U) 
                                                                                * 
                                                                                ((IData)(1U) 
                                                                                + (IData)(vlSelfRef.__PVT__victim_way))) 
                                                                                - (IData)(1U)) 
                                                                                - (IData)(0x34U)))) 
                                                                               >> 5U)])) 
                                                              << 
                                                              ((0U 
                                                                == 
                                                                (0x1fU 
                                                                 & ((((IData)(0x35U) 
                                                                      * 
                                                                      ((IData)(1U) 
                                                                       + (IData)(vlSelfRef.__PVT__victim_way))) 
                                                                     - (IData)(1U)) 
                                                                    - (IData)(0x34U))))
                                                                ? 0x20U
                                                                : 
                                                               ((IData)(0x40U) 
                                                                - 
                                                                (0x1fU 
                                                                 & ((((IData)(0x35U) 
                                                                      * 
                                                                      ((IData)(1U) 
                                                                       + (IData)(vlSelfRef.__PVT__victim_way))) 
                                                                     - (IData)(1U)) 
                                                                    - (IData)(0x34U)))))) 
                                                             | (((0U 
                                                                  == 
                                                                  (0x1fU 
                                                                   & ((((IData)(0x35U) 
                                                                        * 
                                                                        ((IData)(1U) 
                                                                         + (IData)(vlSelfRef.__PVT__victim_way))) 
                                                                       - (IData)(1U)) 
                                                                      - (IData)(0x34U))))
                                                                  ? 0ULL
                                                                  : 
                                                                 ((QData)((IData)(
                                                                                vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[
                                                                                (((IData)(0x1fU) 
                                                                                + 
                                                                                (0x1ffU 
                                                                                & ((((IData)(0x35U) 
                                                                                * 
                                                                                ((IData)(1U) 
                                                                                + (IData)(vlSelfRef.__PVT__victim_way))) 
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
                                                                          + (IData)(vlSelfRef.__PVT__victim_way))) 
                                                                        - (IData)(1U)) 
                                                                       - (IData)(0x34U)))))) 
                                                                | ((QData)((IData)(
                                                                                vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_way_r[
                                                                                (0xfU 
                                                                                & (((((IData)(0x35U) 
                                                                                * 
                                                                                ((IData)(1U) 
                                                                                + (IData)(vlSelfRef.__PVT__victim_way))) 
                                                                                - (IData)(1U)) 
                                                                                - (IData)(0x34U)) 
                                                                                >> 5U))])) 
                                                                   >> 
                                                                   (0x1fU 
                                                                    & ((((IData)(0x35U) 
                                                                         * 
                                                                         ((IData)(1U) 
                                                                          + (IData)(vlSelfRef.__PVT__victim_way))) 
                                                                        - (IData)(1U)) 
                                                                       - (IData)(0x34U)))))))
                                                          : 0ULL);
                                                }
                                            }
                                        }
                                    }
                                }
                                if ((((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                      & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_sc_i)) 
                                     & (IData)(vlSelfRef.__PVT__hit))) {
                                    if ((((IData)(vlSelfRef.__PVT__resv_valid_q) 
                                          & ((0x3ffffffffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[1U])) 
                                                  << 0x1aU) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[0U])) 
                                                    >> 6U))) 
                                             == vlSelfRef.__PVT__resv_addr_q)) 
                                         & ((1U & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_amo_word_i)) 
                                            == (IData)(vlSelfRef.__PVT__resv_word_q)))) {
                                        vlSelfRef.__PVT__pend_word_n 
                                            = (7U & 
                                               (vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[0U] 
                                                >> 3U));
                                        vlSelfRef.__PVT__pend_index_n 
                                            = (0x1fU 
                                               & (vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[0U] 
                                                  >> 6U));
                                        vlSelfRef.__PVT__pend_tag_n 
                                            = (0x1fffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[1U])) 
                                                   << 0x15U) 
                                                  | ((QData)((IData)(
                                                                     vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[0U])) 
                                                     >> 0xbU)));
                                        vlSelfRef.__PVT__pend_victim_n 
                                            = vlSelfRef.__PVT__hit_way;
                                    }
                                } else if ((1U & (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                                   & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_sc_i)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__hit))))) {
                                    vlSelfRef.__PVT__pend_word_n 
                                        = (7U & (vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[0U] 
                                                 >> 3U));
                                    vlSelfRef.__PVT__pend_index_n 
                                        = (0x1fU & 
                                           (vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[0U] 
                                            >> 6U));
                                    vlSelfRef.__PVT__pend_tag_n 
                                        = (0x1fffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[1U])) 
                                               << 0x15U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[0U])) 
                                                 >> 0xbU)));
                                    vlSelfRef.__PVT__pend_victim_n 
                                        = vlSelfRef.__PVT__victim_way;
                                } else if ((((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                             & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_amo_i)) 
                                            & (IData)(vlSelfRef.__PVT__hit))) {
                                    if ((1U == (3U 
                                                & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__scalar_state_way_r) 
                                                   >> 
                                                   (0xfU 
                                                    & VL_SHIFTL_III(4,32,32, (IData)(vlSelfRef.__PVT__hit_way), 1U)))))) {
                                        vlSelfRef.__PVT__pend_word_n 
                                            = (7U & 
                                               ((vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[0U] 
                                                 << 0x1dU) 
                                                | (vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[0U] 
                                                   >> 3U)));
                                        vlSelfRef.__PVT__pend_index_n 
                                            = (0x1fU 
                                               & ((vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[0U] 
                                                   << 0x1aU) 
                                                  | (vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[0U] 
                                                     >> 6U)));
                                        vlSelfRef.__PVT__pend_tag_n 
                                            = (0x1fffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[1U])) 
                                                   << 0x35U) 
                                                  | (((QData)((IData)(
                                                                      vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[1U])) 
                                                      << 0x15U) 
                                                     | ((QData)((IData)(
                                                                        vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[0U])) 
                                                        >> 0xbU))));
                                    } else {
                                        vlSelfRef.__PVT__pend_word_n 
                                            = (7U & 
                                               ((vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[0U] 
                                                 << 0x1dU) 
                                                | (vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[0U] 
                                                   >> 3U)));
                                        vlSelfRef.__PVT__pend_index_n 
                                            = (0x1fU 
                                               & ((vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[0U] 
                                                   << 0x1aU) 
                                                  | (vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[0U] 
                                                     >> 6U)));
                                        vlSelfRef.__PVT__pend_tag_n 
                                            = (0x1fffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[1U])) 
                                                   << 0x35U) 
                                                  | (((QData)((IData)(
                                                                      vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[1U])) 
                                                      << 0x15U) 
                                                     | ((QData)((IData)(
                                                                        vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[0U])) 
                                                        >> 0xbU))));
                                    }
                                    vlSelfRef.__PVT__pend_victim_n 
                                        = vlSelfRef.__PVT__hit_way;
                                } else if ((1U & (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                                   & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_amo_i)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__hit))))) {
                                    vlSelfRef.__PVT__pend_word_n 
                                        = (7U & (vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[0U] 
                                                 >> 3U));
                                    vlSelfRef.__PVT__pend_index_n 
                                        = (0x1fU & 
                                           (vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[0U] 
                                            >> 6U));
                                    vlSelfRef.__PVT__pend_tag_n 
                                        = (0x1fffffffffffffULL 
                                           & (((QData)((IData)(
                                                               vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[1U])) 
                                               << 0x15U) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[0U])) 
                                                 >> 0xbU)));
                                    vlSelfRef.__PVT__pend_victim_n 
                                        = vlSelfRef.__PVT__victim_way;
                                } else if ((1U & (~ 
                                                  (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                                    & (~ (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_we))) 
                                                   & (IData)(vlSelfRef.__PVT__hit))))) {
                                    if ((((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                          & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_we)) 
                                         & (IData)(vlSelfRef.__PVT__hit))) {
                                        if ((1U == 
                                             (3U & 
                                              ((IData)(vlSelfRef.__PVT__u_arrays__DOT__scalar_state_way_r) 
                                               >> (0xfU 
                                                   & VL_SHIFTL_III(4,32,32, (IData)(vlSelfRef.__PVT__hit_way), 1U)))))) {
                                            vlSelfRef.__PVT__pend_word_n 
                                                = (7U 
                                                   & (vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[0U] 
                                                      >> 3U));
                                            vlSelfRef.__PVT__pend_index_n 
                                                = (0x1fU 
                                                   & (vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[0U] 
                                                      >> 6U));
                                            vlSelfRef.__PVT__pend_tag_n 
                                                = (0x1fffffffffffffULL 
                                                   & (((QData)((IData)(
                                                                       vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[1U])) 
                                                       << 0x15U) 
                                                      | ((QData)((IData)(
                                                                         vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[0U])) 
                                                         >> 0xbU)));
                                            vlSelfRef.__PVT__pend_victim_n 
                                                = vlSelfRef.__PVT__hit_way;
                                        }
                                    } else if ((1U 
                                                & (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                                    & (~ (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_we))) 
                                                   & (~ (IData)(vlSelfRef.__PVT__hit))))) {
                                        vlSelfRef.__PVT__pend_word_n 
                                            = (7U & 
                                               (vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[0U] 
                                                >> 3U));
                                        vlSelfRef.__PVT__pend_index_n 
                                            = (0x1fU 
                                               & (vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[0U] 
                                                  >> 6U));
                                        vlSelfRef.__PVT__pend_tag_n 
                                            = (0x1fffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[1U])) 
                                                   << 0x15U) 
                                                  | ((QData)((IData)(
                                                                     vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[0U])) 
                                                     >> 0xbU)));
                                        vlSelfRef.__PVT__pend_victim_n 
                                            = vlSelfRef.__PVT__victim_way;
                                    } else if ((1U 
                                                & (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                                    & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_we)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__hit))))) {
                                        vlSelfRef.__PVT__pend_word_n 
                                            = (7U & 
                                               (vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[0U] 
                                                >> 3U));
                                        vlSelfRef.__PVT__pend_index_n 
                                            = (0x1fU 
                                               & (vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[0U] 
                                                  >> 6U));
                                        vlSelfRef.__PVT__pend_tag_n 
                                            = (0x1fffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[1U])) 
                                                   << 0x15U) 
                                                  | ((QData)((IData)(
                                                                     vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[0U])) 
                                                     >> 0xbU)));
                                        vlSelfRef.__PVT__pend_victim_n 
                                            = vlSelfRef.__PVT__victim_way;
                                    } else if (vlSelfRef.__PVT__vlsu_miss_refill_req) {
                                        vlSelfRef.__PVT__pend_word_n = 0U;
                                        vlSelfRef.__PVT__pend_index_n 
                                            = (0x1fU 
                                               & (IData)(
                                                         (vlSelfRef.__PVT__vlsu_miss_refill_addr 
                                                          >> 6U)));
                                        vlSelfRef.__PVT__pend_tag_n 
                                            = (vlSelfRef.__PVT__vlsu_miss_refill_addr 
                                               >> 0xbU);
                                        vlSelfRef.__PVT__pend_victim_n 
                                            = vlSelfRef.__PVT__victim_way;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if ((4U & (IData)(vlSelfRef.__PVT__state))) {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__state)))) {
                    vlSelfRef.__PVT__plru_access_n = 1U;
                    vlSelfRef.__PVT__plru_used_way_n 
                        = vlSelfRef.__PVT__pend_victim_q;
                    if (vlSelfRef.__PVT__pend_is_lr_q) {
                        vlSelfRef.__PVT__rvalid_n = 1U;
                    } else if (vlSelfRef.__PVT__pend_is_sc_q) {
                        vlSelfRef.__PVT__rvalid_n = 1U;
                    } else if ((1U & (~ (IData)(vlSelfRef.__PVT__pend_is_amo_q)))) {
                        if (vlSelfRef.__PVT__pend_is_store_q) {
                            vlSelfRef.__PVT__rvalid_n = 0U;
                        } else if ((0xdU != (IData)(vlSelfRef.__PVT__return_state_q))) {
                            vlSelfRef.__PVT__rvalid_n = 1U;
                        }
                    }
                    if ((1U & (~ (IData)(vlSelfRef.__PVT__pend_is_lr_q)))) {
                        if (vlSelfRef.__PVT__pend_is_sc_q) {
                            vlSelfRef.__PVT__pend_is_store_n = 0U;
                            if (((IData)(vlSelfRef.__PVT__sc_success_q) 
                                 & (IData)(vlSelfRef.__PVT__resv_valid_q))) {
                                vlSelfRef.__PVT__arr_tag_in 
                                    = vlSelfRef.__PVT__pend_tag_q;
                            }
                        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__pend_is_amo_q)))) {
                            if (vlSelfRef.__PVT__pend_is_store_q) {
                                vlSelfRef.__PVT__arr_tag_in 
                                    = vlSelfRef.__PVT__pend_tag_q;
                            }
                        }
                    }
                }
            }
            if ((2U & (IData)(vlSelfRef.__PVT__state))) {
                if ((1U & (IData)(vlSelfRef.__PVT__state))) {
                    if ((((IData)(vlSelfRef.tl_d_valid_i) 
                          & (IData)(vlSelfRef.tl_d_ready_o)) 
                         & (6U == (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__l2_d_opcode)))) {
                        vlSelfRef.__PVT__state_n = 
                            ((IData)(vlSelfRef.__PVT__pend_is_probe_q)
                              ? 0U : 1U);
                    }
                } else {
                    vlSelfRef.__PVT__arr_way_sel = vlSelfRef.__PVT__pend_victim_q;
                    vlSelfRef.__PVT__arr_word_sel = vlSelfRef.__PVT__beat_q;
                    if (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__l1_c_ready) 
                         & (IData)(vlSelfRef.tl_c_valid_o))) {
                        if ((7U == (IData)(vlSelfRef.__PVT__beat_q))) {
                            vlSelfRef.__PVT__beat_n = 0U;
                            vlSelfRef.__PVT__state_n 
                                = ((IData)(vlSelfRef.__PVT__pend_is_probe_q)
                                    ? 0U : 7U);
                        } else {
                            vlSelfRef.__PVT__beat_n 
                                = (7U & ((IData)(1U) 
                                         + (IData)(vlSelfRef.__PVT__beat_q)));
                            vlSelfRef.__PVT__state_n = 6U;
                        }
                    }
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__state))) {
                if (vlSelfRef.__PVT__pend_has_data_q) {
                    vlSelfRef.__PVT__arr_way_sel = vlSelfRef.__PVT__pend_victim_q;
                    vlSelfRef.__PVT__arr_word_sel = vlSelfRef.__PVT__beat_q;
                }
                if (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__l1_c_ready) 
                     & (IData)(vlSelfRef.tl_c_valid_o))) {
                    if (vlSelfRef.__PVT__pend_has_data_q) {
                        if ((7U == (IData)(vlSelfRef.__PVT__beat_q))) {
                            vlSelfRef.__PVT__beat_n = 0U;
                            vlSelfRef.__PVT__state_n 
                                = ((IData)(vlSelfRef.__PVT__pend_is_probe_q)
                                    ? 0U : 7U);
                        } else {
                            vlSelfRef.__PVT__beat_n 
                                = (7U & ((IData)(1U) 
                                         + (IData)(vlSelfRef.__PVT__beat_q)));
                            vlSelfRef.__PVT__state_n = 6U;
                        }
                    } else {
                        vlSelfRef.__PVT__state_n = 
                            ((IData)(vlSelfRef.__PVT__pend_is_probe_q)
                              ? 0U : 7U);
                    }
                }
            } else {
                vlSelfRef.__PVT__arr_word_sel = vlSelfRef.__PVT__pend_word_q;
                vlSelfRef.__PVT__arr_way_sel = vlSelfRef.__PVT__pend_victim_q;
                if (vlSelfRef.__PVT__pend_is_lr_q) {
                    vlSelfRef.__PVT__resv_valid_n = 1U;
                    vlSelfRef.__PVT__state_n = 0U;
                } else if (vlSelfRef.__PVT__pend_is_sc_q) {
                    if (((IData)(vlSelfRef.__PVT__sc_success_q) 
                         & (IData)(vlSelfRef.__PVT__resv_valid_q))) {
                        vlSelfRef.__PVT__arr_write_en = 1U;
                        vlSelfRef.__PVT__arr_state_in = 3U;
                        vlSelfRef.__PVT__arr_be = ((IData)(vlSelfRef.__PVT__pend_amo_word_q)
                                                    ? 0xfU
                                                    : 0xffU);
                    }
                    vlSelfRef.__PVT__resv_valid_n = 0U;
                    vlSelfRef.__PVT__state_n = 0U;
                } else if (vlSelfRef.__PVT__pend_is_amo_q) {
                    vlSelfRef.__PVT__state_n = 0xaU;
                } else if (vlSelfRef.__PVT__pend_is_store_q) {
                    vlSelfRef.__PVT__arr_write_en = 1U;
                    vlSelfRef.__PVT__arr_state_in = 3U;
                    vlSelfRef.__PVT__arr_be = vlSelfRef.__PVT__pend_be_q;
                    vlSelfRef.__PVT__state_n = 0U;
                } else {
                    vlSelfRef.__PVT__state_n = ((0xdU 
                                                 == (IData)(vlSelfRef.__PVT__return_state_q))
                                                 ? 0xdU
                                                 : 0U);
                }
            }
        } else {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__state)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.tl_b_valid_i) 
                                  & (IData)(vlSelfRef.tl_b_ready_o))))) {
                        if ((((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                              & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_lr_i)) 
                             & (IData)(vlSelfRef.__PVT__hit))) {
                            vlSelfRef.__PVT__plru_access_n = 1U;
                            vlSelfRef.__PVT__plru_used_way_n 
                                = vlSelfRef.__PVT__hit_way;
                            vlSelfRef.__PVT__rvalid_n = 1U;
                        } else if ((1U & (~ (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                              & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_lr_i)) 
                                             & (~ (IData)(vlSelfRef.__PVT__hit)))))) {
                            if ((1U & (~ (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                           & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_sc_i)) 
                                          & (IData)(vlSelfRef.__PVT__hit))))) {
                                if ((1U & (~ (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                               & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_sc_i)) 
                                              & (~ (IData)(vlSelfRef.__PVT__hit)))))) {
                                    if ((((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                          & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_amo_i)) 
                                         & (IData)(vlSelfRef.__PVT__hit))) {
                                        if ((1U != 
                                             (3U & 
                                              ((IData)(vlSelfRef.__PVT__u_arrays__DOT__scalar_state_way_r) 
                                               >> (0xfU 
                                                   & VL_SHIFTL_III(4,32,32, (IData)(vlSelfRef.__PVT__hit_way), 1U)))))) {
                                            vlSelfRef.__PVT__plru_access_n = 1U;
                                            vlSelfRef.__PVT__plru_used_way_n 
                                                = vlSelfRef.__PVT__hit_way;
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                                     & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_amo_i)) 
                                                    & (~ (IData)(vlSelfRef.__PVT__hit)))))) {
                                        if ((((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                              & (~ (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_we))) 
                                             & (IData)(vlSelfRef.__PVT__hit))) {
                                            vlSelfRef.__PVT__plru_access_n = 1U;
                                            vlSelfRef.__PVT__plru_used_way_n 
                                                = vlSelfRef.__PVT__hit_way;
                                        } else if (
                                                   (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                                     & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_we)) 
                                                    & (IData)(vlSelfRef.__PVT__hit))) {
                                            if ((1U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__scalar_state_way_r) 
                                                     >> 
                                                     (0xfU 
                                                      & VL_SHIFTL_III(4,32,32, (IData)(vlSelfRef.__PVT__hit_way), 1U)))))) {
                                                vlSelfRef.__PVT__plru_access_n = 1U;
                                                vlSelfRef.__PVT__plru_used_way_n 
                                                    = vlSelfRef.__PVT__hit_way;
                                            }
                                        }
                                    }
                                }
                            }
                            if ((((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                  & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_sc_i)) 
                                 & (IData)(vlSelfRef.__PVT__hit))) {
                                if ((1U & (~ (((IData)(vlSelfRef.__PVT__resv_valid_q) 
                                               & ((0x3ffffffffffffffULL 
                                                   & (((QData)((IData)(
                                                                       vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[1U])) 
                                                       << 0x1aU) 
                                                      | ((QData)((IData)(
                                                                         vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[0U])) 
                                                         >> 6U))) 
                                                  == vlSelfRef.__PVT__resv_addr_q)) 
                                              & ((1U 
                                                  & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_amo_word_i)) 
                                                 == (IData)(vlSelfRef.__PVT__resv_word_q)))))) {
                                    vlSelfRef.__PVT__rvalid_n = 1U;
                                }
                            } else if ((1U & (~ (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                                  & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_sc_i)) 
                                                 & (~ (IData)(vlSelfRef.__PVT__hit)))))) {
                                if ((1U & (~ (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                               & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_amo_i)) 
                                              & (IData)(vlSelfRef.__PVT__hit))))) {
                                    if ((1U & (~ (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                                   & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_amo_i)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__hit)))))) {
                                        if ((((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                              & (~ (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_we))) 
                                             & (IData)(vlSelfRef.__PVT__hit))) {
                                            vlSelfRef.__PVT__rvalid_n = 1U;
                                        }
                                    }
                                }
                            }
                        }
                        if ((1U & (~ (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                       & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_lr_i)) 
                                      & (IData)(vlSelfRef.__PVT__hit))))) {
                            if ((1U & (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                        & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_lr_i)) 
                                       & (~ (IData)(vlSelfRef.__PVT__hit))))) {
                                vlSelfRef.__PVT__pend_is_store_n = 0U;
                            } else if ((((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                         & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_sc_i)) 
                                        & (IData)(vlSelfRef.__PVT__hit))) {
                                if ((((IData)(vlSelfRef.__PVT__resv_valid_q) 
                                      & ((0x3ffffffffffffffULL 
                                          & (((QData)((IData)(
                                                              vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[1U])) 
                                              << 0x1aU) 
                                             | ((QData)((IData)(
                                                                vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[0U])) 
                                                >> 6U))) 
                                         == vlSelfRef.__PVT__resv_addr_q)) 
                                     & ((1U & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_amo_word_i)) 
                                        == (IData)(vlSelfRef.__PVT__resv_word_q)))) {
                                    vlSelfRef.__PVT__pend_is_store_n = 1U;
                                }
                            } else if ((1U & (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                               & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_sc_i)) 
                                              & (~ (IData)(vlSelfRef.__PVT__hit))))) {
                                vlSelfRef.__PVT__pend_is_store_n = 1U;
                            } else if ((((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                         & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_amo_i)) 
                                        & (IData)(vlSelfRef.__PVT__hit))) {
                                if ((1U == (3U & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__scalar_state_way_r) 
                                                  >> 
                                                  (0xfU 
                                                   & VL_SHIFTL_III(4,32,32, (IData)(vlSelfRef.__PVT__hit_way), 1U)))))) {
                                    vlSelfRef.__PVT__pend_is_store_n = 1U;
                                }
                            } else if ((1U & (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                               & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_amo_i)) 
                                              & (~ (IData)(vlSelfRef.__PVT__hit))))) {
                                vlSelfRef.__PVT__pend_is_store_n = 1U;
                            } else if ((1U & (~ (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                                  & (~ (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_we))) 
                                                 & (IData)(vlSelfRef.__PVT__hit))))) {
                                if ((((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                      & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_we)) 
                                     & (IData)(vlSelfRef.__PVT__hit))) {
                                    if ((1U == (3U 
                                                & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__scalar_state_way_r) 
                                                   >> 
                                                   (0xfU 
                                                    & VL_SHIFTL_III(4,32,32, (IData)(vlSelfRef.__PVT__hit_way), 1U)))))) {
                                        vlSelfRef.__PVT__pend_is_store_n = 1U;
                                    }
                                } else if ((1U & (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                                   & (~ (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_we))) 
                                                  & (~ (IData)(vlSelfRef.__PVT__hit))))) {
                                    vlSelfRef.__PVT__pend_is_store_n = 0U;
                                } else if ((1U & (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                                   & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_we)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__hit))))) {
                                    vlSelfRef.__PVT__pend_is_store_n = 1U;
                                } else if (vlSelfRef.__PVT__vlsu_miss_refill_req) {
                                    vlSelfRef.__PVT__pend_is_store_n = 0U;
                                }
                            }
                        }
                    }
                }
            }
            if ((2U & (IData)(vlSelfRef.__PVT__state))) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__state)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.tl_b_valid_i) 
                                  & (IData)(vlSelfRef.tl_b_ready_o))))) {
                        if (((IData)(vlSelfRef.tl_d_valid_i) 
                             & (IData)(vlSelfRef.tl_d_ready_o))) {
                            if ((5U == (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__l2_d_opcode))) {
                                vlSelfRef.__PVT__arr_tag_in 
                                    = vlSelfRef.__PVT__pend_tag_q;
                            }
                        }
                    }
                }
                if ((1U & (IData)(vlSelfRef.__PVT__state))) {
                    if (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__l1_e_ready) 
                         & (IData)(vlSelfRef.tl_e_valid_o))) {
                        vlSelfRef.__PVT__state_n = 4U;
                    }
                } else if (((IData)(vlSelfRef.tl_b_valid_i) 
                            & (IData)(vlSelfRef.tl_b_ready_o))) {
                    vlSelfRef.__PVT__probe_pend_index_n 
                        = vlSelfRef.__PVT__binv_index;
                    if (vlSelfRef.__PVT__binv_hit) {
                        vlSelfRef.__PVT__arr_way_sel 
                            = vlSelfRef.__PVT__binv_way;
                        vlSelfRef.__PVT__probe_pend_hit_n = 1U;
                        vlSelfRef.__PVT__probe_pend_way_n 
                            = vlSelfRef.__PVT__binv_way;
                        if ((1U & ((IData)(vlSelfRef.__PVT__arr_dirty_way) 
                                   >> (IData)(vlSelfRef.__PVT__binv_way)))) {
                            vlSelfRef.__PVT__beat_n = 0U;
                            vlSelfRef.__PVT__state_n = 9U;
                            vlSelfRef.__PVT__probe_pend_has_data_n = 1U;
                            vlSelfRef.__PVT__arr_write_en = 1U;
                            vlSelfRef.__PVT__arr_state_in = 0U;
                            vlSelfRef.__PVT__arr_be = 0U;
                            vlSelfRef.__PVT__arr_word_sel = 0U;
                        } else {
                            vlSelfRef.__PVT__arr_write_en = 1U;
                            vlSelfRef.__PVT__arr_state_in = 0U;
                            vlSelfRef.__PVT__arr_be = 0U;
                            vlSelfRef.__PVT__state_n = 9U;
                            vlSelfRef.__PVT__probe_pend_has_data_n = 0U;
                        }
                    } else {
                        vlSelfRef.__PVT__state_n = 9U;
                        vlSelfRef.__PVT__probe_pend_has_data_n = 0U;
                        vlSelfRef.__PVT__probe_pend_hit_n = 0U;
                    }
                    vlSelfRef.__PVT__probe_pend_tag_n 
                        = vlSelfRef.__PVT__binv_tag;
                    if (((IData)(vlSelfRef.__PVT__resv_valid_q) 
                         & (((vlSelfRef.__PVT__binv_tag 
                              << 5U) | (QData)((IData)(vlSelfRef.__PVT__binv_index))) 
                            == vlSelfRef.__PVT__resv_addr_q))) {
                        vlSelfRef.__PVT__resv_valid_n = 0U;
                    }
                } else if (((IData)(vlSelfRef.tl_d_valid_i) 
                            & (IData)(vlSelfRef.tl_d_ready_o))) {
                    if ((5U == (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__l2_d_opcode))) {
                        vlSelfRef.__PVT__arr_word_sel 
                            = vlSelfRef.__PVT__beat_q;
                        vlSelfRef.__PVT__arr_way_sel 
                            = vlSelfRef.__PVT__pend_victim_q;
                        vlSelfRef.__PVT__arr_write_en = 1U;
                        if ((7U == (IData)(vlSelfRef.__PVT__beat_q))) {
                            vlSelfRef.__PVT__arr_state_in 
                                = ((IData)(vlSelfRef.__PVT__pend_is_store_q)
                                    ? 2U : 1U);
                            vlSelfRef.__PVT__beat_n = 0U;
                            vlSelfRef.__PVT__state_n = 3U;
                        } else {
                            vlSelfRef.__PVT__arr_state_in = 0U;
                            vlSelfRef.__PVT__beat_n 
                                = (7U & ((IData)(1U) 
                                         + (IData)(vlSelfRef.__PVT__beat_q)));
                            vlSelfRef.__PVT__state_n = 2U;
                        }
                        vlSelfRef.__PVT__arr_be = 0xffU;
                    } else if ((4U == (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__l2_d_opcode))) {
                        vlSelfRef.__PVT__state_n = 3U;
                    }
                }
            } else {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__state)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.tl_b_valid_i) 
                                  & (IData)(vlSelfRef.tl_b_ready_o))))) {
                        if ((1U & (~ (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                       & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_lr_i)) 
                                      & (IData)(vlSelfRef.__PVT__hit))))) {
                            if ((1U & (~ (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                           & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_lr_i)) 
                                          & (~ (IData)(vlSelfRef.__PVT__hit)))))) {
                                if ((1U & (~ (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                               & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_sc_i)) 
                                              & (IData)(vlSelfRef.__PVT__hit))))) {
                                    if ((1U & (~ (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                                   & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_sc_i)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__hit)))))) {
                                        if ((1U & (~ 
                                                   (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                                     & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_amo_i)) 
                                                    & (IData)(vlSelfRef.__PVT__hit))))) {
                                            if ((1U 
                                                 & (~ 
                                                    (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                                      & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_amo_i)) 
                                                     & (~ (IData)(vlSelfRef.__PVT__hit)))))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                                          & (~ (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_we))) 
                                                         & (IData)(vlSelfRef.__PVT__hit))))) {
                                                    if (
                                                        (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                                          & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_we)) 
                                                         & (IData)(vlSelfRef.__PVT__hit))) {
                                                        if (
                                                            (1U 
                                                             != 
                                                             (3U 
                                                              & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__scalar_state_way_r) 
                                                                 >> 
                                                                 (0xfU 
                                                                  & VL_SHIFTL_III(4,32,32, (IData)(vlSelfRef.__PVT__hit_way), 1U)))))) {
                                                            vlSelfRef.__PVT__arr_tag_in 
                                                                = 
                                                                (0x1fffffffffffffULL 
                                                                 & (((QData)((IData)(
                                                                                vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[1U])) 
                                                                     << 0x15U) 
                                                                    | ((QData)((IData)(
                                                                                vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[0U])) 
                                                                       >> 0xbU)));
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                if ((1U & (IData)(vlSelfRef.__PVT__state))) {
                    if (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__l1_a_ready) 
                         & (IData)(vlSelfRef.tl_a_valid_o))) {
                        vlSelfRef.__PVT__state_n = 2U;
                    }
                } else if (((IData)(vlSelfRef.tl_b_valid_i) 
                            & (IData)(vlSelfRef.tl_b_ready_o))) {
                    vlSelfRef.__PVT__probe_pend_index_n 
                        = vlSelfRef.__PVT__binv_index;
                    if (vlSelfRef.__PVT__binv_hit) {
                        vlSelfRef.__PVT__arr_way_sel 
                            = vlSelfRef.__PVT__binv_way;
                        vlSelfRef.__PVT__probe_pend_hit_n = 1U;
                        vlSelfRef.__PVT__probe_pend_way_n 
                            = vlSelfRef.__PVT__binv_way;
                        if ((1U & ((IData)(vlSelfRef.__PVT__arr_dirty_way) 
                                   >> (IData)(vlSelfRef.__PVT__binv_way)))) {
                            vlSelfRef.__PVT__beat_n = 0U;
                            vlSelfRef.__PVT__state_n = 9U;
                            vlSelfRef.__PVT__probe_pend_has_data_n = 1U;
                            vlSelfRef.__PVT__arr_write_en = 1U;
                            vlSelfRef.__PVT__arr_state_in = 0U;
                            vlSelfRef.__PVT__arr_be = 0U;
                            vlSelfRef.__PVT__arr_word_sel = 0U;
                        } else {
                            vlSelfRef.__PVT__arr_write_en = 1U;
                            vlSelfRef.__PVT__arr_state_in = 0U;
                            vlSelfRef.__PVT__arr_be = 0U;
                            vlSelfRef.__PVT__state_n = 9U;
                            vlSelfRef.__PVT__probe_pend_has_data_n = 0U;
                        }
                    } else {
                        vlSelfRef.__PVT__state_n = 9U;
                        vlSelfRef.__PVT__probe_pend_has_data_n = 0U;
                        vlSelfRef.__PVT__probe_pend_hit_n = 0U;
                    }
                    vlSelfRef.__PVT__probe_pend_tag_n 
                        = vlSelfRef.__PVT__binv_tag;
                    if (((IData)(vlSelfRef.__PVT__resv_valid_q) 
                         & (((vlSelfRef.__PVT__binv_tag 
                              << 5U) | (QData)((IData)(vlSelfRef.__PVT__binv_index))) 
                            == vlSelfRef.__PVT__resv_addr_q))) {
                        vlSelfRef.__PVT__resv_valid_n = 0U;
                    }
                } else if ((((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                             & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_lr_i)) 
                            & (IData)(vlSelfRef.__PVT__hit))) {
                    vlSelfRef.__PVT__resv_valid_n = 1U;
                } else if ((1U & (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                   & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_lr_i)) 
                                  & (~ (IData)(vlSelfRef.__PVT__hit))))) {
                    vlSelfRef.__PVT__beat_n = 0U;
                    if ((1U & ((IData)(vlSelfRef.__PVT__arr_valid_way) 
                               >> (IData)(vlSelfRef.__PVT__victim_way)))) {
                        vlSelfRef.__PVT__state_n = 5U;
                        vlSelfRef.__PVT__arr_word_sel = 0U;
                        vlSelfRef.__PVT__arr_way_sel 
                            = vlSelfRef.__PVT__victim_way;
                    } else {
                        vlSelfRef.__PVT__state_n = 1U;
                    }
                } else if ((((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                             & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_sc_i)) 
                            & (IData)(vlSelfRef.__PVT__hit))) {
                    if ((((IData)(vlSelfRef.__PVT__resv_valid_q) 
                          & ((0x3ffffffffffffffULL 
                              & (((QData)((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[1U])) 
                                  << 0x1aU) | ((QData)((IData)(
                                                               vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[0U])) 
                                               >> 6U))) 
                             == vlSelfRef.__PVT__resv_addr_q)) 
                         & ((1U & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_amo_word_i)) 
                            == (IData)(vlSelfRef.__PVT__resv_word_q)))) {
                        vlSelfRef.__PVT__state_n = 8U;
                    } else {
                        vlSelfRef.__PVT__resv_valid_n = 0U;
                    }
                } else if ((1U & (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                   & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_sc_i)) 
                                  & (~ (IData)(vlSelfRef.__PVT__hit))))) {
                    vlSelfRef.__PVT__beat_n = 0U;
                    if ((1U & ((IData)(vlSelfRef.__PVT__arr_valid_way) 
                               >> (IData)(vlSelfRef.__PVT__victim_way)))) {
                        vlSelfRef.__PVT__state_n = 5U;
                        vlSelfRef.__PVT__arr_word_sel = 0U;
                        vlSelfRef.__PVT__arr_way_sel 
                            = vlSelfRef.__PVT__victim_way;
                    } else {
                        vlSelfRef.__PVT__state_n = 1U;
                    }
                } else if ((((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                             & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_amo_i)) 
                            & (IData)(vlSelfRef.__PVT__hit))) {
                    if ((1U == (3U & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__scalar_state_way_r) 
                                      >> (0xfU & VL_SHIFTL_III(4,32,32, (IData)(vlSelfRef.__PVT__hit_way), 1U)))))) {
                        if (((IData)(vlSelfRef.__PVT__resv_valid_q) 
                             & ((0x3ffffffffffffffULL 
                                 & (((QData)((IData)(
                                                     vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[1U])) 
                                     << 0x1aU) | ((QData)((IData)(
                                                                  vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[0U])) 
                                                  >> 6U))) 
                                == vlSelfRef.__PVT__resv_addr_q))) {
                            vlSelfRef.__PVT__resv_valid_n = 0U;
                        }
                        vlSelfRef.__PVT__state_n = 8U;
                    } else {
                        if (((IData)(vlSelfRef.__PVT__resv_valid_q) 
                             & ((0x3ffffffffffffffULL 
                                 & (((QData)((IData)(
                                                     vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[1U])) 
                                     << 0x1aU) | ((QData)((IData)(
                                                                  vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[0U])) 
                                                  >> 6U))) 
                                == vlSelfRef.__PVT__resv_addr_q))) {
                            vlSelfRef.__PVT__resv_valid_n = 0U;
                        }
                        vlSelfRef.__PVT__state_n = 0xaU;
                    }
                } else if ((1U & (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                   & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_amo_i)) 
                                  & (~ (IData)(vlSelfRef.__PVT__hit))))) {
                    if (((IData)(vlSelfRef.__PVT__resv_valid_q) 
                         & ((0x3ffffffffffffffULL & 
                             (((QData)((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[1U])) 
                               << 0x1aU) | ((QData)((IData)(
                                                            vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[0U])) 
                                            >> 6U))) 
                            == vlSelfRef.__PVT__resv_addr_q))) {
                        vlSelfRef.__PVT__resv_valid_n = 0U;
                    }
                    vlSelfRef.__PVT__beat_n = 0U;
                    if ((1U & ((IData)(vlSelfRef.__PVT__arr_valid_way) 
                               >> (IData)(vlSelfRef.__PVT__victim_way)))) {
                        vlSelfRef.__PVT__state_n = 5U;
                        vlSelfRef.__PVT__arr_word_sel = 0U;
                        vlSelfRef.__PVT__arr_way_sel 
                            = vlSelfRef.__PVT__victim_way;
                    } else {
                        vlSelfRef.__PVT__state_n = 1U;
                    }
                } else if ((1U & (~ (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                      & (~ (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_we))) 
                                     & (IData)(vlSelfRef.__PVT__hit))))) {
                    if ((((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                          & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_we)) 
                         & (IData)(vlSelfRef.__PVT__hit))) {
                        if ((1U == (3U & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__scalar_state_way_r) 
                                          >> (0xfU 
                                              & VL_SHIFTL_III(4,32,32, (IData)(vlSelfRef.__PVT__hit_way), 1U)))))) {
                            vlSelfRef.__PVT__state_n = 8U;
                        } else {
                            vlSelfRef.__PVT__arr_word_sel 
                                = (7U & (vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[0U] 
                                         >> 3U));
                            vlSelfRef.__PVT__arr_way_sel 
                                = vlSelfRef.__PVT__hit_way;
                            vlSelfRef.__PVT__arr_write_en = 1U;
                            vlSelfRef.__PVT__arr_state_in = 3U;
                            vlSelfRef.__PVT__arr_be 
                                = (0xffU & vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_be);
                            if (((IData)(vlSelfRef.__PVT__resv_valid_q) 
                                 & ((0x3ffffffffffffffULL 
                                     & (((QData)((IData)(
                                                         vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[1U])) 
                                         << 0x1aU) 
                                        | ((QData)((IData)(
                                                           vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[0U])) 
                                           >> 6U))) 
                                    == vlSelfRef.__PVT__resv_addr_q))) {
                                vlSelfRef.__PVT__resv_valid_n = 0U;
                            }
                        }
                    } else if ((1U & (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                       & (~ (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_we))) 
                                      & (~ (IData)(vlSelfRef.__PVT__hit))))) {
                        vlSelfRef.__PVT__beat_n = 0U;
                        if ((1U & (((IData)(vlSelfRef.__PVT__arr_valid_way) 
                                    & (IData)(vlSelfRef.__PVT__arr_dirty_way)) 
                                   >> (IData)(vlSelfRef.__PVT__victim_way)))) {
                            vlSelfRef.__PVT__state_n = 5U;
                            vlSelfRef.__PVT__arr_word_sel = 0U;
                            vlSelfRef.__PVT__arr_way_sel 
                                = vlSelfRef.__PVT__victim_way;
                        } else {
                            vlSelfRef.__PVT__state_n 
                                = ((1U & ((IData)(vlSelfRef.__PVT__arr_valid_way) 
                                          >> (IData)(vlSelfRef.__PVT__victim_way)))
                                    ? 5U : 1U);
                        }
                    } else if ((1U & (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                       & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_we)) 
                                      & (~ (IData)(vlSelfRef.__PVT__hit))))) {
                        vlSelfRef.__PVT__beat_n = 0U;
                        if ((1U & (((IData)(vlSelfRef.__PVT__arr_valid_way) 
                                    & (IData)(vlSelfRef.__PVT__arr_dirty_way)) 
                                   >> (IData)(vlSelfRef.__PVT__victim_way)))) {
                            vlSelfRef.__PVT__state_n = 5U;
                            vlSelfRef.__PVT__arr_word_sel = 0U;
                            vlSelfRef.__PVT__arr_way_sel 
                                = vlSelfRef.__PVT__victim_way;
                        } else {
                            vlSelfRef.__PVT__state_n 
                                = ((1U & ((IData)(vlSelfRef.__PVT__arr_valid_way) 
                                          >> (IData)(vlSelfRef.__PVT__victim_way)))
                                    ? 5U : 1U);
                        }
                    } else if (vlSelfRef.__PVT__vlsu_miss_refill_req) {
                        vlSelfRef.__PVT__beat_n = 0U;
                        vlSelfRef.__PVT__state_n = 0xcU;
                    }
                }
            }
        }
    }
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_req_o 
        = ((7U == (IData)(vlSelfRef.__PVT__arr_word_sel)) 
           | ((7U != (IData)(vlSelfRef.__PVT__arr_word_sel)) 
              & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_req_r) 
                 >> 7U)));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_req_o 
        = ((6U == (IData)(vlSelfRef.__PVT__arr_word_sel)) 
           | ((6U != (IData)(vlSelfRef.__PVT__arr_word_sel)) 
              & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_req_r) 
                 >> 6U)));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_req_o 
        = ((5U == (IData)(vlSelfRef.__PVT__arr_word_sel)) 
           | ((5U != (IData)(vlSelfRef.__PVT__arr_word_sel)) 
              & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_req_r) 
                 >> 5U)));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_req_o 
        = ((4U == (IData)(vlSelfRef.__PVT__arr_word_sel)) 
           | ((4U != (IData)(vlSelfRef.__PVT__arr_word_sel)) 
              & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_req_r) 
                 >> 4U)));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_req_o 
        = ((3U == (IData)(vlSelfRef.__PVT__arr_word_sel)) 
           | ((3U != (IData)(vlSelfRef.__PVT__arr_word_sel)) 
              & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_req_r) 
                 >> 3U)));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_req_o 
        = ((2U == (IData)(vlSelfRef.__PVT__arr_word_sel)) 
           | ((2U != (IData)(vlSelfRef.__PVT__arr_word_sel)) 
              & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_req_r) 
                 >> 2U)));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_req_o 
        = ((1U == (IData)(vlSelfRef.__PVT__arr_word_sel)) 
           | ((1U != (IData)(vlSelfRef.__PVT__arr_word_sel)) 
              & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_req_r) 
                 >> 1U)));
    vlSelfRef.__PVT__u_arrays__DOT__arb_bank_req__BRA__0__KET__ 
        = ((0U == (IData)(vlSelfRef.__PVT__arr_word_sel)) 
           | ((0U != (IData)(vlSelfRef.__PVT__arr_word_sel)) 
              & (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_req_r)));
    vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__line_addr 
        = (((IData)(vlSelfRef.__PVT__u_arrays__DOT__arb_bank_index__BRA__4__03a0__KET__) 
            << 3U) | (7U & ((0U == (IData)(vlSelfRef.__PVT__arr_word_sel))
                             ? (IData)(vlSelfRef.__PVT__arr_word_sel)
                             : vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_word_r)));
    vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__line_addr 
        = (((IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_index_o) 
            << 3U) | (7U & ((1U == (IData)(vlSelfRef.__PVT__arr_word_sel))
                             ? (IData)(vlSelfRef.__PVT__arr_word_sel)
                             : (vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_word_r 
                                >> 3U))));
    vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__line_addr 
        = (((IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_index_o) 
            << 3U) | (7U & ((2U == (IData)(vlSelfRef.__PVT__arr_word_sel))
                             ? (IData)(vlSelfRef.__PVT__arr_word_sel)
                             : (vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_word_r 
                                >> 6U))));
    vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__line_addr 
        = (((IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_index_o) 
            << 3U) | (7U & ((3U == (IData)(vlSelfRef.__PVT__arr_word_sel))
                             ? (IData)(vlSelfRef.__PVT__arr_word_sel)
                             : (vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_word_r 
                                >> 9U))));
    vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__line_addr 
        = (((IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_index_o) 
            << 3U) | (7U & ((4U == (IData)(vlSelfRef.__PVT__arr_word_sel))
                             ? (IData)(vlSelfRef.__PVT__arr_word_sel)
                             : (vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_word_r 
                                >> 0xcU))));
    vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__line_addr 
        = (((IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_index_o) 
            << 3U) | (7U & ((5U == (IData)(vlSelfRef.__PVT__arr_word_sel))
                             ? (IData)(vlSelfRef.__PVT__arr_word_sel)
                             : (vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_word_r 
                                >> 0xfU))));
    vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__line_addr 
        = (((IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_index_o) 
            << 3U) | (7U & ((6U == (IData)(vlSelfRef.__PVT__arr_word_sel))
                             ? (IData)(vlSelfRef.__PVT__arr_word_sel)
                             : (vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_word_r 
                                >> 0x12U))));
    vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__line_addr 
        = (((IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_index_o) 
            << 3U) | (7U & ((7U == (IData)(vlSelfRef.__PVT__arr_word_sel))
                             ? (IData)(vlSelfRef.__PVT__arr_word_sel)
                             : (vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_word_r 
                                >> 0x15U))));
    if ((0U == (IData)(vlSelfRef.__PVT__arr_word_sel))) {
        vlSelfRef.__PVT__u_arrays__DOT__arb_bank_we__BRA__0__KET__ 
            = (1U & (IData)(vlSelfRef.__PVT__arr_write_en));
        vlSelfRef.__PVT__u_arrays__DOT__arb_bank_be__BRA__7__03a0__KET__ 
            = (0xffU & (IData)(vlSelfRef.__PVT__arr_be));
        vlSelfRef.__PVT__u_arrays__DOT__arb_bank_way__BRA__2__03a0__KET__ 
            = (7U & (IData)(vlSelfRef.__PVT__arr_way_sel));
    } else {
        vlSelfRef.__PVT__u_arrays__DOT__arb_bank_we__BRA__0__KET__ 
            = (1U & (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_we_r));
        vlSelfRef.__PVT__u_arrays__DOT__arb_bank_be__BRA__7__03a0__KET__ 
            = (0xffU & (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_be_r));
        vlSelfRef.__PVT__u_arrays__DOT__arb_bank_way__BRA__2__03a0__KET__ 
            = (7U & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_way_r);
    }
    if ((1U == (IData)(vlSelfRef.__PVT__arr_word_sel))) {
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_we_o 
            = (1U & (IData)(vlSelfRef.__PVT__arr_write_en));
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_be_o 
            = (0xffU & (IData)(vlSelfRef.__PVT__arr_be));
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_way_o 
            = (7U & (IData)(vlSelfRef.__PVT__arr_way_sel));
    } else {
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_we_o 
            = (1U & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_we_r) 
                     >> 1U));
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_be_o 
            = (0xffU & (IData)((vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_be_r 
                                >> 8U)));
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_way_o 
            = (7U & (vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_way_r 
                     >> 3U));
    }
    if ((2U == (IData)(vlSelfRef.__PVT__arr_word_sel))) {
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_we_o 
            = (1U & (IData)(vlSelfRef.__PVT__arr_write_en));
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_be_o 
            = (0xffU & (IData)(vlSelfRef.__PVT__arr_be));
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_way_o 
            = (7U & (IData)(vlSelfRef.__PVT__arr_way_sel));
    } else {
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_we_o 
            = (1U & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_we_r) 
                     >> 2U));
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_be_o 
            = (0xffU & (IData)((vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_be_r 
                                >> 0x10U)));
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_way_o 
            = (7U & (vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_way_r 
                     >> 6U));
    }
    if ((3U == (IData)(vlSelfRef.__PVT__arr_word_sel))) {
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_we_o 
            = (1U & (IData)(vlSelfRef.__PVT__arr_write_en));
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_be_o 
            = (0xffU & (IData)(vlSelfRef.__PVT__arr_be));
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_way_o 
            = (7U & (IData)(vlSelfRef.__PVT__arr_way_sel));
    } else {
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_we_o 
            = (1U & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_we_r) 
                     >> 3U));
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_be_o 
            = (0xffU & (IData)((vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_be_r 
                                >> 0x18U)));
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_way_o 
            = (7U & (vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_way_r 
                     >> 9U));
    }
    if ((4U == (IData)(vlSelfRef.__PVT__arr_word_sel))) {
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_we_o 
            = (1U & (IData)(vlSelfRef.__PVT__arr_write_en));
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_be_o 
            = (0xffU & (IData)(vlSelfRef.__PVT__arr_be));
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_way_o 
            = (7U & (IData)(vlSelfRef.__PVT__arr_way_sel));
    } else {
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_we_o 
            = (1U & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_we_r) 
                     >> 4U));
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_be_o 
            = (0xffU & (IData)((vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_be_r 
                                >> 0x20U)));
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_way_o 
            = (7U & (vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_way_r 
                     >> 0xcU));
    }
    if ((5U == (IData)(vlSelfRef.__PVT__arr_word_sel))) {
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_we_o 
            = (1U & (IData)(vlSelfRef.__PVT__arr_write_en));
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_be_o 
            = (0xffU & (IData)(vlSelfRef.__PVT__arr_be));
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_way_o 
            = (7U & (IData)(vlSelfRef.__PVT__arr_way_sel));
    } else {
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_we_o 
            = (1U & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_we_r) 
                     >> 5U));
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_be_o 
            = (0xffU & (IData)((vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_be_r 
                                >> 0x28U)));
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_way_o 
            = (7U & (vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_way_r 
                     >> 0xfU));
    }
    if ((6U == (IData)(vlSelfRef.__PVT__arr_word_sel))) {
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_we_o 
            = (1U & (IData)(vlSelfRef.__PVT__arr_write_en));
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_be_o 
            = (0xffU & (IData)(vlSelfRef.__PVT__arr_be));
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_way_o 
            = (7U & (IData)(vlSelfRef.__PVT__arr_way_sel));
    } else {
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_we_o 
            = (1U & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_we_r) 
                     >> 6U));
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_be_o 
            = (0xffU & (IData)((vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_be_r 
                                >> 0x30U)));
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_way_o 
            = (7U & (vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_way_r 
                     >> 0x12U));
    }
    if ((7U == (IData)(vlSelfRef.__PVT__arr_word_sel))) {
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_we_o 
            = (1U & (IData)(vlSelfRef.__PVT__arr_write_en));
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_be_o 
            = (0xffU & (IData)(vlSelfRef.__PVT__arr_be));
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_way_o 
            = (7U & (IData)(vlSelfRef.__PVT__arr_way_sel));
    } else {
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_we_o 
            = (1U & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_we_r) 
                     >> 7U));
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_be_o 
            = (0xffU & (IData)((vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_be_r 
                                >> 0x38U)));
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_way_o 
            = (7U & (vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_way_r 
                     >> 0x15U));
    }
    vlSelfRef.__PVT__u_arrays__DOT__bank_state_sel 
        = ((((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q
              [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_way_o]
              [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_index_o] 
              << 0xeU) | (vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q
                          [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_way_o]
                          [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_index_o] 
                          << 0xcU)) | ((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q
                                        [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_way_o]
                                        [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_index_o] 
                                        << 0xaU) | 
                                       (vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q
                                        [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_way_o]
                                        [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_index_o] 
                                        << 8U))) | 
           (((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q
              [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_way_o]
              [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_index_o] 
              << 6U) | (vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q
                        [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_way_o]
                        [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_index_o] 
                        << 4U)) | ((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q
                                    [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_way_o]
                                    [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_index_o] 
                                    << 2U) | vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q
                                   [vlSelfRef.__PVT__u_arrays__DOT__arb_bank_way__BRA__2__03a0__KET__]
                                   [vlSelfRef.__PVT__u_arrays__DOT__arb_bank_index__BRA__4__03a0__KET__])));
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_sel[0U] 
        = (IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__tag_q
                  [vlSelfRef.__PVT__u_arrays__DOT__arb_bank_way__BRA__2__03a0__KET__]
                  [vlSelfRef.__PVT__u_arrays__DOT__arb_bank_index__BRA__4__03a0__KET__]);
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_sel[1U] 
        = (((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__tag_q
                    [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_way_o]
                    [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_index_o]) 
            << 0x15U) | (IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__tag_q
                                 [vlSelfRef.__PVT__u_arrays__DOT__arb_bank_way__BRA__2__03a0__KET__]
                                 [vlSelfRef.__PVT__u_arrays__DOT__arb_bank_index__BRA__4__03a0__KET__] 
                                 >> 0x20U)));
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_sel[2U] 
        = (((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__tag_q
                    [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_way_o]
                    [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_index_o]) 
            >> 0xbU) | ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__tag_q
                                 [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_way_o]
                                 [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_index_o] 
                                 >> 0x20U)) << 0x15U));
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_sel[3U] 
        = ((0xfffffc00U & vlSelfRef.__PVT__u_arrays__DOT__bank_tag_sel[3U]) 
           | ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__tag_q
                       [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_way_o]
                       [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_index_o] 
                       >> 0x20U)) >> 0xbU));
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_sel[3U] 
        = ((0x3ffU & vlSelfRef.__PVT__u_arrays__DOT__bank_tag_sel[3U]) 
           | ((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__tag_q
                      [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_way_o]
                      [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_index_o]) 
              << 0xaU));
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_sel[4U] 
        = (((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__tag_q
                    [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_way_o]
                    [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_index_o]) 
            >> 0x16U) | (((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__tag_q
                                  [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_way_o]
                                  [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_index_o]) 
                          << 0x1fU) | ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__tag_q
                                                [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_way_o]
                                                [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_index_o] 
                                                >> 0x20U)) 
                                       << 0xaU)));
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_sel[5U] 
        = (((0x3ffU & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__tag_q
                               [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_way_o]
                               [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_index_o]) 
                       >> 1U)) | ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__tag_q
                                           [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_way_o]
                                           [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_index_o] 
                                           >> 0x20U)) 
                                  >> 0x16U)) | ((0x7ffffc00U 
                                                 & ((IData)(
                                                            vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__tag_q
                                                            [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_way_o]
                                                            [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_index_o]) 
                                                    >> 1U)) 
                                                | ((IData)(
                                                           (vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__tag_q
                                                            [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_way_o]
                                                            [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_index_o] 
                                                            >> 0x20U)) 
                                                   << 0x1fU)));
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_sel[6U] 
        = ((0xfff00000U & vlSelfRef.__PVT__u_arrays__DOT__bank_tag_sel[6U]) 
           | ((0x3ffU & ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__tag_q
                                  [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_way_o]
                                  [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_index_o] 
                                  >> 0x20U)) >> 1U)) 
              | (0x7ffffc00U & ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__tag_q
                                         [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_way_o]
                                         [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_index_o] 
                                         >> 0x20U)) 
                                >> 1U))));
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_sel[6U] 
        = ((0xfffffU & vlSelfRef.__PVT__u_arrays__DOT__bank_tag_sel[6U]) 
           | ((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__tag_q
                      [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_way_o]
                      [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_index_o]) 
              << 0x14U));
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_sel[7U] 
        = (((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__tag_q
                    [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_way_o]
                    [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_index_o]) 
            >> 0xcU) | ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__tag_q
                                 [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_way_o]
                                 [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_index_o] 
                                 >> 0x20U)) << 0x14U));
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_sel[8U] 
        = (((0xffe00U & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__tag_q
                                 [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_way_o]
                                 [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_index_o]) 
                         << 9U)) | ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__tag_q
                                             [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_way_o]
                                             [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_index_o] 
                                             >> 0x20U)) 
                                    >> 0xcU)) | (0xfff00000U 
                                                 & ((IData)(
                                                            vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__tag_q
                                                            [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_way_o]
                                                            [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_index_o]) 
                                                    << 9U)));
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_sel[9U] 
        = ((0xc0000000U & vlSelfRef.__PVT__u_arrays__DOT__bank_tag_sel[9U]) 
           | ((((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__tag_q
                        [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_way_o]
                        [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_index_o]) 
                >> 0x17U) | (0xffe00U & ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__tag_q
                                                  [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_way_o]
                                                  [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_index_o] 
                                                  >> 0x20U)) 
                                         << 9U))) | 
              (0xfff00000U & ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__tag_q
                                       [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_way_o]
                                       [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_index_o] 
                                       >> 0x20U)) << 9U))));
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_sel[9U] 
        = ((0x3fffffffU & vlSelfRef.__PVT__u_arrays__DOT__bank_tag_sel[9U]) 
           | ((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__tag_q
                      [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_way_o]
                      [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_index_o]) 
              << 0x1eU));
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_sel[0xaU] 
        = (((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__tag_q
                    [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_way_o]
                    [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_index_o]) 
            >> 2U) | ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__tag_q
                               [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_way_o]
                               [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_index_o] 
                               >> 0x20U)) << 0x1eU));
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_sel[0xbU] 
        = (((0x3ff80000U & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__tag_q
                                    [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_way_o]
                                    [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_index_o]) 
                            << 0x13U)) | ((IData)((
                                                   vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__tag_q
                                                   [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_way_o]
                                                   [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_index_o] 
                                                   >> 0x20U)) 
                                          >> 2U)) | 
           (0xc0000000U & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__tag_q
                                   [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_way_o]
                                   [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_index_o]) 
                           << 0x13U)));
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_sel[0xcU] 
        = ((((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__tag_q
                     [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_way_o]
                     [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_index_o]) 
             >> 0xdU) | (0x3ff80000U & ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__tag_q
                                                 [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_way_o]
                                                 [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_index_o] 
                                                 >> 0x20U)) 
                                        << 0x13U))) 
           | (0xc0000000U & ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__tag_q
                                      [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_way_o]
                                      [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_index_o] 
                                      >> 0x20U)) << 0x13U)));
    vlSelfRef.__PVT__u_arrays__DOT__bank_tag_sel[0xdU] 
        = (0xffU & ((IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__tag_q
                             [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_way_o]
                             [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_index_o] 
                             >> 0x20U)) >> 0xdU));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__rdata_way_o[0U] 
        = (IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__data_q
                  [0U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__line_addr]);
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__rdata_way_o[1U] 
        = (IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__data_q
                   [0U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__line_addr] 
                   >> 0x20U));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__rdata_way_o[2U] 
        = (IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__data_q
                  [1U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__line_addr]);
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__rdata_way_o[3U] 
        = (IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__data_q
                   [1U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__line_addr] 
                   >> 0x20U));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__rdata_way_o[4U] 
        = (IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__data_q
                  [2U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__line_addr]);
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__rdata_way_o[5U] 
        = (IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__data_q
                   [2U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__line_addr] 
                   >> 0x20U));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__rdata_way_o[6U] 
        = (IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__data_q
                  [3U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__line_addr]);
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__rdata_way_o[7U] 
        = (IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__data_q
                   [3U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__line_addr] 
                   >> 0x20U));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__rdata_way_o[8U] 
        = (IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__data_q
                  [4U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__line_addr]);
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__rdata_way_o[9U] 
        = (IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__data_q
                   [4U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__line_addr] 
                   >> 0x20U));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__rdata_way_o[0xaU] 
        = (IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__data_q
                  [5U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__line_addr]);
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__rdata_way_o[0xbU] 
        = (IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__data_q
                   [5U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__line_addr] 
                   >> 0x20U));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__rdata_way_o[0xcU] 
        = (IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__data_q
                  [6U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__line_addr]);
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__rdata_way_o[0xdU] 
        = (IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__data_q
                   [6U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__line_addr] 
                   >> 0x20U));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__rdata_way_o[0xeU] 
        = (IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__data_q
                  [7U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__line_addr]);
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__rdata_way_o[0xfU] 
        = (IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__data_q
                   [7U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__line_addr] 
                   >> 0x20U));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__rdata_way_o[0U] 
        = (IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__data_q
                  [0U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__line_addr]);
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__rdata_way_o[1U] 
        = (IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__data_q
                   [0U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__line_addr] 
                   >> 0x20U));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__rdata_way_o[2U] 
        = (IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__data_q
                  [1U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__line_addr]);
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__rdata_way_o[3U] 
        = (IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__data_q
                   [1U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__line_addr] 
                   >> 0x20U));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__rdata_way_o[4U] 
        = (IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__data_q
                  [2U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__line_addr]);
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__rdata_way_o[5U] 
        = (IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__data_q
                   [2U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__line_addr] 
                   >> 0x20U));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__rdata_way_o[6U] 
        = (IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__data_q
                  [3U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__line_addr]);
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__rdata_way_o[7U] 
        = (IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__data_q
                   [3U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__line_addr] 
                   >> 0x20U));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__rdata_way_o[8U] 
        = (IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__data_q
                  [4U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__line_addr]);
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__rdata_way_o[9U] 
        = (IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__data_q
                   [4U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__line_addr] 
                   >> 0x20U));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__rdata_way_o[0xaU] 
        = (IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__data_q
                  [5U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__line_addr]);
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__rdata_way_o[0xbU] 
        = (IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__data_q
                   [5U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__line_addr] 
                   >> 0x20U));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__rdata_way_o[0xcU] 
        = (IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__data_q
                  [6U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__line_addr]);
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__rdata_way_o[0xdU] 
        = (IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__data_q
                   [6U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__line_addr] 
                   >> 0x20U));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__rdata_way_o[0xeU] 
        = (IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__data_q
                  [7U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__line_addr]);
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__rdata_way_o[0xfU] 
        = (IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__data_q
                   [7U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__line_addr] 
                   >> 0x20U));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__rdata_way_o[0U] 
        = (IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__data_q
                  [0U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__line_addr]);
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__rdata_way_o[1U] 
        = (IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__data_q
                   [0U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__line_addr] 
                   >> 0x20U));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__rdata_way_o[2U] 
        = (IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__data_q
                  [1U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__line_addr]);
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__rdata_way_o[3U] 
        = (IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__data_q
                   [1U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__line_addr] 
                   >> 0x20U));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__rdata_way_o[4U] 
        = (IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__data_q
                  [2U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__line_addr]);
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__rdata_way_o[5U] 
        = (IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__data_q
                   [2U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__line_addr] 
                   >> 0x20U));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__rdata_way_o[6U] 
        = (IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__data_q
                  [3U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__line_addr]);
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__rdata_way_o[7U] 
        = (IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__data_q
                   [3U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__line_addr] 
                   >> 0x20U));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__rdata_way_o[8U] 
        = (IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__data_q
                  [4U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__line_addr]);
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__rdata_way_o[9U] 
        = (IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__data_q
                   [4U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__line_addr] 
                   >> 0x20U));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__rdata_way_o[0xaU] 
        = (IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__data_q
                  [5U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__line_addr]);
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__rdata_way_o[0xbU] 
        = (IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__data_q
                   [5U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__line_addr] 
                   >> 0x20U));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__rdata_way_o[0xcU] 
        = (IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__data_q
                  [6U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__line_addr]);
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__rdata_way_o[0xdU] 
        = (IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__data_q
                   [6U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__line_addr] 
                   >> 0x20U));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__rdata_way_o[0xeU] 
        = (IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__data_q
                  [7U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__line_addr]);
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__rdata_way_o[0xfU] 
        = (IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__data_q
                   [7U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__line_addr] 
                   >> 0x20U));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__rdata_way_o[0U] 
        = (IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__data_q
                  [0U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__line_addr]);
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__rdata_way_o[1U] 
        = (IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__data_q
                   [0U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__line_addr] 
                   >> 0x20U));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__rdata_way_o[2U] 
        = (IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__data_q
                  [1U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__line_addr]);
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__rdata_way_o[3U] 
        = (IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__data_q
                   [1U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__line_addr] 
                   >> 0x20U));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__rdata_way_o[4U] 
        = (IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__data_q
                  [2U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__line_addr]);
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__rdata_way_o[5U] 
        = (IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__data_q
                   [2U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__line_addr] 
                   >> 0x20U));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__rdata_way_o[6U] 
        = (IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__data_q
                  [3U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__line_addr]);
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__rdata_way_o[7U] 
        = (IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__data_q
                   [3U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__line_addr] 
                   >> 0x20U));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__rdata_way_o[8U] 
        = (IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__data_q
                  [4U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__line_addr]);
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__rdata_way_o[9U] 
        = (IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__data_q
                   [4U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__line_addr] 
                   >> 0x20U));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__rdata_way_o[0xaU] 
        = (IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__data_q
                  [5U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__line_addr]);
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__rdata_way_o[0xbU] 
        = (IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__data_q
                   [5U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__line_addr] 
                   >> 0x20U));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__rdata_way_o[0xcU] 
        = (IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__data_q
                  [6U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__line_addr]);
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__rdata_way_o[0xdU] 
        = (IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__data_q
                   [6U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__line_addr] 
                   >> 0x20U));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__rdata_way_o[0xeU] 
        = (IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__data_q
                  [7U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__line_addr]);
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__rdata_way_o[0xfU] 
        = (IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__data_q
                   [7U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__line_addr] 
                   >> 0x20U));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__rdata_way_o[0U] 
        = (IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__data_q
                  [0U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__line_addr]);
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__rdata_way_o[1U] 
        = (IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__data_q
                   [0U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__line_addr] 
                   >> 0x20U));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__rdata_way_o[2U] 
        = (IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__data_q
                  [1U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__line_addr]);
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__rdata_way_o[3U] 
        = (IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__data_q
                   [1U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__line_addr] 
                   >> 0x20U));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__rdata_way_o[4U] 
        = (IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__data_q
                  [2U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__line_addr]);
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__rdata_way_o[5U] 
        = (IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__data_q
                   [2U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__line_addr] 
                   >> 0x20U));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__rdata_way_o[6U] 
        = (IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__data_q
                  [3U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__line_addr]);
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__rdata_way_o[7U] 
        = (IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__data_q
                   [3U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__line_addr] 
                   >> 0x20U));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__rdata_way_o[8U] 
        = (IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__data_q
                  [4U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__line_addr]);
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__rdata_way_o[9U] 
        = (IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__data_q
                   [4U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__line_addr] 
                   >> 0x20U));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__rdata_way_o[0xaU] 
        = (IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__data_q
                  [5U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__line_addr]);
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__rdata_way_o[0xbU] 
        = (IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__data_q
                   [5U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__line_addr] 
                   >> 0x20U));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__rdata_way_o[0xcU] 
        = (IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__data_q
                  [6U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__line_addr]);
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__rdata_way_o[0xdU] 
        = (IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__data_q
                   [6U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__line_addr] 
                   >> 0x20U));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__rdata_way_o[0xeU] 
        = (IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__data_q
                  [7U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__line_addr]);
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__rdata_way_o[0xfU] 
        = (IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__data_q
                   [7U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__line_addr] 
                   >> 0x20U));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__rdata_way_o[0U] 
        = (IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__data_q
                  [0U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__line_addr]);
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__rdata_way_o[1U] 
        = (IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__data_q
                   [0U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__line_addr] 
                   >> 0x20U));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__rdata_way_o[2U] 
        = (IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__data_q
                  [1U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__line_addr]);
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__rdata_way_o[3U] 
        = (IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__data_q
                   [1U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__line_addr] 
                   >> 0x20U));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__rdata_way_o[4U] 
        = (IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__data_q
                  [2U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__line_addr]);
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__rdata_way_o[5U] 
        = (IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__data_q
                   [2U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__line_addr] 
                   >> 0x20U));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__rdata_way_o[6U] 
        = (IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__data_q
                  [3U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__line_addr]);
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__rdata_way_o[7U] 
        = (IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__data_q
                   [3U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__line_addr] 
                   >> 0x20U));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__rdata_way_o[8U] 
        = (IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__data_q
                  [4U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__line_addr]);
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__rdata_way_o[9U] 
        = (IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__data_q
                   [4U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__line_addr] 
                   >> 0x20U));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__rdata_way_o[0xaU] 
        = (IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__data_q
                  [5U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__line_addr]);
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__rdata_way_o[0xbU] 
        = (IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__data_q
                   [5U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__line_addr] 
                   >> 0x20U));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__rdata_way_o[0xcU] 
        = (IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__data_q
                  [6U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__line_addr]);
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__rdata_way_o[0xdU] 
        = (IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__data_q
                   [6U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__line_addr] 
                   >> 0x20U));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__rdata_way_o[0xeU] 
        = (IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__data_q
                  [7U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__line_addr]);
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__rdata_way_o[0xfU] 
        = (IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__data_q
                   [7U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__line_addr] 
                   >> 0x20U));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__rdata_way_o[0U] 
        = (IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__data_q
                  [0U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__line_addr]);
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__rdata_way_o[1U] 
        = (IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__data_q
                   [0U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__line_addr] 
                   >> 0x20U));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__rdata_way_o[2U] 
        = (IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__data_q
                  [1U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__line_addr]);
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__rdata_way_o[3U] 
        = (IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__data_q
                   [1U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__line_addr] 
                   >> 0x20U));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__rdata_way_o[4U] 
        = (IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__data_q
                  [2U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__line_addr]);
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__rdata_way_o[5U] 
        = (IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__data_q
                   [2U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__line_addr] 
                   >> 0x20U));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__rdata_way_o[6U] 
        = (IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__data_q
                  [3U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__line_addr]);
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__rdata_way_o[7U] 
        = (IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__data_q
                   [3U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__line_addr] 
                   >> 0x20U));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__rdata_way_o[8U] 
        = (IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__data_q
                  [4U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__line_addr]);
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__rdata_way_o[9U] 
        = (IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__data_q
                   [4U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__line_addr] 
                   >> 0x20U));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__rdata_way_o[0xaU] 
        = (IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__data_q
                  [5U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__line_addr]);
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__rdata_way_o[0xbU] 
        = (IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__data_q
                   [5U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__line_addr] 
                   >> 0x20U));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__rdata_way_o[0xcU] 
        = (IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__data_q
                  [6U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__line_addr]);
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__rdata_way_o[0xdU] 
        = (IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__data_q
                   [6U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__line_addr] 
                   >> 0x20U));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__rdata_way_o[0xeU] 
        = (IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__data_q
                  [7U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__line_addr]);
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__rdata_way_o[0xfU] 
        = (IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__data_q
                   [7U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__line_addr] 
                   >> 0x20U));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__rdata_way_o[0U] 
        = (IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__data_q
                  [0U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__line_addr]);
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__rdata_way_o[1U] 
        = (IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__data_q
                   [0U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__line_addr] 
                   >> 0x20U));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__rdata_way_o[2U] 
        = (IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__data_q
                  [1U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__line_addr]);
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__rdata_way_o[3U] 
        = (IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__data_q
                   [1U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__line_addr] 
                   >> 0x20U));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__rdata_way_o[4U] 
        = (IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__data_q
                  [2U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__line_addr]);
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__rdata_way_o[5U] 
        = (IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__data_q
                   [2U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__line_addr] 
                   >> 0x20U));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__rdata_way_o[6U] 
        = (IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__data_q
                  [3U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__line_addr]);
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__rdata_way_o[7U] 
        = (IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__data_q
                   [3U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__line_addr] 
                   >> 0x20U));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__rdata_way_o[8U] 
        = (IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__data_q
                  [4U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__line_addr]);
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__rdata_way_o[9U] 
        = (IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__data_q
                   [4U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__line_addr] 
                   >> 0x20U));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__rdata_way_o[0xaU] 
        = (IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__data_q
                  [5U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__line_addr]);
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__rdata_way_o[0xbU] 
        = (IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__data_q
                   [5U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__line_addr] 
                   >> 0x20U));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__rdata_way_o[0xcU] 
        = (IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__data_q
                  [6U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__line_addr]);
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__rdata_way_o[0xdU] 
        = (IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__data_q
                   [6U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__line_addr] 
                   >> 0x20U));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__rdata_way_o[0xeU] 
        = (IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__data_q
                  [7U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__line_addr]);
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__rdata_way_o[0xfU] 
        = (IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__data_q
                   [7U][vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__line_addr] 
                   >> 0x20U));
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_sel[0U] 
        = (IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__data_q
                  [vlSelfRef.__PVT__u_arrays__DOT__arb_bank_way__BRA__2__03a0__KET__]
                  [vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__line_addr]);
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_sel[1U] 
        = (IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__data_q
                   [vlSelfRef.__PVT__u_arrays__DOT__arb_bank_way__BRA__2__03a0__KET__]
                   [vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__line_addr] 
                   >> 0x20U));
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_sel[2U] 
        = (IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__data_q
                  [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_way_o]
                  [vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__line_addr]);
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_sel[3U] 
        = (IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__data_q
                   [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_way_o]
                   [vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__line_addr] 
                   >> 0x20U));
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_sel[4U] 
        = (IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__data_q
                  [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_way_o]
                  [vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__line_addr]);
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_sel[5U] 
        = (IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__data_q
                   [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_way_o]
                   [vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__line_addr] 
                   >> 0x20U));
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_sel[6U] 
        = (IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__data_q
                  [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_way_o]
                  [vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__line_addr]);
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_sel[7U] 
        = (IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__data_q
                   [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_way_o]
                   [vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__line_addr] 
                   >> 0x20U));
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_sel[8U] 
        = (IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__data_q
                  [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_way_o]
                  [vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__line_addr]);
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_sel[9U] 
        = (IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__data_q
                   [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_way_o]
                   [vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__line_addr] 
                   >> 0x20U));
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_sel[0xaU] 
        = (IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__data_q
                  [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_way_o]
                  [vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__line_addr]);
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_sel[0xbU] 
        = (IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__data_q
                   [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_way_o]
                   [vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__line_addr] 
                   >> 0x20U));
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_sel[0xcU] 
        = (IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__data_q
                  [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_way_o]
                  [vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__line_addr]);
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_sel[0xdU] 
        = (IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__data_q
                   [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_way_o]
                   [vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__line_addr] 
                   >> 0x20U));
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_sel[0xeU] 
        = (IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__data_q
                  [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_way_o]
                  [vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__line_addr]);
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_sel[0xfU] 
        = (IData)((vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__data_q
                   [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_way_o]
                   [vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__line_addr] 
                   >> 0x20U));
    vlSelfRef.__PVT__u_arrays__DOT__scalar_state_r = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__arr_word_sel))) {
        vlSelfRef.__PVT__u_arrays__DOT__scalar_state_r 
            = (3U & (IData)(vlSelfRef.__PVT__u_arrays__DOT__bank_state_sel));
    }
    if ((1U == (IData)(vlSelfRef.__PVT__arr_word_sel))) {
        vlSelfRef.__PVT__u_arrays__DOT__scalar_state_r 
            = (3U & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__bank_state_sel) 
                     >> 2U));
    }
    if ((2U == (IData)(vlSelfRef.__PVT__arr_word_sel))) {
        vlSelfRef.__PVT__u_arrays__DOT__scalar_state_r 
            = (3U & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__bank_state_sel) 
                     >> 4U));
    }
    if ((3U == (IData)(vlSelfRef.__PVT__arr_word_sel))) {
        vlSelfRef.__PVT__u_arrays__DOT__scalar_state_r 
            = (3U & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__bank_state_sel) 
                     >> 6U));
    }
    if ((4U == (IData)(vlSelfRef.__PVT__arr_word_sel))) {
        vlSelfRef.__PVT__u_arrays__DOT__scalar_state_r 
            = (3U & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__bank_state_sel) 
                     >> 8U));
    }
    vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_r = 0ULL;
    if ((0U == (IData)(vlSelfRef.__PVT__arr_word_sel))) {
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_r 
            = (0x1fffffffffffffULL & (((QData)((IData)(
                                                       vlSelfRef.__PVT__u_arrays__DOT__bank_tag_sel[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelfRef.__PVT__u_arrays__DOT__bank_tag_sel[0U]))));
    }
    if ((1U == (IData)(vlSelfRef.__PVT__arr_word_sel))) {
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_r 
            = (0x1fffffffffffffULL & (((QData)((IData)(
                                                       vlSelfRef.__PVT__u_arrays__DOT__bank_tag_sel[3U])) 
                                       << 0x2bU) | 
                                      (((QData)((IData)(
                                                        vlSelfRef.__PVT__u_arrays__DOT__bank_tag_sel[2U])) 
                                        << 0xbU) | 
                                       ((QData)((IData)(
                                                        vlSelfRef.__PVT__u_arrays__DOT__bank_tag_sel[1U])) 
                                        >> 0x15U))));
    }
    if ((2U == (IData)(vlSelfRef.__PVT__arr_word_sel))) {
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_r 
            = (0x1fffffffffffffULL & (((QData)((IData)(
                                                       vlSelfRef.__PVT__u_arrays__DOT__bank_tag_sel[4U])) 
                                       << 0x16U) | 
                                      ((QData)((IData)(
                                                       vlSelfRef.__PVT__u_arrays__DOT__bank_tag_sel[3U])) 
                                       >> 0xaU)));
    }
    if ((3U == (IData)(vlSelfRef.__PVT__arr_word_sel))) {
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_r 
            = (0x1fffffffffffffULL & (((QData)((IData)(
                                                       vlSelfRef.__PVT__u_arrays__DOT__bank_tag_sel[6U])) 
                                       << 0x21U) | 
                                      (((QData)((IData)(
                                                        vlSelfRef.__PVT__u_arrays__DOT__bank_tag_sel[5U])) 
                                        << 1U) | ((QData)((IData)(
                                                                  vlSelfRef.__PVT__u_arrays__DOT__bank_tag_sel[4U])) 
                                                  >> 0x1fU))));
    }
    if ((4U == (IData)(vlSelfRef.__PVT__arr_word_sel))) {
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_r 
            = (0x1fffffffffffffULL & (((QData)((IData)(
                                                       vlSelfRef.__PVT__u_arrays__DOT__bank_tag_sel[8U])) 
                                       << 0x2cU) | 
                                      (((QData)((IData)(
                                                        vlSelfRef.__PVT__u_arrays__DOT__bank_tag_sel[7U])) 
                                        << 0xcU) | 
                                       ((QData)((IData)(
                                                        vlSelfRef.__PVT__u_arrays__DOT__bank_tag_sel[6U])) 
                                        >> 0x14U))));
    }
    if ((5U == (IData)(vlSelfRef.__PVT__arr_word_sel))) {
        vlSelfRef.__PVT__u_arrays__DOT__scalar_state_r 
            = (3U & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__bank_state_sel) 
                     >> 0xaU));
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_r 
            = (0x1fffffffffffffULL & (((QData)((IData)(
                                                       vlSelfRef.__PVT__u_arrays__DOT__bank_tag_sel[9U])) 
                                       << 0x17U) | 
                                      ((QData)((IData)(
                                                       vlSelfRef.__PVT__u_arrays__DOT__bank_tag_sel[8U])) 
                                       >> 9U)));
    }
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__rdata_way_o[0U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[1U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__rdata_way_o[1U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[2U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__rdata_way_o[2U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[3U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__rdata_way_o[3U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[4U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__rdata_way_o[4U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[5U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__rdata_way_o[5U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[6U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__rdata_way_o[6U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[7U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__rdata_way_o[7U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[8U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__rdata_way_o[8U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[9U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__rdata_way_o[9U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0xaU] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__rdata_way_o[0xaU];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0xbU] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__rdata_way_o[0xbU];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0xcU] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__rdata_way_o[0xcU];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0xdU] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__rdata_way_o[0xdU];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0xeU] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__rdata_way_o[0xeU];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0xfU] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__rdata_way_o[0xfU];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x10U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__rdata_way_o[0U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x11U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__rdata_way_o[1U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x12U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__rdata_way_o[2U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x13U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__rdata_way_o[3U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x14U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__rdata_way_o[4U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x15U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__rdata_way_o[5U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x16U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__rdata_way_o[6U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x17U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__rdata_way_o[7U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x18U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__rdata_way_o[8U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x19U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__rdata_way_o[9U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x1aU] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__rdata_way_o[0xaU];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x1bU] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__rdata_way_o[0xbU];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x1cU] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__rdata_way_o[0xcU];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x1dU] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__rdata_way_o[0xdU];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x1eU] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__rdata_way_o[0xeU];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x1fU] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__rdata_way_o[0xfU];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x20U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__rdata_way_o[0U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x21U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__rdata_way_o[1U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x22U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__rdata_way_o[2U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x23U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__rdata_way_o[3U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x24U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__rdata_way_o[4U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x25U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__rdata_way_o[5U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x26U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__rdata_way_o[6U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x27U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__rdata_way_o[7U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x28U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__rdata_way_o[8U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x29U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__rdata_way_o[9U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x2aU] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__rdata_way_o[0xaU];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x2bU] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__rdata_way_o[0xbU];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x2cU] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__rdata_way_o[0xcU];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x2dU] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__rdata_way_o[0xdU];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x2eU] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__rdata_way_o[0xeU];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x2fU] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__rdata_way_o[0xfU];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x30U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__rdata_way_o[0U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x31U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__rdata_way_o[1U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x32U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__rdata_way_o[2U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x33U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__rdata_way_o[3U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x34U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__rdata_way_o[4U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x35U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__rdata_way_o[5U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x36U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__rdata_way_o[6U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x37U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__rdata_way_o[7U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x38U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__rdata_way_o[8U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x39U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__rdata_way_o[9U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x3aU] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__rdata_way_o[0xaU];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x3bU] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__rdata_way_o[0xbU];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x3cU] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__rdata_way_o[0xcU];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x3dU] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__rdata_way_o[0xdU];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x3eU] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__rdata_way_o[0xeU];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x3fU] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__rdata_way_o[0xfU];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x40U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__rdata_way_o[0U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x41U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__rdata_way_o[1U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x42U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__rdata_way_o[2U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x43U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__rdata_way_o[3U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x44U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__rdata_way_o[4U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x45U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__rdata_way_o[5U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x46U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__rdata_way_o[6U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x47U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__rdata_way_o[7U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x48U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__rdata_way_o[8U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x49U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__rdata_way_o[9U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x4aU] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__rdata_way_o[0xaU];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x4bU] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__rdata_way_o[0xbU];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x4cU] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__rdata_way_o[0xcU];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x4dU] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__rdata_way_o[0xdU];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x4eU] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__rdata_way_o[0xeU];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x4fU] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__rdata_way_o[0xfU];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x50U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__rdata_way_o[0U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x51U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__rdata_way_o[1U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x52U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__rdata_way_o[2U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x53U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__rdata_way_o[3U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x54U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__rdata_way_o[4U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x55U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__rdata_way_o[5U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x56U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__rdata_way_o[6U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x57U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__rdata_way_o[7U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x58U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__rdata_way_o[8U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x59U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__rdata_way_o[9U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x5aU] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__rdata_way_o[0xaU];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x5bU] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__rdata_way_o[0xbU];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x5cU] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__rdata_way_o[0xcU];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x5dU] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__rdata_way_o[0xdU];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x5eU] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__rdata_way_o[0xeU];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x5fU] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__rdata_way_o[0xfU];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x60U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__rdata_way_o[0U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x61U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__rdata_way_o[1U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x62U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__rdata_way_o[2U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x63U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__rdata_way_o[3U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x64U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__rdata_way_o[4U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x65U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__rdata_way_o[5U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x66U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__rdata_way_o[6U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x67U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__rdata_way_o[7U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x68U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__rdata_way_o[8U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x69U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__rdata_way_o[9U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x6aU] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__rdata_way_o[0xaU];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x6bU] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__rdata_way_o[0xbU];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x6cU] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__rdata_way_o[0xcU];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x6dU] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__rdata_way_o[0xdU];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x6eU] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__rdata_way_o[0xeU];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x6fU] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__rdata_way_o[0xfU];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x70U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__rdata_way_o[0U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x71U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__rdata_way_o[1U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x72U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__rdata_way_o[2U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x73U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__rdata_way_o[3U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x74U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__rdata_way_o[4U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x75U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__rdata_way_o[5U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x76U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__rdata_way_o[6U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x77U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__rdata_way_o[7U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x78U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__rdata_way_o[8U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x79U] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__rdata_way_o[9U];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x7aU] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__rdata_way_o[0xaU];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x7bU] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__rdata_way_o[0xbU];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x7cU] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__rdata_way_o[0xcU];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x7dU] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__rdata_way_o[0xdU];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x7eU] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__rdata_way_o[0xeU];
    vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x7fU] 
        = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__rdata_way_o[0xfU];
    vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_r = 0ULL;
    if ((0U == (IData)(vlSelfRef.__PVT__arr_word_sel))) {
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_r 
            = (((QData)((IData)(vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_sel[1U])) 
                << 0x20U) | (QData)((IData)(vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_sel[0U])));
    }
    if ((1U == (IData)(vlSelfRef.__PVT__arr_word_sel))) {
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_r 
            = (((QData)((IData)(vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_sel[3U])) 
                << 0x20U) | (QData)((IData)(vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_sel[2U])));
    }
    if ((2U == (IData)(vlSelfRef.__PVT__arr_word_sel))) {
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_r 
            = (((QData)((IData)(vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_sel[5U])) 
                << 0x20U) | (QData)((IData)(vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_sel[4U])));
    }
    if ((3U == (IData)(vlSelfRef.__PVT__arr_word_sel))) {
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_r 
            = (((QData)((IData)(vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_sel[7U])) 
                << 0x20U) | (QData)((IData)(vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_sel[6U])));
    }
    if ((4U == (IData)(vlSelfRef.__PVT__arr_word_sel))) {
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_r 
            = (((QData)((IData)(vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_sel[9U])) 
                << 0x20U) | (QData)((IData)(vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_sel[8U])));
    }
    if ((5U == (IData)(vlSelfRef.__PVT__arr_word_sel))) {
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_r 
            = (((QData)((IData)(vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_sel[0xbU])) 
                << 0x20U) | (QData)((IData)(vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_sel[0xaU])));
    }
    if ((6U == (IData)(vlSelfRef.__PVT__arr_word_sel))) {
        vlSelfRef.__PVT__u_arrays__DOT__scalar_state_r 
            = (3U & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__bank_state_sel) 
                     >> 0xcU));
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_r 
            = (0x1fffffffffffffULL & (((QData)((IData)(
                                                       vlSelfRef.__PVT__u_arrays__DOT__bank_tag_sel[0xbU])) 
                                       << 0x22U) | 
                                      (((QData)((IData)(
                                                        vlSelfRef.__PVT__u_arrays__DOT__bank_tag_sel[0xaU])) 
                                        << 2U) | ((QData)((IData)(
                                                                  vlSelfRef.__PVT__u_arrays__DOT__bank_tag_sel[9U])) 
                                                  >> 0x1eU))));
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_r 
            = (((QData)((IData)(vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_sel[0xdU])) 
                << 0x20U) | (QData)((IData)(vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_sel[0xcU])));
    }
    vlSelfRef.__PVT__vlsu_rdata_mux[0U] = Vrv64g_cache_system_tb__ConstPool__CONST_h93e1b771_0[0U];
    vlSelfRef.__PVT__vlsu_rdata_mux[1U] = Vrv64g_cache_system_tb__ConstPool__CONST_h93e1b771_0[1U];
    vlSelfRef.__PVT__vlsu_rdata_mux[2U] = Vrv64g_cache_system_tb__ConstPool__CONST_h93e1b771_0[2U];
    vlSelfRef.__PVT__vlsu_rdata_mux[3U] = Vrv64g_cache_system_tb__ConstPool__CONST_h93e1b771_0[3U];
    vlSelfRef.__PVT__vlsu_rdata_mux[4U] = Vrv64g_cache_system_tb__ConstPool__CONST_h93e1b771_0[4U];
    vlSelfRef.__PVT__vlsu_rdata_mux[5U] = Vrv64g_cache_system_tb__ConstPool__CONST_h93e1b771_0[5U];
    vlSelfRef.__PVT__vlsu_rdata_mux[6U] = Vrv64g_cache_system_tb__ConstPool__CONST_h93e1b771_0[6U];
    vlSelfRef.__PVT__vlsu_rdata_mux[7U] = Vrv64g_cache_system_tb__ConstPool__CONST_h93e1b771_0[7U];
    vlSelfRef.__PVT__vlsu_rdata_mux[8U] = Vrv64g_cache_system_tb__ConstPool__CONST_h93e1b771_0[8U];
    vlSelfRef.__PVT__vlsu_rdata_mux[9U] = Vrv64g_cache_system_tb__ConstPool__CONST_h93e1b771_0[9U];
    vlSelfRef.__PVT__vlsu_rdata_mux[0xaU] = Vrv64g_cache_system_tb__ConstPool__CONST_h93e1b771_0[0xaU];
    vlSelfRef.__PVT__vlsu_rdata_mux[0xbU] = Vrv64g_cache_system_tb__ConstPool__CONST_h93e1b771_0[0xbU];
    vlSelfRef.__PVT__vlsu_rdata_mux[0xcU] = Vrv64g_cache_system_tb__ConstPool__CONST_h93e1b771_0[0xcU];
    vlSelfRef.__PVT__vlsu_rdata_mux[0xdU] = Vrv64g_cache_system_tb__ConstPool__CONST_h93e1b771_0[0xdU];
    vlSelfRef.__PVT__vlsu_rdata_mux[0xeU] = Vrv64g_cache_system_tb__ConstPool__CONST_h93e1b771_0[0xeU];
    vlSelfRef.__PVT__vlsu_rdata_mux[0xfU] = Vrv64g_cache_system_tb__ConstPool__CONST_h93e1b771_0[0xfU];
    if ((0U == (7U & vlSelfRef.__PVT__u_vlsu_hit__DOT__hit_way_r))) {
        vlSelfRef.__PVT__vlsu_rdata_mux[0U] = (IData)(
                                                      (((QData)((IData)(
                                                                        vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0U]))));
        vlSelfRef.__PVT__vlsu_rdata_mux[1U] = (IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[1U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0U]))) 
                                                       >> 0x20U));
    }
    if ((1U == (7U & vlSelfRef.__PVT__u_vlsu_hit__DOT__hit_way_r))) {
        vlSelfRef.__PVT__vlsu_rdata_mux[0U] = (IData)(
                                                      (((QData)((IData)(
                                                                        vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[3U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[2U]))));
        vlSelfRef.__PVT__vlsu_rdata_mux[1U] = (IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[3U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[2U]))) 
                                                       >> 0x20U));
    }
    if ((2U == (7U & vlSelfRef.__PVT__u_vlsu_hit__DOT__hit_way_r))) {
        vlSelfRef.__PVT__vlsu_rdata_mux[0U] = (IData)(
                                                      (((QData)((IData)(
                                                                        vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[5U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[4U]))));
        vlSelfRef.__PVT__vlsu_rdata_mux[1U] = (IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[5U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[4U]))) 
                                                       >> 0x20U));
    }
    if ((3U == (7U & vlSelfRef.__PVT__u_vlsu_hit__DOT__hit_way_r))) {
        vlSelfRef.__PVT__vlsu_rdata_mux[0U] = (IData)(
                                                      (((QData)((IData)(
                                                                        vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[7U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[6U]))));
        vlSelfRef.__PVT__vlsu_rdata_mux[1U] = (IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[7U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[6U]))) 
                                                       >> 0x20U));
    }
    if ((4U == (7U & vlSelfRef.__PVT__u_vlsu_hit__DOT__hit_way_r))) {
        vlSelfRef.__PVT__vlsu_rdata_mux[0U] = (IData)(
                                                      (((QData)((IData)(
                                                                        vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[9U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[8U]))));
        vlSelfRef.__PVT__vlsu_rdata_mux[1U] = (IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[9U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[8U]))) 
                                                       >> 0x20U));
    }
    if ((5U == (7U & vlSelfRef.__PVT__u_vlsu_hit__DOT__hit_way_r))) {
        vlSelfRef.__PVT__vlsu_rdata_mux[0U] = (IData)(
                                                      (((QData)((IData)(
                                                                        vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0xbU])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0xaU]))));
        vlSelfRef.__PVT__vlsu_rdata_mux[1U] = (IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0xbU])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0xaU]))) 
                                                       >> 0x20U));
    }
    if ((6U == (7U & vlSelfRef.__PVT__u_vlsu_hit__DOT__hit_way_r))) {
        vlSelfRef.__PVT__vlsu_rdata_mux[0U] = (IData)(
                                                      (((QData)((IData)(
                                                                        vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0xdU])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0xcU]))));
        vlSelfRef.__PVT__vlsu_rdata_mux[1U] = (IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0xdU])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0xcU]))) 
                                                       >> 0x20U));
    }
    if ((7U == (7U & vlSelfRef.__PVT__u_vlsu_hit__DOT__hit_way_r))) {
        vlSelfRef.__PVT__vlsu_rdata_mux[0U] = (IData)(
                                                      (((QData)((IData)(
                                                                        vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0xfU])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0xeU]))));
        vlSelfRef.__PVT__vlsu_rdata_mux[1U] = (IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0xfU])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0xeU]))) 
                                                       >> 0x20U));
    }
    if ((0U == (7U & (vlSelfRef.__PVT__u_vlsu_hit__DOT__hit_way_r 
                      >> 3U)))) {
        vlSelfRef.__PVT__vlsu_rdata_mux[2U] = (IData)(
                                                      (((QData)((IData)(
                                                                        vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x11U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x10U]))));
        vlSelfRef.__PVT__vlsu_rdata_mux[3U] = (IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x11U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x10U]))) 
                                                       >> 0x20U));
    }
    if ((1U == (7U & (vlSelfRef.__PVT__u_vlsu_hit__DOT__hit_way_r 
                      >> 3U)))) {
        vlSelfRef.__PVT__vlsu_rdata_mux[2U] = (IData)(
                                                      (((QData)((IData)(
                                                                        vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x13U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x12U]))));
        vlSelfRef.__PVT__vlsu_rdata_mux[3U] = (IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x13U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x12U]))) 
                                                       >> 0x20U));
    }
    if ((2U == (7U & (vlSelfRef.__PVT__u_vlsu_hit__DOT__hit_way_r 
                      >> 3U)))) {
        vlSelfRef.__PVT__vlsu_rdata_mux[2U] = (IData)(
                                                      (((QData)((IData)(
                                                                        vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x15U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x14U]))));
        vlSelfRef.__PVT__vlsu_rdata_mux[3U] = (IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x15U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x14U]))) 
                                                       >> 0x20U));
    }
    if ((3U == (7U & (vlSelfRef.__PVT__u_vlsu_hit__DOT__hit_way_r 
                      >> 3U)))) {
        vlSelfRef.__PVT__vlsu_rdata_mux[2U] = (IData)(
                                                      (((QData)((IData)(
                                                                        vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x17U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x16U]))));
        vlSelfRef.__PVT__vlsu_rdata_mux[3U] = (IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x17U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x16U]))) 
                                                       >> 0x20U));
    }
    if ((4U == (7U & (vlSelfRef.__PVT__u_vlsu_hit__DOT__hit_way_r 
                      >> 3U)))) {
        vlSelfRef.__PVT__vlsu_rdata_mux[2U] = (IData)(
                                                      (((QData)((IData)(
                                                                        vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x19U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x18U]))));
        vlSelfRef.__PVT__vlsu_rdata_mux[3U] = (IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x19U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x18U]))) 
                                                       >> 0x20U));
    }
    if ((5U == (7U & (vlSelfRef.__PVT__u_vlsu_hit__DOT__hit_way_r 
                      >> 3U)))) {
        vlSelfRef.__PVT__vlsu_rdata_mux[2U] = (IData)(
                                                      (((QData)((IData)(
                                                                        vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x1bU])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x1aU]))));
        vlSelfRef.__PVT__vlsu_rdata_mux[3U] = (IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x1bU])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x1aU]))) 
                                                       >> 0x20U));
    }
    if ((6U == (7U & (vlSelfRef.__PVT__u_vlsu_hit__DOT__hit_way_r 
                      >> 3U)))) {
        vlSelfRef.__PVT__vlsu_rdata_mux[2U] = (IData)(
                                                      (((QData)((IData)(
                                                                        vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x1dU])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x1cU]))));
        vlSelfRef.__PVT__vlsu_rdata_mux[3U] = (IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x1dU])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x1cU]))) 
                                                       >> 0x20U));
    }
    if ((7U == (7U & (vlSelfRef.__PVT__u_vlsu_hit__DOT__hit_way_r 
                      >> 3U)))) {
        vlSelfRef.__PVT__vlsu_rdata_mux[2U] = (IData)(
                                                      (((QData)((IData)(
                                                                        vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x1fU])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x1eU]))));
        vlSelfRef.__PVT__vlsu_rdata_mux[3U] = (IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x1fU])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x1eU]))) 
                                                       >> 0x20U));
    }
    if ((0U == (7U & (vlSelfRef.__PVT__u_vlsu_hit__DOT__hit_way_r 
                      >> 6U)))) {
        vlSelfRef.__PVT__vlsu_rdata_mux[4U] = (IData)(
                                                      (((QData)((IData)(
                                                                        vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x21U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x20U]))));
        vlSelfRef.__PVT__vlsu_rdata_mux[5U] = (IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x21U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x20U]))) 
                                                       >> 0x20U));
    }
    if ((1U == (7U & (vlSelfRef.__PVT__u_vlsu_hit__DOT__hit_way_r 
                      >> 6U)))) {
        vlSelfRef.__PVT__vlsu_rdata_mux[4U] = (IData)(
                                                      (((QData)((IData)(
                                                                        vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x23U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x22U]))));
        vlSelfRef.__PVT__vlsu_rdata_mux[5U] = (IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x23U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x22U]))) 
                                                       >> 0x20U));
    }
    if ((2U == (7U & (vlSelfRef.__PVT__u_vlsu_hit__DOT__hit_way_r 
                      >> 6U)))) {
        vlSelfRef.__PVT__vlsu_rdata_mux[4U] = (IData)(
                                                      (((QData)((IData)(
                                                                        vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x25U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x24U]))));
        vlSelfRef.__PVT__vlsu_rdata_mux[5U] = (IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x25U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x24U]))) 
                                                       >> 0x20U));
    }
    if ((3U == (7U & (vlSelfRef.__PVT__u_vlsu_hit__DOT__hit_way_r 
                      >> 6U)))) {
        vlSelfRef.__PVT__vlsu_rdata_mux[4U] = (IData)(
                                                      (((QData)((IData)(
                                                                        vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x27U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x26U]))));
        vlSelfRef.__PVT__vlsu_rdata_mux[5U] = (IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x27U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x26U]))) 
                                                       >> 0x20U));
    }
    if ((4U == (7U & (vlSelfRef.__PVT__u_vlsu_hit__DOT__hit_way_r 
                      >> 6U)))) {
        vlSelfRef.__PVT__vlsu_rdata_mux[4U] = (IData)(
                                                      (((QData)((IData)(
                                                                        vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x29U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x28U]))));
        vlSelfRef.__PVT__vlsu_rdata_mux[5U] = (IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x29U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x28U]))) 
                                                       >> 0x20U));
    }
    if ((5U == (7U & (vlSelfRef.__PVT__u_vlsu_hit__DOT__hit_way_r 
                      >> 6U)))) {
        vlSelfRef.__PVT__vlsu_rdata_mux[4U] = (IData)(
                                                      (((QData)((IData)(
                                                                        vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x2bU])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x2aU]))));
        vlSelfRef.__PVT__vlsu_rdata_mux[5U] = (IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x2bU])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x2aU]))) 
                                                       >> 0x20U));
    }
    if ((6U == (7U & (vlSelfRef.__PVT__u_vlsu_hit__DOT__hit_way_r 
                      >> 6U)))) {
        vlSelfRef.__PVT__vlsu_rdata_mux[4U] = (IData)(
                                                      (((QData)((IData)(
                                                                        vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x2dU])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x2cU]))));
        vlSelfRef.__PVT__vlsu_rdata_mux[5U] = (IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x2dU])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x2cU]))) 
                                                       >> 0x20U));
    }
    if ((7U == (7U & (vlSelfRef.__PVT__u_vlsu_hit__DOT__hit_way_r 
                      >> 6U)))) {
        vlSelfRef.__PVT__vlsu_rdata_mux[4U] = (IData)(
                                                      (((QData)((IData)(
                                                                        vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x2fU])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x2eU]))));
        vlSelfRef.__PVT__vlsu_rdata_mux[5U] = (IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x2fU])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x2eU]))) 
                                                       >> 0x20U));
    }
    if ((0U == (7U & (vlSelfRef.__PVT__u_vlsu_hit__DOT__hit_way_r 
                      >> 9U)))) {
        vlSelfRef.__PVT__vlsu_rdata_mux[6U] = (IData)(
                                                      (((QData)((IData)(
                                                                        vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x31U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x30U]))));
        vlSelfRef.__PVT__vlsu_rdata_mux[7U] = (IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x31U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x30U]))) 
                                                       >> 0x20U));
    }
    if ((1U == (7U & (vlSelfRef.__PVT__u_vlsu_hit__DOT__hit_way_r 
                      >> 9U)))) {
        vlSelfRef.__PVT__vlsu_rdata_mux[6U] = (IData)(
                                                      (((QData)((IData)(
                                                                        vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x33U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x32U]))));
        vlSelfRef.__PVT__vlsu_rdata_mux[7U] = (IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x33U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x32U]))) 
                                                       >> 0x20U));
    }
    if ((2U == (7U & (vlSelfRef.__PVT__u_vlsu_hit__DOT__hit_way_r 
                      >> 9U)))) {
        vlSelfRef.__PVT__vlsu_rdata_mux[6U] = (IData)(
                                                      (((QData)((IData)(
                                                                        vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x35U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x34U]))));
        vlSelfRef.__PVT__vlsu_rdata_mux[7U] = (IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x35U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x34U]))) 
                                                       >> 0x20U));
    }
    if ((3U == (7U & (vlSelfRef.__PVT__u_vlsu_hit__DOT__hit_way_r 
                      >> 9U)))) {
        vlSelfRef.__PVT__vlsu_rdata_mux[6U] = (IData)(
                                                      (((QData)((IData)(
                                                                        vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x37U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x36U]))));
        vlSelfRef.__PVT__vlsu_rdata_mux[7U] = (IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x37U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x36U]))) 
                                                       >> 0x20U));
    }
    if ((4U == (7U & (vlSelfRef.__PVT__u_vlsu_hit__DOT__hit_way_r 
                      >> 9U)))) {
        vlSelfRef.__PVT__vlsu_rdata_mux[6U] = (IData)(
                                                      (((QData)((IData)(
                                                                        vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x39U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x38U]))));
        vlSelfRef.__PVT__vlsu_rdata_mux[7U] = (IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x39U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x38U]))) 
                                                       >> 0x20U));
    }
    if ((5U == (7U & (vlSelfRef.__PVT__u_vlsu_hit__DOT__hit_way_r 
                      >> 9U)))) {
        vlSelfRef.__PVT__vlsu_rdata_mux[6U] = (IData)(
                                                      (((QData)((IData)(
                                                                        vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x3bU])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x3aU]))));
        vlSelfRef.__PVT__vlsu_rdata_mux[7U] = (IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x3bU])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x3aU]))) 
                                                       >> 0x20U));
    }
    if ((6U == (7U & (vlSelfRef.__PVT__u_vlsu_hit__DOT__hit_way_r 
                      >> 9U)))) {
        vlSelfRef.__PVT__vlsu_rdata_mux[6U] = (IData)(
                                                      (((QData)((IData)(
                                                                        vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x3dU])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x3cU]))));
        vlSelfRef.__PVT__vlsu_rdata_mux[7U] = (IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x3dU])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x3cU]))) 
                                                       >> 0x20U));
    }
    if ((7U == (7U & (vlSelfRef.__PVT__u_vlsu_hit__DOT__hit_way_r 
                      >> 9U)))) {
        vlSelfRef.__PVT__vlsu_rdata_mux[6U] = (IData)(
                                                      (((QData)((IData)(
                                                                        vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x3fU])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x3eU]))));
        vlSelfRef.__PVT__vlsu_rdata_mux[7U] = (IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x3fU])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x3eU]))) 
                                                       >> 0x20U));
    }
    if ((0U == (7U & (vlSelfRef.__PVT__u_vlsu_hit__DOT__hit_way_r 
                      >> 0xcU)))) {
        vlSelfRef.__PVT__vlsu_rdata_mux[8U] = (IData)(
                                                      (((QData)((IData)(
                                                                        vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x41U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x40U]))));
        vlSelfRef.__PVT__vlsu_rdata_mux[9U] = (IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x41U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x40U]))) 
                                                       >> 0x20U));
    }
    if ((1U == (7U & (vlSelfRef.__PVT__u_vlsu_hit__DOT__hit_way_r 
                      >> 0xcU)))) {
        vlSelfRef.__PVT__vlsu_rdata_mux[8U] = (IData)(
                                                      (((QData)((IData)(
                                                                        vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x43U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x42U]))));
        vlSelfRef.__PVT__vlsu_rdata_mux[9U] = (IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x43U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x42U]))) 
                                                       >> 0x20U));
    }
    if ((2U == (7U & (vlSelfRef.__PVT__u_vlsu_hit__DOT__hit_way_r 
                      >> 0xcU)))) {
        vlSelfRef.__PVT__vlsu_rdata_mux[8U] = (IData)(
                                                      (((QData)((IData)(
                                                                        vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x45U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x44U]))));
        vlSelfRef.__PVT__vlsu_rdata_mux[9U] = (IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x45U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x44U]))) 
                                                       >> 0x20U));
    }
    if ((3U == (7U & (vlSelfRef.__PVT__u_vlsu_hit__DOT__hit_way_r 
                      >> 0xcU)))) {
        vlSelfRef.__PVT__vlsu_rdata_mux[8U] = (IData)(
                                                      (((QData)((IData)(
                                                                        vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x47U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x46U]))));
        vlSelfRef.__PVT__vlsu_rdata_mux[9U] = (IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x47U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x46U]))) 
                                                       >> 0x20U));
    }
    if ((4U == (7U & (vlSelfRef.__PVT__u_vlsu_hit__DOT__hit_way_r 
                      >> 0xcU)))) {
        vlSelfRef.__PVT__vlsu_rdata_mux[8U] = (IData)(
                                                      (((QData)((IData)(
                                                                        vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x49U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x48U]))));
        vlSelfRef.__PVT__vlsu_rdata_mux[9U] = (IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x49U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x48U]))) 
                                                       >> 0x20U));
    }
    if ((5U == (7U & (vlSelfRef.__PVT__u_vlsu_hit__DOT__hit_way_r 
                      >> 0xcU)))) {
        vlSelfRef.__PVT__vlsu_rdata_mux[8U] = (IData)(
                                                      (((QData)((IData)(
                                                                        vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x4bU])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x4aU]))));
        vlSelfRef.__PVT__vlsu_rdata_mux[9U] = (IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x4bU])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x4aU]))) 
                                                       >> 0x20U));
    }
    if ((6U == (7U & (vlSelfRef.__PVT__u_vlsu_hit__DOT__hit_way_r 
                      >> 0xcU)))) {
        vlSelfRef.__PVT__vlsu_rdata_mux[8U] = (IData)(
                                                      (((QData)((IData)(
                                                                        vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x4dU])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x4cU]))));
        vlSelfRef.__PVT__vlsu_rdata_mux[9U] = (IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x4dU])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x4cU]))) 
                                                       >> 0x20U));
    }
    if ((7U == (7U & (vlSelfRef.__PVT__u_vlsu_hit__DOT__hit_way_r 
                      >> 0xcU)))) {
        vlSelfRef.__PVT__vlsu_rdata_mux[8U] = (IData)(
                                                      (((QData)((IData)(
                                                                        vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x4fU])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x4eU]))));
        vlSelfRef.__PVT__vlsu_rdata_mux[9U] = (IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x4fU])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x4eU]))) 
                                                       >> 0x20U));
    }
    if ((0U == (7U & (vlSelfRef.__PVT__u_vlsu_hit__DOT__hit_way_r 
                      >> 0xfU)))) {
        vlSelfRef.__PVT__vlsu_rdata_mux[0xaU] = (IData)(
                                                        (((QData)((IData)(
                                                                          vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x51U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x50U]))));
        vlSelfRef.__PVT__vlsu_rdata_mux[0xbU] = (IData)(
                                                        ((((QData)((IData)(
                                                                           vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x51U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x50U]))) 
                                                         >> 0x20U));
    }
    if ((1U == (7U & (vlSelfRef.__PVT__u_vlsu_hit__DOT__hit_way_r 
                      >> 0xfU)))) {
        vlSelfRef.__PVT__vlsu_rdata_mux[0xaU] = (IData)(
                                                        (((QData)((IData)(
                                                                          vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x53U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x52U]))));
        vlSelfRef.__PVT__vlsu_rdata_mux[0xbU] = (IData)(
                                                        ((((QData)((IData)(
                                                                           vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x53U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x52U]))) 
                                                         >> 0x20U));
    }
    if ((2U == (7U & (vlSelfRef.__PVT__u_vlsu_hit__DOT__hit_way_r 
                      >> 0xfU)))) {
        vlSelfRef.__PVT__vlsu_rdata_mux[0xaU] = (IData)(
                                                        (((QData)((IData)(
                                                                          vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x55U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x54U]))));
        vlSelfRef.__PVT__vlsu_rdata_mux[0xbU] = (IData)(
                                                        ((((QData)((IData)(
                                                                           vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x55U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x54U]))) 
                                                         >> 0x20U));
    }
    if ((3U == (7U & (vlSelfRef.__PVT__u_vlsu_hit__DOT__hit_way_r 
                      >> 0xfU)))) {
        vlSelfRef.__PVT__vlsu_rdata_mux[0xaU] = (IData)(
                                                        (((QData)((IData)(
                                                                          vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x57U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x56U]))));
        vlSelfRef.__PVT__vlsu_rdata_mux[0xbU] = (IData)(
                                                        ((((QData)((IData)(
                                                                           vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x57U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x56U]))) 
                                                         >> 0x20U));
    }
    if ((4U == (7U & (vlSelfRef.__PVT__u_vlsu_hit__DOT__hit_way_r 
                      >> 0xfU)))) {
        vlSelfRef.__PVT__vlsu_rdata_mux[0xaU] = (IData)(
                                                        (((QData)((IData)(
                                                                          vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x59U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x58U]))));
        vlSelfRef.__PVT__vlsu_rdata_mux[0xbU] = (IData)(
                                                        ((((QData)((IData)(
                                                                           vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x59U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x58U]))) 
                                                         >> 0x20U));
    }
    if ((5U == (7U & (vlSelfRef.__PVT__u_vlsu_hit__DOT__hit_way_r 
                      >> 0xfU)))) {
        vlSelfRef.__PVT__vlsu_rdata_mux[0xaU] = (IData)(
                                                        (((QData)((IData)(
                                                                          vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x5bU])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x5aU]))));
        vlSelfRef.__PVT__vlsu_rdata_mux[0xbU] = (IData)(
                                                        ((((QData)((IData)(
                                                                           vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x5bU])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x5aU]))) 
                                                         >> 0x20U));
    }
    if ((6U == (7U & (vlSelfRef.__PVT__u_vlsu_hit__DOT__hit_way_r 
                      >> 0xfU)))) {
        vlSelfRef.__PVT__vlsu_rdata_mux[0xaU] = (IData)(
                                                        (((QData)((IData)(
                                                                          vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x5dU])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x5cU]))));
        vlSelfRef.__PVT__vlsu_rdata_mux[0xbU] = (IData)(
                                                        ((((QData)((IData)(
                                                                           vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x5dU])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x5cU]))) 
                                                         >> 0x20U));
    }
    if ((7U == (7U & (vlSelfRef.__PVT__u_vlsu_hit__DOT__hit_way_r 
                      >> 0xfU)))) {
        vlSelfRef.__PVT__vlsu_rdata_mux[0xaU] = (IData)(
                                                        (((QData)((IData)(
                                                                          vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x5fU])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x5eU]))));
        vlSelfRef.__PVT__vlsu_rdata_mux[0xbU] = (IData)(
                                                        ((((QData)((IData)(
                                                                           vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x5fU])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x5eU]))) 
                                                         >> 0x20U));
    }
    if ((0U == (7U & (vlSelfRef.__PVT__u_vlsu_hit__DOT__hit_way_r 
                      >> 0x12U)))) {
        vlSelfRef.__PVT__vlsu_rdata_mux[0xcU] = (IData)(
                                                        (((QData)((IData)(
                                                                          vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x61U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x60U]))));
        vlSelfRef.__PVT__vlsu_rdata_mux[0xdU] = (IData)(
                                                        ((((QData)((IData)(
                                                                           vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x61U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x60U]))) 
                                                         >> 0x20U));
    }
    if ((1U == (7U & (vlSelfRef.__PVT__u_vlsu_hit__DOT__hit_way_r 
                      >> 0x12U)))) {
        vlSelfRef.__PVT__vlsu_rdata_mux[0xcU] = (IData)(
                                                        (((QData)((IData)(
                                                                          vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x63U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x62U]))));
        vlSelfRef.__PVT__vlsu_rdata_mux[0xdU] = (IData)(
                                                        ((((QData)((IData)(
                                                                           vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x63U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x62U]))) 
                                                         >> 0x20U));
    }
    if ((2U == (7U & (vlSelfRef.__PVT__u_vlsu_hit__DOT__hit_way_r 
                      >> 0x12U)))) {
        vlSelfRef.__PVT__vlsu_rdata_mux[0xcU] = (IData)(
                                                        (((QData)((IData)(
                                                                          vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x65U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x64U]))));
        vlSelfRef.__PVT__vlsu_rdata_mux[0xdU] = (IData)(
                                                        ((((QData)((IData)(
                                                                           vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x65U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x64U]))) 
                                                         >> 0x20U));
    }
    if ((3U == (7U & (vlSelfRef.__PVT__u_vlsu_hit__DOT__hit_way_r 
                      >> 0x12U)))) {
        vlSelfRef.__PVT__vlsu_rdata_mux[0xcU] = (IData)(
                                                        (((QData)((IData)(
                                                                          vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x67U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x66U]))));
        vlSelfRef.__PVT__vlsu_rdata_mux[0xdU] = (IData)(
                                                        ((((QData)((IData)(
                                                                           vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x67U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x66U]))) 
                                                         >> 0x20U));
    }
    if ((4U == (7U & (vlSelfRef.__PVT__u_vlsu_hit__DOT__hit_way_r 
                      >> 0x12U)))) {
        vlSelfRef.__PVT__vlsu_rdata_mux[0xcU] = (IData)(
                                                        (((QData)((IData)(
                                                                          vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x69U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x68U]))));
        vlSelfRef.__PVT__vlsu_rdata_mux[0xdU] = (IData)(
                                                        ((((QData)((IData)(
                                                                           vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x69U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x68U]))) 
                                                         >> 0x20U));
    }
    if ((5U == (7U & (vlSelfRef.__PVT__u_vlsu_hit__DOT__hit_way_r 
                      >> 0x12U)))) {
        vlSelfRef.__PVT__vlsu_rdata_mux[0xcU] = (IData)(
                                                        (((QData)((IData)(
                                                                          vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x6bU])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x6aU]))));
        vlSelfRef.__PVT__vlsu_rdata_mux[0xdU] = (IData)(
                                                        ((((QData)((IData)(
                                                                           vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x6bU])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x6aU]))) 
                                                         >> 0x20U));
    }
    if ((6U == (7U & (vlSelfRef.__PVT__u_vlsu_hit__DOT__hit_way_r 
                      >> 0x12U)))) {
        vlSelfRef.__PVT__vlsu_rdata_mux[0xcU] = (IData)(
                                                        (((QData)((IData)(
                                                                          vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x6dU])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x6cU]))));
        vlSelfRef.__PVT__vlsu_rdata_mux[0xdU] = (IData)(
                                                        ((((QData)((IData)(
                                                                           vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x6dU])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x6cU]))) 
                                                         >> 0x20U));
    }
    if ((7U == (7U & (vlSelfRef.__PVT__u_vlsu_hit__DOT__hit_way_r 
                      >> 0x12U)))) {
        vlSelfRef.__PVT__vlsu_rdata_mux[0xcU] = (IData)(
                                                        (((QData)((IData)(
                                                                          vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x6fU])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x6eU]))));
        vlSelfRef.__PVT__vlsu_rdata_mux[0xdU] = (IData)(
                                                        ((((QData)((IData)(
                                                                           vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x6fU])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x6eU]))) 
                                                         >> 0x20U));
    }
    if ((0U == (7U & (vlSelfRef.__PVT__u_vlsu_hit__DOT__hit_way_r 
                      >> 0x15U)))) {
        vlSelfRef.__PVT__vlsu_rdata_mux[0xeU] = (IData)(
                                                        (((QData)((IData)(
                                                                          vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x71U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x70U]))));
        vlSelfRef.__PVT__vlsu_rdata_mux[0xfU] = (IData)(
                                                        ((((QData)((IData)(
                                                                           vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x71U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x70U]))) 
                                                         >> 0x20U));
    }
    if ((1U == (7U & (vlSelfRef.__PVT__u_vlsu_hit__DOT__hit_way_r 
                      >> 0x15U)))) {
        vlSelfRef.__PVT__vlsu_rdata_mux[0xeU] = (IData)(
                                                        (((QData)((IData)(
                                                                          vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x73U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x72U]))));
        vlSelfRef.__PVT__vlsu_rdata_mux[0xfU] = (IData)(
                                                        ((((QData)((IData)(
                                                                           vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x73U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x72U]))) 
                                                         >> 0x20U));
    }
    if ((2U == (7U & (vlSelfRef.__PVT__u_vlsu_hit__DOT__hit_way_r 
                      >> 0x15U)))) {
        vlSelfRef.__PVT__vlsu_rdata_mux[0xeU] = (IData)(
                                                        (((QData)((IData)(
                                                                          vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x75U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x74U]))));
        vlSelfRef.__PVT__vlsu_rdata_mux[0xfU] = (IData)(
                                                        ((((QData)((IData)(
                                                                           vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x75U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x74U]))) 
                                                         >> 0x20U));
    }
    if ((3U == (7U & (vlSelfRef.__PVT__u_vlsu_hit__DOT__hit_way_r 
                      >> 0x15U)))) {
        vlSelfRef.__PVT__vlsu_rdata_mux[0xeU] = (IData)(
                                                        (((QData)((IData)(
                                                                          vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x77U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x76U]))));
        vlSelfRef.__PVT__vlsu_rdata_mux[0xfU] = (IData)(
                                                        ((((QData)((IData)(
                                                                           vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x77U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x76U]))) 
                                                         >> 0x20U));
    }
    if ((4U == (7U & (vlSelfRef.__PVT__u_vlsu_hit__DOT__hit_way_r 
                      >> 0x15U)))) {
        vlSelfRef.__PVT__vlsu_rdata_mux[0xeU] = (IData)(
                                                        (((QData)((IData)(
                                                                          vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x79U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x78U]))));
        vlSelfRef.__PVT__vlsu_rdata_mux[0xfU] = (IData)(
                                                        ((((QData)((IData)(
                                                                           vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x79U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x78U]))) 
                                                         >> 0x20U));
    }
    if ((5U == (7U & (vlSelfRef.__PVT__u_vlsu_hit__DOT__hit_way_r 
                      >> 0x15U)))) {
        vlSelfRef.__PVT__vlsu_rdata_mux[0xeU] = (IData)(
                                                        (((QData)((IData)(
                                                                          vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x7bU])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x7aU]))));
        vlSelfRef.__PVT__vlsu_rdata_mux[0xfU] = (IData)(
                                                        ((((QData)((IData)(
                                                                           vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x7bU])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x7aU]))) 
                                                         >> 0x20U));
    }
    if ((6U == (7U & (vlSelfRef.__PVT__u_vlsu_hit__DOT__hit_way_r 
                      >> 0x15U)))) {
        vlSelfRef.__PVT__vlsu_rdata_mux[0xeU] = (IData)(
                                                        (((QData)((IData)(
                                                                          vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x7dU])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x7cU]))));
        vlSelfRef.__PVT__vlsu_rdata_mux[0xfU] = (IData)(
                                                        ((((QData)((IData)(
                                                                           vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x7dU])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x7cU]))) 
                                                         >> 0x20U));
    }
    if ((7U == (7U & (vlSelfRef.__PVT__u_vlsu_hit__DOT__hit_way_r 
                      >> 0x15U)))) {
        vlSelfRef.__PVT__vlsu_rdata_mux[0xeU] = (IData)(
                                                        (((QData)((IData)(
                                                                          vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x7fU])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x7eU]))));
        vlSelfRef.__PVT__vlsu_rdata_mux[0xfU] = (IData)(
                                                        ((((QData)((IData)(
                                                                           vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x7fU])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x7eU]))) 
                                                         >> 0x20U));
    }
    vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[0U] 
        = Vrv64g_cache_system_tb__ConstPool__CONST_h93e1b771_0[0U];
    vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[1U] 
        = Vrv64g_cache_system_tb__ConstPool__CONST_h93e1b771_0[1U];
    vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[2U] 
        = Vrv64g_cache_system_tb__ConstPool__CONST_h93e1b771_0[2U];
    vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[3U] 
        = Vrv64g_cache_system_tb__ConstPool__CONST_h93e1b771_0[3U];
    vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[4U] 
        = Vrv64g_cache_system_tb__ConstPool__CONST_h93e1b771_0[4U];
    vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[5U] 
        = Vrv64g_cache_system_tb__ConstPool__CONST_h93e1b771_0[5U];
    vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[6U] 
        = Vrv64g_cache_system_tb__ConstPool__CONST_h93e1b771_0[6U];
    vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[7U] 
        = Vrv64g_cache_system_tb__ConstPool__CONST_h93e1b771_0[7U];
    vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[8U] 
        = Vrv64g_cache_system_tb__ConstPool__CONST_h93e1b771_0[8U];
    if ((1U & (~ ((IData)(vlSelfRef.__PVT__state) >> 3U)))) {
        if ((4U & (IData)(vlSelfRef.__PVT__state))) {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__state)))) {
                    if (vlSelfRef.__PVT__pend_is_lr_q) {
                        vlSelfRef.__PVT__pend_is_lr_n = 0U;
                        vlSelfRef.__PVT__resv_word_n 
                            = vlSelfRef.__PVT__pend_amo_word_q;
                        vlSelfRef.__PVT__resv_addr_n 
                            = ((vlSelfRef.__PVT__pend_tag_q 
                                << 5U) | (QData)((IData)(vlSelfRef.__PVT__pend_index_q)));
                    }
                    if ((1U & (~ (IData)(vlSelfRef.__PVT__pend_is_lr_q)))) {
                        if ((1U & (~ (IData)(vlSelfRef.__PVT__pend_is_sc_q)))) {
                            if ((1U & (~ (IData)(vlSelfRef.__PVT__pend_is_amo_q)))) {
                                if (vlSelfRef.__PVT__pend_is_store_q) {
                                    vlSelfRef.__PVT__gnt_n = 1U;
                                }
                            }
                        }
                        if (vlSelfRef.__PVT__pend_is_sc_q) {
                            vlSelfRef.__PVT__pend_is_sc_n = 0U;
                            vlSelfRef.__PVT__sc_success_n = 0U;
                        }
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlSelfRef.__PVT__state) 
                             >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__state)))) {
                if ((1U & (~ ((IData)(vlSelfRef.tl_b_valid_i) 
                              & (IData)(vlSelfRef.tl_b_ready_o))))) {
                    if ((((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                          & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_lr_i)) 
                         & (IData)(vlSelfRef.__PVT__hit))) {
                        vlSelfRef.__PVT__pend_is_lr_n = 0U;
                        vlSelfRef.__PVT__resv_word_n 
                            = (1U & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_amo_word_i));
                        vlSelfRef.__PVT__resv_addr_n 
                            = (0x3ffffffffffffffULL 
                               & (((QData)((IData)(
                                                   vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[1U])) 
                                   << 0x1aU) | ((QData)((IData)(
                                                                vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[0U])) 
                                                >> 6U)));
                        vlSelfRef.__PVT__gnt_n = 1U;
                    } else if ((1U & (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                       & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_lr_i)) 
                                      & (~ (IData)(vlSelfRef.__PVT__hit))))) {
                        vlSelfRef.__PVT__pend_is_lr_n = 1U;
                        vlSelfRef.__PVT__gnt_n = 1U;
                    } else if ((((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                 & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_sc_i)) 
                                & (IData)(vlSelfRef.__PVT__hit))) {
                        vlSelfRef.__PVT__gnt_n = 1U;
                    } else if ((1U & (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                       & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_sc_i)) 
                                      & (~ (IData)(vlSelfRef.__PVT__hit))))) {
                        vlSelfRef.__PVT__gnt_n = 1U;
                    } else if ((((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                 & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_amo_i)) 
                                & (IData)(vlSelfRef.__PVT__hit))) {
                        vlSelfRef.__PVT__gnt_n = 1U;
                    } else if ((1U & (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                       & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_amo_i)) 
                                      & (~ (IData)(vlSelfRef.__PVT__hit))))) {
                        vlSelfRef.__PVT__gnt_n = 1U;
                    } else if ((((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                 & (~ (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_we))) 
                                & (IData)(vlSelfRef.__PVT__hit))) {
                        vlSelfRef.__PVT__gnt_n = 1U;
                    } else if ((((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                 & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_we)) 
                                & (IData)(vlSelfRef.__PVT__hit))) {
                        vlSelfRef.__PVT__gnt_n = 1U;
                    } else if ((1U & (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                       & (~ (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_we))) 
                                      & (~ (IData)(vlSelfRef.__PVT__hit))))) {
                        vlSelfRef.__PVT__gnt_n = 1U;
                    } else if ((1U & (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                       & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_we)) 
                                      & (~ (IData)(vlSelfRef.__PVT__hit))))) {
                        vlSelfRef.__PVT__gnt_n = 1U;
                    }
                    if ((1U & (~ (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                   & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_lr_i)) 
                                  & (IData)(vlSelfRef.__PVT__hit))))) {
                        if ((1U & (~ (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                       & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_lr_i)) 
                                      & (~ (IData)(vlSelfRef.__PVT__hit)))))) {
                            if ((((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                  & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_sc_i)) 
                                 & (IData)(vlSelfRef.__PVT__hit))) {
                                if ((((IData)(vlSelfRef.__PVT__resv_valid_q) 
                                      & ((0x3ffffffffffffffULL 
                                          & (((QData)((IData)(
                                                              vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[1U])) 
                                              << 0x1aU) 
                                             | ((QData)((IData)(
                                                                vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[0U])) 
                                                >> 6U))) 
                                         == vlSelfRef.__PVT__resv_addr_q)) 
                                     & ((1U & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_amo_word_i)) 
                                        == (IData)(vlSelfRef.__PVT__resv_word_q)))) {
                                    vlSelfRef.__PVT__pend_is_sc_n = 1U;
                                    vlSelfRef.__PVT__sc_success_n = 1U;
                                }
                            } else if ((1U & (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                               & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_sc_i)) 
                                              & (~ (IData)(vlSelfRef.__PVT__hit))))) {
                                vlSelfRef.__PVT__pend_is_sc_n = 1U;
                                vlSelfRef.__PVT__sc_success_n 
                                    = (((IData)(vlSelfRef.__PVT__resv_valid_q) 
                                        & ((0x3ffffffffffffffULL 
                                            & (((QData)((IData)(
                                                                vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[1U])) 
                                                << 0x1aU) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[0U])) 
                                                  >> 6U))) 
                                           == vlSelfRef.__PVT__resv_addr_q)) 
                                       & ((1U & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_amo_word_i)) 
                                          == (IData)(vlSelfRef.__PVT__resv_word_q)));
                            }
                        }
                    }
                }
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__state)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.tl_b_valid_i) 
                                  & (IData)(vlSelfRef.tl_b_ready_o))))) {
                        if ((1U & (~ (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                       & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_lr_i)) 
                                      & (IData)(vlSelfRef.__PVT__hit))))) {
                            if ((1U & (~ (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                           & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_lr_i)) 
                                          & (~ (IData)(vlSelfRef.__PVT__hit)))))) {
                                if ((1U & (~ (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                               & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_sc_i)) 
                                              & (IData)(vlSelfRef.__PVT__hit))))) {
                                    if ((1U & (~ (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                                   & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_sc_i)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__hit)))))) {
                                        if ((((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                              & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_amo_i)) 
                                             & (IData)(vlSelfRef.__PVT__hit))) {
                                            vlSelfRef.__PVT__pend_amo_op_n 
                                                = (0x1fU 
                                                   & vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_amo_op_i);
                                        } else if (
                                                   (1U 
                                                    & (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                                        & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_amo_i)) 
                                                       & (~ (IData)(vlSelfRef.__PVT__hit))))) {
                                            vlSelfRef.__PVT__pend_amo_op_n 
                                                = (0x1fU 
                                                   & vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_amo_op_i);
                                        }
                                    }
                                }
                                if ((((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                      & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_sc_i)) 
                                     & (IData)(vlSelfRef.__PVT__hit))) {
                                    if ((((IData)(vlSelfRef.__PVT__resv_valid_q) 
                                          & ((0x3ffffffffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[1U])) 
                                                  << 0x1aU) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[0U])) 
                                                    >> 6U))) 
                                             == vlSelfRef.__PVT__resv_addr_q)) 
                                         & ((1U & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_amo_word_i)) 
                                            == (IData)(vlSelfRef.__PVT__resv_word_q)))) {
                                        vlSelfRef.__PVT__pend_be_n 
                                            = ((1U 
                                                & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_amo_word_i))
                                                ? 0xfU
                                                : 0xffU);
                                        vlSelfRef.__PVT__pend_wdata_n 
                                            = (((QData)((IData)(
                                                                vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_wdata[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_wdata[0U])));
                                    }
                                } else {
                                    if ((1U & (~ (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                                   & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_sc_i)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__hit)))))) {
                                        if ((1U & (~ 
                                                   (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                                     & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_amo_i)) 
                                                    & (IData)(vlSelfRef.__PVT__hit))))) {
                                            if ((1U 
                                                 & (~ 
                                                    (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                                      & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_amo_i)) 
                                                     & (~ (IData)(vlSelfRef.__PVT__hit)))))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                                          & (~ (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_we))) 
                                                         & (IData)(vlSelfRef.__PVT__hit))))) {
                                                    if (
                                                        (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                                          & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_we)) 
                                                         & (IData)(vlSelfRef.__PVT__hit))) {
                                                        if (
                                                            (1U 
                                                             == 
                                                             (3U 
                                                              & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__scalar_state_way_r) 
                                                                 >> 
                                                                 (0xfU 
                                                                  & VL_SHIFTL_III(4,32,32, (IData)(vlSelfRef.__PVT__hit_way), 1U)))))) {
                                                            vlSelfRef.__PVT__pend_be_n 
                                                                = 
                                                                (0xffU 
                                                                 & vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_be);
                                                        }
                                                    } else if (
                                                               (1U 
                                                                & (~ 
                                                                   (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                                                     & (~ (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_we))) 
                                                                    & (~ (IData)(vlSelfRef.__PVT__hit)))))) {
                                                        if (
                                                            (1U 
                                                             & (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                                                 & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_we)) 
                                                                & (~ (IData)(vlSelfRef.__PVT__hit))))) {
                                                            vlSelfRef.__PVT__pend_be_n 
                                                                = 
                                                                (0xffU 
                                                                 & vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_be);
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    if ((1U & (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                                & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_sc_i)) 
                                               & (~ (IData)(vlSelfRef.__PVT__hit))))) {
                                        vlSelfRef.__PVT__pend_wdata_n 
                                            = (((QData)((IData)(
                                                                vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_wdata[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_wdata[0U])));
                                    } else if ((((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                                 & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_amo_i)) 
                                                & (IData)(vlSelfRef.__PVT__hit))) {
                                        vlSelfRef.__PVT__pend_wdata_n 
                                            = ((1U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__scalar_state_way_r) 
                                                    >> 
                                                    (0xfU 
                                                     & VL_SHIFTL_III(4,32,32, (IData)(vlSelfRef.__PVT__hit_way), 1U)))))
                                                ? (
                                                   ((QData)((IData)(
                                                                    vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_wdata[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_wdata[0U])))
                                                : (
                                                   ((QData)((IData)(
                                                                    vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_wdata[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_wdata[0U]))));
                                    } else if ((1U 
                                                & (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                                    & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_amo_i)) 
                                                   & (~ (IData)(vlSelfRef.__PVT__hit))))) {
                                        vlSelfRef.__PVT__pend_wdata_n 
                                            = (((QData)((IData)(
                                                                vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_wdata[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_wdata[0U])));
                                    } else if ((1U 
                                                & (~ 
                                                   (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                                     & (~ (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_we))) 
                                                    & (IData)(vlSelfRef.__PVT__hit))))) {
                                        if ((((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                              & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_we)) 
                                             & (IData)(vlSelfRef.__PVT__hit))) {
                                            if ((1U 
                                                 == 
                                                 (3U 
                                                  & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__scalar_state_way_r) 
                                                     >> 
                                                     (0xfU 
                                                      & VL_SHIFTL_III(4,32,32, (IData)(vlSelfRef.__PVT__hit_way), 1U)))))) {
                                                vlSelfRef.__PVT__pend_wdata_n 
                                                    = 
                                                    (((QData)((IData)(
                                                                      vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_wdata[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_wdata[0U])));
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                                         & (~ (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_we))) 
                                                        & (~ (IData)(vlSelfRef.__PVT__hit)))))) {
                                            if ((1U 
                                                 & (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                                     & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_we)) 
                                                    & (~ (IData)(vlSelfRef.__PVT__hit))))) {
                                                vlSelfRef.__PVT__pend_wdata_n 
                                                    = 
                                                    (((QData)((IData)(
                                                                      vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_wdata[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_wdata[0U])));
                                            }
                                        }
                                    }
                                }
                            }
                            if ((1U & (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                        & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_lr_i)) 
                                       & (~ (IData)(vlSelfRef.__PVT__hit))))) {
                                vlSelfRef.__PVT__pend_amo_word_n 
                                    = (1U & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_amo_word_i));
                            } else if ((((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                         & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_sc_i)) 
                                        & (IData)(vlSelfRef.__PVT__hit))) {
                                if ((((IData)(vlSelfRef.__PVT__resv_valid_q) 
                                      & ((0x3ffffffffffffffULL 
                                          & (((QData)((IData)(
                                                              vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[1U])) 
                                              << 0x1aU) 
                                             | ((QData)((IData)(
                                                                vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[0U])) 
                                                >> 6U))) 
                                         == vlSelfRef.__PVT__resv_addr_q)) 
                                     & ((1U & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_amo_word_i)) 
                                        == (IData)(vlSelfRef.__PVT__resv_word_q)))) {
                                    vlSelfRef.__PVT__pend_amo_word_n 
                                        = (1U & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_amo_word_i));
                                }
                            } else if ((1U & (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                               & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_sc_i)) 
                                              & (~ (IData)(vlSelfRef.__PVT__hit))))) {
                                vlSelfRef.__PVT__pend_amo_word_n 
                                    = (1U & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_amo_word_i));
                            } else if ((((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                         & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_amo_i)) 
                                        & (IData)(vlSelfRef.__PVT__hit))) {
                                vlSelfRef.__PVT__pend_amo_word_n 
                                    = (1U & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_amo_word_i));
                            } else if ((1U & (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                               & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_amo_i)) 
                                              & (~ (IData)(vlSelfRef.__PVT__hit))))) {
                                vlSelfRef.__PVT__pend_amo_word_n 
                                    = (1U & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_amo_word_i));
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[9U] 
        = Vrv64g_cache_system_tb__ConstPool__CONST_h93e1b771_0[9U];
    vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[0xaU] 
        = Vrv64g_cache_system_tb__ConstPool__CONST_h93e1b771_0[0xaU];
    vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[0xbU] 
        = Vrv64g_cache_system_tb__ConstPool__CONST_h93e1b771_0[0xbU];
    vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[0xcU] 
        = Vrv64g_cache_system_tb__ConstPool__CONST_h93e1b771_0[0xcU];
    vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[0xdU] 
        = Vrv64g_cache_system_tb__ConstPool__CONST_h93e1b771_0[0xdU];
    vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[0xeU] 
        = Vrv64g_cache_system_tb__ConstPool__CONST_h93e1b771_0[0xeU];
    vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[0xfU] 
        = Vrv64g_cache_system_tb__ConstPool__CONST_h93e1b771_0[0xfU];
    if ((0U == (IData)(vlSelfRef.__PVT__arr_word_sel))) {
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[0U] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[1U] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[1U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[2U] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[2U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[3U] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[3U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[4U] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[4U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[5U] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[5U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[6U] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[6U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[7U] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[7U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[8U] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[8U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[9U] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[9U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[0xaU] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0xaU];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[0xbU] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0xbU];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[0xcU] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0xcU];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[0xdU] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0xdU];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[0xeU] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0xeU];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[0xfU] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0xfU];
    }
    if ((1U == (IData)(vlSelfRef.__PVT__arr_word_sel))) {
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[0U] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x10U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[1U] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x11U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[2U] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x12U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[3U] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x13U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[4U] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x14U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[5U] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x15U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[6U] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x16U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[7U] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x17U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[8U] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x18U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[9U] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x19U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[0xaU] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x1aU];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[0xbU] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x1bU];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[0xcU] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x1cU];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[0xdU] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x1dU];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[0xeU] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x1eU];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[0xfU] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x1fU];
    }
    if ((2U == (IData)(vlSelfRef.__PVT__arr_word_sel))) {
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[0U] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x20U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[1U] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x21U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[2U] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x22U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[3U] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x23U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[4U] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x24U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[5U] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x25U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[6U] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x26U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[7U] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x27U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[8U] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x28U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[9U] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x29U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[0xaU] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x2aU];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[0xbU] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x2bU];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[0xcU] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x2cU];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[0xdU] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x2dU];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[0xeU] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x2eU];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[0xfU] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x2fU];
    }
    if ((3U == (IData)(vlSelfRef.__PVT__arr_word_sel))) {
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[0U] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x30U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[1U] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x31U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[2U] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x32U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[3U] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x33U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[4U] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x34U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[5U] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x35U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[6U] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x36U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[7U] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x37U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[8U] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x38U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[9U] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x39U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[0xaU] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x3aU];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[0xbU] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x3bU];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[0xcU] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x3cU];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[0xdU] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x3dU];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[0xeU] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x3eU];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[0xfU] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x3fU];
    }
    if ((4U == (IData)(vlSelfRef.__PVT__arr_word_sel))) {
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[0U] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x40U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[1U] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x41U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[2U] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x42U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[3U] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x43U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[4U] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x44U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[5U] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x45U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[6U] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x46U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[7U] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x47U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[8U] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x48U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[9U] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x49U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[0xaU] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x4aU];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[0xbU] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x4bU];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[0xcU] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x4cU];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[0xdU] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x4dU];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[0xeU] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x4eU];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[0xfU] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x4fU];
    }
    if ((5U == (IData)(vlSelfRef.__PVT__arr_word_sel))) {
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[0U] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x50U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[1U] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x51U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[2U] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x52U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[3U] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x53U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[4U] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x54U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[5U] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x55U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[6U] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x56U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[7U] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x57U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[8U] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x58U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[9U] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x59U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[0xaU] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x5aU];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[0xbU] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x5bU];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[0xcU] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x5cU];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[0xdU] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x5dU];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[0xeU] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x5eU];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[0xfU] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x5fU];
    }
    if ((6U == (IData)(vlSelfRef.__PVT__arr_word_sel))) {
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[0U] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x60U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[1U] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x61U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[2U] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x62U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[3U] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x63U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[4U] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x64U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[5U] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x65U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[6U] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x66U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[7U] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x67U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[8U] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x68U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[9U] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x69U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[0xaU] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x6aU];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[0xbU] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x6bU];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[0xcU] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x6cU];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[0xdU] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x6dU];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[0xeU] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x6eU];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[0xfU] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x6fU];
    }
    if ((7U == (IData)(vlSelfRef.__PVT__arr_word_sel))) {
        vlSelfRef.__PVT__u_arrays__DOT__scalar_state_r 
            = (3U & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__bank_state_sel) 
                     >> 0xeU));
        vlSelfRef.__PVT__u_arrays__DOT__scalar_tag_r 
            = (0x1fffffffffffffULL & (((QData)((IData)(
                                                       vlSelfRef.__PVT__u_arrays__DOT__bank_tag_sel[0xdU])) 
                                       << 0x2dU) | 
                                      (((QData)((IData)(
                                                        vlSelfRef.__PVT__u_arrays__DOT__bank_tag_sel[0xcU])) 
                                        << 0xdU) | 
                                       ((QData)((IData)(
                                                        vlSelfRef.__PVT__u_arrays__DOT__bank_tag_sel[0xbU])) 
                                        >> 0x13U))));
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_r 
            = (((QData)((IData)(vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_sel[0xfU])) 
                << 0x20U) | (QData)((IData)(vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_sel[0xeU])));
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[0U] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x70U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[1U] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x71U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[2U] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x72U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[3U] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x73U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[4U] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x74U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[5U] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x75U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[6U] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x76U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[7U] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x77U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[8U] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x78U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[9U] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x79U];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[0xaU] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x7aU];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[0xbU] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x7bU];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[0xcU] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x7cU];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[0xdU] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x7dU];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[0xeU] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x7eU];
        vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[0xfU] 
            = vlSelfRef.__PVT__u_arrays__DOT__bank_rdata_way[0x7fU];
    }
    vlSelfRef.__PVT__tl_c_data_n = 0ULL;
    vlSelfRef.__PVT__hit_data_word = (((QData)((IData)(
                                                       vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[
                                                       (((IData)(0x3fU) 
                                                         + 
                                                         (0x1ffU 
                                                          & ((VL_SHIFTL_III(9,9,32, 
                                                                            ((IData)(1U) 
                                                                             + (IData)(vlSelfRef.__PVT__hit_way)), 6U) 
                                                              - (IData)(1U)) 
                                                             - (IData)(0x3fU)))) 
                                                        >> 5U)])) 
                                       << ((0U == (0x1fU 
                                                   & ((VL_SHIFTL_III(9,9,32, 
                                                                     ((IData)(1U) 
                                                                      + (IData)(vlSelfRef.__PVT__hit_way)), 6U) 
                                                       - (IData)(1U)) 
                                                      - (IData)(0x3fU))))
                                            ? 0x20U
                                            : ((IData)(0x40U) 
                                               - (0x1fU 
                                                  & ((VL_SHIFTL_III(9,9,32, 
                                                                    ((IData)(1U) 
                                                                     + (IData)(vlSelfRef.__PVT__hit_way)), 6U) 
                                                      - (IData)(1U)) 
                                                     - (IData)(0x3fU)))))) 
                                      | (((0U == (0x1fU 
                                                  & ((VL_SHIFTL_III(9,9,32, 
                                                                    ((IData)(1U) 
                                                                     + (IData)(vlSelfRef.__PVT__hit_way)), 6U) 
                                                      - (IData)(1U)) 
                                                     - (IData)(0x3fU))))
                                           ? 0ULL : 
                                          ((QData)((IData)(
                                                           vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[
                                                           (((IData)(0x1fU) 
                                                             + 
                                                             (0x1ffU 
                                                              & ((VL_SHIFTL_III(9,9,32, 
                                                                                ((IData)(1U) 
                                                                                + (IData)(vlSelfRef.__PVT__hit_way)), 6U) 
                                                                  - (IData)(1U)) 
                                                                 - (IData)(0x3fU)))) 
                                                            >> 5U)])) 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & ((VL_SHIFTL_III(9,9,32, 
                                                                    ((IData)(1U) 
                                                                     + (IData)(vlSelfRef.__PVT__hit_way)), 6U) 
                                                      - (IData)(1U)) 
                                                     - (IData)(0x3fU)))))) 
                                         | ((QData)((IData)(
                                                            vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_way_r[
                                                            (0xfU 
                                                             & (((VL_SHIFTL_III(9,9,32, 
                                                                                ((IData)(1U) 
                                                                                + (IData)(vlSelfRef.__PVT__hit_way)), 6U) 
                                                                  - (IData)(1U)) 
                                                                 - (IData)(0x3fU)) 
                                                                >> 5U))])) 
                                            >> (0x1fU 
                                                & ((VL_SHIFTL_III(9,9,32, 
                                                                  ((IData)(1U) 
                                                                   + (IData)(vlSelfRef.__PVT__hit_way)), 6U) 
                                                    - (IData)(1U)) 
                                                   - (IData)(0x3fU))))));
    vlSelfRef.__PVT__amo_old_value_n = vlSelfRef.__PVT__amo_old_value_q;
    if ((1U & (~ ((IData)(vlSelfRef.__PVT__state) >> 3U)))) {
        if ((4U & (IData)(vlSelfRef.__PVT__state))) {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__state)))) {
                    if ((1U & (~ (IData)(vlSelfRef.__PVT__pend_is_lr_q)))) {
                        if ((1U & (~ (IData)(vlSelfRef.__PVT__pend_is_sc_q)))) {
                            if (vlSelfRef.__PVT__pend_is_amo_q) {
                                vlSelfRef.__PVT__amo_old_value_n 
                                    = vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_r;
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlSelfRef.__PVT__state) 
                             >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__state)))) {
                if ((1U & (~ ((IData)(vlSelfRef.tl_b_valid_i) 
                              & (IData)(vlSelfRef.tl_b_ready_o))))) {
                    if ((1U & (~ (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                   & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_lr_i)) 
                                  & (IData)(vlSelfRef.__PVT__hit))))) {
                        if ((1U & (~ (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                       & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_lr_i)) 
                                      & (~ (IData)(vlSelfRef.__PVT__hit)))))) {
                            if ((1U & (~ (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                           & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_sc_i)) 
                                          & (IData)(vlSelfRef.__PVT__hit))))) {
                                if ((1U & (~ (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                               & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_sc_i)) 
                                              & (~ (IData)(vlSelfRef.__PVT__hit)))))) {
                                    if ((((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                          & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_amo_i)) 
                                         & (IData)(vlSelfRef.__PVT__hit))) {
                                        if ((1U != 
                                             (3U & 
                                              ((IData)(vlSelfRef.__PVT__u_arrays__DOT__scalar_state_way_r) 
                                               >> (0xfU 
                                                   & VL_SHIFTL_III(4,32,32, (IData)(vlSelfRef.__PVT__hit_way), 1U)))))) {
                                            vlSelfRef.__PVT__amo_old_value_n 
                                                = vlSelfRef.__PVT__hit_data_word;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.__PVT__rdata_n = 0ULL;
    if ((8U & (IData)(vlSelfRef.__PVT__state))) {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__state) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelfRef.__PVT__state))) {
                if ((1U & (IData)(vlSelfRef.__PVT__state))) {
                    vlSelfRef.__PVT__arr_wdata = ((IData)(vlSelfRef.__PVT__pend_amo_word_q)
                                                   ? 
                                                  (((QData)((IData)(
                                                                    (- (IData)(
                                                                               (vlSelfRef.__PVT__u_atomic_alu__DOT__result_word 
                                                                                >> 0x1fU))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelfRef.__PVT__u_atomic_alu__DOT__result_word)))
                                                   : vlSelfRef.__PVT__u_atomic_alu__DOT__result_dword);
                    vlSelfRef.__PVT__rdata_n = vlSelfRef.__PVT__amo_old_value_q;
                }
            }
        }
        if ((4U & (IData)(vlSelfRef.__PVT__state))) {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__state)))) {
                    if ((1U & (((IData)(vlSelfRef.__PVT__arr_valid_way) 
                                & (IData)(vlSelfRef.__PVT__arr_dirty_way)) 
                               >> (IData)(vlSelfRef.__PVT__pend_victim_q)))) {
                        vlSelfRef.__PVT__tl_c_data_n 
                            = vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_r;
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlSelfRef.__PVT__state) 
                             >> 1U)))) {
            if ((1U & (IData)(vlSelfRef.__PVT__state))) {
                if (vlSelfRef.__PVT__probe_pend_has_data_q) {
                    vlSelfRef.__PVT__tl_c_data_n = vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_r;
                }
            }
        }
    } else if ((4U & (IData)(vlSelfRef.__PVT__state))) {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__state)))) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__pend_is_lr_q)))) {
                    if (vlSelfRef.__PVT__pend_is_sc_q) {
                        if (((IData)(vlSelfRef.__PVT__sc_success_q) 
                             & (IData)(vlSelfRef.__PVT__resv_valid_q))) {
                            vlSelfRef.__PVT__arr_wdata 
                                = vlSelfRef.__PVT__pend_wdata_q;
                        }
                    } else if ((1U & (~ (IData)(vlSelfRef.__PVT__pend_is_amo_q)))) {
                        if (vlSelfRef.__PVT__pend_is_store_q) {
                            vlSelfRef.__PVT__arr_wdata 
                                = vlSelfRef.__PVT__pend_wdata_q;
                        }
                    }
                }
                if (vlSelfRef.__PVT__pend_is_lr_q) {
                    vlSelfRef.__PVT__rdata_n = vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_r;
                } else if (vlSelfRef.__PVT__pend_is_sc_q) {
                    vlSelfRef.__PVT__rdata_n = (((IData)(vlSelfRef.__PVT__sc_success_q) 
                                                 & (IData)(vlSelfRef.__PVT__resv_valid_q))
                                                 ? 0ULL
                                                 : 1ULL);
                } else if ((1U & (~ (IData)(vlSelfRef.__PVT__pend_is_amo_q)))) {
                    if ((1U & (~ (IData)(vlSelfRef.__PVT__pend_is_store_q)))) {
                        if ((0xdU != (IData)(vlSelfRef.__PVT__return_state_q))) {
                            vlSelfRef.__PVT__rdata_n 
                                = vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_r;
                        }
                    }
                }
            }
        }
        if ((2U & (IData)(vlSelfRef.__PVT__state))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__state)))) {
                vlSelfRef.__PVT__tl_c_data_n = vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_r;
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__state))) {
            if (vlSelfRef.__PVT__pend_has_data_q) {
                vlSelfRef.__PVT__tl_c_data_n = vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_r;
            }
        }
    } else {
        if ((2U & (IData)(vlSelfRef.__PVT__state))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__state)))) {
                if ((1U & (~ ((IData)(vlSelfRef.tl_b_valid_i) 
                              & (IData)(vlSelfRef.tl_b_ready_o))))) {
                    if (((IData)(vlSelfRef.tl_d_valid_i) 
                         & (IData)(vlSelfRef.tl_d_ready_o))) {
                        if ((5U == (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__l2_d_opcode))) {
                            vlSelfRef.__PVT__arr_wdata 
                                = vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__l2_d_data;
                        }
                    }
                }
            }
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__state)))) {
            if ((1U & (~ ((IData)(vlSelfRef.tl_b_valid_i) 
                          & (IData)(vlSelfRef.tl_b_ready_o))))) {
                if ((1U & (~ (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                               & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_lr_i)) 
                              & (IData)(vlSelfRef.__PVT__hit))))) {
                    if ((1U & (~ (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                   & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_lr_i)) 
                                  & (~ (IData)(vlSelfRef.__PVT__hit)))))) {
                        if ((1U & (~ (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                       & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_sc_i)) 
                                      & (IData)(vlSelfRef.__PVT__hit))))) {
                            if ((1U & (~ (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                           & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_sc_i)) 
                                          & (~ (IData)(vlSelfRef.__PVT__hit)))))) {
                                if ((1U & (~ (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                               & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_amo_i)) 
                                              & (IData)(vlSelfRef.__PVT__hit))))) {
                                    if ((1U & (~ (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                                   & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_amo_i)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__hit)))))) {
                                        if ((1U & (~ 
                                                   (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                                     & (~ (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_we))) 
                                                    & (IData)(vlSelfRef.__PVT__hit))))) {
                                            if ((((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                                  & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_we)) 
                                                 & (IData)(vlSelfRef.__PVT__hit))) {
                                                if (
                                                    (1U 
                                                     != 
                                                     (3U 
                                                      & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__scalar_state_way_r) 
                                                         >> 
                                                         (0xfU 
                                                          & VL_SHIFTL_III(4,32,32, (IData)(vlSelfRef.__PVT__hit_way), 1U)))))) {
                                                    vlSelfRef.__PVT__arr_wdata 
                                                        = 
                                                        (((QData)((IData)(
                                                                          vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_wdata[1U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_wdata[0U])));
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__state)))) {
                if ((1U & (~ ((IData)(vlSelfRef.tl_b_valid_i) 
                              & (IData)(vlSelfRef.tl_b_ready_o))))) {
                    if ((1U & (~ (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                   & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_lr_i)) 
                                  & (IData)(vlSelfRef.__PVT__hit))))) {
                        if ((1U & (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                    & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_lr_i)) 
                                   & (~ (IData)(vlSelfRef.__PVT__hit))))) {
                            if ((1U & ((IData)(vlSelfRef.__PVT__arr_valid_way) 
                                       >> (IData)(vlSelfRef.__PVT__victim_way)))) {
                                vlSelfRef.__PVT__tl_c_data_n 
                                    = vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_r;
                            }
                        } else if ((1U & (~ (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                              & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_sc_i)) 
                                             & (IData)(vlSelfRef.__PVT__hit))))) {
                            if ((1U & (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                        & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_sc_i)) 
                                       & (~ (IData)(vlSelfRef.__PVT__hit))))) {
                                if ((1U & ((IData)(vlSelfRef.__PVT__arr_valid_way) 
                                           >> (IData)(vlSelfRef.__PVT__victim_way)))) {
                                    vlSelfRef.__PVT__tl_c_data_n 
                                        = vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_r;
                                }
                            } else if ((1U & (~ (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                                  & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_amo_i)) 
                                                 & (IData)(vlSelfRef.__PVT__hit))))) {
                                if ((1U & (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                            & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_amo_i)) 
                                           & (~ (IData)(vlSelfRef.__PVT__hit))))) {
                                    if ((1U & ((IData)(vlSelfRef.__PVT__arr_valid_way) 
                                               >> (IData)(vlSelfRef.__PVT__victim_way)))) {
                                        vlSelfRef.__PVT__tl_c_data_n 
                                            = vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_r;
                                    }
                                } else if ((1U & (~ 
                                                  (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                                    & (~ (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_we))) 
                                                   & (IData)(vlSelfRef.__PVT__hit))))) {
                                    if ((1U & (~ (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                                   & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_we)) 
                                                  & (IData)(vlSelfRef.__PVT__hit))))) {
                                        if ((1U & (
                                                   ((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                                    & (~ (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_we))) 
                                                   & (~ (IData)(vlSelfRef.__PVT__hit))))) {
                                            if ((1U 
                                                 & (((IData)(vlSelfRef.__PVT__arr_valid_way) 
                                                     & (IData)(vlSelfRef.__PVT__arr_dirty_way)) 
                                                    >> (IData)(vlSelfRef.__PVT__victim_way)))) {
                                                vlSelfRef.__PVT__tl_c_data_n 
                                                    = vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_r;
                                            }
                                        } else if (
                                                   (1U 
                                                    & (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                                        & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_we)) 
                                                       & (~ (IData)(vlSelfRef.__PVT__hit))))) {
                                            if ((1U 
                                                 & (((IData)(vlSelfRef.__PVT__arr_valid_way) 
                                                     & (IData)(vlSelfRef.__PVT__arr_dirty_way)) 
                                                    >> (IData)(vlSelfRef.__PVT__victim_way)))) {
                                                vlSelfRef.__PVT__tl_c_data_n 
                                                    = vlSelfRef.__PVT__u_arrays__DOT__scalar_rdata_r;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    if ((((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                          & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_lr_i)) 
                         & (IData)(vlSelfRef.__PVT__hit))) {
                        vlSelfRef.__PVT__rdata_n = vlSelfRef.__PVT__hit_data_word;
                    } else if ((1U & (~ (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                          & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_lr_i)) 
                                         & (~ (IData)(vlSelfRef.__PVT__hit)))))) {
                        if ((((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                              & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_sc_i)) 
                             & (IData)(vlSelfRef.__PVT__hit))) {
                            if ((1U & (~ (((IData)(vlSelfRef.__PVT__resv_valid_q) 
                                           & ((0x3ffffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[1U])) 
                                                   << 0x1aU) 
                                                  | ((QData)((IData)(
                                                                     vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[0U])) 
                                                     >> 6U))) 
                                              == vlSelfRef.__PVT__resv_addr_q)) 
                                          & ((1U & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_amo_word_i)) 
                                             == (IData)(vlSelfRef.__PVT__resv_word_q)))))) {
                                vlSelfRef.__PVT__rdata_n = 1ULL;
                            }
                        } else if ((1U & (~ (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                              & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_sc_i)) 
                                             & (~ (IData)(vlSelfRef.__PVT__hit)))))) {
                            if ((1U & (~ (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                           & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_amo_i)) 
                                          & (IData)(vlSelfRef.__PVT__hit))))) {
                                if ((1U & (~ (((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                               & (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__dut__DOT__cpu_amo_i)) 
                                              & (~ (IData)(vlSelfRef.__PVT__hit)))))) {
                                    if ((((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_req) 
                                          & (~ (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_we))) 
                                         & (IData)(vlSelfRef.__PVT__hit))) {
                                        vlSelfRef.__PVT__rdata_n 
                                            = vlSelfRef.__PVT__hit_data_word;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void Vrv64g_cache_system_tb_rv64g_l1_dcache___nba_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__0(Vrv64g_cache_system_tb_rv64g_l1_dcache* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv64g_cache_system_tb_rv64g_l1_dcache___nba_sequent__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__0\n"); );
    Vrv64g_cache_system_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ u_arrays__DOT__u_crossbar__DOT____VdfgRegularize_h473a9933_0_8;
    u_arrays__DOT__u_crossbar__DOT____VdfgRegularize_h473a9933_0_8 = 0;
    CData/*7:0*/ u_arrays__DOT__u_crossbar__DOT____VdfgRegularize_h473a9933_0_9;
    u_arrays__DOT__u_crossbar__DOT____VdfgRegularize_h473a9933_0_9 = 0;
    CData/*7:0*/ u_arrays__DOT__u_crossbar__DOT____VdfgRegularize_h473a9933_0_10;
    u_arrays__DOT__u_crossbar__DOT____VdfgRegularize_h473a9933_0_10 = 0;
    CData/*7:0*/ u_arrays__DOT__u_crossbar__DOT____VdfgRegularize_h473a9933_0_11;
    u_arrays__DOT__u_crossbar__DOT____VdfgRegularize_h473a9933_0_11 = 0;
    CData/*7:0*/ u_arrays__DOT__u_crossbar__DOT____VdfgRegularize_h473a9933_0_12;
    u_arrays__DOT__u_crossbar__DOT____VdfgRegularize_h473a9933_0_12 = 0;
    CData/*7:0*/ u_arrays__DOT__u_crossbar__DOT____VdfgRegularize_h473a9933_0_13;
    u_arrays__DOT__u_crossbar__DOT____VdfgRegularize_h473a9933_0_13 = 0;
    CData/*7:0*/ u_arrays__DOT__u_crossbar__DOT____VdfgRegularize_h473a9933_0_14;
    u_arrays__DOT__u_crossbar__DOT____VdfgRegularize_h473a9933_0_14 = 0;
    CData/*7:0*/ u_arrays__DOT__u_crossbar__DOT____VdfgRegularize_h473a9933_0_15;
    u_arrays__DOT__u_crossbar__DOT____VdfgRegularize_h473a9933_0_15 = 0;
    QData/*63:0*/ __VdlyVal__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__data_q__v0;
    __VdlyVal__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__data_q__v0 = 0;
    CData/*7:0*/ __VdlyDim0__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__data_q__v0;
    __VdlyDim0__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__data_q__v0 = 0;
    CData/*2:0*/ __VdlyDim1__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__data_q__v0;
    __VdlyDim1__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__data_q__v0 = 0;
    CData/*0:0*/ __VdlySet__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__data_q__v0;
    __VdlySet__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__data_q__v0 = 0;
    CData/*1:0*/ __VdlyVal__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q__v0;
    __VdlyVal__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q__v0 = 0;
    CData/*4:0*/ __VdlyDim0__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q__v0;
    __VdlyDim0__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q__v0 = 0;
    CData/*2:0*/ __VdlyDim1__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q__v0;
    __VdlyDim1__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q__v0 = 0;
    CData/*0:0*/ __VdlySet__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q__v0;
    __VdlySet__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q__v0 = 0;
    CData/*0:0*/ __VdlySet__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q__v1;
    __VdlySet__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q__v1 = 0;
    QData/*52:0*/ __VdlyVal__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__tag_q__v0;
    __VdlyVal__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__tag_q__v0 = 0;
    CData/*4:0*/ __VdlyDim0__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__tag_q__v0;
    __VdlyDim0__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__tag_q__v0 = 0;
    CData/*2:0*/ __VdlyDim1__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__tag_q__v0;
    __VdlyDim1__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__tag_q__v0 = 0;
    CData/*0:0*/ __VdlySet__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__tag_q__v0;
    __VdlySet__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__tag_q__v0 = 0;
    QData/*63:0*/ __VdlyVal__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__data_q__v0;
    __VdlyVal__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__data_q__v0 = 0;
    CData/*7:0*/ __VdlyDim0__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__data_q__v0;
    __VdlyDim0__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__data_q__v0 = 0;
    CData/*2:0*/ __VdlyDim1__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__data_q__v0;
    __VdlyDim1__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__data_q__v0 = 0;
    CData/*0:0*/ __VdlySet__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__data_q__v0;
    __VdlySet__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__data_q__v0 = 0;
    CData/*1:0*/ __VdlyVal__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q__v0;
    __VdlyVal__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q__v0 = 0;
    CData/*4:0*/ __VdlyDim0__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q__v0;
    __VdlyDim0__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q__v0 = 0;
    CData/*2:0*/ __VdlyDim1__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q__v0;
    __VdlyDim1__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q__v0 = 0;
    CData/*0:0*/ __VdlySet__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q__v0;
    __VdlySet__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q__v0 = 0;
    CData/*0:0*/ __VdlySet__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q__v1;
    __VdlySet__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q__v1 = 0;
    QData/*52:0*/ __VdlyVal__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__tag_q__v0;
    __VdlyVal__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__tag_q__v0 = 0;
    CData/*4:0*/ __VdlyDim0__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__tag_q__v0;
    __VdlyDim0__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__tag_q__v0 = 0;
    CData/*2:0*/ __VdlyDim1__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__tag_q__v0;
    __VdlyDim1__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__tag_q__v0 = 0;
    CData/*0:0*/ __VdlySet__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__tag_q__v0;
    __VdlySet__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__tag_q__v0 = 0;
    QData/*63:0*/ __VdlyVal__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__data_q__v0;
    __VdlyVal__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__data_q__v0 = 0;
    CData/*7:0*/ __VdlyDim0__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__data_q__v0;
    __VdlyDim0__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__data_q__v0 = 0;
    CData/*2:0*/ __VdlyDim1__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__data_q__v0;
    __VdlyDim1__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__data_q__v0 = 0;
    CData/*0:0*/ __VdlySet__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__data_q__v0;
    __VdlySet__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__data_q__v0 = 0;
    CData/*1:0*/ __VdlyVal__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q__v0;
    __VdlyVal__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q__v0 = 0;
    CData/*4:0*/ __VdlyDim0__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q__v0;
    __VdlyDim0__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q__v0 = 0;
    CData/*2:0*/ __VdlyDim1__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q__v0;
    __VdlyDim1__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q__v0 = 0;
    CData/*0:0*/ __VdlySet__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q__v0;
    __VdlySet__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q__v0 = 0;
    CData/*0:0*/ __VdlySet__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q__v1;
    __VdlySet__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q__v1 = 0;
    QData/*52:0*/ __VdlyVal__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__tag_q__v0;
    __VdlyVal__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__tag_q__v0 = 0;
    CData/*4:0*/ __VdlyDim0__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__tag_q__v0;
    __VdlyDim0__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__tag_q__v0 = 0;
    CData/*2:0*/ __VdlyDim1__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__tag_q__v0;
    __VdlyDim1__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__tag_q__v0 = 0;
    CData/*0:0*/ __VdlySet__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__tag_q__v0;
    __VdlySet__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__tag_q__v0 = 0;
    QData/*63:0*/ __VdlyVal__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__data_q__v0;
    __VdlyVal__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__data_q__v0 = 0;
    CData/*7:0*/ __VdlyDim0__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__data_q__v0;
    __VdlyDim0__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__data_q__v0 = 0;
    CData/*2:0*/ __VdlyDim1__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__data_q__v0;
    __VdlyDim1__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__data_q__v0 = 0;
    CData/*0:0*/ __VdlySet__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__data_q__v0;
    __VdlySet__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__data_q__v0 = 0;
    CData/*1:0*/ __VdlyVal__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q__v0;
    __VdlyVal__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q__v0 = 0;
    CData/*4:0*/ __VdlyDim0__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q__v0;
    __VdlyDim0__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q__v0 = 0;
    CData/*2:0*/ __VdlyDim1__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q__v0;
    __VdlyDim1__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q__v0 = 0;
    CData/*0:0*/ __VdlySet__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q__v0;
    __VdlySet__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q__v0 = 0;
    CData/*0:0*/ __VdlySet__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q__v1;
    __VdlySet__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q__v1 = 0;
    QData/*52:0*/ __VdlyVal__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__tag_q__v0;
    __VdlyVal__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__tag_q__v0 = 0;
    CData/*4:0*/ __VdlyDim0__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__tag_q__v0;
    __VdlyDim0__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__tag_q__v0 = 0;
    CData/*2:0*/ __VdlyDim1__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__tag_q__v0;
    __VdlyDim1__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__tag_q__v0 = 0;
    CData/*0:0*/ __VdlySet__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__tag_q__v0;
    __VdlySet__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__tag_q__v0 = 0;
    QData/*63:0*/ __VdlyVal__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__data_q__v0;
    __VdlyVal__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__data_q__v0 = 0;
    CData/*7:0*/ __VdlyDim0__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__data_q__v0;
    __VdlyDim0__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__data_q__v0 = 0;
    CData/*2:0*/ __VdlyDim1__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__data_q__v0;
    __VdlyDim1__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__data_q__v0 = 0;
    CData/*0:0*/ __VdlySet__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__data_q__v0;
    __VdlySet__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__data_q__v0 = 0;
    CData/*1:0*/ __VdlyVal__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q__v0;
    __VdlyVal__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q__v0 = 0;
    CData/*4:0*/ __VdlyDim0__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q__v0;
    __VdlyDim0__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q__v0 = 0;
    CData/*2:0*/ __VdlyDim1__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q__v0;
    __VdlyDim1__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q__v0 = 0;
    CData/*0:0*/ __VdlySet__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q__v0;
    __VdlySet__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q__v0 = 0;
    CData/*0:0*/ __VdlySet__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q__v1;
    __VdlySet__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q__v1 = 0;
    QData/*52:0*/ __VdlyVal__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__tag_q__v0;
    __VdlyVal__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__tag_q__v0 = 0;
    CData/*4:0*/ __VdlyDim0__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__tag_q__v0;
    __VdlyDim0__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__tag_q__v0 = 0;
    CData/*2:0*/ __VdlyDim1__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__tag_q__v0;
    __VdlyDim1__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__tag_q__v0 = 0;
    CData/*0:0*/ __VdlySet__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__tag_q__v0;
    __VdlySet__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__tag_q__v0 = 0;
    QData/*63:0*/ __VdlyVal__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__data_q__v0;
    __VdlyVal__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__data_q__v0 = 0;
    CData/*7:0*/ __VdlyDim0__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__data_q__v0;
    __VdlyDim0__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__data_q__v0 = 0;
    CData/*2:0*/ __VdlyDim1__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__data_q__v0;
    __VdlyDim1__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__data_q__v0 = 0;
    CData/*0:0*/ __VdlySet__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__data_q__v0;
    __VdlySet__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__data_q__v0 = 0;
    CData/*1:0*/ __VdlyVal__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q__v0;
    __VdlyVal__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q__v0 = 0;
    CData/*4:0*/ __VdlyDim0__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q__v0;
    __VdlyDim0__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q__v0 = 0;
    CData/*2:0*/ __VdlyDim1__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q__v0;
    __VdlyDim1__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q__v0 = 0;
    CData/*0:0*/ __VdlySet__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q__v0;
    __VdlySet__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q__v0 = 0;
    CData/*0:0*/ __VdlySet__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q__v1;
    __VdlySet__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q__v1 = 0;
    QData/*52:0*/ __VdlyVal__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__tag_q__v0;
    __VdlyVal__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__tag_q__v0 = 0;
    CData/*4:0*/ __VdlyDim0__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__tag_q__v0;
    __VdlyDim0__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__tag_q__v0 = 0;
    CData/*2:0*/ __VdlyDim1__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__tag_q__v0;
    __VdlyDim1__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__tag_q__v0 = 0;
    CData/*0:0*/ __VdlySet__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__tag_q__v0;
    __VdlySet__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__tag_q__v0 = 0;
    QData/*63:0*/ __VdlyVal__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__data_q__v0;
    __VdlyVal__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__data_q__v0 = 0;
    CData/*7:0*/ __VdlyDim0__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__data_q__v0;
    __VdlyDim0__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__data_q__v0 = 0;
    CData/*2:0*/ __VdlyDim1__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__data_q__v0;
    __VdlyDim1__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__data_q__v0 = 0;
    CData/*0:0*/ __VdlySet__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__data_q__v0;
    __VdlySet__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__data_q__v0 = 0;
    CData/*1:0*/ __VdlyVal__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q__v0;
    __VdlyVal__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q__v0 = 0;
    CData/*4:0*/ __VdlyDim0__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q__v0;
    __VdlyDim0__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q__v0 = 0;
    CData/*2:0*/ __VdlyDim1__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q__v0;
    __VdlyDim1__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q__v0 = 0;
    CData/*0:0*/ __VdlySet__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q__v0;
    __VdlySet__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q__v0 = 0;
    CData/*0:0*/ __VdlySet__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q__v1;
    __VdlySet__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q__v1 = 0;
    QData/*52:0*/ __VdlyVal__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__tag_q__v0;
    __VdlyVal__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__tag_q__v0 = 0;
    CData/*4:0*/ __VdlyDim0__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__tag_q__v0;
    __VdlyDim0__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__tag_q__v0 = 0;
    CData/*2:0*/ __VdlyDim1__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__tag_q__v0;
    __VdlyDim1__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__tag_q__v0 = 0;
    CData/*0:0*/ __VdlySet__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__tag_q__v0;
    __VdlySet__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__tag_q__v0 = 0;
    QData/*63:0*/ __VdlyVal__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__data_q__v0;
    __VdlyVal__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__data_q__v0 = 0;
    CData/*7:0*/ __VdlyDim0__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__data_q__v0;
    __VdlyDim0__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__data_q__v0 = 0;
    CData/*2:0*/ __VdlyDim1__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__data_q__v0;
    __VdlyDim1__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__data_q__v0 = 0;
    CData/*0:0*/ __VdlySet__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__data_q__v0;
    __VdlySet__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__data_q__v0 = 0;
    CData/*1:0*/ __VdlyVal__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q__v0;
    __VdlyVal__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q__v0 = 0;
    CData/*4:0*/ __VdlyDim0__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q__v0;
    __VdlyDim0__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q__v0 = 0;
    CData/*2:0*/ __VdlyDim1__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q__v0;
    __VdlyDim1__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q__v0 = 0;
    CData/*0:0*/ __VdlySet__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q__v0;
    __VdlySet__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q__v0 = 0;
    CData/*0:0*/ __VdlySet__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q__v1;
    __VdlySet__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q__v1 = 0;
    QData/*52:0*/ __VdlyVal__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__tag_q__v0;
    __VdlyVal__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__tag_q__v0 = 0;
    CData/*4:0*/ __VdlyDim0__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__tag_q__v0;
    __VdlyDim0__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__tag_q__v0 = 0;
    CData/*2:0*/ __VdlyDim1__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__tag_q__v0;
    __VdlyDim1__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__tag_q__v0 = 0;
    CData/*0:0*/ __VdlySet__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__tag_q__v0;
    __VdlySet__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__tag_q__v0 = 0;
    QData/*57:0*/ __VdlyVal__u_vlsu_miss__DOT__miss_addr_q__v0;
    __VdlyVal__u_vlsu_miss__DOT__miss_addr_q__v0 = 0;
    CData/*0:0*/ __VdlySet__u_vlsu_miss__DOT__miss_addr_q__v0;
    __VdlySet__u_vlsu_miss__DOT__miss_addr_q__v0 = 0;
    QData/*57:0*/ __VdlyVal__u_vlsu_miss__DOT__miss_addr_q__v1;
    __VdlyVal__u_vlsu_miss__DOT__miss_addr_q__v1 = 0;
    QData/*57:0*/ __VdlyVal__u_vlsu_miss__DOT__miss_addr_q__v2;
    __VdlyVal__u_vlsu_miss__DOT__miss_addr_q__v2 = 0;
    QData/*57:0*/ __VdlyVal__u_vlsu_miss__DOT__miss_addr_q__v3;
    __VdlyVal__u_vlsu_miss__DOT__miss_addr_q__v3 = 0;
    QData/*57:0*/ __VdlyVal__u_vlsu_miss__DOT__miss_addr_q__v4;
    __VdlyVal__u_vlsu_miss__DOT__miss_addr_q__v4 = 0;
    QData/*57:0*/ __VdlyVal__u_vlsu_miss__DOT__miss_addr_q__v5;
    __VdlyVal__u_vlsu_miss__DOT__miss_addr_q__v5 = 0;
    QData/*57:0*/ __VdlyVal__u_vlsu_miss__DOT__miss_addr_q__v6;
    __VdlyVal__u_vlsu_miss__DOT__miss_addr_q__v6 = 0;
    QData/*57:0*/ __VdlyVal__u_vlsu_miss__DOT__miss_addr_q__v7;
    __VdlyVal__u_vlsu_miss__DOT__miss_addr_q__v7 = 0;
    CData/*0:0*/ __VdlySet__u_vlsu_miss__DOT__miss_addr_q__v8;
    __VdlySet__u_vlsu_miss__DOT__miss_addr_q__v8 = 0;
    CData/*0:0*/ __VdlyVal__u_plru__DOT__plru_bits_q__v0;
    __VdlyVal__u_plru__DOT__plru_bits_q__v0 = 0;
    CData/*4:0*/ __VdlyDim0__u_plru__DOT__plru_bits_q__v0;
    __VdlyDim0__u_plru__DOT__plru_bits_q__v0 = 0;
    CData/*0:0*/ __VdlySet__u_plru__DOT__plru_bits_q__v0;
    __VdlySet__u_plru__DOT__plru_bits_q__v0 = 0;
    CData/*0:0*/ __VdlyVal__u_plru__DOT__plru_bits_q__v1;
    __VdlyVal__u_plru__DOT__plru_bits_q__v1 = 0;
    CData/*4:0*/ __VdlyDim0__u_plru__DOT__plru_bits_q__v1;
    __VdlyDim0__u_plru__DOT__plru_bits_q__v1 = 0;
    CData/*0:0*/ __VdlySet__u_plru__DOT__plru_bits_q__v1;
    __VdlySet__u_plru__DOT__plru_bits_q__v1 = 0;
    CData/*0:0*/ __VdlyVal__u_plru__DOT__plru_bits_q__v2;
    __VdlyVal__u_plru__DOT__plru_bits_q__v2 = 0;
    CData/*4:0*/ __VdlyDim0__u_plru__DOT__plru_bits_q__v2;
    __VdlyDim0__u_plru__DOT__plru_bits_q__v2 = 0;
    CData/*0:0*/ __VdlySet__u_plru__DOT__plru_bits_q__v2;
    __VdlySet__u_plru__DOT__plru_bits_q__v2 = 0;
    CData/*0:0*/ __VdlyVal__u_plru__DOT__plru_bits_q__v3;
    __VdlyVal__u_plru__DOT__plru_bits_q__v3 = 0;
    CData/*4:0*/ __VdlyDim0__u_plru__DOT__plru_bits_q__v3;
    __VdlyDim0__u_plru__DOT__plru_bits_q__v3 = 0;
    CData/*0:0*/ __VdlySet__u_plru__DOT__plru_bits_q__v3;
    __VdlySet__u_plru__DOT__plru_bits_q__v3 = 0;
    CData/*0:0*/ __VdlyVal__u_plru__DOT__plru_bits_q__v4;
    __VdlyVal__u_plru__DOT__plru_bits_q__v4 = 0;
    CData/*4:0*/ __VdlyDim0__u_plru__DOT__plru_bits_q__v4;
    __VdlyDim0__u_plru__DOT__plru_bits_q__v4 = 0;
    CData/*0:0*/ __VdlySet__u_plru__DOT__plru_bits_q__v4;
    __VdlySet__u_plru__DOT__plru_bits_q__v4 = 0;
    CData/*0:0*/ __VdlyVal__u_plru__DOT__plru_bits_q__v5;
    __VdlyVal__u_plru__DOT__plru_bits_q__v5 = 0;
    CData/*4:0*/ __VdlyDim0__u_plru__DOT__plru_bits_q__v5;
    __VdlyDim0__u_plru__DOT__plru_bits_q__v5 = 0;
    CData/*0:0*/ __VdlySet__u_plru__DOT__plru_bits_q__v5;
    __VdlySet__u_plru__DOT__plru_bits_q__v5 = 0;
    CData/*0:0*/ __VdlyVal__u_plru__DOT__plru_bits_q__v6;
    __VdlyVal__u_plru__DOT__plru_bits_q__v6 = 0;
    CData/*4:0*/ __VdlyDim0__u_plru__DOT__plru_bits_q__v6;
    __VdlyDim0__u_plru__DOT__plru_bits_q__v6 = 0;
    CData/*0:0*/ __VdlySet__u_plru__DOT__plru_bits_q__v6;
    __VdlySet__u_plru__DOT__plru_bits_q__v6 = 0;
    CData/*0:0*/ __VdlySet__u_plru__DOT__plru_bits_q__v7;
    __VdlySet__u_plru__DOT__plru_bits_q__v7 = 0;
    // Body
    __VdlySet__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__data_q__v0 = 0U;
    __VdlySet__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__data_q__v0 = 0U;
    __VdlySet__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__data_q__v0 = 0U;
    __VdlySet__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__data_q__v0 = 0U;
    __VdlySet__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__data_q__v0 = 0U;
    __VdlySet__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__data_q__v0 = 0U;
    __VdlySet__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__data_q__v0 = 0U;
    __VdlySet__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__data_q__v0 = 0U;
    __VdlySet__u_vlsu_miss__DOT__miss_addr_q__v0 = 0U;
    __VdlySet__u_vlsu_miss__DOT__miss_addr_q__v8 = 0U;
    __VdlySet__u_plru__DOT__plru_bits_q__v0 = 0U;
    __VdlySet__u_plru__DOT__plru_bits_q__v1 = 0U;
    __VdlySet__u_plru__DOT__plru_bits_q__v2 = 0U;
    __VdlySet__u_plru__DOT__plru_bits_q__v3 = 0U;
    __VdlySet__u_plru__DOT__plru_bits_q__v4 = 0U;
    __VdlySet__u_plru__DOT__plru_bits_q__v5 = 0U;
    __VdlySet__u_plru__DOT__plru_bits_q__v6 = 0U;
    __VdlySet__u_plru__DOT__plru_bits_q__v7 = 0U;
    __VdlySet__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__tag_q__v0 = 0U;
    __VdlySet__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__tag_q__v0 = 0U;
    __VdlySet__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__tag_q__v0 = 0U;
    __VdlySet__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__tag_q__v0 = 0U;
    __VdlySet__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__tag_q__v0 = 0U;
    __VdlySet__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__tag_q__v0 = 0U;
    __VdlySet__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__tag_q__v0 = 0U;
    __VdlySet__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__tag_q__v0 = 0U;
    __VdlySet__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q__v0 = 0U;
    __VdlySet__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q__v1 = 0U;
    __VdlySet__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q__v0 = 0U;
    __VdlySet__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q__v1 = 0U;
    __VdlySet__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q__v0 = 0U;
    __VdlySet__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q__v1 = 0U;
    __VdlySet__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q__v0 = 0U;
    __VdlySet__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q__v1 = 0U;
    __VdlySet__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q__v0 = 0U;
    __VdlySet__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q__v1 = 0U;
    __VdlySet__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q__v0 = 0U;
    __VdlySet__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q__v1 = 0U;
    __VdlySet__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q__v0 = 0U;
    __VdlySet__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q__v1 = 0U;
    __VdlySet__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q__v0 = 0U;
    __VdlySet__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q__v1 = 0U;
    if ((1U & (~ (IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__rst_n)))) {
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__i = 8U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__j = 0x20U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__i = 8U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__j = 0x20U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__i = 8U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__j = 0x20U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__i = 8U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__j = 0x20U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__i = 8U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__j = 0x20U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__i = 8U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__j = 0x20U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__i = 8U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__j = 0x20U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__i = 8U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__j = 0x20U;
        vlSelfRef.__PVT__u_plru__DOT__si = 0x20U;
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_valid_q = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_we_q = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[0U] 
            = Vrv64g_cache_system_tb__ConstPool__CONST_h93e1b771_0[0U];
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[1U] 
            = Vrv64g_cache_system_tb__ConstPool__CONST_h93e1b771_0[1U];
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[2U] 
            = Vrv64g_cache_system_tb__ConstPool__CONST_h93e1b771_0[2U];
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[3U] 
            = Vrv64g_cache_system_tb__ConstPool__CONST_h93e1b771_0[3U];
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[4U] 
            = Vrv64g_cache_system_tb__ConstPool__CONST_h93e1b771_0[4U];
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[5U] 
            = Vrv64g_cache_system_tb__ConstPool__CONST_h93e1b771_0[5U];
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[6U] 
            = Vrv64g_cache_system_tb__ConstPool__CONST_h93e1b771_0[6U];
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[7U] 
            = Vrv64g_cache_system_tb__ConstPool__CONST_h93e1b771_0[7U];
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[8U] 
            = Vrv64g_cache_system_tb__ConstPool__CONST_h93e1b771_0[8U];
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[9U] 
            = Vrv64g_cache_system_tb__ConstPool__CONST_h93e1b771_0[9U];
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[0xaU] 
            = Vrv64g_cache_system_tb__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[0xbU] 
            = Vrv64g_cache_system_tb__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[0xcU] 
            = Vrv64g_cache_system_tb__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[0xdU] 
            = Vrv64g_cache_system_tb__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[0xeU] 
            = Vrv64g_cache_system_tb__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[0xfU] 
            = Vrv64g_cache_system_tb__ConstPool__CONST_h93e1b771_0[0xfU];
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_wdata_q[0U] 
            = Vrv64g_cache_system_tb__ConstPool__CONST_h93e1b771_0[0U];
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_wdata_q[1U] 
            = Vrv64g_cache_system_tb__ConstPool__CONST_h93e1b771_0[1U];
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_wdata_q[2U] 
            = Vrv64g_cache_system_tb__ConstPool__CONST_h93e1b771_0[2U];
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_wdata_q[3U] 
            = Vrv64g_cache_system_tb__ConstPool__CONST_h93e1b771_0[3U];
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_wdata_q[4U] 
            = Vrv64g_cache_system_tb__ConstPool__CONST_h93e1b771_0[4U];
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_wdata_q[5U] 
            = Vrv64g_cache_system_tb__ConstPool__CONST_h93e1b771_0[5U];
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_wdata_q[6U] 
            = Vrv64g_cache_system_tb__ConstPool__CONST_h93e1b771_0[6U];
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_wdata_q[7U] 
            = Vrv64g_cache_system_tb__ConstPool__CONST_h93e1b771_0[7U];
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_wdata_q[8U] 
            = Vrv64g_cache_system_tb__ConstPool__CONST_h93e1b771_0[8U];
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_wdata_q[9U] 
            = Vrv64g_cache_system_tb__ConstPool__CONST_h93e1b771_0[9U];
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_wdata_q[0xaU] 
            = Vrv64g_cache_system_tb__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_wdata_q[0xbU] 
            = Vrv64g_cache_system_tb__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_wdata_q[0xcU] 
            = Vrv64g_cache_system_tb__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_wdata_q[0xdU] 
            = Vrv64g_cache_system_tb__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_wdata_q[0xeU] 
            = Vrv64g_cache_system_tb__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_wdata_q[0xfU] 
            = Vrv64g_cache_system_tb__ConstPool__CONST_h93e1b771_0[0xfU];
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_be_q = 0ULL;
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_way_q = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_tag_q[0U] 
            = Vrv64g_cache_system_tb__ConstPool__CONST_hba6586cf_0[0U];
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_tag_q[1U] 
            = Vrv64g_cache_system_tb__ConstPool__CONST_hba6586cf_0[1U];
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_tag_q[2U] 
            = Vrv64g_cache_system_tb__ConstPool__CONST_hba6586cf_0[2U];
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_tag_q[3U] 
            = Vrv64g_cache_system_tb__ConstPool__CONST_hba6586cf_0[3U];
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_tag_q[4U] 
            = Vrv64g_cache_system_tb__ConstPool__CONST_hba6586cf_0[4U];
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_tag_q[5U] 
            = Vrv64g_cache_system_tb__ConstPool__CONST_hba6586cf_0[5U];
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_tag_q[6U] 
            = Vrv64g_cache_system_tb__ConstPool__CONST_hba6586cf_0[6U];
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_tag_q[7U] 
            = Vrv64g_cache_system_tb__ConstPool__CONST_hba6586cf_0[7U];
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_tag_q[8U] 
            = Vrv64g_cache_system_tb__ConstPool__CONST_hba6586cf_0[8U];
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_tag_q[9U] 
            = Vrv64g_cache_system_tb__ConstPool__CONST_hba6586cf_0[9U];
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_tag_q[0xaU] 
            = Vrv64g_cache_system_tb__ConstPool__CONST_hba6586cf_0[0xaU];
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_tag_q[0xbU] 
            = Vrv64g_cache_system_tb__ConstPool__CONST_hba6586cf_0[0xbU];
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_tag_q[0xcU] 
            = Vrv64g_cache_system_tb__ConstPool__CONST_hba6586cf_0[0xcU];
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_tag_q[0xdU] 
            = Vrv64g_cache_system_tb__ConstPool__CONST_hba6586cf_0[0xdU];
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_state_q = 0U;
    }
    if (vlSymsp->TOP.rv64g_cache_system_tb__DOT__rst_n) {
        if (((IData)(vlSelfRef.__PVT__u_arrays__DOT__arb_bank_req__BRA__0__KET__) 
             & (IData)(vlSelfRef.__PVT__u_arrays__DOT__arb_bank_we__BRA__0__KET__))) {
            vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__b = 8U;
            vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__be_mask = 0ULL;
            if ((1U & (IData)(vlSelfRef.__PVT__u_arrays__DOT__arb_bank_be__BRA__7__03a0__KET__))) {
                vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__be_mask 
                    = (0xffULL | vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__be_mask);
            }
            if ((2U & (IData)(vlSelfRef.__PVT__u_arrays__DOT__arb_bank_be__BRA__7__03a0__KET__))) {
                vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__be_mask 
                    = (0xff00ULL | vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__be_mask);
            }
            if ((4U & (IData)(vlSelfRef.__PVT__u_arrays__DOT__arb_bank_be__BRA__7__03a0__KET__))) {
                vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__be_mask 
                    = (0xff0000ULL | vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__be_mask);
            }
            if ((8U & (IData)(vlSelfRef.__PVT__u_arrays__DOT__arb_bank_be__BRA__7__03a0__KET__))) {
                vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__be_mask 
                    = (0xff000000ULL | vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__be_mask);
            }
            if ((0x10U & (IData)(vlSelfRef.__PVT__u_arrays__DOT__arb_bank_be__BRA__7__03a0__KET__))) {
                vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__be_mask 
                    = (0xff00000000ULL | vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__be_mask);
            }
            if ((0x20U & (IData)(vlSelfRef.__PVT__u_arrays__DOT__arb_bank_be__BRA__7__03a0__KET__))) {
                vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__be_mask 
                    = (0xff0000000000ULL | vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__be_mask);
            }
            if ((0x40U & (IData)(vlSelfRef.__PVT__u_arrays__DOT__arb_bank_be__BRA__7__03a0__KET__))) {
                vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__be_mask 
                    = (0xff000000000000ULL | vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__be_mask);
            }
            if ((0x80U & (IData)(vlSelfRef.__PVT__u_arrays__DOT__arb_bank_be__BRA__7__03a0__KET__))) {
                vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__be_mask 
                    = (0xff00000000000000ULL | vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__be_mask);
            }
            __VdlyVal__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__data_q__v0 
                = ((((0U == (IData)(vlSelfRef.__PVT__arr_word_sel))
                      ? vlSelfRef.__PVT__arr_wdata : 
                     (((QData)((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_wdata_r[1U])) 
                       << 0x20U) | (QData)((IData)(
                                                   vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_wdata_r[0U])))) 
                    & vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__be_mask) 
                   | (vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__data_q
                      [vlSelfRef.__PVT__u_arrays__DOT__arb_bank_way__BRA__2__03a0__KET__]
                      [vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__line_addr] 
                      & (~ vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__be_mask)));
            __VdlyDim0__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__data_q__v0 
                = vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__line_addr;
            __VdlyDim1__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__data_q__v0 
                = vlSelfRef.__PVT__u_arrays__DOT__arb_bank_way__BRA__2__03a0__KET__;
            __VdlySet__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__data_q__v0 = 1U;
            if ((0U == (IData)(vlSelfRef.__PVT__arr_word_sel))) {
                __VdlyVal__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__tag_q__v0 
                    = (0x1fffffffffffffULL & vlSelfRef.__PVT__arr_tag_in);
                __VdlyVal__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q__v0 
                    = (3U & (IData)(vlSelfRef.__PVT__arr_state_in));
            } else {
                __VdlyVal__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__tag_q__v0 
                    = (0x1fffffffffffffULL & (((QData)((IData)(
                                                               vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_tag_r[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_tag_r[0U]))));
                __VdlyVal__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q__v0 
                    = (3U & (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_state_r));
            }
            __VdlyDim0__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__tag_q__v0 
                = vlSelfRef.__PVT__u_arrays__DOT__arb_bank_index__BRA__4__03a0__KET__;
            __VdlyDim1__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__tag_q__v0 
                = vlSelfRef.__PVT__u_arrays__DOT__arb_bank_way__BRA__2__03a0__KET__;
            __VdlySet__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__tag_q__v0 = 1U;
            __VdlyDim0__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q__v0 
                = vlSelfRef.__PVT__u_arrays__DOT__arb_bank_index__BRA__4__03a0__KET__;
            __VdlyDim1__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q__v0 
                = vlSelfRef.__PVT__u_arrays__DOT__arb_bank_way__BRA__2__03a0__KET__;
            __VdlySet__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q__v0 = 1U;
        }
        if (((IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_req_o) 
             & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_we_o))) {
            vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__b = 8U;
            vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__be_mask = 0ULL;
            if ((1U & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_be_o))) {
                vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__be_mask 
                    = (0xffULL | vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__be_mask);
            }
            if ((2U & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_be_o))) {
                vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__be_mask 
                    = (0xff00ULL | vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__be_mask);
            }
            if ((4U & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_be_o))) {
                vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__be_mask 
                    = (0xff0000ULL | vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__be_mask);
            }
            if ((8U & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_be_o))) {
                vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__be_mask 
                    = (0xff000000ULL | vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__be_mask);
            }
            if ((0x10U & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_be_o))) {
                vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__be_mask 
                    = (0xff00000000ULL | vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__be_mask);
            }
            if ((0x20U & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_be_o))) {
                vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__be_mask 
                    = (0xff0000000000ULL | vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__be_mask);
            }
            if ((0x40U & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_be_o))) {
                vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__be_mask 
                    = (0xff000000000000ULL | vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__be_mask);
            }
            if ((0x80U & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_be_o))) {
                vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__be_mask 
                    = (0xff00000000000000ULL | vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__be_mask);
            }
            __VdlyVal__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__data_q__v0 
                = ((((1U == (IData)(vlSelfRef.__PVT__arr_word_sel))
                      ? vlSelfRef.__PVT__arr_wdata : 
                     (((QData)((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_wdata_r[3U])) 
                       << 0x20U) | (QData)((IData)(
                                                   vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_wdata_r[2U])))) 
                    & vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__be_mask) 
                   | (vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__data_q
                      [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_way_o]
                      [vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__line_addr] 
                      & (~ vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__be_mask)));
            __VdlyDim0__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__data_q__v0 
                = vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__line_addr;
            __VdlyDim1__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__data_q__v0 
                = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_way_o;
            __VdlySet__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__data_q__v0 = 1U;
            if ((1U == (IData)(vlSelfRef.__PVT__arr_word_sel))) {
                __VdlyVal__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__tag_q__v0 
                    = (0x1fffffffffffffULL & vlSelfRef.__PVT__arr_tag_in);
                __VdlyVal__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q__v0 
                    = (3U & (IData)(vlSelfRef.__PVT__arr_state_in));
            } else {
                __VdlyVal__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__tag_q__v0 
                    = (0x1fffffffffffffULL & (((QData)((IData)(
                                                               vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_tag_r[3U])) 
                                               << 0x2bU) 
                                              | (((QData)((IData)(
                                                                  vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_tag_r[2U])) 
                                                  << 0xbU) 
                                                 | ((QData)((IData)(
                                                                    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_tag_r[1U])) 
                                                    >> 0x15U))));
                __VdlyVal__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q__v0 
                    = (3U & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_state_r) 
                             >> 2U));
            }
            __VdlyDim0__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__tag_q__v0 
                = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_index_o;
            __VdlyDim1__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__tag_q__v0 
                = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_way_o;
            __VdlySet__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__tag_q__v0 = 1U;
            __VdlyDim0__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q__v0 
                = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_index_o;
            __VdlyDim1__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q__v0 
                = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_way_o;
            __VdlySet__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q__v0 = 1U;
        }
        if (((IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_req_o) 
             & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_we_o))) {
            vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__b = 8U;
            vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__be_mask = 0ULL;
            if ((1U & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_be_o))) {
                vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__be_mask 
                    = (0xffULL | vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__be_mask);
            }
            if ((2U & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_be_o))) {
                vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__be_mask 
                    = (0xff00ULL | vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__be_mask);
            }
            if ((4U & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_be_o))) {
                vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__be_mask 
                    = (0xff0000ULL | vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__be_mask);
            }
            if ((8U & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_be_o))) {
                vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__be_mask 
                    = (0xff000000ULL | vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__be_mask);
            }
            if ((0x10U & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_be_o))) {
                vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__be_mask 
                    = (0xff00000000ULL | vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__be_mask);
            }
            if ((0x20U & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_be_o))) {
                vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__be_mask 
                    = (0xff0000000000ULL | vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__be_mask);
            }
            if ((0x40U & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_be_o))) {
                vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__be_mask 
                    = (0xff000000000000ULL | vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__be_mask);
            }
            if ((0x80U & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_be_o))) {
                vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__be_mask 
                    = (0xff00000000000000ULL | vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__be_mask);
            }
            __VdlyVal__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__data_q__v0 
                = ((((2U == (IData)(vlSelfRef.__PVT__arr_word_sel))
                      ? vlSelfRef.__PVT__arr_wdata : 
                     (((QData)((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_wdata_r[5U])) 
                       << 0x20U) | (QData)((IData)(
                                                   vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_wdata_r[4U])))) 
                    & vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__be_mask) 
                   | (vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__data_q
                      [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_way_o]
                      [vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__line_addr] 
                      & (~ vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__be_mask)));
            __VdlyDim0__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__data_q__v0 
                = vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__line_addr;
            __VdlyDim1__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__data_q__v0 
                = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_way_o;
            __VdlySet__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__data_q__v0 = 1U;
            if ((2U == (IData)(vlSelfRef.__PVT__arr_word_sel))) {
                __VdlyVal__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__tag_q__v0 
                    = (0x1fffffffffffffULL & vlSelfRef.__PVT__arr_tag_in);
                __VdlyVal__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q__v0 
                    = (3U & (IData)(vlSelfRef.__PVT__arr_state_in));
            } else {
                __VdlyVal__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__tag_q__v0 
                    = (0x1fffffffffffffULL & (((QData)((IData)(
                                                               vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_tag_r[4U])) 
                                               << 0x36U) 
                                              | (((QData)((IData)(
                                                                  vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_tag_r[4U])) 
                                                  << 0x16U) 
                                                 | ((QData)((IData)(
                                                                    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_tag_r[3U])) 
                                                    >> 0xaU))));
                __VdlyVal__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q__v0 
                    = (3U & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_state_r) 
                             >> 4U));
            }
            __VdlyDim0__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__tag_q__v0 
                = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_index_o;
            __VdlyDim1__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__tag_q__v0 
                = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_way_o;
            __VdlySet__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__tag_q__v0 = 1U;
            __VdlyDim0__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q__v0 
                = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_index_o;
            __VdlyDim1__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q__v0 
                = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_way_o;
            __VdlySet__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q__v0 = 1U;
        }
        if (((IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_req_o) 
             & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_we_o))) {
            vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__b = 8U;
            vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__be_mask = 0ULL;
            if ((1U & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_be_o))) {
                vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__be_mask 
                    = (0xffULL | vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__be_mask);
            }
            if ((2U & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_be_o))) {
                vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__be_mask 
                    = (0xff00ULL | vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__be_mask);
            }
            if ((4U & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_be_o))) {
                vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__be_mask 
                    = (0xff0000ULL | vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__be_mask);
            }
            if ((8U & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_be_o))) {
                vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__be_mask 
                    = (0xff000000ULL | vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__be_mask);
            }
            if ((0x10U & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_be_o))) {
                vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__be_mask 
                    = (0xff00000000ULL | vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__be_mask);
            }
            if ((0x20U & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_be_o))) {
                vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__be_mask 
                    = (0xff0000000000ULL | vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__be_mask);
            }
            if ((0x40U & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_be_o))) {
                vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__be_mask 
                    = (0xff000000000000ULL | vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__be_mask);
            }
            if ((0x80U & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_be_o))) {
                vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__be_mask 
                    = (0xff00000000000000ULL | vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__be_mask);
            }
            __VdlyVal__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__data_q__v0 
                = ((((3U == (IData)(vlSelfRef.__PVT__arr_word_sel))
                      ? vlSelfRef.__PVT__arr_wdata : 
                     (((QData)((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_wdata_r[7U])) 
                       << 0x20U) | (QData)((IData)(
                                                   vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_wdata_r[6U])))) 
                    & vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__be_mask) 
                   | (vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__data_q
                      [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_way_o]
                      [vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__line_addr] 
                      & (~ vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__be_mask)));
            __VdlyDim0__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__data_q__v0 
                = vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__line_addr;
            __VdlyDim1__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__data_q__v0 
                = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_way_o;
            __VdlySet__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__data_q__v0 = 1U;
            if ((3U == (IData)(vlSelfRef.__PVT__arr_word_sel))) {
                __VdlyVal__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__tag_q__v0 
                    = (0x1fffffffffffffULL & vlSelfRef.__PVT__arr_tag_in);
                __VdlyVal__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q__v0 
                    = (3U & (IData)(vlSelfRef.__PVT__arr_state_in));
            } else {
                __VdlyVal__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__tag_q__v0 
                    = (0x1fffffffffffffULL & (((QData)((IData)(
                                                               vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_tag_r[6U])) 
                                               << 0x21U) 
                                              | (((QData)((IData)(
                                                                  vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_tag_r[5U])) 
                                                  << 1U) 
                                                 | ((QData)((IData)(
                                                                    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_tag_r[4U])) 
                                                    >> 0x1fU))));
                __VdlyVal__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q__v0 
                    = (3U & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_state_r) 
                             >> 6U));
            }
            __VdlyDim0__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__tag_q__v0 
                = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_index_o;
            __VdlyDim1__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__tag_q__v0 
                = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_way_o;
            __VdlySet__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__tag_q__v0 = 1U;
            __VdlyDim0__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q__v0 
                = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_index_o;
            __VdlyDim1__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q__v0 
                = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_way_o;
            __VdlySet__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q__v0 = 1U;
        }
        if (((IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_req_o) 
             & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_we_o))) {
            vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__b = 8U;
            vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__be_mask = 0ULL;
            if ((1U & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_be_o))) {
                vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__be_mask 
                    = (0xffULL | vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__be_mask);
            }
            if ((2U & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_be_o))) {
                vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__be_mask 
                    = (0xff00ULL | vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__be_mask);
            }
            if ((4U & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_be_o))) {
                vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__be_mask 
                    = (0xff0000ULL | vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__be_mask);
            }
            if ((8U & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_be_o))) {
                vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__be_mask 
                    = (0xff000000ULL | vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__be_mask);
            }
            if ((0x10U & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_be_o))) {
                vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__be_mask 
                    = (0xff00000000ULL | vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__be_mask);
            }
            if ((0x20U & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_be_o))) {
                vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__be_mask 
                    = (0xff0000000000ULL | vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__be_mask);
            }
            if ((0x40U & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_be_o))) {
                vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__be_mask 
                    = (0xff000000000000ULL | vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__be_mask);
            }
            if ((0x80U & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_be_o))) {
                vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__be_mask 
                    = (0xff00000000000000ULL | vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__be_mask);
            }
            __VdlyVal__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__data_q__v0 
                = ((((4U == (IData)(vlSelfRef.__PVT__arr_word_sel))
                      ? vlSelfRef.__PVT__arr_wdata : 
                     (((QData)((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_wdata_r[9U])) 
                       << 0x20U) | (QData)((IData)(
                                                   vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_wdata_r[8U])))) 
                    & vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__be_mask) 
                   | (vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__data_q
                      [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_way_o]
                      [vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__line_addr] 
                      & (~ vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__be_mask)));
            __VdlyDim0__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__data_q__v0 
                = vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__line_addr;
            __VdlyDim1__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__data_q__v0 
                = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_way_o;
            __VdlySet__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__data_q__v0 = 1U;
            if ((4U == (IData)(vlSelfRef.__PVT__arr_word_sel))) {
                __VdlyVal__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__tag_q__v0 
                    = (0x1fffffffffffffULL & vlSelfRef.__PVT__arr_tag_in);
                __VdlyVal__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q__v0 
                    = (3U & (IData)(vlSelfRef.__PVT__arr_state_in));
            } else {
                __VdlyVal__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__tag_q__v0 
                    = (0x1fffffffffffffULL & (((QData)((IData)(
                                                               vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_tag_r[8U])) 
                                               << 0x2cU) 
                                              | (((QData)((IData)(
                                                                  vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_tag_r[7U])) 
                                                  << 0xcU) 
                                                 | ((QData)((IData)(
                                                                    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_tag_r[6U])) 
                                                    >> 0x14U))));
                __VdlyVal__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q__v0 
                    = (3U & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_state_r) 
                             >> 8U));
            }
            __VdlyDim0__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__tag_q__v0 
                = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_index_o;
            __VdlyDim1__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__tag_q__v0 
                = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_way_o;
            __VdlySet__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__tag_q__v0 = 1U;
            __VdlyDim0__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q__v0 
                = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_index_o;
            __VdlyDim1__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q__v0 
                = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_way_o;
            __VdlySet__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q__v0 = 1U;
        }
        if (((IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_req_o) 
             & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_we_o))) {
            vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__b = 8U;
            vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__be_mask = 0ULL;
            if ((1U & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_be_o))) {
                vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__be_mask 
                    = (0xffULL | vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__be_mask);
            }
            if ((2U & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_be_o))) {
                vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__be_mask 
                    = (0xff00ULL | vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__be_mask);
            }
            if ((4U & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_be_o))) {
                vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__be_mask 
                    = (0xff0000ULL | vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__be_mask);
            }
            if ((8U & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_be_o))) {
                vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__be_mask 
                    = (0xff000000ULL | vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__be_mask);
            }
            if ((0x10U & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_be_o))) {
                vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__be_mask 
                    = (0xff00000000ULL | vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__be_mask);
            }
            if ((0x20U & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_be_o))) {
                vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__be_mask 
                    = (0xff0000000000ULL | vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__be_mask);
            }
            if ((0x40U & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_be_o))) {
                vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__be_mask 
                    = (0xff000000000000ULL | vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__be_mask);
            }
            if ((0x80U & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_be_o))) {
                vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__be_mask 
                    = (0xff00000000000000ULL | vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__be_mask);
            }
            __VdlyVal__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__data_q__v0 
                = ((((5U == (IData)(vlSelfRef.__PVT__arr_word_sel))
                      ? vlSelfRef.__PVT__arr_wdata : 
                     (((QData)((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_wdata_r[0xbU])) 
                       << 0x20U) | (QData)((IData)(
                                                   vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_wdata_r[0xaU])))) 
                    & vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__be_mask) 
                   | (vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__data_q
                      [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_way_o]
                      [vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__line_addr] 
                      & (~ vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__be_mask)));
            __VdlyDim0__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__data_q__v0 
                = vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__line_addr;
            __VdlyDim1__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__data_q__v0 
                = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_way_o;
            __VdlySet__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__data_q__v0 = 1U;
            if ((5U == (IData)(vlSelfRef.__PVT__arr_word_sel))) {
                __VdlyVal__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__tag_q__v0 
                    = (0x1fffffffffffffULL & vlSelfRef.__PVT__arr_tag_in);
                __VdlyVal__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q__v0 
                    = (3U & (IData)(vlSelfRef.__PVT__arr_state_in));
            } else {
                __VdlyVal__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__tag_q__v0 
                    = (0x1fffffffffffffULL & (((QData)((IData)(
                                                               vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_tag_r[9U])) 
                                               << 0x37U) 
                                              | (((QData)((IData)(
                                                                  vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_tag_r[9U])) 
                                                  << 0x17U) 
                                                 | ((QData)((IData)(
                                                                    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_tag_r[8U])) 
                                                    >> 9U))));
                __VdlyVal__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q__v0 
                    = (3U & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_state_r) 
                             >> 0xaU));
            }
            __VdlyDim0__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__tag_q__v0 
                = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_index_o;
            __VdlyDim1__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__tag_q__v0 
                = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_way_o;
            __VdlySet__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__tag_q__v0 = 1U;
            __VdlyDim0__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q__v0 
                = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_index_o;
            __VdlyDim1__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q__v0 
                = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_way_o;
            __VdlySet__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q__v0 = 1U;
        }
        if (((IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_req_o) 
             & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_we_o))) {
            vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__b = 8U;
            vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__be_mask = 0ULL;
            if ((1U & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_be_o))) {
                vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__be_mask 
                    = (0xffULL | vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__be_mask);
            }
            if ((2U & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_be_o))) {
                vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__be_mask 
                    = (0xff00ULL | vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__be_mask);
            }
            if ((4U & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_be_o))) {
                vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__be_mask 
                    = (0xff0000ULL | vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__be_mask);
            }
            if ((8U & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_be_o))) {
                vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__be_mask 
                    = (0xff000000ULL | vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__be_mask);
            }
            if ((0x10U & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_be_o))) {
                vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__be_mask 
                    = (0xff00000000ULL | vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__be_mask);
            }
            if ((0x20U & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_be_o))) {
                vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__be_mask 
                    = (0xff0000000000ULL | vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__be_mask);
            }
            if ((0x40U & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_be_o))) {
                vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__be_mask 
                    = (0xff000000000000ULL | vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__be_mask);
            }
            if ((0x80U & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_be_o))) {
                vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__be_mask 
                    = (0xff00000000000000ULL | vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__be_mask);
            }
            __VdlyVal__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__data_q__v0 
                = ((((6U == (IData)(vlSelfRef.__PVT__arr_word_sel))
                      ? vlSelfRef.__PVT__arr_wdata : 
                     (((QData)((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_wdata_r[0xdU])) 
                       << 0x20U) | (QData)((IData)(
                                                   vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_wdata_r[0xcU])))) 
                    & vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__be_mask) 
                   | (vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__data_q
                      [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_way_o]
                      [vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__line_addr] 
                      & (~ vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__be_mask)));
            __VdlyDim0__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__data_q__v0 
                = vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__line_addr;
            __VdlyDim1__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__data_q__v0 
                = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_way_o;
            __VdlySet__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__data_q__v0 = 1U;
            if ((6U == (IData)(vlSelfRef.__PVT__arr_word_sel))) {
                __VdlyVal__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__tag_q__v0 
                    = (0x1fffffffffffffULL & vlSelfRef.__PVT__arr_tag_in);
                __VdlyVal__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q__v0 
                    = (3U & (IData)(vlSelfRef.__PVT__arr_state_in));
            } else {
                __VdlyVal__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__tag_q__v0 
                    = (0x1fffffffffffffULL & (((QData)((IData)(
                                                               vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_tag_r[0xbU])) 
                                               << 0x22U) 
                                              | (((QData)((IData)(
                                                                  vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_tag_r[0xaU])) 
                                                  << 2U) 
                                                 | ((QData)((IData)(
                                                                    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_tag_r[9U])) 
                                                    >> 0x1eU))));
                __VdlyVal__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q__v0 
                    = (3U & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_state_r) 
                             >> 0xcU));
            }
            __VdlyDim0__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__tag_q__v0 
                = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_index_o;
            __VdlyDim1__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__tag_q__v0 
                = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_way_o;
            __VdlySet__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__tag_q__v0 = 1U;
            __VdlyDim0__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q__v0 
                = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_index_o;
            __VdlyDim1__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q__v0 
                = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_way_o;
            __VdlySet__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q__v0 = 1U;
        }
        if (((IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_req_o) 
             & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_we_o))) {
            vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__b = 8U;
            vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__be_mask = 0ULL;
            if ((1U & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_be_o))) {
                vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__be_mask 
                    = (0xffULL | vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__be_mask);
            }
            if ((2U & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_be_o))) {
                vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__be_mask 
                    = (0xff00ULL | vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__be_mask);
            }
            if ((4U & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_be_o))) {
                vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__be_mask 
                    = (0xff0000ULL | vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__be_mask);
            }
            if ((8U & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_be_o))) {
                vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__be_mask 
                    = (0xff000000ULL | vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__be_mask);
            }
            if ((0x10U & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_be_o))) {
                vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__be_mask 
                    = (0xff00000000ULL | vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__be_mask);
            }
            if ((0x20U & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_be_o))) {
                vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__be_mask 
                    = (0xff0000000000ULL | vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__be_mask);
            }
            if ((0x40U & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_be_o))) {
                vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__be_mask 
                    = (0xff000000000000ULL | vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__be_mask);
            }
            if ((0x80U & (IData)(vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_be_o))) {
                vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__be_mask 
                    = (0xff00000000000000ULL | vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__be_mask);
            }
            __VdlyVal__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__data_q__v0 
                = ((((7U == (IData)(vlSelfRef.__PVT__arr_word_sel))
                      ? vlSelfRef.__PVT__arr_wdata : 
                     (((QData)((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_wdata_r[0xfU])) 
                       << 0x20U) | (QData)((IData)(
                                                   vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_wdata_r[0xeU])))) 
                    & vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__be_mask) 
                   | (vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__data_q
                      [vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_way_o]
                      [vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__line_addr] 
                      & (~ vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__be_mask)));
            __VdlyDim0__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__data_q__v0 
                = vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__line_addr;
            __VdlyDim1__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__data_q__v0 
                = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_way_o;
            __VdlySet__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__data_q__v0 = 1U;
            if ((7U == (IData)(vlSelfRef.__PVT__arr_word_sel))) {
                __VdlyVal__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__tag_q__v0 
                    = (0x1fffffffffffffULL & vlSelfRef.__PVT__arr_tag_in);
                __VdlyVal__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q__v0 
                    = (3U & (IData)(vlSelfRef.__PVT__arr_state_in));
            } else {
                __VdlyVal__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__tag_q__v0 
                    = (0x1fffffffffffffULL & (((QData)((IData)(
                                                               vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_tag_r[0xdU])) 
                                               << 0x2dU) 
                                              | (((QData)((IData)(
                                                                  vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_tag_r[0xcU])) 
                                                  << 0xdU) 
                                                 | ((QData)((IData)(
                                                                    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_tag_r[0xbU])) 
                                                    >> 0x13U))));
                __VdlyVal__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q__v0 
                    = (3U & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_state_r) 
                             >> 0xeU));
            }
            __VdlyDim0__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__tag_q__v0 
                = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_index_o;
            __VdlyDim1__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__tag_q__v0 
                = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_way_o;
            __VdlySet__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__tag_q__v0 = 1U;
            __VdlyDim0__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q__v0 
                = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_index_o;
            __VdlyDim1__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q__v0 
                = vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_way_o;
            __VdlySet__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q__v0 = 1U;
        }
        vlSelfRef.__PVT__pend_probe_source_q = vlSelfRef.__PVT__pend_probe_source_q;
        vlSelfRef.__PVT__pend_probe_param_q = vlSelfRef.__PVT__pend_probe_param_q;
        vlSelfRef.__PVT__rdata_beat_q = vlSelfRef.__PVT__rdata_beat_q;
        if ((1U == (IData)(vlSelfRef.__PVT__u_vlsu_miss__DOT__state_q))) {
            vlSelfRef.__PVT__u_vlsu_miss__DOT__idx = 8U;
            __VdlyVal__u_vlsu_miss__DOT__miss_addr_q__v0 
                = vlSelfRef.__PVT__u_vlsu_miss__DOT__miss_addr_n
                [0U];
            __VdlySet__u_vlsu_miss__DOT__miss_addr_q__v0 = 1U;
            __VdlyVal__u_vlsu_miss__DOT__miss_addr_q__v1 
                = vlSelfRef.__PVT__u_vlsu_miss__DOT__miss_addr_n
                [1U];
            __VdlyVal__u_vlsu_miss__DOT__miss_addr_q__v2 
                = vlSelfRef.__PVT__u_vlsu_miss__DOT__miss_addr_n
                [2U];
            __VdlyVal__u_vlsu_miss__DOT__miss_addr_q__v3 
                = vlSelfRef.__PVT__u_vlsu_miss__DOT__miss_addr_n
                [3U];
            __VdlyVal__u_vlsu_miss__DOT__miss_addr_q__v4 
                = vlSelfRef.__PVT__u_vlsu_miss__DOT__miss_addr_n
                [4U];
            __VdlyVal__u_vlsu_miss__DOT__miss_addr_q__v5 
                = vlSelfRef.__PVT__u_vlsu_miss__DOT__miss_addr_n
                [5U];
            __VdlyVal__u_vlsu_miss__DOT__miss_addr_q__v6 
                = vlSelfRef.__PVT__u_vlsu_miss__DOT__miss_addr_n
                [6U];
            __VdlyVal__u_vlsu_miss__DOT__miss_addr_q__v7 
                = vlSelfRef.__PVT__u_vlsu_miss__DOT__miss_addr_n
                [7U];
        }
        if (vlSelfRef.__PVT__plru_access_q) {
            __VdlyVal__u_plru__DOT__plru_bits_q__v0 
                = (1U & (~ ((IData)(vlSelfRef.__PVT__plru_used_way_q) 
                            >> 2U)));
            __VdlyDim0__u_plru__DOT__plru_bits_q__v0 
                = (0x1fU & (vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[0U] 
                            >> 6U));
            __VdlySet__u_plru__DOT__plru_bits_q__v0 = 1U;
            if ((4U & (IData)(vlSelfRef.__PVT__plru_used_way_q))) {
                __VdlyVal__u_plru__DOT__plru_bits_q__v1 
                    = (1U & (~ ((IData)(vlSelfRef.__PVT__plru_used_way_q) 
                                >> 1U)));
                __VdlyDim0__u_plru__DOT__plru_bits_q__v1 
                    = (0x1fU & (vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[0U] 
                                >> 6U));
                __VdlySet__u_plru__DOT__plru_bits_q__v1 = 1U;
                if ((2U & (IData)(vlSelfRef.__PVT__plru_used_way_q))) {
                    __VdlyVal__u_plru__DOT__plru_bits_q__v2 
                        = (1U & (~ (IData)(vlSelfRef.__PVT__plru_used_way_q)));
                    __VdlyDim0__u_plru__DOT__plru_bits_q__v2 
                        = (0x1fU & (vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[0U] 
                                    >> 6U));
                    __VdlySet__u_plru__DOT__plru_bits_q__v2 = 1U;
                } else {
                    __VdlyVal__u_plru__DOT__plru_bits_q__v3 
                        = (1U & (~ (IData)(vlSelfRef.__PVT__plru_used_way_q)));
                    __VdlyDim0__u_plru__DOT__plru_bits_q__v3 
                        = (0x1fU & (vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[0U] 
                                    >> 6U));
                    __VdlySet__u_plru__DOT__plru_bits_q__v3 = 1U;
                }
            } else {
                __VdlyVal__u_plru__DOT__plru_bits_q__v4 
                    = (1U & (~ ((IData)(vlSelfRef.__PVT__plru_used_way_q) 
                                >> 1U)));
                __VdlyDim0__u_plru__DOT__plru_bits_q__v4 
                    = (0x1fU & (vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[0U] 
                                >> 6U));
                __VdlySet__u_plru__DOT__plru_bits_q__v4 = 1U;
                if ((2U & (IData)(vlSelfRef.__PVT__plru_used_way_q))) {
                    __VdlyVal__u_plru__DOT__plru_bits_q__v5 
                        = (1U & (~ (IData)(vlSelfRef.__PVT__plru_used_way_q)));
                    __VdlyDim0__u_plru__DOT__plru_bits_q__v5 
                        = (0x1fU & (vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[0U] 
                                    >> 6U));
                    __VdlySet__u_plru__DOT__plru_bits_q__v5 = 1U;
                } else {
                    __VdlyVal__u_plru__DOT__plru_bits_q__v6 
                        = (1U & (~ (IData)(vlSelfRef.__PVT__plru_used_way_q)));
                    __VdlyDim0__u_plru__DOT__plru_bits_q__v6 
                        = (0x1fU & (vlSymsp->TOP.rv64g_cache_system_tb__DOT__cpu_addr[0U] 
                                    >> 6U));
                    __VdlySet__u_plru__DOT__plru_bits_q__v6 = 1U;
                }
            }
        }
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__done_q 
            = vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__done_n;
        vlSelfRef.__PVT__probe_pend_source_q = vlSelfRef.__PVT__probe_pend_source_n;
        vlSelfRef.__PVT__probe_pend_param_q = vlSelfRef.__PVT__probe_pend_param_n;
        vlSelfRef.tl_e_sink_o = vlSelfRef.__PVT__tl_e_sink_n;
        vlSelfRef.rdata_o = vlSelfRef.__PVT__rdata_n;
        vlSelfRef.__PVT__pend_sink_q = vlSelfRef.__PVT__pend_sink_n;
        vlSelfRef.__PVT__pend_evict_tag_q = vlSelfRef.__PVT__pend_evict_tag_n;
        vlSelfRef.__PVT__pend_evict_state_q = vlSelfRef.__PVT__pend_evict_state_n;
        vlSelfRef.__PVT__u_vlsu_miss__DOT__miss_valid_q 
            = vlSelfRef.__PVT__u_vlsu_miss__DOT__miss_valid_n;
        vlSelfRef.tl_a_mask_o = vlSelfRef.__PVT__tl_a_mask_n;
        vlSelfRef.tl_a_source_o = vlSelfRef.__PVT__tl_a_source_n;
        vlSelfRef.tl_a_opcode_o = vlSelfRef.__PVT__tl_a_opcode_n;
        vlSelfRef.tl_a_size_o = vlSelfRef.__PVT__tl_a_size_n;
        vlSelfRef.tl_a_param_o = vlSelfRef.__PVT__tl_a_param_n;
        vlSelfRef.tl_a_address_o = vlSelfRef.__PVT__tl_a_address_n;
        vlSelfRef.__PVT__u_vlsu_miss__DOT__miss_count_q 
            = vlSelfRef.__PVT__u_vlsu_miss__DOT__miss_count_n;
        vlSelfRef.__PVT__u_vlsu_miss__DOT__refill_idx_q 
            = vlSelfRef.__PVT__u_vlsu_miss__DOT__refill_idx_n;
        vlSelfRef.__PVT__pend_tag_q = vlSelfRef.__PVT__pend_tag_n;
        vlSelfRef.__PVT__pend_amo_op_q = vlSelfRef.__PVT__pend_amo_op_n;
        vlSelfRef.__PVT__amo_old_value_q = vlSelfRef.__PVT__amo_old_value_n;
        vlSelfRef.__PVT__pend_wdata_q = vlSelfRef.__PVT__pend_wdata_n;
        vlSelfRef.__PVT__pend_index_q = vlSelfRef.__PVT__pend_index_n;
        vlSelfRef.__PVT__pend_be_q = vlSelfRef.__PVT__pend_be_n;
        vlSelfRef.__PVT__pend_word_q = vlSelfRef.__PVT__pend_word_n;
        vlSelfRef.__PVT__return_state_q = vlSelfRef.__PVT__return_state_n;
        vlSelfRef.__PVT__pend_victim_q = vlSelfRef.__PVT__pend_victim_n;
        vlSelfRef.__PVT__resv_addr_q = vlSelfRef.__PVT__resv_addr_n;
        vlSelfRef.__PVT__probe_pend_way_q = vlSelfRef.__PVT__probe_pend_way_n;
        vlSelfRef.__PVT__beat_q = vlSelfRef.__PVT__beat_n;
        vlSelfRef.__PVT__probe_pend_tag_q = vlSelfRef.__PVT__probe_pend_tag_n;
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_q 
            = vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_n;
        vlSelfRef.__PVT__probe_pend_index_q = vlSelfRef.__PVT__probe_pend_index_n;
        vlSelfRef.__PVT__state = vlSelfRef.__PVT__state_n;
        vlSelfRef.tl_c_size_o = vlSelfRef.__PVT__tl_c_size_n;
        vlSelfRef.tl_c_source_o = vlSelfRef.__PVT__tl_c_source_n;
        vlSelfRef.tl_c_opcode_o = vlSelfRef.__PVT__tl_c_opcode_n;
        vlSelfRef.tl_c_param_o = vlSelfRef.__PVT__tl_c_param_n;
        vlSelfRef.tl_c_address_o = vlSelfRef.__PVT__tl_c_address_n;
        vlSelfRef.tl_c_data_o = vlSelfRef.__PVT__tl_c_data_n;
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__pending_q 
            = vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__pending_n;
        vlSelfRef.__PVT__u_vlsu_miss__DOT__state_q 
            = vlSelfRef.__PVT__u_vlsu_miss__DOT__state_n;
        vlSelfRef.__PVT__plru_used_way_q = vlSelfRef.__PVT__plru_used_way_n;
    } else {
        vlSelfRef.__PVT__pend_probe_source_q = 0U;
        vlSelfRef.__PVT__pend_probe_param_q = 0U;
        vlSelfRef.__PVT__rdata_beat_q = 0ULL;
        vlSelfRef.__PVT__u_vlsu_miss__DOT__idx = 8U;
        __VdlySet__u_vlsu_miss__DOT__miss_addr_q__v8 = 1U;
        __VdlySet__u_plru__DOT__plru_bits_q__v7 = 1U;
        __VdlySet__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q__v1 = 1U;
        __VdlySet__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q__v1 = 1U;
        __VdlySet__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q__v1 = 1U;
        __VdlySet__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q__v1 = 1U;
        __VdlySet__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q__v1 = 1U;
        __VdlySet__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q__v1 = 1U;
        __VdlySet__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q__v1 = 1U;
        __VdlySet__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q__v1 = 1U;
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__done_q = 0U;
        vlSelfRef.__PVT__probe_pend_source_q = 0U;
        vlSelfRef.__PVT__probe_pend_param_q = 0U;
        vlSelfRef.tl_e_sink_o = 0U;
        vlSelfRef.rdata_o = 0ULL;
        vlSelfRef.__PVT__pend_sink_q = 0U;
        vlSelfRef.__PVT__pend_evict_tag_q = 0ULL;
        vlSelfRef.__PVT__pend_evict_state_q = 0U;
        vlSelfRef.__PVT__u_vlsu_miss__DOT__miss_valid_q = 0U;
        vlSelfRef.tl_a_mask_o = 0U;
        vlSelfRef.tl_a_source_o = 0U;
        vlSelfRef.tl_a_opcode_o = 0U;
        vlSelfRef.tl_a_size_o = 0U;
        vlSelfRef.tl_a_param_o = 0U;
        vlSelfRef.tl_a_address_o = 0ULL;
        vlSelfRef.__PVT__u_vlsu_miss__DOT__miss_count_q = 0U;
        vlSelfRef.__PVT__u_vlsu_miss__DOT__refill_idx_q = 0U;
        vlSelfRef.__PVT__pend_tag_q = 0ULL;
        vlSelfRef.__PVT__pend_amo_op_q = 0U;
        vlSelfRef.__PVT__amo_old_value_q = 0ULL;
        vlSelfRef.__PVT__pend_wdata_q = 0ULL;
        vlSelfRef.__PVT__pend_index_q = 0U;
        vlSelfRef.__PVT__pend_be_q = 0U;
        vlSelfRef.__PVT__pend_word_q = 0U;
        vlSelfRef.__PVT__return_state_q = 0U;
        vlSelfRef.__PVT__pend_victim_q = 0U;
        vlSelfRef.__PVT__resv_addr_q = 0ULL;
        vlSelfRef.__PVT__probe_pend_way_q = 0U;
        vlSelfRef.__PVT__beat_q = 0U;
        vlSelfRef.__PVT__probe_pend_tag_q = 0ULL;
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_q = 0U;
        vlSelfRef.__PVT__probe_pend_index_q = 0U;
        vlSelfRef.__PVT__state = 0U;
        vlSelfRef.tl_c_size_o = 0U;
        vlSelfRef.tl_c_source_o = 0U;
        vlSelfRef.tl_c_opcode_o = 0U;
        vlSelfRef.tl_c_param_o = 0U;
        vlSelfRef.tl_c_address_o = 0ULL;
        vlSelfRef.tl_c_data_o = 0ULL;
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__pending_q = 0U;
        vlSelfRef.__PVT__u_vlsu_miss__DOT__state_q = 0U;
        vlSelfRef.__PVT__plru_used_way_q = 0U;
    }
    vlSelfRef.__PVT__pend_probe_hit_q = ((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__rst_n) 
                                         && (IData)(vlSelfRef.__PVT__pend_probe_hit_q));
    vlSelfRef.tl_a_corrupt_o = 0U;
    vlSelfRef.tl_a_data_o = 0ULL;
    vlSelfRef.gnt_o = ((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__rst_n) 
                       && (IData)(vlSelfRef.__PVT__gnt_n));
    vlSelfRef.rvalid_o = ((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__rst_n) 
                          && (IData)(vlSelfRef.__PVT__rvalid_n));
    vlSelfRef.__PVT__pend_is_probe_q = ((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__rst_n) 
                                        && (IData)(vlSelfRef.__PVT__pend_is_probe_n));
    vlSelfRef.__PVT__pend_has_data_q = ((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__rst_n) 
                                        && (IData)(vlSelfRef.__PVT__pend_has_data_n));
    vlSelfRef.__PVT__pend_amo_word_q = ((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__rst_n) 
                                        && (IData)(vlSelfRef.__PVT__pend_amo_word_n));
    vlSelfRef.__PVT__sc_success_q = ((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__rst_n) 
                                     && (IData)(vlSelfRef.__PVT__sc_success_n));
    vlSelfRef.__PVT__pend_is_amo_q = ((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__rst_n) 
                                      && (IData)(vlSelfRef.__PVT__pend_is_amo_n));
    vlSelfRef.__PVT__pend_is_store_q = ((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__rst_n) 
                                        && (IData)(vlSelfRef.__PVT__pend_is_store_n));
    vlSelfRef.__PVT__pend_is_sc_q = ((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__rst_n) 
                                     && (IData)(vlSelfRef.__PVT__pend_is_sc_n));
    vlSelfRef.__PVT__pend_is_lr_q = ((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__rst_n) 
                                     && (IData)(vlSelfRef.__PVT__pend_is_lr_n));
    vlSelfRef.__PVT__resv_word_q = ((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__rst_n) 
                                    && (IData)(vlSelfRef.__PVT__resv_word_n));
    vlSelfRef.__PVT__probe_pend_hit_q = ((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__rst_n) 
                                         && (IData)(vlSelfRef.__PVT__probe_pend_hit_n));
    vlSelfRef.__PVT__probe_pend_has_data_q = ((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__rst_n) 
                                              && (IData)(vlSelfRef.__PVT__probe_pend_has_data_n));
    vlSelfRef.__PVT__resv_valid_q = ((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__rst_n) 
                                     && (IData)(vlSelfRef.__PVT__resv_valid_n));
    vlSelfRef.tl_d_ready_o = ((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__rst_n) 
                              && (IData)(vlSelfRef.__PVT__tl_d_ready_n));
    vlSelfRef.tl_b_ready_o = ((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__rst_n) 
                              && (IData)(vlSelfRef.__PVT__tl_b_ready_n));
    vlSelfRef.tl_c_corrupt_o = 0U;
    vlSelfRef.tl_e_valid_o = ((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__rst_n) 
                              && (IData)(vlSelfRef.__PVT__tl_e_valid_n));
    vlSelfRef.tl_a_valid_o = ((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__rst_n) 
                              && (IData)(vlSelfRef.__PVT__tl_a_valid_n));
    vlSelfRef.tl_c_valid_o = ((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__rst_n) 
                              && (IData)(vlSelfRef.__PVT__tl_c_valid_n));
    if (__VdlySet__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__data_q__v0) {
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__data_q[__VdlyDim1__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__data_q__v0][__VdlyDim0__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__data_q__v0] 
            = __VdlyVal__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__data_q__v0;
    }
    if (__VdlySet__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__data_q__v0) {
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__data_q[__VdlyDim1__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__data_q__v0][__VdlyDim0__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__data_q__v0] 
            = __VdlyVal__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__data_q__v0;
    }
    if (__VdlySet__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__data_q__v0) {
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__data_q[__VdlyDim1__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__data_q__v0][__VdlyDim0__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__data_q__v0] 
            = __VdlyVal__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__data_q__v0;
    }
    if (__VdlySet__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__data_q__v0) {
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__data_q[__VdlyDim1__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__data_q__v0][__VdlyDim0__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__data_q__v0] 
            = __VdlyVal__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__data_q__v0;
    }
    if (__VdlySet__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__data_q__v0) {
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__data_q[__VdlyDim1__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__data_q__v0][__VdlyDim0__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__data_q__v0] 
            = __VdlyVal__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__data_q__v0;
    }
    if (__VdlySet__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__data_q__v0) {
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__data_q[__VdlyDim1__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__data_q__v0][__VdlyDim0__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__data_q__v0] 
            = __VdlyVal__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__data_q__v0;
    }
    if (__VdlySet__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__data_q__v0) {
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__data_q[__VdlyDim1__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__data_q__v0][__VdlyDim0__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__data_q__v0] 
            = __VdlyVal__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__data_q__v0;
    }
    if (__VdlySet__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__data_q__v0) {
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__data_q[__VdlyDim1__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__data_q__v0][__VdlyDim0__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__data_q__v0] 
            = __VdlyVal__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__data_q__v0;
    }
    if (__VdlySet__u_vlsu_miss__DOT__miss_addr_q__v0) {
        vlSelfRef.__PVT__u_vlsu_miss__DOT__miss_addr_q[0U] 
            = __VdlyVal__u_vlsu_miss__DOT__miss_addr_q__v0;
        vlSelfRef.__PVT__u_vlsu_miss__DOT__miss_addr_q[1U] 
            = __VdlyVal__u_vlsu_miss__DOT__miss_addr_q__v1;
        vlSelfRef.__PVT__u_vlsu_miss__DOT__miss_addr_q[2U] 
            = __VdlyVal__u_vlsu_miss__DOT__miss_addr_q__v2;
        vlSelfRef.__PVT__u_vlsu_miss__DOT__miss_addr_q[3U] 
            = __VdlyVal__u_vlsu_miss__DOT__miss_addr_q__v3;
        vlSelfRef.__PVT__u_vlsu_miss__DOT__miss_addr_q[4U] 
            = __VdlyVal__u_vlsu_miss__DOT__miss_addr_q__v4;
        vlSelfRef.__PVT__u_vlsu_miss__DOT__miss_addr_q[5U] 
            = __VdlyVal__u_vlsu_miss__DOT__miss_addr_q__v5;
        vlSelfRef.__PVT__u_vlsu_miss__DOT__miss_addr_q[6U] 
            = __VdlyVal__u_vlsu_miss__DOT__miss_addr_q__v6;
        vlSelfRef.__PVT__u_vlsu_miss__DOT__miss_addr_q[7U] 
            = __VdlyVal__u_vlsu_miss__DOT__miss_addr_q__v7;
    }
    if (__VdlySet__u_vlsu_miss__DOT__miss_addr_q__v8) {
        vlSelfRef.__PVT__u_vlsu_miss__DOT__miss_addr_q[0U] = 0ULL;
        vlSelfRef.__PVT__u_vlsu_miss__DOT__miss_addr_q[1U] = 0ULL;
        vlSelfRef.__PVT__u_vlsu_miss__DOT__miss_addr_q[2U] = 0ULL;
        vlSelfRef.__PVT__u_vlsu_miss__DOT__miss_addr_q[3U] = 0ULL;
        vlSelfRef.__PVT__u_vlsu_miss__DOT__miss_addr_q[4U] = 0ULL;
        vlSelfRef.__PVT__u_vlsu_miss__DOT__miss_addr_q[5U] = 0ULL;
        vlSelfRef.__PVT__u_vlsu_miss__DOT__miss_addr_q[6U] = 0ULL;
        vlSelfRef.__PVT__u_vlsu_miss__DOT__miss_addr_q[7U] = 0ULL;
    }
    if (__VdlySet__u_plru__DOT__plru_bits_q__v0) {
        vlSelfRef.__PVT__u_plru__DOT__plru_bits_q[__VdlyDim0__u_plru__DOT__plru_bits_q__v0] 
            = ((0x7eU & vlSelfRef.__PVT__u_plru__DOT__plru_bits_q
                [__VdlyDim0__u_plru__DOT__plru_bits_q__v0]) 
               | (IData)(__VdlyVal__u_plru__DOT__plru_bits_q__v0));
    }
    if (__VdlySet__u_plru__DOT__plru_bits_q__v1) {
        vlSelfRef.__PVT__u_plru__DOT__plru_bits_q[__VdlyDim0__u_plru__DOT__plru_bits_q__v1] 
            = ((0x7bU & vlSelfRef.__PVT__u_plru__DOT__plru_bits_q
                [__VdlyDim0__u_plru__DOT__plru_bits_q__v1]) 
               | ((IData)(__VdlyVal__u_plru__DOT__plru_bits_q__v1) 
                  << 2U));
    }
    if (__VdlySet__u_plru__DOT__plru_bits_q__v2) {
        vlSelfRef.__PVT__u_plru__DOT__plru_bits_q[__VdlyDim0__u_plru__DOT__plru_bits_q__v2] 
            = ((0x3fU & vlSelfRef.__PVT__u_plru__DOT__plru_bits_q
                [__VdlyDim0__u_plru__DOT__plru_bits_q__v2]) 
               | ((IData)(__VdlyVal__u_plru__DOT__plru_bits_q__v2) 
                  << 6U));
    }
    if (__VdlySet__u_plru__DOT__plru_bits_q__v3) {
        vlSelfRef.__PVT__u_plru__DOT__plru_bits_q[__VdlyDim0__u_plru__DOT__plru_bits_q__v3] 
            = ((0x5fU & vlSelfRef.__PVT__u_plru__DOT__plru_bits_q
                [__VdlyDim0__u_plru__DOT__plru_bits_q__v3]) 
               | ((IData)(__VdlyVal__u_plru__DOT__plru_bits_q__v3) 
                  << 5U));
    }
    if (__VdlySet__u_plru__DOT__plru_bits_q__v4) {
        vlSelfRef.__PVT__u_plru__DOT__plru_bits_q[__VdlyDim0__u_plru__DOT__plru_bits_q__v4] 
            = ((0x7dU & vlSelfRef.__PVT__u_plru__DOT__plru_bits_q
                [__VdlyDim0__u_plru__DOT__plru_bits_q__v4]) 
               | ((IData)(__VdlyVal__u_plru__DOT__plru_bits_q__v4) 
                  << 1U));
    }
    if (__VdlySet__u_plru__DOT__plru_bits_q__v5) {
        vlSelfRef.__PVT__u_plru__DOT__plru_bits_q[__VdlyDim0__u_plru__DOT__plru_bits_q__v5] 
            = ((0x6fU & vlSelfRef.__PVT__u_plru__DOT__plru_bits_q
                [__VdlyDim0__u_plru__DOT__plru_bits_q__v5]) 
               | ((IData)(__VdlyVal__u_plru__DOT__plru_bits_q__v5) 
                  << 4U));
    }
    if (__VdlySet__u_plru__DOT__plru_bits_q__v6) {
        vlSelfRef.__PVT__u_plru__DOT__plru_bits_q[__VdlyDim0__u_plru__DOT__plru_bits_q__v6] 
            = ((0x77U & vlSelfRef.__PVT__u_plru__DOT__plru_bits_q
                [__VdlyDim0__u_plru__DOT__plru_bits_q__v6]) 
               | ((IData)(__VdlyVal__u_plru__DOT__plru_bits_q__v6) 
                  << 3U));
    }
    if (__VdlySet__u_plru__DOT__plru_bits_q__v7) {
        vlSelfRef.__PVT__u_plru__DOT__plru_bits_q[0U] = 0U;
        vlSelfRef.__PVT__u_plru__DOT__plru_bits_q[1U] = 0U;
        vlSelfRef.__PVT__u_plru__DOT__plru_bits_q[2U] = 0U;
        vlSelfRef.__PVT__u_plru__DOT__plru_bits_q[3U] = 0U;
        vlSelfRef.__PVT__u_plru__DOT__plru_bits_q[4U] = 0U;
        vlSelfRef.__PVT__u_plru__DOT__plru_bits_q[5U] = 0U;
        vlSelfRef.__PVT__u_plru__DOT__plru_bits_q[6U] = 0U;
        vlSelfRef.__PVT__u_plru__DOT__plru_bits_q[7U] = 0U;
        vlSelfRef.__PVT__u_plru__DOT__plru_bits_q[8U] = 0U;
        vlSelfRef.__PVT__u_plru__DOT__plru_bits_q[9U] = 0U;
        vlSelfRef.__PVT__u_plru__DOT__plru_bits_q[0xaU] = 0U;
        vlSelfRef.__PVT__u_plru__DOT__plru_bits_q[0xbU] = 0U;
        vlSelfRef.__PVT__u_plru__DOT__plru_bits_q[0xcU] = 0U;
        vlSelfRef.__PVT__u_plru__DOT__plru_bits_q[0xdU] = 0U;
        vlSelfRef.__PVT__u_plru__DOT__plru_bits_q[0xeU] = 0U;
        vlSelfRef.__PVT__u_plru__DOT__plru_bits_q[0xfU] = 0U;
        vlSelfRef.__PVT__u_plru__DOT__plru_bits_q[0x10U] = 0U;
        vlSelfRef.__PVT__u_plru__DOT__plru_bits_q[0x11U] = 0U;
        vlSelfRef.__PVT__u_plru__DOT__plru_bits_q[0x12U] = 0U;
        vlSelfRef.__PVT__u_plru__DOT__plru_bits_q[0x13U] = 0U;
        vlSelfRef.__PVT__u_plru__DOT__plru_bits_q[0x14U] = 0U;
        vlSelfRef.__PVT__u_plru__DOT__plru_bits_q[0x15U] = 0U;
        vlSelfRef.__PVT__u_plru__DOT__plru_bits_q[0x16U] = 0U;
        vlSelfRef.__PVT__u_plru__DOT__plru_bits_q[0x17U] = 0U;
        vlSelfRef.__PVT__u_plru__DOT__plru_bits_q[0x18U] = 0U;
        vlSelfRef.__PVT__u_plru__DOT__plru_bits_q[0x19U] = 0U;
        vlSelfRef.__PVT__u_plru__DOT__plru_bits_q[0x1aU] = 0U;
        vlSelfRef.__PVT__u_plru__DOT__plru_bits_q[0x1bU] = 0U;
        vlSelfRef.__PVT__u_plru__DOT__plru_bits_q[0x1cU] = 0U;
        vlSelfRef.__PVT__u_plru__DOT__plru_bits_q[0x1dU] = 0U;
        vlSelfRef.__PVT__u_plru__DOT__plru_bits_q[0x1eU] = 0U;
        vlSelfRef.__PVT__u_plru__DOT__plru_bits_q[0x1fU] = 0U;
    }
    if (__VdlySet__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__tag_q__v0) {
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__tag_q[__VdlyDim1__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__tag_q__v0][__VdlyDim0__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__tag_q__v0] 
            = __VdlyVal__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__tag_q__v0;
    }
    if (__VdlySet__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__tag_q__v0) {
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__tag_q[__VdlyDim1__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__tag_q__v0][__VdlyDim0__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__tag_q__v0] 
            = __VdlyVal__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__tag_q__v0;
    }
    if (__VdlySet__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__tag_q__v0) {
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__tag_q[__VdlyDim1__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__tag_q__v0][__VdlyDim0__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__tag_q__v0] 
            = __VdlyVal__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__tag_q__v0;
    }
    if (__VdlySet__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__tag_q__v0) {
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__tag_q[__VdlyDim1__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__tag_q__v0][__VdlyDim0__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__tag_q__v0] 
            = __VdlyVal__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__tag_q__v0;
    }
    if (__VdlySet__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__tag_q__v0) {
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__tag_q[__VdlyDim1__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__tag_q__v0][__VdlyDim0__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__tag_q__v0] 
            = __VdlyVal__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__tag_q__v0;
    }
    if (__VdlySet__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__tag_q__v0) {
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__tag_q[__VdlyDim1__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__tag_q__v0][__VdlyDim0__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__tag_q__v0] 
            = __VdlyVal__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__tag_q__v0;
    }
    if (__VdlySet__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__tag_q__v0) {
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__tag_q[__VdlyDim1__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__tag_q__v0][__VdlyDim0__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__tag_q__v0] 
            = __VdlyVal__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__tag_q__v0;
    }
    if (__VdlySet__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__tag_q__v0) {
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__tag_q[__VdlyDim1__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__tag_q__v0][__VdlyDim0__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__tag_q__v0] 
            = __VdlyVal__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__tag_q__v0;
    }
    if (__VdlySet__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q__v0) {
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[__VdlyDim1__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q__v0][__VdlyDim0__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q__v0] 
            = __VdlyVal__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q__v0;
    }
    if (__VdlySet__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q__v1) {
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[0U][0U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[0U][1U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[0U][2U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[0U][3U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[0U][4U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[0U][5U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[0U][6U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[0U][7U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[0U][8U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[0U][9U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[0U][0xaU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[0U][0xbU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[0U][0xcU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[0U][0xdU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[0U][0xeU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[0U][0xfU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[0U][0x10U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[0U][0x11U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[0U][0x12U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[0U][0x13U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[0U][0x14U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[0U][0x15U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[0U][0x16U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[0U][0x17U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[0U][0x18U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[0U][0x19U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[0U][0x1aU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[0U][0x1bU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[0U][0x1cU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[0U][0x1dU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[0U][0x1eU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[0U][0x1fU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[1U][0U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[1U][1U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[1U][2U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[1U][3U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[1U][4U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[1U][5U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[1U][6U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[1U][7U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[1U][8U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[1U][9U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[1U][0xaU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[1U][0xbU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[1U][0xcU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[1U][0xdU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[1U][0xeU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[1U][0xfU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[1U][0x10U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[1U][0x11U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[1U][0x12U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[1U][0x13U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[1U][0x14U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[1U][0x15U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[1U][0x16U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[1U][0x17U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[1U][0x18U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[1U][0x19U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[1U][0x1aU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[1U][0x1bU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[1U][0x1cU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[1U][0x1dU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[1U][0x1eU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[1U][0x1fU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[2U][0U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[2U][1U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[2U][2U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[2U][3U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[2U][4U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[2U][5U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[2U][6U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[2U][7U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[2U][8U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[2U][9U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[2U][0xaU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[2U][0xbU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[2U][0xcU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[2U][0xdU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[2U][0xeU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[2U][0xfU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[2U][0x10U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[2U][0x11U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[2U][0x12U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[2U][0x13U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[2U][0x14U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[2U][0x15U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[2U][0x16U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[2U][0x17U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[2U][0x18U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[2U][0x19U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[2U][0x1aU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[2U][0x1bU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[2U][0x1cU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[2U][0x1dU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[2U][0x1eU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[2U][0x1fU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[3U][0U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[3U][1U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[3U][2U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[3U][3U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[3U][4U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[3U][5U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[3U][6U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[3U][7U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[3U][8U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[3U][9U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[3U][0xaU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[3U][0xbU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[3U][0xcU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[3U][0xdU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[3U][0xeU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[3U][0xfU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[3U][0x10U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[3U][0x11U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[3U][0x12U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[3U][0x13U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[3U][0x14U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[3U][0x15U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[3U][0x16U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[3U][0x17U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[3U][0x18U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[3U][0x19U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[3U][0x1aU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[3U][0x1bU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[3U][0x1cU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[3U][0x1dU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[3U][0x1eU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[3U][0x1fU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[4U][0U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[4U][1U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[4U][2U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[4U][3U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[4U][4U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[4U][5U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[4U][6U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[4U][7U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[4U][8U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[4U][9U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[4U][0xaU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[4U][0xbU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[4U][0xcU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[4U][0xdU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[4U][0xeU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[4U][0xfU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[4U][0x10U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[4U][0x11U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[4U][0x12U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[4U][0x13U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[4U][0x14U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[4U][0x15U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[4U][0x16U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[4U][0x17U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[4U][0x18U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[4U][0x19U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[4U][0x1aU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[4U][0x1bU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[4U][0x1cU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[4U][0x1dU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[4U][0x1eU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[4U][0x1fU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[5U][0U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[5U][1U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[5U][2U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[5U][3U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[5U][4U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[5U][5U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[5U][6U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[5U][7U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[5U][8U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[5U][9U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[5U][0xaU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[5U][0xbU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[5U][0xcU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[5U][0xdU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[5U][0xeU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[5U][0xfU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[5U][0x10U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[5U][0x11U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[5U][0x12U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[5U][0x13U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[5U][0x14U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[5U][0x15U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[5U][0x16U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[5U][0x17U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[5U][0x18U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[5U][0x19U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[5U][0x1aU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[5U][0x1bU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[5U][0x1cU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[5U][0x1dU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[5U][0x1eU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[5U][0x1fU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[6U][0U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[6U][1U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[6U][2U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[6U][3U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[6U][4U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[6U][5U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[6U][6U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[6U][7U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[6U][8U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[6U][9U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[6U][0xaU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[6U][0xbU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[6U][0xcU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[6U][0xdU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[6U][0xeU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[6U][0xfU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[6U][0x10U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[6U][0x11U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[6U][0x12U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[6U][0x13U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[6U][0x14U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[6U][0x15U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[6U][0x16U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[6U][0x17U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[6U][0x18U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[6U][0x19U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[6U][0x1aU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[6U][0x1bU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[6U][0x1cU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[6U][0x1dU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[6U][0x1eU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[6U][0x1fU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[7U][0U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[7U][1U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[7U][2U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[7U][3U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[7U][4U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[7U][5U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[7U][6U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[7U][7U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[7U][8U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[7U][9U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[7U][0xaU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[7U][0xbU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[7U][0xcU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[7U][0xdU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[7U][0xeU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[7U][0xfU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[7U][0x10U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[7U][0x11U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[7U][0x12U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[7U][0x13U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[7U][0x14U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[7U][0x15U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[7U][0x16U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[7U][0x17U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[7U][0x18U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[7U][0x19U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[7U][0x1aU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[7U][0x1bU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[7U][0x1cU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[7U][0x1dU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[7U][0x1eU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[7U][0x1fU] = 0U;
    }
    if (__VdlySet__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q__v0) {
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[__VdlyDim1__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q__v0][__VdlyDim0__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q__v0] 
            = __VdlyVal__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q__v0;
    }
    if (__VdlySet__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q__v1) {
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[0U][0U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[0U][1U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[0U][2U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[0U][3U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[0U][4U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[0U][5U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[0U][6U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[0U][7U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[0U][8U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[0U][9U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[0U][0xaU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[0U][0xbU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[0U][0xcU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[0U][0xdU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[0U][0xeU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[0U][0xfU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[0U][0x10U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[0U][0x11U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[0U][0x12U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[0U][0x13U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[0U][0x14U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[0U][0x15U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[0U][0x16U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[0U][0x17U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[0U][0x18U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[0U][0x19U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[0U][0x1aU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[0U][0x1bU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[0U][0x1cU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[0U][0x1dU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[0U][0x1eU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[0U][0x1fU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[1U][0U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[1U][1U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[1U][2U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[1U][3U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[1U][4U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[1U][5U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[1U][6U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[1U][7U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[1U][8U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[1U][9U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[1U][0xaU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[1U][0xbU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[1U][0xcU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[1U][0xdU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[1U][0xeU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[1U][0xfU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[1U][0x10U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[1U][0x11U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[1U][0x12U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[1U][0x13U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[1U][0x14U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[1U][0x15U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[1U][0x16U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[1U][0x17U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[1U][0x18U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[1U][0x19U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[1U][0x1aU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[1U][0x1bU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[1U][0x1cU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[1U][0x1dU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[1U][0x1eU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[1U][0x1fU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[2U][0U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[2U][1U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[2U][2U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[2U][3U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[2U][4U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[2U][5U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[2U][6U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[2U][7U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[2U][8U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[2U][9U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[2U][0xaU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[2U][0xbU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[2U][0xcU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[2U][0xdU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[2U][0xeU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[2U][0xfU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[2U][0x10U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[2U][0x11U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[2U][0x12U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[2U][0x13U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[2U][0x14U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[2U][0x15U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[2U][0x16U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[2U][0x17U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[2U][0x18U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[2U][0x19U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[2U][0x1aU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[2U][0x1bU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[2U][0x1cU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[2U][0x1dU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[2U][0x1eU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[2U][0x1fU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[3U][0U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[3U][1U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[3U][2U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[3U][3U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[3U][4U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[3U][5U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[3U][6U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[3U][7U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[3U][8U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[3U][9U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[3U][0xaU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[3U][0xbU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[3U][0xcU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[3U][0xdU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[3U][0xeU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[3U][0xfU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[3U][0x10U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[3U][0x11U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[3U][0x12U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[3U][0x13U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[3U][0x14U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[3U][0x15U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[3U][0x16U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[3U][0x17U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[3U][0x18U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[3U][0x19U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[3U][0x1aU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[3U][0x1bU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[3U][0x1cU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[3U][0x1dU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[3U][0x1eU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[3U][0x1fU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[4U][0U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[4U][1U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[4U][2U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[4U][3U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[4U][4U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[4U][5U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[4U][6U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[4U][7U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[4U][8U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[4U][9U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[4U][0xaU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[4U][0xbU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[4U][0xcU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[4U][0xdU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[4U][0xeU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[4U][0xfU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[4U][0x10U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[4U][0x11U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[4U][0x12U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[4U][0x13U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[4U][0x14U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[4U][0x15U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[4U][0x16U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[4U][0x17U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[4U][0x18U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[4U][0x19U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[4U][0x1aU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[4U][0x1bU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[4U][0x1cU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[4U][0x1dU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[4U][0x1eU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[4U][0x1fU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[5U][0U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[5U][1U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[5U][2U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[5U][3U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[5U][4U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[5U][5U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[5U][6U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[5U][7U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[5U][8U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[5U][9U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[5U][0xaU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[5U][0xbU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[5U][0xcU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[5U][0xdU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[5U][0xeU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[5U][0xfU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[5U][0x10U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[5U][0x11U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[5U][0x12U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[5U][0x13U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[5U][0x14U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[5U][0x15U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[5U][0x16U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[5U][0x17U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[5U][0x18U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[5U][0x19U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[5U][0x1aU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[5U][0x1bU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[5U][0x1cU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[5U][0x1dU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[5U][0x1eU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[5U][0x1fU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[6U][0U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[6U][1U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[6U][2U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[6U][3U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[6U][4U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[6U][5U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[6U][6U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[6U][7U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[6U][8U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[6U][9U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[6U][0xaU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[6U][0xbU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[6U][0xcU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[6U][0xdU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[6U][0xeU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[6U][0xfU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[6U][0x10U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[6U][0x11U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[6U][0x12U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[6U][0x13U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[6U][0x14U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[6U][0x15U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[6U][0x16U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[6U][0x17U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[6U][0x18U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[6U][0x19U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[6U][0x1aU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[6U][0x1bU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[6U][0x1cU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[6U][0x1dU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[6U][0x1eU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[6U][0x1fU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[7U][0U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[7U][1U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[7U][2U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[7U][3U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[7U][4U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[7U][5U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[7U][6U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[7U][7U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[7U][8U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[7U][9U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[7U][0xaU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[7U][0xbU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[7U][0xcU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[7U][0xdU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[7U][0xeU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[7U][0xfU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[7U][0x10U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[7U][0x11U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[7U][0x12U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[7U][0x13U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[7U][0x14U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[7U][0x15U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[7U][0x16U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[7U][0x17U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[7U][0x18U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[7U][0x19U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[7U][0x1aU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[7U][0x1bU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[7U][0x1cU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[7U][0x1dU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[7U][0x1eU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[7U][0x1fU] = 0U;
    }
    if (__VdlySet__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q__v0) {
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[__VdlyDim1__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q__v0][__VdlyDim0__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q__v0] 
            = __VdlyVal__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q__v0;
    }
    if (__VdlySet__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q__v1) {
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[0U][0U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[0U][1U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[0U][2U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[0U][3U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[0U][4U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[0U][5U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[0U][6U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[0U][7U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[0U][8U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[0U][9U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[0U][0xaU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[0U][0xbU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[0U][0xcU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[0U][0xdU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[0U][0xeU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[0U][0xfU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[0U][0x10U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[0U][0x11U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[0U][0x12U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[0U][0x13U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[0U][0x14U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[0U][0x15U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[0U][0x16U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[0U][0x17U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[0U][0x18U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[0U][0x19U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[0U][0x1aU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[0U][0x1bU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[0U][0x1cU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[0U][0x1dU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[0U][0x1eU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[0U][0x1fU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[1U][0U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[1U][1U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[1U][2U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[1U][3U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[1U][4U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[1U][5U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[1U][6U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[1U][7U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[1U][8U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[1U][9U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[1U][0xaU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[1U][0xbU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[1U][0xcU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[1U][0xdU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[1U][0xeU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[1U][0xfU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[1U][0x10U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[1U][0x11U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[1U][0x12U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[1U][0x13U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[1U][0x14U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[1U][0x15U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[1U][0x16U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[1U][0x17U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[1U][0x18U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[1U][0x19U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[1U][0x1aU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[1U][0x1bU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[1U][0x1cU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[1U][0x1dU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[1U][0x1eU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[1U][0x1fU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[2U][0U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[2U][1U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[2U][2U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[2U][3U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[2U][4U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[2U][5U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[2U][6U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[2U][7U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[2U][8U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[2U][9U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[2U][0xaU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[2U][0xbU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[2U][0xcU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[2U][0xdU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[2U][0xeU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[2U][0xfU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[2U][0x10U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[2U][0x11U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[2U][0x12U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[2U][0x13U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[2U][0x14U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[2U][0x15U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[2U][0x16U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[2U][0x17U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[2U][0x18U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[2U][0x19U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[2U][0x1aU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[2U][0x1bU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[2U][0x1cU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[2U][0x1dU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[2U][0x1eU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[2U][0x1fU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[3U][0U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[3U][1U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[3U][2U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[3U][3U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[3U][4U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[3U][5U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[3U][6U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[3U][7U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[3U][8U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[3U][9U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[3U][0xaU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[3U][0xbU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[3U][0xcU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[3U][0xdU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[3U][0xeU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[3U][0xfU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[3U][0x10U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[3U][0x11U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[3U][0x12U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[3U][0x13U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[3U][0x14U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[3U][0x15U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[3U][0x16U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[3U][0x17U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[3U][0x18U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[3U][0x19U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[3U][0x1aU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[3U][0x1bU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[3U][0x1cU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[3U][0x1dU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[3U][0x1eU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[3U][0x1fU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[4U][0U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[4U][1U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[4U][2U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[4U][3U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[4U][4U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[4U][5U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[4U][6U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[4U][7U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[4U][8U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[4U][9U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[4U][0xaU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[4U][0xbU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[4U][0xcU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[4U][0xdU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[4U][0xeU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[4U][0xfU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[4U][0x10U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[4U][0x11U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[4U][0x12U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[4U][0x13U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[4U][0x14U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[4U][0x15U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[4U][0x16U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[4U][0x17U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[4U][0x18U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[4U][0x19U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[4U][0x1aU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[4U][0x1bU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[4U][0x1cU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[4U][0x1dU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[4U][0x1eU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[4U][0x1fU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[5U][0U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[5U][1U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[5U][2U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[5U][3U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[5U][4U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[5U][5U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[5U][6U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[5U][7U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[5U][8U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[5U][9U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[5U][0xaU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[5U][0xbU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[5U][0xcU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[5U][0xdU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[5U][0xeU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[5U][0xfU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[5U][0x10U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[5U][0x11U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[5U][0x12U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[5U][0x13U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[5U][0x14U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[5U][0x15U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[5U][0x16U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[5U][0x17U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[5U][0x18U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[5U][0x19U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[5U][0x1aU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[5U][0x1bU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[5U][0x1cU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[5U][0x1dU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[5U][0x1eU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[5U][0x1fU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[6U][0U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[6U][1U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[6U][2U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[6U][3U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[6U][4U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[6U][5U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[6U][6U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[6U][7U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[6U][8U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[6U][9U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[6U][0xaU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[6U][0xbU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[6U][0xcU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[6U][0xdU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[6U][0xeU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[6U][0xfU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[6U][0x10U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[6U][0x11U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[6U][0x12U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[6U][0x13U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[6U][0x14U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[6U][0x15U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[6U][0x16U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[6U][0x17U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[6U][0x18U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[6U][0x19U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[6U][0x1aU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[6U][0x1bU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[6U][0x1cU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[6U][0x1dU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[6U][0x1eU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[6U][0x1fU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[7U][0U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[7U][1U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[7U][2U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[7U][3U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[7U][4U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[7U][5U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[7U][6U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[7U][7U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[7U][8U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[7U][9U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[7U][0xaU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[7U][0xbU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[7U][0xcU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[7U][0xdU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[7U][0xeU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[7U][0xfU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[7U][0x10U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[7U][0x11U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[7U][0x12U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[7U][0x13U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[7U][0x14U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[7U][0x15U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[7U][0x16U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[7U][0x17U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[7U][0x18U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[7U][0x19U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[7U][0x1aU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[7U][0x1bU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[7U][0x1cU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[7U][0x1dU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[7U][0x1eU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[7U][0x1fU] = 0U;
    }
    if (__VdlySet__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q__v0) {
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[__VdlyDim1__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q__v0][__VdlyDim0__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q__v0] 
            = __VdlyVal__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q__v0;
    }
    if (__VdlySet__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q__v1) {
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[0U][0U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[0U][1U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[0U][2U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[0U][3U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[0U][4U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[0U][5U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[0U][6U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[0U][7U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[0U][8U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[0U][9U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[0U][0xaU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[0U][0xbU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[0U][0xcU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[0U][0xdU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[0U][0xeU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[0U][0xfU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[0U][0x10U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[0U][0x11U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[0U][0x12U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[0U][0x13U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[0U][0x14U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[0U][0x15U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[0U][0x16U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[0U][0x17U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[0U][0x18U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[0U][0x19U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[0U][0x1aU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[0U][0x1bU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[0U][0x1cU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[0U][0x1dU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[0U][0x1eU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[0U][0x1fU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[1U][0U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[1U][1U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[1U][2U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[1U][3U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[1U][4U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[1U][5U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[1U][6U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[1U][7U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[1U][8U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[1U][9U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[1U][0xaU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[1U][0xbU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[1U][0xcU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[1U][0xdU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[1U][0xeU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[1U][0xfU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[1U][0x10U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[1U][0x11U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[1U][0x12U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[1U][0x13U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[1U][0x14U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[1U][0x15U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[1U][0x16U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[1U][0x17U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[1U][0x18U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[1U][0x19U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[1U][0x1aU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[1U][0x1bU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[1U][0x1cU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[1U][0x1dU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[1U][0x1eU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[1U][0x1fU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[2U][0U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[2U][1U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[2U][2U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[2U][3U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[2U][4U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[2U][5U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[2U][6U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[2U][7U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[2U][8U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[2U][9U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[2U][0xaU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[2U][0xbU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[2U][0xcU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[2U][0xdU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[2U][0xeU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[2U][0xfU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[2U][0x10U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[2U][0x11U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[2U][0x12U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[2U][0x13U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[2U][0x14U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[2U][0x15U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[2U][0x16U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[2U][0x17U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[2U][0x18U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[2U][0x19U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[2U][0x1aU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[2U][0x1bU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[2U][0x1cU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[2U][0x1dU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[2U][0x1eU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[2U][0x1fU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[3U][0U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[3U][1U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[3U][2U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[3U][3U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[3U][4U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[3U][5U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[3U][6U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[3U][7U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[3U][8U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[3U][9U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[3U][0xaU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[3U][0xbU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[3U][0xcU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[3U][0xdU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[3U][0xeU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[3U][0xfU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[3U][0x10U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[3U][0x11U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[3U][0x12U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[3U][0x13U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[3U][0x14U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[3U][0x15U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[3U][0x16U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[3U][0x17U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[3U][0x18U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[3U][0x19U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[3U][0x1aU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[3U][0x1bU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[3U][0x1cU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[3U][0x1dU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[3U][0x1eU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[3U][0x1fU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[4U][0U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[4U][1U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[4U][2U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[4U][3U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[4U][4U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[4U][5U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[4U][6U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[4U][7U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[4U][8U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[4U][9U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[4U][0xaU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[4U][0xbU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[4U][0xcU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[4U][0xdU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[4U][0xeU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[4U][0xfU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[4U][0x10U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[4U][0x11U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[4U][0x12U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[4U][0x13U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[4U][0x14U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[4U][0x15U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[4U][0x16U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[4U][0x17U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[4U][0x18U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[4U][0x19U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[4U][0x1aU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[4U][0x1bU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[4U][0x1cU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[4U][0x1dU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[4U][0x1eU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[4U][0x1fU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[5U][0U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[5U][1U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[5U][2U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[5U][3U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[5U][4U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[5U][5U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[5U][6U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[5U][7U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[5U][8U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[5U][9U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[5U][0xaU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[5U][0xbU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[5U][0xcU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[5U][0xdU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[5U][0xeU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[5U][0xfU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[5U][0x10U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[5U][0x11U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[5U][0x12U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[5U][0x13U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[5U][0x14U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[5U][0x15U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[5U][0x16U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[5U][0x17U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[5U][0x18U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[5U][0x19U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[5U][0x1aU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[5U][0x1bU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[5U][0x1cU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[5U][0x1dU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[5U][0x1eU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[5U][0x1fU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[6U][0U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[6U][1U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[6U][2U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[6U][3U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[6U][4U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[6U][5U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[6U][6U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[6U][7U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[6U][8U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[6U][9U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[6U][0xaU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[6U][0xbU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[6U][0xcU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[6U][0xdU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[6U][0xeU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[6U][0xfU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[6U][0x10U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[6U][0x11U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[6U][0x12U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[6U][0x13U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[6U][0x14U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[6U][0x15U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[6U][0x16U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[6U][0x17U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[6U][0x18U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[6U][0x19U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[6U][0x1aU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[6U][0x1bU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[6U][0x1cU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[6U][0x1dU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[6U][0x1eU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[6U][0x1fU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[7U][0U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[7U][1U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[7U][2U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[7U][3U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[7U][4U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[7U][5U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[7U][6U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[7U][7U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[7U][8U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[7U][9U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[7U][0xaU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[7U][0xbU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[7U][0xcU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[7U][0xdU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[7U][0xeU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[7U][0xfU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[7U][0x10U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[7U][0x11U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[7U][0x12U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[7U][0x13U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[7U][0x14U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[7U][0x15U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[7U][0x16U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[7U][0x17U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[7U][0x18U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[7U][0x19U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[7U][0x1aU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[7U][0x1bU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[7U][0x1cU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[7U][0x1dU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[7U][0x1eU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[7U][0x1fU] = 0U;
    }
    if (__VdlySet__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q__v0) {
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[__VdlyDim1__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q__v0][__VdlyDim0__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q__v0] 
            = __VdlyVal__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q__v0;
    }
    if (__VdlySet__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q__v1) {
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[0U][0U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[0U][1U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[0U][2U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[0U][3U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[0U][4U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[0U][5U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[0U][6U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[0U][7U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[0U][8U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[0U][9U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[0U][0xaU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[0U][0xbU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[0U][0xcU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[0U][0xdU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[0U][0xeU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[0U][0xfU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[0U][0x10U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[0U][0x11U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[0U][0x12U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[0U][0x13U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[0U][0x14U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[0U][0x15U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[0U][0x16U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[0U][0x17U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[0U][0x18U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[0U][0x19U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[0U][0x1aU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[0U][0x1bU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[0U][0x1cU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[0U][0x1dU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[0U][0x1eU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[0U][0x1fU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[1U][0U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[1U][1U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[1U][2U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[1U][3U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[1U][4U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[1U][5U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[1U][6U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[1U][7U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[1U][8U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[1U][9U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[1U][0xaU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[1U][0xbU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[1U][0xcU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[1U][0xdU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[1U][0xeU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[1U][0xfU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[1U][0x10U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[1U][0x11U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[1U][0x12U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[1U][0x13U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[1U][0x14U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[1U][0x15U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[1U][0x16U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[1U][0x17U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[1U][0x18U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[1U][0x19U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[1U][0x1aU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[1U][0x1bU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[1U][0x1cU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[1U][0x1dU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[1U][0x1eU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[1U][0x1fU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[2U][0U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[2U][1U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[2U][2U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[2U][3U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[2U][4U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[2U][5U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[2U][6U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[2U][7U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[2U][8U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[2U][9U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[2U][0xaU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[2U][0xbU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[2U][0xcU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[2U][0xdU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[2U][0xeU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[2U][0xfU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[2U][0x10U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[2U][0x11U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[2U][0x12U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[2U][0x13U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[2U][0x14U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[2U][0x15U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[2U][0x16U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[2U][0x17U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[2U][0x18U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[2U][0x19U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[2U][0x1aU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[2U][0x1bU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[2U][0x1cU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[2U][0x1dU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[2U][0x1eU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[2U][0x1fU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[3U][0U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[3U][1U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[3U][2U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[3U][3U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[3U][4U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[3U][5U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[3U][6U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[3U][7U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[3U][8U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[3U][9U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[3U][0xaU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[3U][0xbU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[3U][0xcU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[3U][0xdU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[3U][0xeU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[3U][0xfU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[3U][0x10U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[3U][0x11U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[3U][0x12U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[3U][0x13U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[3U][0x14U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[3U][0x15U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[3U][0x16U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[3U][0x17U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[3U][0x18U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[3U][0x19U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[3U][0x1aU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[3U][0x1bU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[3U][0x1cU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[3U][0x1dU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[3U][0x1eU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[3U][0x1fU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[4U][0U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[4U][1U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[4U][2U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[4U][3U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[4U][4U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[4U][5U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[4U][6U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[4U][7U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[4U][8U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[4U][9U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[4U][0xaU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[4U][0xbU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[4U][0xcU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[4U][0xdU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[4U][0xeU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[4U][0xfU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[4U][0x10U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[4U][0x11U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[4U][0x12U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[4U][0x13U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[4U][0x14U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[4U][0x15U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[4U][0x16U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[4U][0x17U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[4U][0x18U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[4U][0x19U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[4U][0x1aU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[4U][0x1bU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[4U][0x1cU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[4U][0x1dU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[4U][0x1eU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[4U][0x1fU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[5U][0U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[5U][1U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[5U][2U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[5U][3U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[5U][4U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[5U][5U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[5U][6U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[5U][7U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[5U][8U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[5U][9U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[5U][0xaU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[5U][0xbU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[5U][0xcU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[5U][0xdU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[5U][0xeU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[5U][0xfU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[5U][0x10U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[5U][0x11U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[5U][0x12U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[5U][0x13U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[5U][0x14U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[5U][0x15U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[5U][0x16U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[5U][0x17U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[5U][0x18U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[5U][0x19U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[5U][0x1aU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[5U][0x1bU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[5U][0x1cU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[5U][0x1dU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[5U][0x1eU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[5U][0x1fU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[6U][0U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[6U][1U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[6U][2U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[6U][3U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[6U][4U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[6U][5U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[6U][6U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[6U][7U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[6U][8U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[6U][9U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[6U][0xaU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[6U][0xbU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[6U][0xcU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[6U][0xdU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[6U][0xeU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[6U][0xfU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[6U][0x10U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[6U][0x11U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[6U][0x12U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[6U][0x13U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[6U][0x14U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[6U][0x15U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[6U][0x16U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[6U][0x17U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[6U][0x18U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[6U][0x19U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[6U][0x1aU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[6U][0x1bU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[6U][0x1cU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[6U][0x1dU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[6U][0x1eU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[6U][0x1fU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[7U][0U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[7U][1U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[7U][2U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[7U][3U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[7U][4U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[7U][5U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[7U][6U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[7U][7U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[7U][8U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[7U][9U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[7U][0xaU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[7U][0xbU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[7U][0xcU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[7U][0xdU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[7U][0xeU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[7U][0xfU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[7U][0x10U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[7U][0x11U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[7U][0x12U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[7U][0x13U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[7U][0x14U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[7U][0x15U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[7U][0x16U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[7U][0x17U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[7U][0x18U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[7U][0x19U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[7U][0x1aU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[7U][0x1bU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[7U][0x1cU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[7U][0x1dU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[7U][0x1eU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[7U][0x1fU] = 0U;
    }
    if (__VdlySet__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q__v0) {
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[__VdlyDim1__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q__v0][__VdlyDim0__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q__v0] 
            = __VdlyVal__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q__v0;
    }
    if (__VdlySet__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q__v1) {
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[0U][0U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[0U][1U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[0U][2U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[0U][3U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[0U][4U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[0U][5U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[0U][6U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[0U][7U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[0U][8U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[0U][9U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[0U][0xaU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[0U][0xbU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[0U][0xcU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[0U][0xdU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[0U][0xeU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[0U][0xfU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[0U][0x10U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[0U][0x11U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[0U][0x12U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[0U][0x13U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[0U][0x14U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[0U][0x15U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[0U][0x16U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[0U][0x17U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[0U][0x18U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[0U][0x19U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[0U][0x1aU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[0U][0x1bU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[0U][0x1cU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[0U][0x1dU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[0U][0x1eU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[0U][0x1fU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[1U][0U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[1U][1U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[1U][2U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[1U][3U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[1U][4U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[1U][5U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[1U][6U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[1U][7U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[1U][8U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[1U][9U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[1U][0xaU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[1U][0xbU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[1U][0xcU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[1U][0xdU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[1U][0xeU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[1U][0xfU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[1U][0x10U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[1U][0x11U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[1U][0x12U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[1U][0x13U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[1U][0x14U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[1U][0x15U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[1U][0x16U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[1U][0x17U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[1U][0x18U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[1U][0x19U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[1U][0x1aU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[1U][0x1bU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[1U][0x1cU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[1U][0x1dU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[1U][0x1eU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[1U][0x1fU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[2U][0U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[2U][1U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[2U][2U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[2U][3U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[2U][4U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[2U][5U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[2U][6U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[2U][7U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[2U][8U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[2U][9U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[2U][0xaU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[2U][0xbU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[2U][0xcU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[2U][0xdU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[2U][0xeU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[2U][0xfU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[2U][0x10U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[2U][0x11U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[2U][0x12U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[2U][0x13U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[2U][0x14U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[2U][0x15U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[2U][0x16U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[2U][0x17U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[2U][0x18U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[2U][0x19U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[2U][0x1aU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[2U][0x1bU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[2U][0x1cU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[2U][0x1dU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[2U][0x1eU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[2U][0x1fU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[3U][0U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[3U][1U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[3U][2U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[3U][3U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[3U][4U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[3U][5U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[3U][6U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[3U][7U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[3U][8U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[3U][9U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[3U][0xaU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[3U][0xbU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[3U][0xcU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[3U][0xdU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[3U][0xeU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[3U][0xfU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[3U][0x10U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[3U][0x11U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[3U][0x12U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[3U][0x13U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[3U][0x14U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[3U][0x15U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[3U][0x16U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[3U][0x17U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[3U][0x18U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[3U][0x19U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[3U][0x1aU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[3U][0x1bU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[3U][0x1cU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[3U][0x1dU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[3U][0x1eU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[3U][0x1fU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[4U][0U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[4U][1U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[4U][2U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[4U][3U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[4U][4U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[4U][5U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[4U][6U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[4U][7U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[4U][8U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[4U][9U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[4U][0xaU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[4U][0xbU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[4U][0xcU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[4U][0xdU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[4U][0xeU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[4U][0xfU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[4U][0x10U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[4U][0x11U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[4U][0x12U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[4U][0x13U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[4U][0x14U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[4U][0x15U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[4U][0x16U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[4U][0x17U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[4U][0x18U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[4U][0x19U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[4U][0x1aU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[4U][0x1bU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[4U][0x1cU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[4U][0x1dU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[4U][0x1eU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[4U][0x1fU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[5U][0U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[5U][1U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[5U][2U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[5U][3U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[5U][4U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[5U][5U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[5U][6U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[5U][7U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[5U][8U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[5U][9U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[5U][0xaU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[5U][0xbU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[5U][0xcU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[5U][0xdU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[5U][0xeU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[5U][0xfU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[5U][0x10U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[5U][0x11U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[5U][0x12U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[5U][0x13U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[5U][0x14U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[5U][0x15U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[5U][0x16U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[5U][0x17U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[5U][0x18U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[5U][0x19U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[5U][0x1aU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[5U][0x1bU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[5U][0x1cU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[5U][0x1dU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[5U][0x1eU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[5U][0x1fU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[6U][0U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[6U][1U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[6U][2U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[6U][3U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[6U][4U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[6U][5U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[6U][6U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[6U][7U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[6U][8U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[6U][9U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[6U][0xaU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[6U][0xbU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[6U][0xcU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[6U][0xdU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[6U][0xeU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[6U][0xfU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[6U][0x10U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[6U][0x11U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[6U][0x12U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[6U][0x13U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[6U][0x14U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[6U][0x15U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[6U][0x16U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[6U][0x17U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[6U][0x18U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[6U][0x19U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[6U][0x1aU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[6U][0x1bU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[6U][0x1cU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[6U][0x1dU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[6U][0x1eU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[6U][0x1fU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[7U][0U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[7U][1U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[7U][2U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[7U][3U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[7U][4U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[7U][5U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[7U][6U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[7U][7U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[7U][8U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[7U][9U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[7U][0xaU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[7U][0xbU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[7U][0xcU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[7U][0xdU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[7U][0xeU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[7U][0xfU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[7U][0x10U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[7U][0x11U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[7U][0x12U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[7U][0x13U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[7U][0x14U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[7U][0x15U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[7U][0x16U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[7U][0x17U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[7U][0x18U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[7U][0x19U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[7U][0x1aU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[7U][0x1bU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[7U][0x1cU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[7U][0x1dU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[7U][0x1eU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[7U][0x1fU] = 0U;
    }
    if (__VdlySet__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q__v0) {
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[__VdlyDim1__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q__v0][__VdlyDim0__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q__v0] 
            = __VdlyVal__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q__v0;
    }
    if (__VdlySet__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q__v1) {
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[0U][0U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[0U][1U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[0U][2U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[0U][3U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[0U][4U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[0U][5U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[0U][6U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[0U][7U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[0U][8U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[0U][9U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[0U][0xaU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[0U][0xbU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[0U][0xcU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[0U][0xdU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[0U][0xeU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[0U][0xfU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[0U][0x10U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[0U][0x11U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[0U][0x12U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[0U][0x13U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[0U][0x14U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[0U][0x15U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[0U][0x16U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[0U][0x17U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[0U][0x18U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[0U][0x19U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[0U][0x1aU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[0U][0x1bU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[0U][0x1cU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[0U][0x1dU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[0U][0x1eU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[0U][0x1fU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[1U][0U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[1U][1U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[1U][2U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[1U][3U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[1U][4U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[1U][5U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[1U][6U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[1U][7U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[1U][8U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[1U][9U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[1U][0xaU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[1U][0xbU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[1U][0xcU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[1U][0xdU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[1U][0xeU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[1U][0xfU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[1U][0x10U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[1U][0x11U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[1U][0x12U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[1U][0x13U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[1U][0x14U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[1U][0x15U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[1U][0x16U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[1U][0x17U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[1U][0x18U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[1U][0x19U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[1U][0x1aU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[1U][0x1bU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[1U][0x1cU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[1U][0x1dU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[1U][0x1eU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[1U][0x1fU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[2U][0U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[2U][1U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[2U][2U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[2U][3U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[2U][4U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[2U][5U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[2U][6U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[2U][7U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[2U][8U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[2U][9U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[2U][0xaU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[2U][0xbU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[2U][0xcU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[2U][0xdU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[2U][0xeU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[2U][0xfU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[2U][0x10U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[2U][0x11U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[2U][0x12U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[2U][0x13U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[2U][0x14U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[2U][0x15U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[2U][0x16U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[2U][0x17U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[2U][0x18U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[2U][0x19U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[2U][0x1aU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[2U][0x1bU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[2U][0x1cU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[2U][0x1dU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[2U][0x1eU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[2U][0x1fU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[3U][0U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[3U][1U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[3U][2U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[3U][3U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[3U][4U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[3U][5U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[3U][6U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[3U][7U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[3U][8U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[3U][9U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[3U][0xaU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[3U][0xbU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[3U][0xcU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[3U][0xdU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[3U][0xeU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[3U][0xfU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[3U][0x10U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[3U][0x11U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[3U][0x12U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[3U][0x13U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[3U][0x14U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[3U][0x15U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[3U][0x16U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[3U][0x17U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[3U][0x18U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[3U][0x19U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[3U][0x1aU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[3U][0x1bU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[3U][0x1cU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[3U][0x1dU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[3U][0x1eU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[3U][0x1fU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[4U][0U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[4U][1U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[4U][2U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[4U][3U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[4U][4U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[4U][5U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[4U][6U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[4U][7U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[4U][8U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[4U][9U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[4U][0xaU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[4U][0xbU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[4U][0xcU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[4U][0xdU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[4U][0xeU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[4U][0xfU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[4U][0x10U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[4U][0x11U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[4U][0x12U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[4U][0x13U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[4U][0x14U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[4U][0x15U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[4U][0x16U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[4U][0x17U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[4U][0x18U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[4U][0x19U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[4U][0x1aU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[4U][0x1bU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[4U][0x1cU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[4U][0x1dU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[4U][0x1eU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[4U][0x1fU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[5U][0U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[5U][1U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[5U][2U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[5U][3U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[5U][4U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[5U][5U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[5U][6U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[5U][7U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[5U][8U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[5U][9U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[5U][0xaU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[5U][0xbU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[5U][0xcU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[5U][0xdU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[5U][0xeU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[5U][0xfU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[5U][0x10U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[5U][0x11U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[5U][0x12U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[5U][0x13U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[5U][0x14U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[5U][0x15U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[5U][0x16U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[5U][0x17U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[5U][0x18U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[5U][0x19U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[5U][0x1aU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[5U][0x1bU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[5U][0x1cU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[5U][0x1dU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[5U][0x1eU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[5U][0x1fU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[6U][0U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[6U][1U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[6U][2U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[6U][3U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[6U][4U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[6U][5U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[6U][6U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[6U][7U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[6U][8U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[6U][9U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[6U][0xaU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[6U][0xbU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[6U][0xcU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[6U][0xdU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[6U][0xeU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[6U][0xfU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[6U][0x10U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[6U][0x11U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[6U][0x12U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[6U][0x13U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[6U][0x14U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[6U][0x15U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[6U][0x16U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[6U][0x17U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[6U][0x18U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[6U][0x19U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[6U][0x1aU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[6U][0x1bU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[6U][0x1cU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[6U][0x1dU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[6U][0x1eU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[6U][0x1fU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[7U][0U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[7U][1U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[7U][2U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[7U][3U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[7U][4U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[7U][5U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[7U][6U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[7U][7U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[7U][8U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[7U][9U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[7U][0xaU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[7U][0xbU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[7U][0xcU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[7U][0xdU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[7U][0xeU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[7U][0xfU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[7U][0x10U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[7U][0x11U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[7U][0x12U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[7U][0x13U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[7U][0x14U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[7U][0x15U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[7U][0x16U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[7U][0x17U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[7U][0x18U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[7U][0x19U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[7U][0x1aU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[7U][0x1bU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[7U][0x1cU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[7U][0x1dU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[7U][0x1eU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[7U][0x1fU] = 0U;
    }
    if (__VdlySet__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q__v0) {
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[__VdlyDim1__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q__v0][__VdlyDim0__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q__v0] 
            = __VdlyVal__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q__v0;
    }
    if (__VdlySet__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q__v1) {
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[0U][0U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[0U][1U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[0U][2U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[0U][3U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[0U][4U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[0U][5U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[0U][6U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[0U][7U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[0U][8U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[0U][9U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[0U][0xaU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[0U][0xbU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[0U][0xcU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[0U][0xdU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[0U][0xeU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[0U][0xfU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[0U][0x10U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[0U][0x11U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[0U][0x12U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[0U][0x13U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[0U][0x14U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[0U][0x15U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[0U][0x16U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[0U][0x17U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[0U][0x18U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[0U][0x19U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[0U][0x1aU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[0U][0x1bU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[0U][0x1cU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[0U][0x1dU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[0U][0x1eU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[0U][0x1fU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[1U][0U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[1U][1U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[1U][2U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[1U][3U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[1U][4U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[1U][5U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[1U][6U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[1U][7U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[1U][8U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[1U][9U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[1U][0xaU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[1U][0xbU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[1U][0xcU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[1U][0xdU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[1U][0xeU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[1U][0xfU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[1U][0x10U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[1U][0x11U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[1U][0x12U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[1U][0x13U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[1U][0x14U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[1U][0x15U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[1U][0x16U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[1U][0x17U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[1U][0x18U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[1U][0x19U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[1U][0x1aU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[1U][0x1bU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[1U][0x1cU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[1U][0x1dU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[1U][0x1eU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[1U][0x1fU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[2U][0U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[2U][1U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[2U][2U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[2U][3U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[2U][4U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[2U][5U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[2U][6U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[2U][7U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[2U][8U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[2U][9U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[2U][0xaU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[2U][0xbU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[2U][0xcU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[2U][0xdU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[2U][0xeU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[2U][0xfU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[2U][0x10U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[2U][0x11U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[2U][0x12U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[2U][0x13U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[2U][0x14U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[2U][0x15U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[2U][0x16U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[2U][0x17U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[2U][0x18U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[2U][0x19U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[2U][0x1aU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[2U][0x1bU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[2U][0x1cU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[2U][0x1dU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[2U][0x1eU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[2U][0x1fU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[3U][0U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[3U][1U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[3U][2U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[3U][3U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[3U][4U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[3U][5U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[3U][6U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[3U][7U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[3U][8U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[3U][9U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[3U][0xaU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[3U][0xbU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[3U][0xcU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[3U][0xdU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[3U][0xeU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[3U][0xfU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[3U][0x10U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[3U][0x11U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[3U][0x12U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[3U][0x13U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[3U][0x14U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[3U][0x15U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[3U][0x16U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[3U][0x17U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[3U][0x18U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[3U][0x19U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[3U][0x1aU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[3U][0x1bU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[3U][0x1cU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[3U][0x1dU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[3U][0x1eU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[3U][0x1fU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[4U][0U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[4U][1U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[4U][2U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[4U][3U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[4U][4U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[4U][5U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[4U][6U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[4U][7U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[4U][8U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[4U][9U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[4U][0xaU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[4U][0xbU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[4U][0xcU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[4U][0xdU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[4U][0xeU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[4U][0xfU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[4U][0x10U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[4U][0x11U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[4U][0x12U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[4U][0x13U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[4U][0x14U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[4U][0x15U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[4U][0x16U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[4U][0x17U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[4U][0x18U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[4U][0x19U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[4U][0x1aU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[4U][0x1bU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[4U][0x1cU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[4U][0x1dU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[4U][0x1eU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[4U][0x1fU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[5U][0U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[5U][1U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[5U][2U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[5U][3U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[5U][4U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[5U][5U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[5U][6U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[5U][7U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[5U][8U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[5U][9U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[5U][0xaU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[5U][0xbU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[5U][0xcU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[5U][0xdU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[5U][0xeU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[5U][0xfU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[5U][0x10U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[5U][0x11U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[5U][0x12U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[5U][0x13U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[5U][0x14U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[5U][0x15U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[5U][0x16U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[5U][0x17U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[5U][0x18U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[5U][0x19U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[5U][0x1aU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[5U][0x1bU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[5U][0x1cU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[5U][0x1dU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[5U][0x1eU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[5U][0x1fU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[6U][0U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[6U][1U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[6U][2U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[6U][3U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[6U][4U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[6U][5U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[6U][6U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[6U][7U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[6U][8U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[6U][9U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[6U][0xaU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[6U][0xbU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[6U][0xcU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[6U][0xdU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[6U][0xeU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[6U][0xfU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[6U][0x10U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[6U][0x11U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[6U][0x12U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[6U][0x13U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[6U][0x14U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[6U][0x15U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[6U][0x16U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[6U][0x17U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[6U][0x18U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[6U][0x19U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[6U][0x1aU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[6U][0x1bU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[6U][0x1cU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[6U][0x1dU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[6U][0x1eU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[6U][0x1fU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[7U][0U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[7U][1U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[7U][2U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[7U][3U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[7U][4U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[7U][5U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[7U][6U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[7U][7U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[7U][8U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[7U][9U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[7U][0xaU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[7U][0xbU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[7U][0xcU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[7U][0xdU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[7U][0xeU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[7U][0xfU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[7U][0x10U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[7U][0x11U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[7U][0x12U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[7U][0x13U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[7U][0x14U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[7U][0x15U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[7U][0x16U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[7U][0x17U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[7U][0x18U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[7U][0x19U] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[7U][0x1aU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[7U][0x1bU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[7U][0x1cU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[7U][0x1dU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[7U][0x1eU] = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[7U][0x1fU] = 0U;
    }
    vlSelfRef.__PVT__plru_access_q = ((IData)(vlSymsp->TOP.rv64g_cache_system_tb__DOT__rst_n) 
                                      && (IData)(vlSelfRef.__PVT__plru_access_n));
    vlSelfRef.__PVT__u_atomic_alu__DOT__old_less_signed_dw 
        = VL_LTS_IQQ(64, vlSelfRef.__PVT__amo_old_value_q, vlSelfRef.__PVT__pend_wdata_q);
    vlSelfRef.__PVT__u_atomic_alu__DOT__old_less_unsigned_dw 
        = (vlSelfRef.__PVT__amo_old_value_q < vlSelfRef.__PVT__pend_wdata_q);
    vlSelfRef.__PVT__u_atomic_alu__DOT__old_less_signed 
        = VL_LTS_III(32, (IData)(vlSelfRef.__PVT__amo_old_value_q), (IData)(vlSelfRef.__PVT__pend_wdata_q));
    vlSelfRef.__PVT__u_atomic_alu__DOT__old_less_unsigned 
        = ((IData)(vlSelfRef.__PVT__amo_old_value_q) 
           < (IData)(vlSelfRef.__PVT__pend_wdata_q));
    vlSelfRef.__PVT__tl_b_ready_n = 0U;
    vlSelfRef.__PVT__tl_c_size_n = 0U;
    vlSelfRef.__PVT__tl_c_source_n = 0U;
    vlSelfRef.__PVT__tl_e_sink_n = 0U;
    vlSelfRef.__PVT__tl_c_opcode_n = 0U;
    vlSelfRef.__PVT__tl_c_param_n = 0U;
    vlSelfRef.__PVT__tl_c_address_n = 0ULL;
    if ((8U & (IData)(vlSelfRef.__PVT__state))) {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__state)))) {
                    vlSelfRef.__PVT__tl_b_ready_n = 1U;
                }
                if ((1U & (IData)(vlSelfRef.__PVT__state))) {
                    vlSelfRef.__PVT__tl_c_size_n = 6U;
                    vlSelfRef.__PVT__tl_c_source_n = 0U;
                    if (vlSelfRef.__PVT__probe_pend_has_data_q) {
                        vlSelfRef.__PVT__tl_c_opcode_n = 5U;
                        vlSelfRef.__PVT__tl_c_param_n = 1U;
                    } else {
                        vlSelfRef.__PVT__tl_c_opcode_n = 4U;
                        vlSelfRef.__PVT__tl_c_param_n 
                            = ((IData)(vlSelfRef.__PVT__probe_pend_hit_q)
                                ? 2U : 5U);
                    }
                    vlSelfRef.__PVT__tl_c_address_n 
                        = ((vlSelfRef.__PVT__probe_pend_tag_q 
                            << 0xbU) | (QData)((IData)(
                                                       ((IData)(vlSelfRef.__PVT__probe_pend_index_q) 
                                                        << 6U))));
                }
            }
        }
    } else {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__state) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelfRef.__PVT__state))) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__state)))) {
                    vlSelfRef.__PVT__tl_b_ready_n = 1U;
                }
            } else if ((1U & (~ (IData)(vlSelfRef.__PVT__state)))) {
                vlSelfRef.__PVT__tl_b_ready_n = 1U;
            }
        }
        if ((4U & (IData)(vlSelfRef.__PVT__state))) {
            if ((2U & (IData)(vlSelfRef.__PVT__state))) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__state)))) {
                    vlSelfRef.__PVT__tl_c_size_n = 6U;
                    vlSelfRef.__PVT__tl_c_source_n = 0U;
                    if (vlSelfRef.__PVT__pend_is_probe_q) {
                        vlSelfRef.__PVT__tl_c_opcode_n = 5U;
                        vlSelfRef.__PVT__tl_c_address_n 
                            = ((vlSelfRef.__PVT__pend_tag_q 
                                << 0xbU) | (QData)((IData)(
                                                           ((IData)(vlSelfRef.__PVT__pend_index_q) 
                                                            << 6U))));
                    } else {
                        vlSelfRef.__PVT__tl_c_opcode_n = 7U;
                        vlSelfRef.__PVT__tl_c_address_n 
                            = ((vlSelfRef.__PVT__pend_evict_tag_q 
                                << 0xbU) | (QData)((IData)(
                                                           ((IData)(vlSelfRef.__PVT__pend_index_q) 
                                                            << 6U))));
                    }
                    vlSelfRef.__PVT__tl_c_param_n = 1U;
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__state))) {
                vlSelfRef.__PVT__tl_c_size_n = 6U;
                vlSelfRef.__PVT__tl_c_source_n = 0U;
                if (vlSelfRef.__PVT__pend_is_probe_q) {
                    if (vlSelfRef.__PVT__pend_has_data_q) {
                        vlSelfRef.__PVT__tl_c_opcode_n = 5U;
                        vlSelfRef.__PVT__tl_c_param_n = 1U;
                    } else {
                        vlSelfRef.__PVT__tl_c_opcode_n = 4U;
                        vlSelfRef.__PVT__tl_c_param_n 
                            = ((IData)(vlSelfRef.__PVT__pend_probe_hit_q)
                                ? 2U : 5U);
                    }
                    vlSelfRef.__PVT__tl_c_address_n 
                        = ((vlSelfRef.__PVT__pend_tag_q 
                            << 0xbU) | (QData)((IData)(
                                                       ((IData)(vlSelfRef.__PVT__pend_index_q) 
                                                        << 6U))));
                } else {
                    if (vlSelfRef.__PVT__pend_has_data_q) {
                        vlSelfRef.__PVT__tl_c_opcode_n = 7U;
                        vlSelfRef.__PVT__tl_c_param_n = 1U;
                    } else {
                        vlSelfRef.__PVT__tl_c_opcode_n = 6U;
                        vlSelfRef.__PVT__tl_c_param_n 
                            = ((1U == (IData)(vlSelfRef.__PVT__pend_evict_state_q))
                                ? 2U : ((2U == (IData)(vlSelfRef.__PVT__pend_evict_state_q))
                                         ? 1U : ((3U 
                                                  == (IData)(vlSelfRef.__PVT__pend_evict_state_q))
                                                  ? 1U
                                                  : 5U)));
                    }
                    vlSelfRef.__PVT__tl_c_address_n 
                        = ((vlSelfRef.__PVT__pend_evict_tag_q 
                            << 0xbU) | (QData)((IData)(
                                                       ((IData)(vlSelfRef.__PVT__pend_index_q) 
                                                        << 6U))));
                }
            }
        }
    }
    vlSelfRef.__PVT__vlsu_miss_refill_done = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.__PVT__state) >> 3U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__state) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelfRef.__PVT__state))) {
                if ((1U & (IData)(vlSelfRef.__PVT__state))) {
                    vlSelfRef.__PVT__tl_e_sink_n = vlSelfRef.__PVT__pend_sink_q;
                }
            }
        }
        if ((4U & (IData)(vlSelfRef.__PVT__state))) {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__state)))) {
                    if ((1U & (~ (IData)(vlSelfRef.__PVT__pend_is_lr_q)))) {
                        if ((1U & (~ (IData)(vlSelfRef.__PVT__pend_is_sc_q)))) {
                            if ((1U & (~ (IData)(vlSelfRef.__PVT__pend_is_amo_q)))) {
                                if ((1U & (~ (IData)(vlSelfRef.__PVT__pend_is_store_q)))) {
                                    if ((0xdU == (IData)(vlSelfRef.__PVT__return_state_q))) {
                                        vlSelfRef.__PVT__vlsu_miss_refill_done = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__lane_bank[0U] 
        = (7U & (vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[0U] 
                 >> 3U));
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__lane_bank[1U] 
        = (7U & (vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[2U] 
                 >> 3U));
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__lane_bank[2U] 
        = (7U & (vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[4U] 
                 >> 3U));
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__lane_bank[3U] 
        = (7U & (vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[6U] 
                 >> 3U));
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__lane_bank[4U] 
        = (7U & (vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[8U] 
                 >> 3U));
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__lane_bank[5U] 
        = (7U & (vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[0xaU] 
                 >> 3U));
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__lane_bank[6U] 
        = (7U & (vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[0xcU] 
                 >> 3U));
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__lane_bank[7U] 
        = (7U & (vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[0xeU] 
                 >> 3U));
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__lane_word[0U] 
        = (7U & (vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[0U] 
                 >> 3U));
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__lane_word[1U] 
        = (7U & (vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[2U] 
                 >> 3U));
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__lane_word[2U] 
        = (7U & (vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[4U] 
                 >> 3U));
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__lane_word[3U] 
        = (7U & (vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[6U] 
                 >> 3U));
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__lane_word[4U] 
        = (7U & (vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[8U] 
                 >> 3U));
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__lane_word[5U] 
        = (7U & (vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[0xaU] 
                 >> 3U));
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__lane_word[6U] 
        = (7U & (vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[0xcU] 
                 >> 3U));
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__lane_word[7U] 
        = (7U & (vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[0xeU] 
                 >> 3U));
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__lane_index[0U] 
        = (0x1fU & (vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[0U] 
                    >> 6U));
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__lane_index[1U] 
        = (0x1fU & (vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[2U] 
                    >> 6U));
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__lane_index[2U] 
        = (0x1fU & (vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[4U] 
                    >> 6U));
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__lane_index[3U] 
        = (0x1fU & (vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[6U] 
                    >> 6U));
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__lane_index[4U] 
        = (0x1fU & (vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[8U] 
                    >> 6U));
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__lane_index[5U] 
        = (0x1fU & (vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[0xaU] 
                    >> 6U));
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__lane_index[6U] 
        = (0x1fU & (vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[0xcU] 
                    >> 6U));
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__lane_index[7U] 
        = (0x1fU & (vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[0xeU] 
                    >> 6U));
    u_arrays__DOT__u_crossbar__DOT____VdfgRegularize_h473a9933_0_8 
        = (((((IData)((((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__pending_q) 
                        >> 7U) & (0U == (0x38U & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[0xeU])))) 
              << 7U) | ((IData)((((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__pending_q) 
                                  >> 6U) & (0U == (0x38U 
                                                   & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[0xcU])))) 
                        << 6U)) | (((IData)((((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__pending_q) 
                                              >> 5U) 
                                             & (0U 
                                                == 
                                                (0x38U 
                                                 & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[0xaU])))) 
                                    << 5U) | ((IData)(
                                                      (((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__pending_q) 
                                                        >> 4U) 
                                                       & (0U 
                                                          == 
                                                          (0x38U 
                                                           & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[8U])))) 
                                              << 4U))) 
           | ((((IData)((((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__pending_q) 
                          >> 3U) & (0U == (0x38U & 
                                           vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[6U])))) 
                << 3U) | ((IData)((((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__pending_q) 
                                    >> 2U) & (0U == 
                                              (0x38U 
                                               & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[4U])))) 
                          << 2U)) | (((IData)((((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__pending_q) 
                                                >> 1U) 
                                               & (0U 
                                                  == 
                                                  (0x38U 
                                                   & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[2U])))) 
                                      << 1U) | ((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__pending_q) 
                                                & (0U 
                                                   == 
                                                   (0x38U 
                                                    & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[0U]))))));
    u_arrays__DOT__u_crossbar__DOT____VdfgRegularize_h473a9933_0_9 
        = (((((IData)((((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__pending_q) 
                        >> 7U) & (8U == (0x38U & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[0xeU])))) 
              << 7U) | ((IData)((((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__pending_q) 
                                  >> 6U) & (8U == (0x38U 
                                                   & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[0xcU])))) 
                        << 6U)) | (((IData)((((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__pending_q) 
                                              >> 5U) 
                                             & (8U 
                                                == 
                                                (0x38U 
                                                 & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[0xaU])))) 
                                    << 5U) | ((IData)(
                                                      (((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__pending_q) 
                                                        >> 4U) 
                                                       & (8U 
                                                          == 
                                                          (0x38U 
                                                           & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[8U])))) 
                                              << 4U))) 
           | ((((IData)((((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__pending_q) 
                          >> 3U) & (8U == (0x38U & 
                                           vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[6U])))) 
                << 3U) | ((IData)((((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__pending_q) 
                                    >> 2U) & (8U == 
                                              (0x38U 
                                               & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[4U])))) 
                          << 2U)) | (((IData)((((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__pending_q) 
                                                >> 1U) 
                                               & (8U 
                                                  == 
                                                  (0x38U 
                                                   & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[2U])))) 
                                      << 1U) | ((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__pending_q) 
                                                & (8U 
                                                   == 
                                                   (0x38U 
                                                    & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[0U]))))));
    u_arrays__DOT__u_crossbar__DOT____VdfgRegularize_h473a9933_0_10 
        = (((((IData)((((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__pending_q) 
                        >> 7U) & (0x10U == (0x38U & 
                                            vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[0xeU])))) 
              << 7U) | ((IData)((((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__pending_q) 
                                  >> 6U) & (0x10U == 
                                            (0x38U 
                                             & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[0xcU])))) 
                        << 6U)) | (((IData)((((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__pending_q) 
                                              >> 5U) 
                                             & (0x10U 
                                                == 
                                                (0x38U 
                                                 & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[0xaU])))) 
                                    << 5U) | ((IData)(
                                                      (((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__pending_q) 
                                                        >> 4U) 
                                                       & (0x10U 
                                                          == 
                                                          (0x38U 
                                                           & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[8U])))) 
                                              << 4U))) 
           | ((((IData)((((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__pending_q) 
                          >> 3U) & (0x10U == (0x38U 
                                              & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[6U])))) 
                << 3U) | ((IData)((((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__pending_q) 
                                    >> 2U) & (0x10U 
                                              == (0x38U 
                                                  & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[4U])))) 
                          << 2U)) | (((IData)((((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__pending_q) 
                                                >> 1U) 
                                               & (0x10U 
                                                  == 
                                                  (0x38U 
                                                   & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[2U])))) 
                                      << 1U) | ((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__pending_q) 
                                                & (0x10U 
                                                   == 
                                                   (0x38U 
                                                    & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[0U]))))));
    u_arrays__DOT__u_crossbar__DOT____VdfgRegularize_h473a9933_0_11 
        = (((((IData)((((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__pending_q) 
                        >> 7U) & (0x18U == (0x38U & 
                                            vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[0xeU])))) 
              << 7U) | ((IData)((((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__pending_q) 
                                  >> 6U) & (0x18U == 
                                            (0x38U 
                                             & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[0xcU])))) 
                        << 6U)) | (((IData)((((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__pending_q) 
                                              >> 5U) 
                                             & (0x18U 
                                                == 
                                                (0x38U 
                                                 & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[0xaU])))) 
                                    << 5U) | ((IData)(
                                                      (((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__pending_q) 
                                                        >> 4U) 
                                                       & (0x18U 
                                                          == 
                                                          (0x38U 
                                                           & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[8U])))) 
                                              << 4U))) 
           | ((((IData)((((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__pending_q) 
                          >> 3U) & (0x18U == (0x38U 
                                              & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[6U])))) 
                << 3U) | ((IData)((((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__pending_q) 
                                    >> 2U) & (0x18U 
                                              == (0x38U 
                                                  & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[4U])))) 
                          << 2U)) | (((IData)((((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__pending_q) 
                                                >> 1U) 
                                               & (0x18U 
                                                  == 
                                                  (0x38U 
                                                   & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[2U])))) 
                                      << 1U) | ((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__pending_q) 
                                                & (0x18U 
                                                   == 
                                                   (0x38U 
                                                    & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[0U]))))));
    u_arrays__DOT__u_crossbar__DOT____VdfgRegularize_h473a9933_0_12 
        = (((((IData)((((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__pending_q) 
                        >> 7U) & (0x20U == (0x38U & 
                                            vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[0xeU])))) 
              << 7U) | ((IData)((((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__pending_q) 
                                  >> 6U) & (0x20U == 
                                            (0x38U 
                                             & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[0xcU])))) 
                        << 6U)) | (((IData)((((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__pending_q) 
                                              >> 5U) 
                                             & (0x20U 
                                                == 
                                                (0x38U 
                                                 & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[0xaU])))) 
                                    << 5U) | ((IData)(
                                                      (((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__pending_q) 
                                                        >> 4U) 
                                                       & (0x20U 
                                                          == 
                                                          (0x38U 
                                                           & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[8U])))) 
                                              << 4U))) 
           | ((((IData)((((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__pending_q) 
                          >> 3U) & (0x20U == (0x38U 
                                              & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[6U])))) 
                << 3U) | ((IData)((((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__pending_q) 
                                    >> 2U) & (0x20U 
                                              == (0x38U 
                                                  & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[4U])))) 
                          << 2U)) | (((IData)((((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__pending_q) 
                                                >> 1U) 
                                               & (0x20U 
                                                  == 
                                                  (0x38U 
                                                   & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[2U])))) 
                                      << 1U) | ((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__pending_q) 
                                                & (0x20U 
                                                   == 
                                                   (0x38U 
                                                    & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[0U]))))));
    u_arrays__DOT__u_crossbar__DOT____VdfgRegularize_h473a9933_0_13 
        = (((((IData)((((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__pending_q) 
                        >> 7U) & (0x28U == (0x38U & 
                                            vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[0xeU])))) 
              << 7U) | ((IData)((((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__pending_q) 
                                  >> 6U) & (0x28U == 
                                            (0x38U 
                                             & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[0xcU])))) 
                        << 6U)) | (((IData)((((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__pending_q) 
                                              >> 5U) 
                                             & (0x28U 
                                                == 
                                                (0x38U 
                                                 & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[0xaU])))) 
                                    << 5U) | ((IData)(
                                                      (((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__pending_q) 
                                                        >> 4U) 
                                                       & (0x28U 
                                                          == 
                                                          (0x38U 
                                                           & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[8U])))) 
                                              << 4U))) 
           | ((((IData)((((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__pending_q) 
                          >> 3U) & (0x28U == (0x38U 
                                              & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[6U])))) 
                << 3U) | ((IData)((((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__pending_q) 
                                    >> 2U) & (0x28U 
                                              == (0x38U 
                                                  & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[4U])))) 
                          << 2U)) | (((IData)((((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__pending_q) 
                                                >> 1U) 
                                               & (0x28U 
                                                  == 
                                                  (0x38U 
                                                   & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[2U])))) 
                                      << 1U) | ((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__pending_q) 
                                                & (0x28U 
                                                   == 
                                                   (0x38U 
                                                    & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[0U]))))));
    u_arrays__DOT__u_crossbar__DOT____VdfgRegularize_h473a9933_0_14 
        = (((((IData)((((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__pending_q) 
                        >> 7U) & (0x30U == (0x38U & 
                                            vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[0xeU])))) 
              << 7U) | ((IData)((((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__pending_q) 
                                  >> 6U) & (0x30U == 
                                            (0x38U 
                                             & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[0xcU])))) 
                        << 6U)) | (((IData)((((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__pending_q) 
                                              >> 5U) 
                                             & (0x30U 
                                                == 
                                                (0x38U 
                                                 & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[0xaU])))) 
                                    << 5U) | ((IData)(
                                                      (((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__pending_q) 
                                                        >> 4U) 
                                                       & (0x30U 
                                                          == 
                                                          (0x38U 
                                                           & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[8U])))) 
                                              << 4U))) 
           | ((((IData)((((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__pending_q) 
                          >> 3U) & (0x30U == (0x38U 
                                              & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[6U])))) 
                << 3U) | ((IData)((((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__pending_q) 
                                    >> 2U) & (0x30U 
                                              == (0x38U 
                                                  & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[4U])))) 
                          << 2U)) | (((IData)((((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__pending_q) 
                                                >> 1U) 
                                               & (0x30U 
                                                  == 
                                                  (0x38U 
                                                   & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[2U])))) 
                                      << 1U) | ((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__pending_q) 
                                                & (0x30U 
                                                   == 
                                                   (0x38U 
                                                    & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[0U]))))));
    u_arrays__DOT__u_crossbar__DOT____VdfgRegularize_h473a9933_0_15 
        = (((((IData)((((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__pending_q) 
                        >> 7U) & (0x38U == (0x38U & 
                                            vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[0xeU])))) 
              << 7U) | ((IData)((((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__pending_q) 
                                  >> 6U) & (0x38U == 
                                            (0x38U 
                                             & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[0xcU])))) 
                        << 6U)) | (((IData)((((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__pending_q) 
                                              >> 5U) 
                                             & (0x38U 
                                                == 
                                                (0x38U 
                                                 & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[0xaU])))) 
                                    << 5U) | ((IData)(
                                                      (((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__pending_q) 
                                                        >> 4U) 
                                                       & (0x38U 
                                                          == 
                                                          (0x38U 
                                                           & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[8U])))) 
                                              << 4U))) 
           | ((((IData)((((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__pending_q) 
                          >> 3U) & (0x38U == (0x38U 
                                              & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[6U])))) 
                << 3U) | ((IData)((((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__pending_q) 
                                    >> 2U) & (0x38U 
                                              == (0x38U 
                                                  & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[4U])))) 
                          << 2U)) | (((IData)((((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__pending_q) 
                                                >> 1U) 
                                               & (0x38U 
                                                  == 
                                                  (0x38U 
                                                   & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[2U])))) 
                                      << 1U) | ((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__pending_q) 
                                                & (0x38U 
                                                   == 
                                                   (0x38U 
                                                    & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q[0U]))))));
    if ((0x10U & (IData)(vlSelfRef.__PVT__pend_amo_op_q))) {
        if ((8U & (IData)(vlSelfRef.__PVT__pend_amo_op_q))) {
            if ((4U & (IData)(vlSelfRef.__PVT__pend_amo_op_q))) {
                if ((2U & (IData)(vlSelfRef.__PVT__pend_amo_op_q))) {
                    vlSelfRef.__PVT__u_atomic_alu__DOT__result_dword 
                        = vlSelfRef.__PVT__amo_old_value_q;
                    vlSelfRef.__PVT__u_atomic_alu__DOT__result_word 
                        = (IData)(vlSelfRef.__PVT__amo_old_value_q);
                } else if ((1U & (IData)(vlSelfRef.__PVT__pend_amo_op_q))) {
                    vlSelfRef.__PVT__u_atomic_alu__DOT__result_dword 
                        = vlSelfRef.__PVT__amo_old_value_q;
                    vlSelfRef.__PVT__u_atomic_alu__DOT__result_word 
                        = (IData)(vlSelfRef.__PVT__amo_old_value_q);
                } else {
                    vlSelfRef.__PVT__u_atomic_alu__DOT__result_dword 
                        = ((IData)(vlSelfRef.__PVT__u_atomic_alu__DOT__old_less_unsigned_dw)
                            ? vlSelfRef.__PVT__pend_wdata_q
                            : vlSelfRef.__PVT__amo_old_value_q);
                    vlSelfRef.__PVT__u_atomic_alu__DOT__result_word 
                        = ((IData)(vlSelfRef.__PVT__u_atomic_alu__DOT__old_less_unsigned)
                            ? (IData)(vlSelfRef.__PVT__pend_wdata_q)
                            : (IData)(vlSelfRef.__PVT__amo_old_value_q));
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__pend_amo_op_q))) {
                vlSelfRef.__PVT__u_atomic_alu__DOT__result_dword 
                    = vlSelfRef.__PVT__amo_old_value_q;
                vlSelfRef.__PVT__u_atomic_alu__DOT__result_word 
                    = (IData)(vlSelfRef.__PVT__amo_old_value_q);
            } else if ((1U & (IData)(vlSelfRef.__PVT__pend_amo_op_q))) {
                vlSelfRef.__PVT__u_atomic_alu__DOT__result_dword 
                    = vlSelfRef.__PVT__amo_old_value_q;
                vlSelfRef.__PVT__u_atomic_alu__DOT__result_word 
                    = (IData)(vlSelfRef.__PVT__amo_old_value_q);
            } else {
                vlSelfRef.__PVT__u_atomic_alu__DOT__result_dword 
                    = ((IData)(vlSelfRef.__PVT__u_atomic_alu__DOT__old_less_unsigned_dw)
                        ? vlSelfRef.__PVT__amo_old_value_q
                        : vlSelfRef.__PVT__pend_wdata_q);
                vlSelfRef.__PVT__u_atomic_alu__DOT__result_word 
                    = ((IData)(vlSelfRef.__PVT__u_atomic_alu__DOT__old_less_unsigned)
                        ? (IData)(vlSelfRef.__PVT__amo_old_value_q)
                        : (IData)(vlSelfRef.__PVT__pend_wdata_q));
            }
        } else if ((4U & (IData)(vlSelfRef.__PVT__pend_amo_op_q))) {
            if ((2U & (IData)(vlSelfRef.__PVT__pend_amo_op_q))) {
                vlSelfRef.__PVT__u_atomic_alu__DOT__result_dword 
                    = vlSelfRef.__PVT__amo_old_value_q;
                vlSelfRef.__PVT__u_atomic_alu__DOT__result_word 
                    = (IData)(vlSelfRef.__PVT__amo_old_value_q);
            } else if ((1U & (IData)(vlSelfRef.__PVT__pend_amo_op_q))) {
                vlSelfRef.__PVT__u_atomic_alu__DOT__result_dword 
                    = vlSelfRef.__PVT__amo_old_value_q;
                vlSelfRef.__PVT__u_atomic_alu__DOT__result_word 
                    = (IData)(vlSelfRef.__PVT__amo_old_value_q);
            } else {
                vlSelfRef.__PVT__u_atomic_alu__DOT__result_dword 
                    = ((IData)(vlSelfRef.__PVT__u_atomic_alu__DOT__old_less_signed_dw)
                        ? vlSelfRef.__PVT__pend_wdata_q
                        : vlSelfRef.__PVT__amo_old_value_q);
                vlSelfRef.__PVT__u_atomic_alu__DOT__result_word 
                    = ((IData)(vlSelfRef.__PVT__u_atomic_alu__DOT__old_less_signed)
                        ? (IData)(vlSelfRef.__PVT__pend_wdata_q)
                        : (IData)(vlSelfRef.__PVT__amo_old_value_q));
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__pend_amo_op_q))) {
            vlSelfRef.__PVT__u_atomic_alu__DOT__result_dword 
                = vlSelfRef.__PVT__amo_old_value_q;
            vlSelfRef.__PVT__u_atomic_alu__DOT__result_word 
                = (IData)(vlSelfRef.__PVT__amo_old_value_q);
        } else if ((1U & (IData)(vlSelfRef.__PVT__pend_amo_op_q))) {
            vlSelfRef.__PVT__u_atomic_alu__DOT__result_dword 
                = vlSelfRef.__PVT__amo_old_value_q;
            vlSelfRef.__PVT__u_atomic_alu__DOT__result_word 
                = (IData)(vlSelfRef.__PVT__amo_old_value_q);
        } else {
            vlSelfRef.__PVT__u_atomic_alu__DOT__result_dword 
                = ((IData)(vlSelfRef.__PVT__u_atomic_alu__DOT__old_less_signed_dw)
                    ? vlSelfRef.__PVT__amo_old_value_q
                    : vlSelfRef.__PVT__pend_wdata_q);
            vlSelfRef.__PVT__u_atomic_alu__DOT__result_word 
                = ((IData)(vlSelfRef.__PVT__u_atomic_alu__DOT__old_less_signed)
                    ? (IData)(vlSelfRef.__PVT__amo_old_value_q)
                    : (IData)(vlSelfRef.__PVT__pend_wdata_q));
        }
    } else if ((8U & (IData)(vlSelfRef.__PVT__pend_amo_op_q))) {
        if ((4U & (IData)(vlSelfRef.__PVT__pend_amo_op_q))) {
            if ((2U & (IData)(vlSelfRef.__PVT__pend_amo_op_q))) {
                vlSelfRef.__PVT__u_atomic_alu__DOT__result_dword 
                    = vlSelfRef.__PVT__amo_old_value_q;
                vlSelfRef.__PVT__u_atomic_alu__DOT__result_word 
                    = (IData)(vlSelfRef.__PVT__amo_old_value_q);
            } else if ((1U & (IData)(vlSelfRef.__PVT__pend_amo_op_q))) {
                vlSelfRef.__PVT__u_atomic_alu__DOT__result_dword 
                    = vlSelfRef.__PVT__amo_old_value_q;
                vlSelfRef.__PVT__u_atomic_alu__DOT__result_word 
                    = (IData)(vlSelfRef.__PVT__amo_old_value_q);
            } else {
                vlSelfRef.__PVT__u_atomic_alu__DOT__result_dword 
                    = (vlSelfRef.__PVT__amo_old_value_q 
                       & vlSelfRef.__PVT__pend_wdata_q);
                vlSelfRef.__PVT__u_atomic_alu__DOT__result_word 
                    = ((IData)(vlSelfRef.__PVT__amo_old_value_q) 
                       & (IData)(vlSelfRef.__PVT__pend_wdata_q));
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__pend_amo_op_q))) {
            vlSelfRef.__PVT__u_atomic_alu__DOT__result_dword 
                = vlSelfRef.__PVT__amo_old_value_q;
            vlSelfRef.__PVT__u_atomic_alu__DOT__result_word 
                = (IData)(vlSelfRef.__PVT__amo_old_value_q);
        } else if ((1U & (IData)(vlSelfRef.__PVT__pend_amo_op_q))) {
            vlSelfRef.__PVT__u_atomic_alu__DOT__result_dword 
                = vlSelfRef.__PVT__amo_old_value_q;
            vlSelfRef.__PVT__u_atomic_alu__DOT__result_word 
                = (IData)(vlSelfRef.__PVT__amo_old_value_q);
        } else {
            vlSelfRef.__PVT__u_atomic_alu__DOT__result_dword 
                = (vlSelfRef.__PVT__amo_old_value_q 
                   | vlSelfRef.__PVT__pend_wdata_q);
            vlSelfRef.__PVT__u_atomic_alu__DOT__result_word 
                = ((IData)(vlSelfRef.__PVT__amo_old_value_q) 
                   | (IData)(vlSelfRef.__PVT__pend_wdata_q));
        }
    } else if ((4U & (IData)(vlSelfRef.__PVT__pend_amo_op_q))) {
        if ((2U & (IData)(vlSelfRef.__PVT__pend_amo_op_q))) {
            vlSelfRef.__PVT__u_atomic_alu__DOT__result_dword 
                = vlSelfRef.__PVT__amo_old_value_q;
            vlSelfRef.__PVT__u_atomic_alu__DOT__result_word 
                = (IData)(vlSelfRef.__PVT__amo_old_value_q);
        } else if ((1U & (IData)(vlSelfRef.__PVT__pend_amo_op_q))) {
            vlSelfRef.__PVT__u_atomic_alu__DOT__result_dword 
                = vlSelfRef.__PVT__amo_old_value_q;
            vlSelfRef.__PVT__u_atomic_alu__DOT__result_word 
                = (IData)(vlSelfRef.__PVT__amo_old_value_q);
        } else {
            vlSelfRef.__PVT__u_atomic_alu__DOT__result_dword 
                = (vlSelfRef.__PVT__amo_old_value_q 
                   ^ vlSelfRef.__PVT__pend_wdata_q);
            vlSelfRef.__PVT__u_atomic_alu__DOT__result_word 
                = ((IData)(vlSelfRef.__PVT__amo_old_value_q) 
                   ^ (IData)(vlSelfRef.__PVT__pend_wdata_q));
        }
    } else if ((2U & (IData)(vlSelfRef.__PVT__pend_amo_op_q))) {
        vlSelfRef.__PVT__u_atomic_alu__DOT__result_dword 
            = vlSelfRef.__PVT__amo_old_value_q;
        vlSelfRef.__PVT__u_atomic_alu__DOT__result_word 
            = (IData)(vlSelfRef.__PVT__amo_old_value_q);
    } else if ((1U & (IData)(vlSelfRef.__PVT__pend_amo_op_q))) {
        vlSelfRef.__PVT__u_atomic_alu__DOT__result_dword 
            = vlSelfRef.__PVT__pend_wdata_q;
        vlSelfRef.__PVT__u_atomic_alu__DOT__result_word 
            = (IData)(vlSelfRef.__PVT__pend_wdata_q);
    } else {
        vlSelfRef.__PVT__u_atomic_alu__DOT__result_dword 
            = (vlSelfRef.__PVT__amo_old_value_q + vlSelfRef.__PVT__pend_wdata_q);
        vlSelfRef.__PVT__u_atomic_alu__DOT__result_word 
            = ((IData)(vlSelfRef.__PVT__amo_old_value_q) 
               + (IData)(vlSelfRef.__PVT__pend_wdata_q));
    }
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_requesters[0U] 
        = u_arrays__DOT__u_crossbar__DOT____VdfgRegularize_h473a9933_0_8;
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_requesters[1U] 
        = u_arrays__DOT__u_crossbar__DOT____VdfgRegularize_h473a9933_0_9;
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_requesters[2U] 
        = u_arrays__DOT__u_crossbar__DOT____VdfgRegularize_h473a9933_0_10;
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_requesters[3U] 
        = u_arrays__DOT__u_crossbar__DOT____VdfgRegularize_h473a9933_0_11;
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_requesters[4U] 
        = u_arrays__DOT__u_crossbar__DOT____VdfgRegularize_h473a9933_0_12;
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_requesters[5U] 
        = u_arrays__DOT__u_crossbar__DOT____VdfgRegularize_h473a9933_0_13;
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_requesters[6U] 
        = u_arrays__DOT__u_crossbar__DOT____VdfgRegularize_h473a9933_0_14;
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_active 
        = (((((0U != (IData)(u_arrays__DOT__u_crossbar__DOT____VdfgRegularize_h473a9933_0_15)) 
              << 7U) | ((0U != (IData)(u_arrays__DOT__u_crossbar__DOT____VdfgRegularize_h473a9933_0_14)) 
                        << 6U)) | (((0U != (IData)(u_arrays__DOT__u_crossbar__DOT____VdfgRegularize_h473a9933_0_13)) 
                                    << 5U) | ((0U != (IData)(u_arrays__DOT__u_crossbar__DOT____VdfgRegularize_h473a9933_0_12)) 
                                              << 4U))) 
           | ((((0U != (IData)(u_arrays__DOT__u_crossbar__DOT____VdfgRegularize_h473a9933_0_11)) 
                << 3U) | ((0U != (IData)(u_arrays__DOT__u_crossbar__DOT____VdfgRegularize_h473a9933_0_10)) 
                          << 2U)) | (((0U != (IData)(u_arrays__DOT__u_crossbar__DOT____VdfgRegularize_h473a9933_0_9)) 
                                      << 1U) | (0U 
                                                != (IData)(u_arrays__DOT__u_crossbar__DOT____VdfgRegularize_h473a9933_0_8)))));
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_requesters[7U] 
        = u_arrays__DOT__u_crossbar__DOT____VdfgRegularize_h473a9933_0_15;
    vlSelfRef.__PVT__vlsu_miss_busy = 0U;
    vlSelfRef.__PVT__u_vlsu_miss__DOT__miss_valid_n 
        = vlSelfRef.__PVT__u_vlsu_miss__DOT__miss_valid_q;
    vlSelfRef.__PVT__u_vlsu_miss__DOT__miss_addr_n[0U] 
        = vlSelfRef.__PVT__u_vlsu_miss__DOT__miss_addr_q
        [0U];
    vlSelfRef.__PVT__u_vlsu_miss__DOT__lane_line_addr = 0ULL;
    vlSelfRef.__PVT__u_vlsu_miss__DOT__is_dup = 0U;
    vlSelfRef.__PVT__u_vlsu_miss__DOT__miss_count_n 
        = vlSelfRef.__PVT__u_vlsu_miss__DOT__miss_count_q;
    vlSelfRef.__PVT__u_vlsu_miss__DOT__miss_addr_n[1U] 
        = vlSelfRef.__PVT__u_vlsu_miss__DOT__miss_addr_q
        [1U];
    vlSelfRef.__PVT__u_vlsu_miss__DOT__miss_addr_n[2U] 
        = vlSelfRef.__PVT__u_vlsu_miss__DOT__miss_addr_q
        [2U];
    if ((1U == (IData)(vlSelfRef.__PVT__u_vlsu_miss__DOT__state_q))) {
        vlSelfRef.__PVT__u_vlsu_miss__DOT__miss_valid_n = 0U;
        vlSelfRef.__PVT__u_vlsu_miss__DOT__miss_count_n = 0U;
    }
    vlSelfRef.__PVT__u_vlsu_miss__DOT__miss_addr_n[3U] 
        = vlSelfRef.__PVT__u_vlsu_miss__DOT__miss_addr_q
        [3U];
    vlSelfRef.__PVT__u_vlsu_miss__DOT__miss_addr_n[4U] 
        = vlSelfRef.__PVT__u_vlsu_miss__DOT__miss_addr_q
        [4U];
    vlSelfRef.__PVT__u_vlsu_miss__DOT__miss_addr_n[5U] 
        = vlSelfRef.__PVT__u_vlsu_miss__DOT__miss_addr_q
        [5U];
    vlSelfRef.__PVT__u_vlsu_miss__DOT__miss_addr_n[6U] 
        = vlSelfRef.__PVT__u_vlsu_miss__DOT__miss_addr_q
        [6U];
    vlSelfRef.__PVT__u_vlsu_miss__DOT__miss_addr_n[7U] 
        = vlSelfRef.__PVT__u_vlsu_miss__DOT__miss_addr_q
        [7U];
    vlSelfRef.__PVT__vlsu_miss_refill_addr = 0ULL;
    vlSelfRef.__PVT__vlsu_miss_ready_for_replay = 0U;
    if ((4U & (IData)(vlSelfRef.__PVT__u_vlsu_miss__DOT__state_q))) {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_vlsu_miss__DOT__state_q) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__u_vlsu_miss__DOT__state_q)))) {
                vlSelfRef.__PVT__vlsu_miss_ready_for_replay = 1U;
            }
        }
    }
    vlSelfRef.__PVT__vlsu_miss_refill_req = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_vlsu_miss__DOT__state_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.__PVT__u_vlsu_miss__DOT__state_q))) {
            vlSelfRef.__PVT__vlsu_miss_busy = 1U;
            vlSelfRef.__PVT__vlsu_miss_refill_addr 
                = ((1U & (IData)(vlSelfRef.__PVT__u_vlsu_miss__DOT__state_q))
                    ? (vlSelfRef.__PVT__u_vlsu_miss__DOT__miss_addr_q
                       [(7U & (IData)(vlSelfRef.__PVT__u_vlsu_miss__DOT__refill_idx_q))] 
                       << 6U) : (vlSelfRef.__PVT__u_vlsu_miss__DOT__miss_addr_q
                                 [(7U & (IData)(vlSelfRef.__PVT__u_vlsu_miss__DOT__refill_idx_q))] 
                                 << 6U));
            if ((1U & (~ (IData)(vlSelfRef.__PVT__u_vlsu_miss__DOT__state_q)))) {
                vlSelfRef.__PVT__vlsu_miss_refill_req = 1U;
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__u_vlsu_miss__DOT__state_q))) {
            vlSelfRef.__PVT__vlsu_miss_busy = 1U;
        }
    }
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_req_r = 0U;
    if (((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_active) 
         & ((1U == (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_q)) 
            | (2U == (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_q))))) {
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_req_r 
            = (1U | (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_req_r));
    }
    if ((((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_active) 
          >> 1U) & ((1U == (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_q)) 
                    | (2U == (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_q))))) {
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_req_r 
            = (2U | (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_req_r));
    }
    if ((((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_active) 
          >> 2U) & ((1U == (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_q)) 
                    | (2U == (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_q))))) {
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_req_r 
            = (4U | (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_req_r));
    }
    if ((((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_active) 
          >> 3U) & ((1U == (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_q)) 
                    | (2U == (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_q))))) {
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_req_r 
            = (8U | (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_req_r));
    }
    if ((((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_active) 
          >> 4U) & ((1U == (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_q)) 
                    | (2U == (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_q))))) {
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_req_r 
            = (0x10U | (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_req_r));
    }
    if ((((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_active) 
          >> 5U) & ((1U == (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_q)) 
                    | (2U == (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_q))))) {
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_req_r 
            = (0x20U | (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_req_r));
    }
    if ((((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_active) 
          >> 6U) & ((1U == (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_q)) 
                    | (2U == (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_q))))) {
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_req_r 
            = (0x40U | (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_req_r));
    }
    if ((((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_active) 
          >> 7U) & ((1U == (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_q)) 
                    | (2U == (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__state_q))))) {
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_req_r 
            = (0x80U | (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_req_r));
    }
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__0__KET____DOT__winner = 0U;
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__0__KET____DOT__has_req = 0U;
    if ((1U & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_requesters
         [0U])) {
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__0__KET____DOT__winner = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__0__KET____DOT__has_req = 1U;
    }
    if ((1U & ((vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_requesters
                [0U] >> 1U) & (~ (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__0__KET____DOT__has_req))))) {
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__0__KET____DOT__winner = 1U;
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__0__KET____DOT__has_req = 1U;
    }
    if ((1U & ((vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_requesters
                [0U] >> 2U) & (~ (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__0__KET____DOT__has_req))))) {
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__0__KET____DOT__winner = 2U;
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__0__KET____DOT__has_req = 1U;
    }
    if ((1U & ((vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_requesters
                [0U] >> 3U) & (~ (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__0__KET____DOT__has_req))))) {
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__0__KET____DOT__winner = 3U;
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__0__KET____DOT__has_req = 1U;
    }
    if ((1U & ((vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_requesters
                [0U] >> 4U) & (~ (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__0__KET____DOT__has_req))))) {
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__0__KET____DOT__winner = 4U;
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__0__KET____DOT__has_req = 1U;
    }
    if ((1U & ((vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_requesters
                [0U] >> 5U) & (~ (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__0__KET____DOT__has_req))))) {
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__0__KET____DOT__winner = 5U;
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__0__KET____DOT__has_req = 1U;
    }
    if ((1U & ((vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_requesters
                [0U] >> 6U) & (~ (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__0__KET____DOT__has_req))))) {
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__0__KET____DOT__winner = 6U;
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__0__KET____DOT__has_req = 1U;
    }
    if ((1U & ((vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_requesters
                [0U] >> 7U) & (~ (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__0__KET____DOT__has_req))))) {
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__0__KET____DOT__winner = 7U;
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__0__KET____DOT__has_req = 1U;
    }
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__1__KET____DOT__winner = 0U;
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__1__KET____DOT__has_req = 0U;
    if ((1U & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_requesters
         [1U])) {
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__1__KET____DOT__winner = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__1__KET____DOT__has_req = 1U;
    }
    if ((1U & ((vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_requesters
                [1U] >> 1U) & (~ (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__1__KET____DOT__has_req))))) {
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__1__KET____DOT__winner = 1U;
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__1__KET____DOT__has_req = 1U;
    }
    if ((1U & ((vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_requesters
                [1U] >> 2U) & (~ (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__1__KET____DOT__has_req))))) {
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__1__KET____DOT__winner = 2U;
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__1__KET____DOT__has_req = 1U;
    }
    if ((1U & ((vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_requesters
                [1U] >> 3U) & (~ (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__1__KET____DOT__has_req))))) {
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__1__KET____DOT__winner = 3U;
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__1__KET____DOT__has_req = 1U;
    }
    if ((1U & ((vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_requesters
                [1U] >> 4U) & (~ (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__1__KET____DOT__has_req))))) {
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__1__KET____DOT__winner = 4U;
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__1__KET____DOT__has_req = 1U;
    }
    if ((1U & ((vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_requesters
                [1U] >> 5U) & (~ (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__1__KET____DOT__has_req))))) {
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__1__KET____DOT__winner = 5U;
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__1__KET____DOT__has_req = 1U;
    }
    if ((1U & ((vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_requesters
                [1U] >> 6U) & (~ (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__1__KET____DOT__has_req))))) {
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__1__KET____DOT__winner = 6U;
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__1__KET____DOT__has_req = 1U;
    }
    if ((1U & ((vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_requesters
                [1U] >> 7U) & (~ (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__1__KET____DOT__has_req))))) {
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__1__KET____DOT__winner = 7U;
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__1__KET____DOT__has_req = 1U;
    }
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__2__KET____DOT__winner = 0U;
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__2__KET____DOT__has_req = 0U;
    if ((1U & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_requesters
         [2U])) {
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__2__KET____DOT__winner = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__2__KET____DOT__has_req = 1U;
    }
    if ((1U & ((vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_requesters
                [2U] >> 1U) & (~ (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__2__KET____DOT__has_req))))) {
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__2__KET____DOT__winner = 1U;
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__2__KET____DOT__has_req = 1U;
    }
    if ((1U & ((vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_requesters
                [2U] >> 2U) & (~ (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__2__KET____DOT__has_req))))) {
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__2__KET____DOT__winner = 2U;
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__2__KET____DOT__has_req = 1U;
    }
    if ((1U & ((vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_requesters
                [2U] >> 3U) & (~ (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__2__KET____DOT__has_req))))) {
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__2__KET____DOT__winner = 3U;
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__2__KET____DOT__has_req = 1U;
    }
    if ((1U & ((vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_requesters
                [2U] >> 4U) & (~ (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__2__KET____DOT__has_req))))) {
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__2__KET____DOT__winner = 4U;
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__2__KET____DOT__has_req = 1U;
    }
    if ((1U & ((vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_requesters
                [2U] >> 5U) & (~ (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__2__KET____DOT__has_req))))) {
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__2__KET____DOT__winner = 5U;
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__2__KET____DOT__has_req = 1U;
    }
    if ((1U & ((vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_requesters
                [2U] >> 6U) & (~ (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__2__KET____DOT__has_req))))) {
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__2__KET____DOT__winner = 6U;
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__2__KET____DOT__has_req = 1U;
    }
    if ((1U & ((vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_requesters
                [2U] >> 7U) & (~ (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__2__KET____DOT__has_req))))) {
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__2__KET____DOT__winner = 7U;
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__2__KET____DOT__has_req = 1U;
    }
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__3__KET____DOT__winner = 0U;
    vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__3__KET____DOT__has_req = 0U;
    if ((1U & vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_requesters
         [3U])) {
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__3__KET____DOT__winner = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__3__KET____DOT__has_req = 1U;
    }
    if ((1U & ((vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_requesters
                [3U] >> 1U) & (~ (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__3__KET____DOT__has_req))))) {
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__3__KET____DOT__winner = 1U;
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__3__KET____DOT__has_req = 1U;
    }
    if ((1U & ((vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_requesters
                [3U] >> 2U) & (~ (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__3__KET____DOT__has_req))))) {
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__3__KET____DOT__winner = 2U;
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__3__KET____DOT__has_req = 1U;
    }
    if ((1U & ((vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_requesters
                [3U] >> 3U) & (~ (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__3__KET____DOT__has_req))))) {
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__3__KET____DOT__winner = 3U;
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__3__KET____DOT__has_req = 1U;
    }
    if ((1U & ((vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_requesters
                [3U] >> 4U) & (~ (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__3__KET____DOT__has_req))))) {
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__3__KET____DOT__winner = 4U;
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__3__KET____DOT__has_req = 1U;
    }
    if ((1U & ((vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_requesters
                [3U] >> 5U) & (~ (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__3__KET____DOT__has_req))))) {
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__3__KET____DOT__winner = 5U;
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__3__KET____DOT__has_req = 1U;
    }
    if ((1U & ((vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_requesters
                [3U] >> 6U) & (~ (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__3__KET____DOT__has_req))))) {
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__3__KET____DOT__winner = 6U;
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__3__KET____DOT__has_req = 1U;
    }
    if ((1U & ((vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_requesters
                [3U] >> 7U) & (~ (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__3__KET____DOT__has_req))))) {
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__3__KET____DOT__winner = 7U;
        vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__3__KET____DOT__has_req = 1U;
    }
}
