// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrv64g_cache_system_tb.h for the primary calling header

#include "Vrv64g_cache_system_tb__pch.h"
#include "Vrv64g_cache_system_tb_rv64g_l1_dcache.h"

VL_ATTR_COLD void Vrv64g_cache_system_tb_rv64g_l1_dcache___stl_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__8(Vrv64g_cache_system_tb_rv64g_l1_dcache* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv64g_cache_system_tb_rv64g_l1_dcache___stl_comb__TOP__rv64g_cache_system_tb__DOT__dut__DOT__gen_l1__BRA__0__KET____DOT__l1__8\n"); );
    Vrv64g_cache_system_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_arbiter__DOT__scalar_grant 
        = ((7U == (IData)(vlSelfRef.__PVT__arr_word_sel)) 
           | ((7U != (IData)(vlSelfRef.__PVT__arr_word_sel)) 
              & (IData)(vlSelfRef.__PVT__arr_tag_write_en)));
    vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_arbiter__DOT__scalar_grant 
        = ((6U == (IData)(vlSelfRef.__PVT__arr_word_sel)) 
           | ((6U != (IData)(vlSelfRef.__PVT__arr_word_sel)) 
              & (IData)(vlSelfRef.__PVT__arr_tag_write_en)));
    vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_arbiter__DOT__scalar_grant 
        = ((5U == (IData)(vlSelfRef.__PVT__arr_word_sel)) 
           | ((5U != (IData)(vlSelfRef.__PVT__arr_word_sel)) 
              & (IData)(vlSelfRef.__PVT__arr_tag_write_en)));
    vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_arbiter__DOT__scalar_grant 
        = ((4U == (IData)(vlSelfRef.__PVT__arr_word_sel)) 
           | ((4U != (IData)(vlSelfRef.__PVT__arr_word_sel)) 
              & (IData)(vlSelfRef.__PVT__arr_tag_write_en)));
    vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_arbiter__DOT__scalar_grant 
        = ((3U == (IData)(vlSelfRef.__PVT__arr_word_sel)) 
           | ((3U != (IData)(vlSelfRef.__PVT__arr_word_sel)) 
              & (IData)(vlSelfRef.__PVT__arr_tag_write_en)));
    vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_arbiter__DOT__scalar_grant 
        = ((2U == (IData)(vlSelfRef.__PVT__arr_word_sel)) 
           | ((2U != (IData)(vlSelfRef.__PVT__arr_word_sel)) 
              & (IData)(vlSelfRef.__PVT__arr_tag_write_en)));
    vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_arbiter__DOT__scalar_grant 
        = ((1U == (IData)(vlSelfRef.__PVT__arr_word_sel)) 
           | ((1U != (IData)(vlSelfRef.__PVT__arr_word_sel)) 
              & (IData)(vlSelfRef.__PVT__arr_tag_write_en)));
    vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_arbiter__DOT__scalar_grant 
        = ((0U == (IData)(vlSelfRef.__PVT__arr_word_sel)) 
           | ((0U != (IData)(vlSelfRef.__PVT__arr_word_sel)) 
              & (IData)(vlSelfRef.__PVT__arr_tag_write_en)));
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_req_o 
        = ((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_arbiter__DOT__scalar_grant) 
           | ((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_req_r) 
              >> 7U));
    if (vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_arbiter__DOT__scalar_grant) {
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_tag_we_o 
            = vlSelfRef.__PVT__arr_tag_write_en;
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_index_o 
            = (0x1fU & (IData)(vlSelfRef.__PVT__arr_index_w));
    } else {
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_tag_we_o = 0U;
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_index_o 
            = (0x1fU & (IData)((vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_index_r 
                                >> 0x23U)));
    }
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_req_o 
        = (1U & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_arbiter__DOT__scalar_grant) 
                 | ((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_req_r) 
                    >> 6U)));
    if (vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_arbiter__DOT__scalar_grant) {
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_tag_we_o 
            = vlSelfRef.__PVT__arr_tag_write_en;
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_index_o 
            = (0x1fU & (IData)(vlSelfRef.__PVT__arr_index_w));
    } else {
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_tag_we_o = 0U;
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_index_o 
            = (0x1fU & (IData)((vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_index_r 
                                >> 0x1eU)));
    }
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_req_o 
        = (1U & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_arbiter__DOT__scalar_grant) 
                 | ((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_req_r) 
                    >> 5U)));
    if (vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_arbiter__DOT__scalar_grant) {
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_tag_we_o 
            = vlSelfRef.__PVT__arr_tag_write_en;
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_index_o 
            = (0x1fU & (IData)(vlSelfRef.__PVT__arr_index_w));
    } else {
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_tag_we_o = 0U;
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_index_o 
            = (0x1fU & (IData)((vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_index_r 
                                >> 0x19U)));
    }
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_req_o 
        = (1U & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_arbiter__DOT__scalar_grant) 
                 | ((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_req_r) 
                    >> 4U)));
    if (vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_arbiter__DOT__scalar_grant) {
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_tag_we_o 
            = vlSelfRef.__PVT__arr_tag_write_en;
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_index_o 
            = (0x1fU & (IData)(vlSelfRef.__PVT__arr_index_w));
    } else {
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_tag_we_o = 0U;
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_index_o 
            = (0x1fU & (IData)((vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_index_r 
                                >> 0x14U)));
    }
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_req_o 
        = (1U & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_arbiter__DOT__scalar_grant) 
                 | ((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_req_r) 
                    >> 3U)));
    if (vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_arbiter__DOT__scalar_grant) {
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_tag_we_o 
            = vlSelfRef.__PVT__arr_tag_write_en;
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_index_o 
            = (0x1fU & (IData)(vlSelfRef.__PVT__arr_index_w));
    } else {
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_tag_we_o = 0U;
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_index_o 
            = (0x1fU & (IData)((vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_index_r 
                                >> 0xfU)));
    }
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_req_o 
        = (1U & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_arbiter__DOT__scalar_grant) 
                 | ((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_req_r) 
                    >> 2U)));
    if (vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_arbiter__DOT__scalar_grant) {
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_tag_we_o 
            = vlSelfRef.__PVT__arr_tag_write_en;
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_index_o 
            = (0x1fU & (IData)(vlSelfRef.__PVT__arr_index_w));
    } else {
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_tag_we_o = 0U;
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_index_o 
            = (0x1fU & (IData)((vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_index_r 
                                >> 0xaU)));
    }
    vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_req_o 
        = (1U & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_arbiter__DOT__scalar_grant) 
                 | ((IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_req_r) 
                    >> 1U)));
    if (vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_arbiter__DOT__scalar_grant) {
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_tag_we_o 
            = vlSelfRef.__PVT__arr_tag_write_en;
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_index_o 
            = (0x1fU & (IData)(vlSelfRef.__PVT__arr_index_w));
    } else {
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_tag_we_o = 0U;
        vlSelfRef.u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_index_o 
            = (0x1fU & (IData)((vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_index_r 
                                >> 5U)));
    }
    vlSelfRef.__PVT__u_arrays__DOT__arb_bank_req__BRA__0__KET__ 
        = (1U & ((IData)(vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_arbiter__DOT__scalar_grant) 
                 | (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_req_r)));
    if (vlSelfRef.__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_arbiter__DOT__scalar_grant) {
        vlSelfRef.__PVT__u_arrays__DOT__arb_bank_tag_we__BRA__0__KET__ 
            = vlSelfRef.__PVT__arr_tag_write_en;
        vlSelfRef.__PVT__u_arrays__DOT__arb_bank_index__BRA__4__03a0__KET__ 
            = (0x1fU & (IData)(vlSelfRef.__PVT__arr_index_w));
    } else {
        vlSelfRef.__PVT__u_arrays__DOT__arb_bank_tag_we__BRA__0__KET__ = 0U;
        vlSelfRef.__PVT__u_arrays__DOT__arb_bank_index__BRA__4__03a0__KET__ 
            = (0x1fU & (IData)(vlSelfRef.__PVT__u_arrays__DOT__u_crossbar__DOT__bank_index_r));
    }
}

VL_ATTR_COLD void Vrv64g_cache_system_tb_rv64g_l1_dcache___ctor_var_reset(Vrv64g_cache_system_tb_rv64g_l1_dcache* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vrv64g_cache_system_tb_rv64g_l1_dcache___ctor_var_reset\n"); );
    Vrv64g_cache_system_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11908517815223722933ull);
    vlSelf->rst_ni = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3161515032326629241ull);
    vlSelf->invalidate_all_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9873507998976085707ull);
    vlSelf->req_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16841108072821397437ull);
    vlSelf->we_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 580956079526588133ull);
    vlSelf->be_i = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11504187847728164574ull);
    vlSelf->addr_i = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5910257723895866083ull);
    vlSelf->wdata_i = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5130823727116858121ull);
    vlSelf->gnt_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11825630704627518037ull);
    vlSelf->rvalid_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5222259403380551583ull);
    vlSelf->rdata_o = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8843381805826685208ull);
    vlSelf->amo_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3031795109458404075ull);
    vlSelf->lr_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6660930227716018866ull);
    vlSelf->sc_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8374000592758103462ull);
    vlSelf->amo_op_i = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4803966733228202568ull);
    vlSelf->amo_word_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3587763623233180389ull);
    vlSelf->vlsu_req_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7064053237133378719ull);
    vlSelf->vlsu_lane_valid_i = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 781494233575202776ull);
    vlSelf->vlsu_lane_we_i = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8613409022000600046ull);
    VL_SCOPED_RAND_RESET_W(512, vlSelf->vlsu_lane_addr_i, __VscopeHash, 11760375651872071966ull);
    VL_SCOPED_RAND_RESET_W(512, vlSelf->vlsu_lane_wdata_i, __VscopeHash, 4405473230497170487ull);
    vlSelf->vlsu_lane_be_i = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7320522215329950424ull);
    vlSelf->__PVT__vlsu_ready_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2753167660175602104ull);
    vlSelf->__PVT__vlsu_done_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17627144782650150373ull);
    vlSelf->__PVT__vlsu_lane_done_o = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5492334859638533159ull);
    vlSelf->__PVT__vlsu_lane_hit_o = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15288633211465187935ull);
    VL_SCOPED_RAND_RESET_W(512, vlSelf->__PVT__vlsu_lane_rdata_o, __VscopeHash, 3873542862992330520ull);
    vlSelf->tl_a_valid_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1334883624841859274ull);
    vlSelf->tl_a_ready_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10655533102641601868ull);
    vlSelf->tl_a_opcode_o = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6983276900181336790ull);
    vlSelf->tl_a_param_o = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 18257024297498561944ull);
    vlSelf->tl_a_size_o = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17056233157108270216ull);
    vlSelf->tl_a_source_o = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12897329740913650856ull);
    vlSelf->tl_a_address_o = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15285869183405668181ull);
    vlSelf->tl_a_mask_o = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12359256895944213095ull);
    vlSelf->tl_a_data_o = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11793079011936632772ull);
    vlSelf->tl_a_corrupt_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16038902691179428977ull);
    vlSelf->tl_b_valid_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7940558742611064812ull);
    vlSelf->tl_b_ready_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15371897316216752782ull);
    vlSelf->tl_b_opcode_i = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6431158290384408664ull);
    vlSelf->tl_b_param_i = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3756572397269102257ull);
    vlSelf->tl_b_size_i = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6085050811995384020ull);
    vlSelf->tl_b_source_i = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11477813024319836310ull);
    vlSelf->tl_b_address_i = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17491548892049916837ull);
    vlSelf->tl_b_mask_i = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16437566170517909232ull);
    vlSelf->tl_b_data_i = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11456338047856578456ull);
    vlSelf->tl_b_corrupt_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3927795945431896503ull);
    vlSelf->tl_c_valid_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13160164907790350537ull);
    vlSelf->tl_c_ready_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5927961465559862063ull);
    vlSelf->tl_c_opcode_o = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15519275153832475360ull);
    vlSelf->tl_c_param_o = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8348331457122581049ull);
    vlSelf->tl_c_size_o = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16898858908245908008ull);
    vlSelf->tl_c_source_o = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13575835939477162123ull);
    vlSelf->tl_c_address_o = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9174343020828438642ull);
    vlSelf->tl_c_data_o = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 6473348392749010082ull);
    vlSelf->tl_c_corrupt_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3142274735469724140ull);
    vlSelf->tl_d_valid_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5475877642391573695ull);
    vlSelf->tl_d_ready_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7207398866613256410ull);
    vlSelf->tl_d_opcode_i = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7784393903394066293ull);
    vlSelf->tl_d_param_i = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3140149479421475650ull);
    vlSelf->tl_d_size_i = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10891309620873005609ull);
    vlSelf->tl_d_source_i = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17864935833710722113ull);
    vlSelf->tl_d_sink_i = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15584033424680203174ull);
    vlSelf->tl_d_denied_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15213159717118197067ull);
    vlSelf->tl_d_data_i = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3691329868909816821ull);
    vlSelf->tl_d_corrupt_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4614046768852562333ull);
    vlSelf->tl_e_valid_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13818301536127686889ull);
    vlSelf->tl_e_ready_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12978075250248693096ull);
    vlSelf->tl_e_sink_o = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16361539540614940848ull);
    VL_SCOPED_RAND_RESET_W(424, vlSelf->__PVT__arr_tag_way_flat, __VscopeHash, 3945921103592415937ull);
    vlSelf->__PVT__arr_state_way_flat = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 309605569627579814ull);
    vlSelf->__PVT__arr_valid_way = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9794357966424619374ull);
    vlSelf->__PVT__arr_dirty_way = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9119680553763851774ull);
    VL_SCOPED_RAND_RESET_W(512, vlSelf->__PVT__vec_bank_rdata, __VscopeHash, 3884992630011067918ull);
    VL_SCOPED_RAND_RESET_W(4096, vlSelf->__PVT__vec_bank_rdata_way, __VscopeHash, 7716351021012292064ull);
    VL_SCOPED_RAND_RESET_W(3392, vlSelf->__PVT__vec_bank_tag_way, __VscopeHash, 11356720061683026712ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->__PVT__vec_bank_state_way, __VscopeHash, 5134415412276357676ull);
    VL_SCOPED_RAND_RESET_W(512, vlSelf->__PVT__vlsu_rdata_mux, __VscopeHash, 14828226521066792175ull);
    vlSelf->__PVT__lane_bank_mux = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2805107838576227691ull);
    vlSelf->__PVT__vlsu_miss_busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5291737902182098445ull);
    vlSelf->__PVT__vlsu_miss_ready_for_replay = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17665386404364803555ull);
    vlSelf->__PVT__vlsu_miss_refill_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12547328389062203827ull);
    vlSelf->__PVT__vlsu_miss_refill_addr = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11993523965365516054ull);
    vlSelf->__PVT__vlsu_miss_refill_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15181741400487588352ull);
    vlSelf->__PVT__victim_way = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1944153677309868668ull);
    vlSelf->__PVT__plru_access_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9778237683616738432ull);
    vlSelf->__PVT__plru_used_way_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 671158065869293833ull);
    vlSelf->__PVT__pend_is_amo_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14546678447749786091ull);
    vlSelf->__PVT__pend_is_amo_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5695069402881690418ull);
    vlSelf->__PVT__pend_amo_op_q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17635737533579271221ull);
    vlSelf->__PVT__pend_amo_op_n = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13901662718969316788ull);
    vlSelf->__PVT__pend_amo_word_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1216794833618022395ull);
    vlSelf->__PVT__pend_amo_word_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17651662280625344462ull);
    vlSelf->__PVT__amo_old_value_q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13030135631507022635ull);
    vlSelf->__PVT__amo_old_value_n = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14639209322681964232ull);
    vlSelf->__PVT__resv_valid_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7288648049952818285ull);
    vlSelf->__PVT__resv_valid_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6212357456517630774ull);
    vlSelf->__PVT__resv_addr_q = VL_SCOPED_RAND_RESET_Q(58, __VscopeHash, 9726020729790318079ull);
    vlSelf->__PVT__resv_addr_n = VL_SCOPED_RAND_RESET_Q(58, __VscopeHash, 13605263444175102965ull);
    vlSelf->__PVT__resv_word_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4665247046441768947ull);
    vlSelf->__PVT__resv_word_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8769120364873642594ull);
    vlSelf->__PVT__pend_is_lr_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2856581862919654809ull);
    vlSelf->__PVT__pend_is_lr_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5215030414250969489ull);
    vlSelf->__PVT__pend_is_sc_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17961147785353068455ull);
    vlSelf->__PVT__pend_is_sc_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15910776898832861488ull);
    vlSelf->__PVT__sc_success_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6559036193312179464ull);
    vlSelf->__PVT__sc_success_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4026098794789810704ull);
    vlSelf->__PVT__state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9404372463396948974ull);
    vlSelf->__PVT__state_n = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2550196130410558725ull);
    vlSelf->__PVT__return_state_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2007825906089802858ull);
    vlSelf->__PVT__return_state_n = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6184536784247253793ull);
    vlSelf->__PVT__beat_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16373402377136146286ull);
    vlSelf->__PVT__beat_n = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7426097539576433810ull);
    vlSelf->__PVT__pend_index_q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16074696222579961332ull);
    vlSelf->__PVT__pend_index_n = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17321954357911827432ull);
    vlSelf->__PVT__pend_tag_q = VL_SCOPED_RAND_RESET_Q(53, __VscopeHash, 7883744578867254258ull);
    vlSelf->__PVT__pend_tag_n = VL_SCOPED_RAND_RESET_Q(53, __VscopeHash, 14654032540534341181ull);
    vlSelf->__PVT__pend_word_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15554140370256932181ull);
    vlSelf->__PVT__pend_word_n = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7215950028218117346ull);
    vlSelf->__PVT__pend_victim_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17203140769534683354ull);
    vlSelf->__PVT__pend_victim_n = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16173253895770393041ull);
    vlSelf->__PVT__pend_is_store_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5539289340525712130ull);
    vlSelf->__PVT__pend_is_store_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10793301858927762216ull);
    vlSelf->__PVT__pend_wdata_q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1248207451844331759ull);
    vlSelf->__PVT__pend_wdata_n = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7564820452512205591ull);
    vlSelf->__PVT__pend_be_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12795950812620804006ull);
    vlSelf->__PVT__pend_be_n = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1764393800946851174ull);
    vlSelf->__PVT__pend_evict_tag_q = VL_SCOPED_RAND_RESET_Q(53, __VscopeHash, 14172319027028301311ull);
    vlSelf->__PVT__pend_evict_tag_n = VL_SCOPED_RAND_RESET_Q(53, __VscopeHash, 6758359300344361855ull);
    vlSelf->__PVT__pend_evict_state_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8299170020460682906ull);
    vlSelf->__PVT__pend_evict_state_n = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10437336181911892518ull);
    vlSelf->__PVT__rdata_beat_q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5559592071520557569ull);
    vlSelf->__PVT__pend_sink_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5580058525107726757ull);
    vlSelf->__PVT__pend_sink_n = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17889558608229567002ull);
    vlSelf->__PVT__pend_is_probe_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17319502779434936833ull);
    vlSelf->__PVT__pend_is_probe_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7563894690340305737ull);
    vlSelf->__PVT__pend_probe_param_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15658682403801767246ull);
    vlSelf->__PVT__pend_probe_source_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9201327575464519217ull);
    vlSelf->__PVT__pend_has_data_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5838354554669961821ull);
    vlSelf->__PVT__pend_has_data_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12289434024328773150ull);
    vlSelf->__PVT__pend_probe_hit_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8670992211520003257ull);
    vlSelf->__PVT__probe_pend_index_q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15021502021388600063ull);
    vlSelf->__PVT__probe_pend_index_n = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1333244706467744879ull);
    vlSelf->__PVT__probe_pend_tag_q = VL_SCOPED_RAND_RESET_Q(53, __VscopeHash, 16190700607264151627ull);
    vlSelf->__PVT__probe_pend_tag_n = VL_SCOPED_RAND_RESET_Q(53, __VscopeHash, 4782692193471298513ull);
    vlSelf->__PVT__probe_pend_param_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 18008730341990079267ull);
    vlSelf->__PVT__probe_pend_param_n = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11307241115038313587ull);
    vlSelf->__PVT__probe_pend_source_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7235285583067544702ull);
    vlSelf->__PVT__probe_pend_source_n = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8007475426921870621ull);
    vlSelf->__PVT__probe_pend_has_data_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10012917970956179499ull);
    vlSelf->__PVT__probe_pend_has_data_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13207148809939055947ull);
    vlSelf->__PVT__probe_pend_hit_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17488071291033045032ull);
    vlSelf->__PVT__probe_pend_hit_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4825706582098259341ull);
    vlSelf->__PVT__probe_pend_way_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12641278710034843125ull);
    vlSelf->__PVT__probe_pend_way_n = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3128721970333545262ull);
    vlSelf->__PVT__binv_index = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14000112341070778845ull);
    vlSelf->__PVT__binv_tag = VL_SCOPED_RAND_RESET_Q(53, __VscopeHash, 15207665985926165423ull);
    vlSelf->__PVT__binv_hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17958729520602595432ull);
    vlSelf->__PVT__binv_way = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 18316655254337534622ull);
    vlSelf->__PVT__arr_word_sel = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 18348142467537628809ull);
    vlSelf->__PVT__arr_way_sel = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13766046963517679895ull);
    vlSelf->__PVT__arr_write_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9807834745605262693ull);
    vlSelf->__PVT__arr_tag_write_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9996115404902938809ull);
    vlSelf->__PVT__arr_state_in = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18175042508945778608ull);
    vlSelf->__PVT__arr_be = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12655312480368684445ull);
    vlSelf->__PVT__arr_tag_in = VL_SCOPED_RAND_RESET_Q(53, __VscopeHash, 4508754817094134466ull);
    vlSelf->__PVT__arr_wdata = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3349847831651595911ull);
    vlSelf->__PVT__arr_index_w = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4713003014391063417ull);
    vlSelf->__PVT__hit = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8008975632350775116ull);
    vlSelf->__PVT__hit_way = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16819451310754795811ull);
    vlSelf->__PVT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15817570140490810055ull);
    vlSelf->__PVT__tag_slice = VL_SCOPED_RAND_RESET_Q(53, __VscopeHash, 14976959775008304269ull);
    vlSelf->__PVT__hit_data_word = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10903885188801440949ull);
    vlSelf->__PVT__gnt_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1536839009187448004ull);
    vlSelf->__PVT__rvalid_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12409953893765881702ull);
    vlSelf->__PVT__rdata_n = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 5802392481386624830ull);
    vlSelf->__PVT__plru_access_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4306648995891276658ull);
    vlSelf->__PVT__plru_used_way_n = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6534361033770310550ull);
    vlSelf->__PVT__tl_a_valid_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 934999431764099840ull);
    vlSelf->__PVT__tl_a_opcode_n = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9017317919861533118ull);
    vlSelf->__PVT__tl_a_param_n = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14462847311846747239ull);
    vlSelf->__PVT__tl_a_size_n = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11755856322729158120ull);
    vlSelf->__PVT__tl_a_source_n = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4377211135264164448ull);
    vlSelf->__PVT__tl_a_address_n = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 1999880500133590618ull);
    vlSelf->__PVT__tl_a_mask_n = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18234855533095439078ull);
    vlSelf->__PVT__tl_b_ready_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14973284524074162822ull);
    vlSelf->__PVT__tl_c_valid_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14278713967893547370ull);
    vlSelf->__PVT__tl_c_opcode_n = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 17234688448391753632ull);
    vlSelf->__PVT__tl_c_param_n = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11667155405273872915ull);
    vlSelf->__PVT__tl_c_size_n = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16918248762678555516ull);
    vlSelf->__PVT__tl_c_source_n = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14126287708579710385ull);
    vlSelf->__PVT__tl_c_address_n = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 7665928718212880957ull);
    vlSelf->__PVT__tl_c_data_n = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16138405589120949209ull);
    vlSelf->__PVT__tl_d_ready_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2452269323775107465ull);
    vlSelf->__PVT__tl_e_valid_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15112063972859111317ull);
    vlSelf->__PVT__tl_e_sink_n = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18063291222443562377ull);
    vlSelf->__PVT__u_arrays__DOT__arb_bank_req__BRA__0__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11251679051065896614ull);
    vlSelf->__PVT__u_arrays__DOT__arb_bank_we__BRA__0__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5180511507158512096ull);
    vlSelf->__PVT__u_arrays__DOT__arb_bank_tag_we__BRA__0__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3687030956258142736ull);
    vlSelf->__PVT__u_arrays__DOT__arb_bank_index__BRA__4__03a0__KET__ = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5676954557256906109ull);
    vlSelf->__PVT__u_arrays__DOT__arb_bank_way__BRA__2__03a0__KET__ = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2452614098535411702ull);
    vlSelf->__PVT__u_arrays__DOT__arb_bank_be__BRA__7__03a0__KET__ = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5479613638108041864ull);
    VL_SCOPED_RAND_RESET_W(424, vlSelf->__PVT__u_arrays__DOT__bank_tag_sel, __VscopeHash, 11307005339884034232ull);
    vlSelf->__PVT__u_arrays__DOT__bank_state_sel = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7459272409720292684ull);
    vlSelf->__PVT__u_arrays__DOT__scalar_rdata_r = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14134250688304604569ull);
    vlSelf->__PVT__u_arrays__DOT__scalar_tag_r = VL_SCOPED_RAND_RESET_Q(53, __VscopeHash, 10476507300771794026ull);
    vlSelf->__PVT__u_arrays__DOT__scalar_state_r = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 117923263725462866ull);
    VL_SCOPED_RAND_RESET_W(512, vlSelf->__PVT__u_arrays__DOT__scalar_rdata_way_r, __VscopeHash, 2053240242349304930ull);
    vlSelf->u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__state_way_o = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17349897776150311374ull);
    VL_SCOPED_RAND_RESET_W(424, vlSelf->u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__tag_way_o, __VscopeHash, 7614148793809341663ull);
    VL_SCOPED_RAND_RESET_W(512, vlSelf->u_arrays__DOT____Vcellout__g_bank__BRA__0__KET____DOT__u_bank__rdata_way_o, __VscopeHash, 12745773036311212343ull);
    vlSelf->u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_be_o = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3028437100153222146ull);
    vlSelf->u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_way_o = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4095081049018756702ull);
    vlSelf->u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_index_o = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3593273059478235787ull);
    vlSelf->u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_tag_we_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13516456458332709491ull);
    vlSelf->u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_we_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11798924799515417755ull);
    vlSelf->u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_arbiter__bank_req_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1161085333054030258ull);
    vlSelf->u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__state_way_o = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5826418952565850169ull);
    VL_SCOPED_RAND_RESET_W(424, vlSelf->u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__tag_way_o, __VscopeHash, 14071191797298869831ull);
    VL_SCOPED_RAND_RESET_W(512, vlSelf->u_arrays__DOT____Vcellout__g_bank__BRA__1__KET____DOT__u_bank__rdata_way_o, __VscopeHash, 9491196425241966957ull);
    vlSelf->u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_be_o = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6006697701534607808ull);
    vlSelf->u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_way_o = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5966447013648280056ull);
    vlSelf->u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_index_o = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1669503421495734219ull);
    vlSelf->u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_tag_we_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10034102619021851161ull);
    vlSelf->u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_we_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11905677145214556025ull);
    vlSelf->u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_arbiter__bank_req_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4207733541474692200ull);
    vlSelf->u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__state_way_o = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1781040919792840026ull);
    VL_SCOPED_RAND_RESET_W(424, vlSelf->u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__tag_way_o, __VscopeHash, 16909516215749757989ull);
    VL_SCOPED_RAND_RESET_W(512, vlSelf->u_arrays__DOT____Vcellout__g_bank__BRA__2__KET____DOT__u_bank__rdata_way_o, __VscopeHash, 14389723065792907457ull);
    vlSelf->u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_be_o = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8232573371124241126ull);
    vlSelf->u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_way_o = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6057764993112776148ull);
    vlSelf->u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_index_o = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14559530156291266473ull);
    vlSelf->u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_tag_we_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10015206346199263493ull);
    vlSelf->u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_we_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7113450543939460673ull);
    vlSelf->u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_arbiter__bank_req_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 127874103431725622ull);
    vlSelf->u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__state_way_o = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2394481050651307725ull);
    VL_SCOPED_RAND_RESET_W(424, vlSelf->u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__tag_way_o, __VscopeHash, 8085794148240089178ull);
    VL_SCOPED_RAND_RESET_W(512, vlSelf->u_arrays__DOT____Vcellout__g_bank__BRA__3__KET____DOT__u_bank__rdata_way_o, __VscopeHash, 8657728152823111759ull);
    vlSelf->u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_be_o = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11971085611050139386ull);
    vlSelf->u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_way_o = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7302387431209449778ull);
    vlSelf->u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_index_o = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11575103911791076324ull);
    vlSelf->u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_tag_we_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13410565884975128439ull);
    vlSelf->u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_we_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11155991675172008856ull);
    vlSelf->u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_arbiter__bank_req_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13077005178667561294ull);
    vlSelf->u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__state_way_o = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4062523417294046123ull);
    VL_SCOPED_RAND_RESET_W(424, vlSelf->u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__tag_way_o, __VscopeHash, 14654647236504566523ull);
    VL_SCOPED_RAND_RESET_W(512, vlSelf->u_arrays__DOT____Vcellout__g_bank__BRA__4__KET____DOT__u_bank__rdata_way_o, __VscopeHash, 8698823408284098422ull);
    vlSelf->u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_be_o = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9232355308983758962ull);
    vlSelf->u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_way_o = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13593725760276523650ull);
    vlSelf->u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_index_o = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5001957661556389513ull);
    vlSelf->u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_tag_we_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7554168560193970610ull);
    vlSelf->u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_we_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14834043962602216348ull);
    vlSelf->u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_arbiter__bank_req_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3870679784309775630ull);
    vlSelf->u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__state_way_o = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 346116148542779911ull);
    VL_SCOPED_RAND_RESET_W(424, vlSelf->u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__tag_way_o, __VscopeHash, 10354915951061865013ull);
    VL_SCOPED_RAND_RESET_W(512, vlSelf->u_arrays__DOT____Vcellout__g_bank__BRA__5__KET____DOT__u_bank__rdata_way_o, __VscopeHash, 10406554897063351589ull);
    vlSelf->u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_be_o = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6086123588000774980ull);
    vlSelf->u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_way_o = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11567228609750654609ull);
    vlSelf->u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_index_o = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5700258306000141452ull);
    vlSelf->u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_tag_we_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11886645302526360285ull);
    vlSelf->u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_we_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5539809291161882349ull);
    vlSelf->u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_arbiter__bank_req_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8430919225002887586ull);
    vlSelf->u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__state_way_o = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15386893266864511434ull);
    VL_SCOPED_RAND_RESET_W(424, vlSelf->u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__tag_way_o, __VscopeHash, 14589561247258940170ull);
    VL_SCOPED_RAND_RESET_W(512, vlSelf->u_arrays__DOT____Vcellout__g_bank__BRA__6__KET____DOT__u_bank__rdata_way_o, __VscopeHash, 12807852667785968677ull);
    vlSelf->u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_be_o = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12689114066554812423ull);
    vlSelf->u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_way_o = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9910773788873730011ull);
    vlSelf->u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_index_o = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3535883950488082864ull);
    vlSelf->u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_tag_we_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16195172040142822741ull);
    vlSelf->u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_we_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5299733488265234102ull);
    vlSelf->u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_arbiter__bank_req_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12419170009705007012ull);
    vlSelf->u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__state_way_o = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13526901551079425343ull);
    VL_SCOPED_RAND_RESET_W(424, vlSelf->u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__tag_way_o, __VscopeHash, 4332336801864916858ull);
    VL_SCOPED_RAND_RESET_W(512, vlSelf->u_arrays__DOT____Vcellout__g_bank__BRA__7__KET____DOT__u_bank__rdata_way_o, __VscopeHash, 17936958367245894998ull);
    vlSelf->__PVT__u_arrays__DOT__u_crossbar__DOT__state_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12018854740709393692ull);
    vlSelf->__PVT__u_arrays__DOT__u_crossbar__DOT__state_n = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17782412081503458699ull);
    vlSelf->__PVT__u_arrays__DOT__u_crossbar__DOT__pending_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8195979378051808655ull);
    vlSelf->__PVT__u_arrays__DOT__u_crossbar__DOT__pending_n = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7959724050156576537ull);
    vlSelf->__PVT__u_arrays__DOT__u_crossbar__DOT__latch_valid_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14952879881553321687ull);
    vlSelf->__PVT__u_arrays__DOT__u_crossbar__DOT__latch_we_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 103586726651100115ull);
    VL_SCOPED_RAND_RESET_W(512, vlSelf->__PVT__u_arrays__DOT__u_crossbar__DOT__latch_addr_q, __VscopeHash, 16566164573796681021ull);
    VL_SCOPED_RAND_RESET_W(512, vlSelf->__PVT__u_arrays__DOT__u_crossbar__DOT__latch_wdata_q, __VscopeHash, 14220407529244011701ull);
    vlSelf->__PVT__u_arrays__DOT__u_crossbar__DOT__latch_be_q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14328207691858725650ull);
    vlSelf->__PVT__u_arrays__DOT__u_crossbar__DOT__latch_way_q = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 8603956734940089378ull);
    VL_SCOPED_RAND_RESET_W(424, vlSelf->__PVT__u_arrays__DOT__u_crossbar__DOT__latch_tag_q, __VscopeHash, 11678435771851056143ull);
    vlSelf->__PVT__u_arrays__DOT__u_crossbar__DOT__latch_state_q = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14944744177668738911ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__u_arrays__DOT__u_crossbar__DOT__lane_bank[__Vi0] = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9119589184670009482ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__u_arrays__DOT__u_crossbar__DOT__lane_index[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 7528134842213874330ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__u_arrays__DOT__u_crossbar__DOT__lane_word[__Vi0] = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7663162266523575801ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__u_arrays__DOT__u_crossbar__DOT__bank_requesters[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18164015082800128293ull);
    }
    vlSelf->__PVT__u_arrays__DOT__u_crossbar__DOT__lane_grant = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8666588800333819604ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__u_arrays__DOT__u_crossbar__DOT__bank_winner[__Vi0] = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6269696599285532523ull);
    }
    vlSelf->__PVT__u_arrays__DOT__u_crossbar__DOT__bank_active = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6027898236990281392ull);
    vlSelf->__PVT__u_arrays__DOT__u_crossbar__DOT__bank_req_r = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9015848176825298525ull);
    vlSelf->__PVT__u_arrays__DOT__u_crossbar__DOT__bank_we_r = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16655182939308282895ull);
    vlSelf->__PVT__u_arrays__DOT__u_crossbar__DOT__bank_index_r = VL_SCOPED_RAND_RESET_Q(40, __VscopeHash, 4764821917709710904ull);
    vlSelf->__PVT__u_arrays__DOT__u_crossbar__DOT__bank_word_r = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 18368540150529198869ull);
    vlSelf->__PVT__u_arrays__DOT__u_crossbar__DOT__bank_way_r = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 9055637971721939619ull);
    vlSelf->__PVT__u_arrays__DOT__u_crossbar__DOT__bank_be_r = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 4424336351470524440ull);
    VL_SCOPED_RAND_RESET_W(512, vlSelf->__PVT__u_arrays__DOT__u_crossbar__DOT__bank_wdata_r, __VscopeHash, 4954499847866347277ull);
    VL_SCOPED_RAND_RESET_W(424, vlSelf->__PVT__u_arrays__DOT__u_crossbar__DOT__bank_tag_r, __VscopeHash, 9907257623880302046ull);
    vlSelf->__PVT__u_arrays__DOT__u_crossbar__DOT__bank_state_r = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5839442471981755541ull);
    vlSelf->__PVT__u_arrays__DOT__u_crossbar__DOT__bank_src_lane_r = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 1341201796111931966ull);
    vlSelf->__PVT__u_arrays__DOT__u_crossbar__DOT__done_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5095155282207987804ull);
    vlSelf->__PVT__u_arrays__DOT__u_crossbar__DOT__done_n = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4858250267949709307ull);
    vlSelf->__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__0__KET____DOT__winner = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5196799977740760094ull);
    vlSelf->__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__0__KET____DOT__has_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14434986854343413842ull);
    vlSelf->__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__1__KET____DOT__winner = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 382482498651663448ull);
    vlSelf->__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__1__KET____DOT__has_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12962290880591134816ull);
    vlSelf->__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__2__KET____DOT__winner = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8664287400314447794ull);
    vlSelf->__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__2__KET____DOT__has_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4619898763803816629ull);
    vlSelf->__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__3__KET____DOT__winner = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1160358537235835238ull);
    vlSelf->__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__3__KET____DOT__has_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2883475735783084309ull);
    vlSelf->__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__4__KET____DOT__winner = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9113373603040658974ull);
    vlSelf->__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__4__KET____DOT__has_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10147169816878135492ull);
    vlSelf->__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__5__KET____DOT__winner = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16116708838331239326ull);
    vlSelf->__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__5__KET____DOT__has_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7100925599920187511ull);
    vlSelf->__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__6__KET____DOT__winner = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15478169317739246291ull);
    vlSelf->__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__6__KET____DOT__has_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1325080124243734891ull);
    vlSelf->__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__7__KET____DOT__winner = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15810710724921002316ull);
    vlSelf->__PVT__u_arrays__DOT__u_crossbar__DOT__g_bank_arb__BRA__7__KET____DOT__has_req = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15787919364124458336ull);
    vlSelf->u_arrays__DOT__u_crossbar__DOT____Vlvbound_h69f63477__0 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 18017407452709220013ull);
    vlSelf->u_arrays__DOT__u_crossbar__DOT____Vlvbound_hc1d0273f__0 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12153637462069059076ull);
    vlSelf->u_arrays__DOT__u_crossbar__DOT____Vlvbound_had3e542b__0 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9591247610874676443ull);
    vlSelf->u_arrays__DOT__u_crossbar__DOT____Vlvbound_h2d86f8f6__0 = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2811612366340158519ull);
    vlSelf->u_arrays__DOT__u_crossbar__DOT____Vlvbound_h603b0530__0 = VL_SCOPED_RAND_RESET_Q(53, __VscopeHash, 10693948876201074185ull);
    vlSelf->__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_arbiter__DOT__scalar_grant = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3850459642161967877ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 256; ++__Vi1) {
            vlSelf->__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__data_q[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12166501455925890779ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 32; ++__Vi1) {
            vlSelf->__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__tag_q[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_Q(53, __VscopeHash, 17569825526716462592ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 32; ++__Vi1) {
            vlSelf->__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__state_q[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11413165128702824804ull);
        }
    }
    vlSelf->__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__line_addr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14057907855164690997ull);
    vlSelf->__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__be_mask = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 4751833410042030828ull);
    vlSelf->__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1192082722879041782ull);
    vlSelf->__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10699642901362016615ull);
    vlSelf->__PVT__u_arrays__DOT__g_bank__BRA__0__KET____DOT__u_bank__DOT__j = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14916356249766176801ull);
    vlSelf->__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_arbiter__DOT__scalar_grant = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2844517702213593138ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 256; ++__Vi1) {
            vlSelf->__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__data_q[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8307669236833468596ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 32; ++__Vi1) {
            vlSelf->__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__tag_q[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_Q(53, __VscopeHash, 2764686328607117708ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 32; ++__Vi1) {
            vlSelf->__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__state_q[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11502111295772035023ull);
        }
    }
    vlSelf->__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__line_addr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14857011589784387260ull);
    vlSelf->__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__be_mask = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9605942466712515812ull);
    vlSelf->__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1144881227582825154ull);
    vlSelf->__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9995705032604747488ull);
    vlSelf->__PVT__u_arrays__DOT__g_bank__BRA__1__KET____DOT__u_bank__DOT__j = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7816822048966320823ull);
    vlSelf->__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_arbiter__DOT__scalar_grant = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11253453904746651355ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 256; ++__Vi1) {
            vlSelf->__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__data_q[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 13926933127484076760ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 32; ++__Vi1) {
            vlSelf->__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__tag_q[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_Q(53, __VscopeHash, 10604259591483401472ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 32; ++__Vi1) {
            vlSelf->__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__state_q[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12347609239747104044ull);
        }
    }
    vlSelf->__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__line_addr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7880829153098999082ull);
    vlSelf->__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__be_mask = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16552282177158808867ull);
    vlSelf->__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7928827542839660794ull);
    vlSelf->__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17018734549297036491ull);
    vlSelf->__PVT__u_arrays__DOT__g_bank__BRA__2__KET____DOT__u_bank__DOT__j = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6092527221363298560ull);
    vlSelf->__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_arbiter__DOT__scalar_grant = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2623034480219073470ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 256; ++__Vi1) {
            vlSelf->__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__data_q[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 3870931688349507001ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 32; ++__Vi1) {
            vlSelf->__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__tag_q[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_Q(53, __VscopeHash, 10592340562346345654ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 32; ++__Vi1) {
            vlSelf->__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__state_q[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17740139246543745983ull);
        }
    }
    vlSelf->__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__line_addr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11807082770170974315ull);
    vlSelf->__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__be_mask = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8437123805855554431ull);
    vlSelf->__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1474662758546822219ull);
    vlSelf->__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8112640413695634453ull);
    vlSelf->__PVT__u_arrays__DOT__g_bank__BRA__3__KET____DOT__u_bank__DOT__j = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2854199552965583971ull);
    vlSelf->__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_arbiter__DOT__scalar_grant = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17520919323616157948ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 256; ++__Vi1) {
            vlSelf->__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__data_q[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 2950381275339723843ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 32; ++__Vi1) {
            vlSelf->__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__tag_q[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_Q(53, __VscopeHash, 1837769082104143185ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 32; ++__Vi1) {
            vlSelf->__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__state_q[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12096594615670632735ull);
        }
    }
    vlSelf->__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__line_addr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3977872642044583573ull);
    vlSelf->__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__be_mask = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 11284164283070383209ull);
    vlSelf->__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16293431549986819331ull);
    vlSelf->__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14866622158067508466ull);
    vlSelf->__PVT__u_arrays__DOT__g_bank__BRA__4__KET____DOT__u_bank__DOT__j = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16401547947219874874ull);
    vlSelf->__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_arbiter__DOT__scalar_grant = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15034113089297517106ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 256; ++__Vi1) {
            vlSelf->__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__data_q[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8965483169454564726ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 32; ++__Vi1) {
            vlSelf->__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__tag_q[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_Q(53, __VscopeHash, 13321749006786539312ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 32; ++__Vi1) {
            vlSelf->__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__state_q[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17079465237784979189ull);
        }
    }
    vlSelf->__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__line_addr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14706090607966932492ull);
    vlSelf->__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__be_mask = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15251463179860743023ull);
    vlSelf->__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3273577320841496835ull);
    vlSelf->__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12233998768798297759ull);
    vlSelf->__PVT__u_arrays__DOT__g_bank__BRA__5__KET____DOT__u_bank__DOT__j = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7870673028070113954ull);
    vlSelf->__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_arbiter__DOT__scalar_grant = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10324052897931436592ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 256; ++__Vi1) {
            vlSelf->__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__data_q[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 15288047049051496191ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 32; ++__Vi1) {
            vlSelf->__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__tag_q[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_Q(53, __VscopeHash, 1943537364128806011ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 32; ++__Vi1) {
            vlSelf->__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__state_q[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7878931465258807501ull);
        }
    }
    vlSelf->__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__line_addr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6669478235715879480ull);
    vlSelf->__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__be_mask = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14707203072841455045ull);
    vlSelf->__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3971552118891574897ull);
    vlSelf->__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7766263194313150730ull);
    vlSelf->__PVT__u_arrays__DOT__g_bank__BRA__6__KET____DOT__u_bank__DOT__j = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17495591751462820033ull);
    vlSelf->__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_arbiter__DOT__scalar_grant = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8216392372613744955ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 256; ++__Vi1) {
            vlSelf->__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__data_q[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10103121487157669976ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 32; ++__Vi1) {
            vlSelf->__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__tag_q[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_Q(53, __VscopeHash, 13535111054347921066ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 32; ++__Vi1) {
            vlSelf->__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__state_q[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7701307886721627697ull);
        }
    }
    vlSelf->__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__line_addr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13178265569592847824ull);
    vlSelf->__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__be_mask = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 623992133344026064ull);
    vlSelf->__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3652565148410090866ull);
    vlSelf->__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10006956320111844887ull);
    vlSelf->__PVT__u_arrays__DOT__g_bank__BRA__7__KET____DOT__u_bank__DOT__j = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16559177800181507897ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__u_vlsu_hit__DOT__lane_tag[__Vi0] = VL_SCOPED_RAND_RESET_Q(53, __VscopeHash, 9296223535911753311ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__u_vlsu_hit__DOT__lane_bank[__Vi0] = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13825125361560991738ull);
    }
    vlSelf->__PVT__u_vlsu_hit__DOT__hit_r = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3973960312996712073ull);
    vlSelf->__PVT__u_vlsu_hit__DOT__hit_way_r = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 3389496130746107050ull);
    vlSelf->__PVT__u_vlsu_hit__DOT__state_r = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4962643580584572507ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->__PVT__u_vlsu_hit__DOT__bank_tags[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_Q(53, __VscopeHash, 11290498031750398971ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->__PVT__u_vlsu_hit__DOT__bank_states[__Vi0][__Vi1] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15081897267768679058ull);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__u_vlsu_hit__DOT__way_match[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5277662623329322930ull);
    }
    vlSelf->__PVT__u_vlsu_miss__DOT__state_q = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7278539937027615234ull);
    vlSelf->__PVT__u_vlsu_miss__DOT__state_n = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12658582843463699261ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__u_vlsu_miss__DOT__miss_addr_q[__Vi0] = VL_SCOPED_RAND_RESET_Q(58, __VscopeHash, 2025946849367878836ull);
    }
    vlSelf->__PVT__u_vlsu_miss__DOT__miss_valid_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14171897493357279362ull);
    vlSelf->__PVT__u_vlsu_miss__DOT__miss_count_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1068778070863060106ull);
    vlSelf->__PVT__u_vlsu_miss__DOT__refill_idx_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11015223926711380704ull);
    vlSelf->__PVT__u_vlsu_miss__DOT__miss_valid_n = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16747486420942594231ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__u_vlsu_miss__DOT__miss_addr_n[__Vi0] = VL_SCOPED_RAND_RESET_Q(58, __VscopeHash, 2580535939461380982ull);
    }
    vlSelf->__PVT__u_vlsu_miss__DOT__miss_count_n = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18171205808206037469ull);
    vlSelf->__PVT__u_vlsu_miss__DOT__refill_idx_n = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17987752869578675782ull);
    vlSelf->__PVT__u_vlsu_miss__DOT__lane_line_addr = VL_SCOPED_RAND_RESET_Q(58, __VscopeHash, 5174319696608696059ull);
    vlSelf->__PVT__u_vlsu_miss__DOT__is_dup = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 855063772988392823ull);
    vlSelf->__PVT__u_vlsu_miss__DOT__idx = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12997419544290875726ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__u_plru__DOT__plru_bits_q[__Vi0] = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 2393350853927329928ull);
    }
    vlSelf->__PVT__u_plru__DOT__si = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2455003930569391057ull);
    vlSelf->__PVT__u_plru__DOT__plru_leaf_victim = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11927002278427797131ull);
    vlSelf->__PVT__u_plru__DOT__invalid_choice = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15512069466481410004ull);
    vlSelf->__PVT__u_plru__DOT__has_invalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17924656255089641812ull);
    vlSelf->__PVT__u_plru__DOT__d2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15067616036406757519ull);
    vlSelf->__PVT__u_plru__DOT__d1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6324581230221645528ull);
    vlSelf->__PVT__u_plru__DOT__d0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8695937111456287373ull);
    vlSelf->__PVT__u_atomic_alu__DOT__old_less_signed = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7310144665277564816ull);
    vlSelf->__PVT__u_atomic_alu__DOT__old_less_unsigned = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14086540799596224458ull);
    vlSelf->__PVT__u_atomic_alu__DOT__result_word = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16823829957844675019ull);
    vlSelf->__PVT__u_atomic_alu__DOT__old_less_signed_dw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7056463600481406729ull);
    vlSelf->__PVT__u_atomic_alu__DOT__old_less_unsigned_dw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7505249383757336950ull);
    vlSelf->__PVT__u_atomic_alu__DOT__result_dword = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 17163920056725337723ull);
}
