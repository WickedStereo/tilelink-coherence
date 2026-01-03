`timescale 1ns/100ps

// ============================================================================
// Stimulus Wrappers
// ============================================================================
module stim_wrapper_0 (
    input clk, input rst_n,
    // From Sequencer (Unique Mapped Wires)
    input cpu_req_0, input cpu_we_0, input [7:0] cpu_be_0, input [63:0] cpu_addr_0, input [63:0] cpu_wdata_0,
    input cpu_amo_0, input cpu_lr_0, input cpu_sc_0, input [4:0] cpu_amo_op_0, input cpu_amo_word_0,
    output cpu_gnt_0, output cpu_rvalid_0, output [63:0] cpu_rdata_0,

    // To L1 (Unique Mapped Wires)
    output core0_req_i, output core0_we_i, output [7:0] core0_be_i, output [63:0] core0_addr_i, output [63:0] core0_wdata_i,
    output core0_amo_i, output core0_lr_i, output core0_sc_i, output [4:0] core0_amo_op_i, output core0_amo_word_i,
    input core0_gnt_o, input core0_rvalid_o, input [63:0] core0_rdata_o
);
    core_stimulus stim (
        .clk(clk), .rst_n(rst_n),
        .seq_req_i(cpu_req_0), .seq_we_i(cpu_we_0), .seq_be_i(cpu_be_0), .seq_addr_i(cpu_addr_0), .seq_wdata_i(cpu_wdata_0),
        .seq_amo_i(cpu_amo_0), .seq_lr_i(cpu_lr_0), .seq_sc_i(cpu_sc_0), .seq_amo_op_i(cpu_amo_op_0), .seq_amo_word_i(cpu_amo_word_0),
        .seq_gnt_o(cpu_gnt_0), .seq_rvalid_o(cpu_rvalid_0), .seq_rdata_o(cpu_rdata_0),
        
        .dut_req_o(core0_req_i), .dut_we_o(core0_we_i), .dut_be_o(core0_be_i), .dut_addr_o(core0_addr_i), .dut_wdata_o(core0_wdata_i),
        .dut_amo_o(core0_amo_i), .dut_lr_o(core0_lr_i), .dut_sc_o(core0_sc_i), .dut_amo_op_o(core0_amo_op_i), .dut_amo_word_o(core0_amo_word_i),
        .dut_gnt_i(core0_gnt_o), .dut_rvalid_i(core0_rvalid_o), .dut_rdata_i(core0_rdata_o)
    );
endmodule

module stim_wrapper_1 (
    input clk, input rst_n,
    input cpu_req_1, input cpu_we_1, input [7:0] cpu_be_1, input [63:0] cpu_addr_1, input [63:0] cpu_wdata_1,
    input cpu_amo_1, input cpu_lr_1, input cpu_sc_1, input [4:0] cpu_amo_op_1, input cpu_amo_word_1,
    output cpu_gnt_1, output cpu_rvalid_1, output [63:0] cpu_rdata_1,

    output core1_req_i, output core1_we_i, output [7:0] core1_be_i, output [63:0] core1_addr_i, output [63:0] core1_wdata_i,
    output core1_amo_i, output core1_lr_i, output core1_sc_i, output [4:0] core1_amo_op_i, output core1_amo_word_i,
    input core1_gnt_o, input core1_rvalid_o, input [63:0] core1_rdata_o
);
    core_stimulus stim (
        .clk(clk), .rst_n(rst_n),
        .seq_req_i(cpu_req_1), .seq_we_i(cpu_we_1), .seq_be_i(cpu_be_1), .seq_addr_i(cpu_addr_1), .seq_wdata_i(cpu_wdata_1),
        .seq_amo_i(cpu_amo_1), .seq_lr_i(cpu_lr_1), .seq_sc_i(cpu_sc_1), .seq_amo_op_i(cpu_amo_op_1), .seq_amo_word_i(cpu_amo_word_1),
        .seq_gnt_o(cpu_gnt_1), .seq_rvalid_o(cpu_rvalid_1), .seq_rdata_o(cpu_rdata_1),
        
        .dut_req_o(core1_req_i), .dut_we_o(core1_we_i), .dut_be_o(core1_be_i), .dut_addr_o(core1_addr_i), .dut_wdata_o(core1_wdata_i),
        .dut_amo_o(core1_amo_i), .dut_lr_o(core1_lr_i), .dut_sc_o(core1_sc_i), .dut_amo_op_o(core1_amo_op_i), .dut_amo_word_o(core1_amo_word_i),
        .dut_gnt_i(core1_gnt_o), .dut_rvalid_i(core1_rvalid_o), .dut_rdata_i(core1_rdata_o)
    );
endmodule

module stim_wrapper_2 (
    input clk, input rst_n,
    input cpu_req_2, input cpu_we_2, input [7:0] cpu_be_2, input [63:0] cpu_addr_2, input [63:0] cpu_wdata_2,
    input cpu_amo_2, input cpu_lr_2, input cpu_sc_2, input [4:0] cpu_amo_op_2, input cpu_amo_word_2,
    output cpu_gnt_2, output cpu_rvalid_2, output [63:0] cpu_rdata_2,

    output core2_req_i, output core2_we_i, output [7:0] core2_be_i, output [63:0] core2_addr_i, output [63:0] core2_wdata_i,
    output core2_amo_i, output core2_lr_i, output core2_sc_i, output [4:0] core2_amo_op_i, output core2_amo_word_i,
    input core2_gnt_o, input core2_rvalid_o, input [63:0] core2_rdata_o
);
    core_stimulus stim (
        .clk(clk), .rst_n(rst_n),
        .seq_req_i(cpu_req_2), .seq_we_i(cpu_we_2), .seq_be_i(cpu_be_2), .seq_addr_i(cpu_addr_2), .seq_wdata_i(cpu_wdata_2),
        .seq_amo_i(cpu_amo_2), .seq_lr_i(cpu_lr_2), .seq_sc_i(cpu_sc_2), .seq_amo_op_i(cpu_amo_op_2), .seq_amo_word_i(cpu_amo_word_2),
        .seq_gnt_o(cpu_gnt_2), .seq_rvalid_o(cpu_rvalid_2), .seq_rdata_o(cpu_rdata_2),
        
        .dut_req_o(core2_req_i), .dut_we_o(core2_we_i), .dut_be_o(core2_be_i), .dut_addr_o(core2_addr_i), .dut_wdata_o(core2_wdata_i),
        .dut_amo_o(core2_amo_i), .dut_lr_o(core2_lr_i), .dut_sc_o(core2_sc_i), .dut_amo_op_o(core2_amo_op_i), .dut_amo_word_o(core2_amo_word_i),
        .dut_gnt_i(core2_gnt_o), .dut_rvalid_i(core2_rvalid_o), .dut_rdata_i(core2_rdata_o)
    );
endmodule

module stim_wrapper_3 (
    input clk, input rst_n,
    input cpu_req_3, input cpu_we_3, input [7:0] cpu_be_3, input [63:0] cpu_addr_3, input [63:0] cpu_wdata_3,
    input cpu_amo_3, input cpu_lr_3, input cpu_sc_3, input [4:0] cpu_amo_op_3, input cpu_amo_word_3,
    output cpu_gnt_3, output cpu_rvalid_3, output [63:0] cpu_rdata_3,

    output core3_req_i, output core3_we_i, output [7:0] core3_be_i, output [63:0] core3_addr_i, output [63:0] core3_wdata_i,
    output core3_amo_i, output core3_lr_i, output core3_sc_i, output [4:0] core3_amo_op_i, output core3_amo_word_i,
    input core3_gnt_o, input core3_rvalid_o, input [63:0] core3_rdata_o
);
    core_stimulus stim (
        .clk(clk), .rst_n(rst_n),
        .seq_req_i(cpu_req_3), .seq_we_i(cpu_we_3), .seq_be_i(cpu_be_3), .seq_addr_i(cpu_addr_3), .seq_wdata_i(cpu_wdata_3),
        .seq_amo_i(cpu_amo_3), .seq_lr_i(cpu_lr_3), .seq_sc_i(cpu_sc_3), .seq_amo_op_i(cpu_amo_op_3), .seq_amo_word_i(cpu_amo_word_3),
        .seq_gnt_o(cpu_gnt_3), .seq_rvalid_o(cpu_rvalid_3), .seq_rdata_o(cpu_rdata_3),
        
        .dut_req_o(core3_req_i), .dut_we_o(core3_we_i), .dut_be_o(core3_be_i), .dut_addr_o(core3_addr_i), .dut_wdata_o(core3_wdata_i),
        .dut_amo_o(core3_amo_i), .dut_lr_o(core3_lr_i), .dut_sc_o(core3_sc_i), .dut_amo_op_o(core3_amo_op_i), .dut_amo_word_o(core3_amo_word_i),
        .dut_gnt_i(core3_gnt_o), .dut_rvalid_i(core3_rvalid_o), .dut_rdata_i(core3_rdata_o)
    );
endmodule

// ============================================================================
// L1 Wrappers
// ============================================================================
module l1_wrapper_0 (
    input clk, input rst_n,
    input core0_req_i, input core0_we_i, input [7:0] core0_be_i, input [63:0] core0_addr_i, input [63:0] core0_wdata_i,
    input core0_amo_i, input core0_lr_i, input core0_sc_i, input [4:0] core0_amo_op_i, input core0_amo_word_i,
    output core0_gnt_o, output core0_rvalid_o, output [63:0] core0_rdata_o,

    output l1_0_tl_a_valid_o, input l1_0_tl_a_ready_i, output [2:0] l1_0_tl_a_opcode_o, output [2:0] l1_0_tl_a_param_o,
    output [3:0] l1_0_tl_a_size_o, output [3:0] l1_0_tl_a_source_o, output [63:0] l1_0_tl_a_address_o, output [7:0] l1_0_tl_a_mask_o,
    output [63:0] l1_0_tl_a_data_o, output l1_0_tl_a_corrupt_o,

    input l1_0_tl_b_valid_i, output l1_0_tl_b_ready_o, input [2:0] l1_0_tl_b_opcode_i, input [2:0] l1_0_tl_b_param_i,
    input [3:0] l1_0_tl_b_size_i, input [3:0] l1_0_tl_b_source_i, input [63:0] l1_0_tl_b_address_i, input [7:0] l1_0_tl_b_mask_i,
    input [63:0] l1_0_tl_b_data_i, input l1_0_tl_b_corrupt_i,

    output l1_0_tl_c_valid_o, input l1_0_tl_c_ready_i, output [2:0] l1_0_tl_c_opcode_o, output [2:0] l1_0_tl_c_param_o,
    output [3:0] l1_0_tl_c_size_o, output [3:0] l1_0_tl_c_source_o, output [63:0] l1_0_tl_c_address_o, output [63:0] l1_0_tl_c_data_o,
    output l1_0_tl_c_corrupt_o,

    input l1_0_tl_d_valid_i, output l1_0_tl_d_ready_o, input [2:0] l1_0_tl_d_opcode_i, input [1:0] l1_0_tl_d_param_i,
    input [3:0] l1_0_tl_d_size_i, input [3:0] l1_0_tl_d_source_i, input [3:0] l1_0_tl_d_sink_i, input l1_0_tl_d_denied_i,
    input [63:0] l1_0_tl_d_data_i, input l1_0_tl_d_corrupt_i,

    output l1_0_tl_e_valid_o, input l1_0_tl_e_ready_i, output [3:0] l1_0_tl_e_sink_o,
    
    // Backdoor
    input l1_0_bkdr_valid_i, input [3:0] l1_0_bkdr_core_id_i, input [1:0] l1_0_bkdr_array_id_i, input [7:0] l1_0_bkdr_way_i, input [15:0] l1_0_bkdr_set_i, input [63:0] l1_0_bkdr_data_i
);
    rv64g_l1_dcache #(.CORE_ID(0)) l1 (
        .clk_i(clk), .rst_ni(rst_n), .invalidate_all_i(1'b0),
        .req_i(core0_req_i), .we_i(core0_we_i), .be_i(core0_be_i), .addr_i(core0_addr_i), .wdata_i(core0_wdata_i),
        .amo_i(core0_amo_i), .lr_i(core0_lr_i), .sc_i(core0_sc_i), .amo_op_i(core0_amo_op_i), .amo_word_i(core0_amo_word_i),
        .gnt_o(core0_gnt_o), .rvalid_o(core0_rvalid_o), .rdata_o(core0_rdata_o),
        
        .tl_a_valid_o(l1_0_tl_a_valid_o), .tl_a_ready_i(l1_0_tl_a_ready_i), .tl_a_opcode_o(l1_0_tl_a_opcode_o), .tl_a_param_o(l1_0_tl_a_param_o),
        .tl_a_size_o(l1_0_tl_a_size_o), .tl_a_source_o(l1_0_tl_a_source_o), .tl_a_address_o(l1_0_tl_a_address_o), .tl_a_mask_o(l1_0_tl_a_mask_o),
        .tl_a_data_o(l1_0_tl_a_data_o), .tl_a_corrupt_o(l1_0_tl_a_corrupt_o),

        .tl_b_valid_i(l1_0_tl_b_valid_i), .tl_b_ready_o(l1_0_tl_b_ready_o), .tl_b_opcode_i(l1_0_tl_b_opcode_i), .tl_b_param_i(l1_0_tl_b_param_i),
        .tl_b_size_i(l1_0_tl_b_size_i), .tl_b_source_i(l1_0_tl_b_source_i), .tl_b_address_i(l1_0_tl_b_address_i), .tl_b_mask_i(l1_0_tl_b_mask_i),
        .tl_b_data_i(l1_0_tl_b_data_i), .tl_b_corrupt_i(l1_0_tl_b_corrupt_i),

        .tl_c_valid_o(l1_0_tl_c_valid_o), .tl_c_ready_i(l1_0_tl_c_ready_i), .tl_c_opcode_o(l1_0_tl_c_opcode_o), .tl_c_param_o(l1_0_tl_c_param_o),
        .tl_c_size_o(l1_0_tl_c_size_o), .tl_c_source_o(l1_0_tl_c_source_o), .tl_c_address_o(l1_0_tl_c_address_o), .tl_c_data_o(l1_0_tl_c_data_o),
        .tl_c_corrupt_o(l1_0_tl_c_corrupt_o),

        .tl_d_valid_i(l1_0_tl_d_valid_i), .tl_d_ready_o(l1_0_tl_d_ready_o), .tl_d_opcode_i(l1_0_tl_d_opcode_i), .tl_d_param_i(l1_0_tl_d_param_i),
        .tl_d_size_i(l1_0_tl_d_size_i), .tl_d_source_i(l1_0_tl_d_source_i), .tl_d_sink_i(l1_0_tl_d_sink_i), .tl_d_denied_i(l1_0_tl_d_denied_i),
        .tl_d_data_i(l1_0_tl_d_data_i), .tl_d_corrupt_i(l1_0_tl_d_corrupt_i),

        .tl_e_valid_o(l1_0_tl_e_valid_o), .tl_e_ready_i(l1_0_tl_e_ready_i), .tl_e_sink_o(l1_0_tl_e_sink_o),

        .bkdr_valid_i(l1_0_bkdr_valid_i), .bkdr_core_id_i(l1_0_bkdr_core_id_i), .bkdr_array_id_i(l1_0_bkdr_array_id_i),
        .bkdr_way_i(l1_0_bkdr_way_i), .bkdr_set_i(l1_0_bkdr_set_i), .bkdr_data_i(l1_0_bkdr_data_i)
    );
endmodule

module l1_wrapper_1 (
    input clk, input rst_n,
    input core1_req_i, input core1_we_i, input [7:0] core1_be_i, input [63:0] core1_addr_i, input [63:0] core1_wdata_i,
    input core1_amo_i, input core1_lr_i, input core1_sc_i, input [4:0] core1_amo_op_i, input core1_amo_word_i,
    output core1_gnt_o, output core1_rvalid_o, output [63:0] core1_rdata_o,

    output l1_1_tl_a_valid_o, input l1_1_tl_a_ready_i, output [2:0] l1_1_tl_a_opcode_o, output [2:0] l1_1_tl_a_param_o,
    output [3:0] l1_1_tl_a_size_o, output [3:0] l1_1_tl_a_source_o, output [63:0] l1_1_tl_a_address_o, output [7:0] l1_1_tl_a_mask_o,
    output [63:0] l1_1_tl_a_data_o, output l1_1_tl_a_corrupt_o,

    input l1_1_tl_b_valid_i, output l1_1_tl_b_ready_o, input [2:0] l1_1_tl_b_opcode_i, input [2:0] l1_1_tl_b_param_i,
    input [3:0] l1_1_tl_b_size_i, input [3:0] l1_1_tl_b_source_i, input [63:0] l1_1_tl_b_address_i, input [7:0] l1_1_tl_b_mask_i,
    input [63:0] l1_1_tl_b_data_i, input l1_1_tl_b_corrupt_i,

    output l1_1_tl_c_valid_o, input l1_1_tl_c_ready_i, output [2:0] l1_1_tl_c_opcode_o, output [2:0] l1_1_tl_c_param_o,
    output [3:0] l1_1_tl_c_size_o, output [3:0] l1_1_tl_c_source_o, output [63:0] l1_1_tl_c_address_o, output [63:0] l1_1_tl_c_data_o,
    output l1_1_tl_c_corrupt_o,

    input l1_1_tl_d_valid_i, output l1_1_tl_d_ready_o, input [2:0] l1_1_tl_d_opcode_i, input [1:0] l1_1_tl_d_param_i,
    input [3:0] l1_1_tl_d_size_i, input [3:0] l1_1_tl_d_source_i, input [3:0] l1_1_tl_d_sink_i, input l1_1_tl_d_denied_i,
    input [63:0] l1_1_tl_d_data_i, input l1_1_tl_d_corrupt_i,

    output l1_1_tl_e_valid_o, input l1_1_tl_e_ready_i, output [3:0] l1_1_tl_e_sink_o,
    
    // Backdoor
    input l1_1_bkdr_valid_i, input [3:0] l1_1_bkdr_core_id_i, input [1:0] l1_1_bkdr_array_id_i, input [7:0] l1_1_bkdr_way_i, input [15:0] l1_1_bkdr_set_i, input [63:0] l1_1_bkdr_data_i
);
    rv64g_l1_dcache #(.CORE_ID(1)) l1 (
        .clk_i(clk), .rst_ni(rst_n), .invalidate_all_i(1'b0),
        .req_i(core1_req_i), .we_i(core1_we_i), .be_i(core1_be_i), .addr_i(core1_addr_i), .wdata_i(core1_wdata_i),
        .amo_i(core1_amo_i), .lr_i(core1_lr_i), .sc_i(core1_sc_i), .amo_op_i(core1_amo_op_i), .amo_word_i(core1_amo_word_i),
        .gnt_o(core1_gnt_o), .rvalid_o(core1_rvalid_o), .rdata_o(core1_rdata_o),
        
        .tl_a_valid_o(l1_1_tl_a_valid_o), .tl_a_ready_i(l1_1_tl_a_ready_i), .tl_a_opcode_o(l1_1_tl_a_opcode_o), .tl_a_param_o(l1_1_tl_a_param_o),
        .tl_a_size_o(l1_1_tl_a_size_o), .tl_a_source_o(l1_1_tl_a_source_o), .tl_a_address_o(l1_1_tl_a_address_o), .tl_a_mask_o(l1_1_tl_a_mask_o),
        .tl_a_data_o(l1_1_tl_a_data_o), .tl_a_corrupt_o(l1_1_tl_a_corrupt_o),

        .tl_b_valid_i(l1_1_tl_b_valid_i), .tl_b_ready_o(l1_1_tl_b_ready_o), .tl_b_opcode_i(l1_1_tl_b_opcode_i), .tl_b_param_i(l1_1_tl_b_param_i),
        .tl_b_size_i(l1_1_tl_b_size_i), .tl_b_source_i(l1_1_tl_b_source_i), .tl_b_address_i(l1_1_tl_b_address_i), .tl_b_mask_i(l1_1_tl_b_mask_i),
        .tl_b_data_i(l1_1_tl_b_data_i), .tl_b_corrupt_i(l1_1_tl_b_corrupt_i),

        .tl_c_valid_o(l1_1_tl_c_valid_o), .tl_c_ready_i(l1_1_tl_c_ready_i), .tl_c_opcode_o(l1_1_tl_c_opcode_o), .tl_c_param_o(l1_1_tl_c_param_o),
        .tl_c_size_o(l1_1_tl_c_size_o), .tl_c_source_o(l1_1_tl_c_source_o), .tl_c_address_o(l1_1_tl_c_address_o), .tl_c_data_o(l1_1_tl_c_data_o),
        .tl_c_corrupt_o(l1_1_tl_c_corrupt_o),

        .tl_d_valid_i(l1_1_tl_d_valid_i), .tl_d_ready_o(l1_1_tl_d_ready_o), .tl_d_opcode_i(l1_1_tl_d_opcode_i), .tl_d_param_i(l1_1_tl_d_param_i),
        .tl_d_size_i(l1_1_tl_d_size_i), .tl_d_source_i(l1_1_tl_d_source_i), .tl_d_sink_i(l1_1_tl_d_sink_i), .tl_d_denied_i(l1_1_tl_d_denied_i),
        .tl_d_data_i(l1_1_tl_d_data_i), .tl_d_corrupt_i(l1_1_tl_d_corrupt_i),

        .tl_e_valid_o(l1_1_tl_e_valid_o), .tl_e_ready_i(l1_1_tl_e_ready_i), .tl_e_sink_o(l1_1_tl_e_sink_o),

        .bkdr_valid_i(l1_1_bkdr_valid_i), .bkdr_core_id_i(l1_1_bkdr_core_id_i), .bkdr_array_id_i(l1_1_bkdr_array_id_i),
        .bkdr_way_i(l1_1_bkdr_way_i), .bkdr_set_i(l1_1_bkdr_set_i), .bkdr_data_i(l1_1_bkdr_data_i)
    );
endmodule

module l1_wrapper_2 (
    input clk, input rst_n,
    input core2_req_i, input core2_we_i, input [7:0] core2_be_i, input [63:0] core2_addr_i, input [63:0] core2_wdata_i,
    input core2_amo_i, input core2_lr_i, input core2_sc_i, input [4:0] core2_amo_op_i, input core2_amo_word_i,
    output core2_gnt_o, output core2_rvalid_o, output [63:0] core2_rdata_o,

    output l1_2_tl_a_valid_o, input l1_2_tl_a_ready_i, output [2:0] l1_2_tl_a_opcode_o, output [2:0] l1_2_tl_a_param_o,
    output [3:0] l1_2_tl_a_size_o, output [3:0] l1_2_tl_a_source_o, output [63:0] l1_2_tl_a_address_o, output [7:0] l1_2_tl_a_mask_o,
    output [63:0] l1_2_tl_a_data_o, output l1_2_tl_a_corrupt_o,

    input l1_2_tl_b_valid_i, output l1_2_tl_b_ready_o, input [2:0] l1_2_tl_b_opcode_i, input [2:0] l1_2_tl_b_param_i,
    input [3:0] l1_2_tl_b_size_i, input [3:0] l1_2_tl_b_source_i, input [63:0] l1_2_tl_b_address_i, input [7:0] l1_2_tl_b_mask_i,
    input [63:0] l1_2_tl_b_data_i, input l1_2_tl_b_corrupt_i,

    output l1_2_tl_c_valid_o, input l1_2_tl_c_ready_i, output [2:0] l1_2_tl_c_opcode_o, output [2:0] l1_2_tl_c_param_o,
    output [3:0] l1_2_tl_c_size_o, output [3:0] l1_2_tl_c_source_o, output [63:0] l1_2_tl_c_address_o, output [63:0] l1_2_tl_c_data_o,
    output l1_2_tl_c_corrupt_o,

    input l1_2_tl_d_valid_i, output l1_2_tl_d_ready_o, input [2:0] l1_2_tl_d_opcode_i, input [1:0] l1_2_tl_d_param_i,
    input [3:0] l1_2_tl_d_size_i, input [3:0] l1_2_tl_d_source_i, input [3:0] l1_2_tl_d_sink_i, input l1_2_tl_d_denied_i,
    input [63:0] l1_2_tl_d_data_i, input l1_2_tl_d_corrupt_i,

    output l1_2_tl_e_valid_o, input l1_2_tl_e_ready_i, output [3:0] l1_2_tl_e_sink_o,
    
    // Backdoor
    input l1_2_bkdr_valid_i, input [3:0] l1_2_bkdr_core_id_i, input [1:0] l1_2_bkdr_array_id_i, input [7:0] l1_2_bkdr_way_i, input [15:0] l1_2_bkdr_set_i, input [63:0] l1_2_bkdr_data_i
);
    rv64g_l1_dcache l1 (
        .clk_i(clk), .rst_ni(rst_n), .invalidate_all_i(1'b0),
        .req_i(core2_req_i), .we_i(core2_we_i), .be_i(core2_be_i), .addr_i(core2_addr_i), .wdata_i(core2_wdata_i),
        .amo_i(core2_amo_i), .lr_i(core2_lr_i), .sc_i(core2_sc_i), .amo_op_i(core2_amo_op_i), .amo_word_i(core2_amo_word_i),
        .gnt_o(core2_gnt_o), .rvalid_o(core2_rvalid_o), .rdata_o(core2_rdata_o),
        
        .tl_a_valid_o(l1_2_tl_a_valid_o), .tl_a_ready_i(l1_2_tl_a_ready_i), .tl_a_opcode_o(l1_2_tl_a_opcode_o), .tl_a_param_o(l1_2_tl_a_param_o),
        .tl_a_size_o(l1_2_tl_a_size_o), .tl_a_source_o(l1_2_tl_a_source_o), .tl_a_address_o(l1_2_tl_a_address_o), .tl_a_mask_o(l1_2_tl_a_mask_o),
        .tl_a_data_o(l1_2_tl_a_data_o), .tl_a_corrupt_o(l1_2_tl_a_corrupt_o),

        .tl_b_valid_i(l1_2_tl_b_valid_i), .tl_b_ready_o(l1_2_tl_b_ready_o), .tl_b_opcode_i(l1_2_tl_b_opcode_i), .tl_b_param_i(l1_2_tl_b_param_i),
        .tl_b_size_i(l1_2_tl_b_size_i), .tl_b_source_i(l1_2_tl_b_source_i), .tl_b_address_i(l1_2_tl_b_address_i), .tl_b_mask_i(l1_2_tl_b_mask_i),
        .tl_b_data_i(l1_2_tl_b_data_i), .tl_b_corrupt_i(l1_2_tl_b_corrupt_i),

        .tl_c_valid_o(l1_2_tl_c_valid_o), .tl_c_ready_i(l1_2_tl_c_ready_i), .tl_c_opcode_o(l1_2_tl_c_opcode_o), .tl_c_param_o(l1_2_tl_c_param_o),
        .tl_c_size_o(l1_2_tl_c_size_o), .tl_c_source_o(l1_2_tl_c_source_o), .tl_c_address_o(l1_2_tl_c_address_o), .tl_c_data_o(l1_2_tl_c_data_o),
        .tl_c_corrupt_o(l1_2_tl_c_corrupt_o),

        .tl_d_valid_i(l1_2_tl_d_valid_i), .tl_d_ready_o(l1_2_tl_d_ready_o), .tl_d_opcode_i(l1_2_tl_d_opcode_i), .tl_d_param_i(l1_2_tl_d_param_i),
        .tl_d_size_i(l1_2_tl_d_size_i), .tl_d_source_i(l1_2_tl_d_source_i), .tl_d_sink_i(l1_2_tl_d_sink_i), .tl_d_denied_i(l1_2_tl_d_denied_i),
        .tl_d_data_i(l1_2_tl_d_data_i), .tl_d_corrupt_i(l1_2_tl_d_corrupt_i),

        .tl_e_valid_o(l1_2_tl_e_valid_o), .tl_e_ready_i(l1_2_tl_e_ready_i), .tl_e_sink_o(l1_2_tl_e_sink_o),

        .bkdr_valid_i(l1_2_bkdr_valid_i), .bkdr_core_id_i(l1_2_bkdr_core_id_i), .bkdr_array_id_i(l1_2_bkdr_array_id_i),
        .bkdr_way_i(l1_2_bkdr_way_i), .bkdr_set_i(l1_2_bkdr_set_i), .bkdr_data_i(l1_2_bkdr_data_i)
    );
endmodule

module l1_wrapper_3 (
    input clk, input rst_n,
    input core3_req_i, input core3_we_i, input [7:0] core3_be_i, input [63:0] core3_addr_i, input [63:0] core3_wdata_i,
    input core3_amo_i, input core3_lr_i, input core3_sc_i, input [4:0] core3_amo_op_i, input core3_amo_word_i,
    output core3_gnt_o, output core3_rvalid_o, output [63:0] core3_rdata_o,

    output l1_3_tl_a_valid_o, input l1_3_tl_a_ready_i, output [2:0] l1_3_tl_a_opcode_o, output [2:0] l1_3_tl_a_param_o,
    output [3:0] l1_3_tl_a_size_o, output [3:0] l1_3_tl_a_source_o, output [63:0] l1_3_tl_a_address_o, output [7:0] l1_3_tl_a_mask_o,
    output [63:0] l1_3_tl_a_data_o, output l1_3_tl_a_corrupt_o,

    input l1_3_tl_b_valid_i, output l1_3_tl_b_ready_o, input [2:0] l1_3_tl_b_opcode_i, input [2:0] l1_3_tl_b_param_i,
    input [3:0] l1_3_tl_b_size_i, input [3:0] l1_3_tl_b_source_i, input [63:0] l1_3_tl_b_address_i, input [7:0] l1_3_tl_b_mask_i,
    input [63:0] l1_3_tl_b_data_i, input l1_3_tl_b_corrupt_i,

    output l1_3_tl_c_valid_o, input l1_3_tl_c_ready_i, output [2:0] l1_3_tl_c_opcode_o, output [2:0] l1_3_tl_c_param_o,
    output [3:0] l1_3_tl_c_size_o, output [3:0] l1_3_tl_c_source_o, output [63:0] l1_3_tl_c_address_o, output [63:0] l1_3_tl_c_data_o,
    output l1_3_tl_c_corrupt_o,

    input l1_3_tl_d_valid_i, output l1_3_tl_d_ready_o, input [2:0] l1_3_tl_d_opcode_i, input [1:0] l1_3_tl_d_param_i,
    input [3:0] l1_3_tl_d_size_i, input [3:0] l1_3_tl_d_source_i, input [3:0] l1_3_tl_d_sink_i, input l1_3_tl_d_denied_i,
    input [63:0] l1_3_tl_d_data_i, input l1_3_tl_d_corrupt_i,

    output l1_3_tl_e_valid_o, input l1_3_tl_e_ready_i, output [3:0] l1_3_tl_e_sink_o,
    
    // Backdoor
    input l1_3_bkdr_valid_i, input [3:0] l1_3_bkdr_core_id_i, input [1:0] l1_3_bkdr_array_id_i, input [7:0] l1_3_bkdr_way_i, input [15:0] l1_3_bkdr_set_i, input [63:0] l1_3_bkdr_data_i
);
    rv64g_l1_dcache #(.CORE_ID(3)) l1 (
        .clk_i(clk), .rst_ni(rst_n), .invalidate_all_i(1'b0),
        .req_i(core3_req_i), .we_i(core3_we_i), .be_i(core3_be_i), .addr_i(core3_addr_i), .wdata_i(core3_wdata_i),
        .amo_i(core3_amo_i), .lr_i(core3_lr_i), .sc_i(core3_sc_i), .amo_op_i(core3_amo_op_i), .amo_word_i(core3_amo_word_i),
        .gnt_o(core3_gnt_o), .rvalid_o(core3_rvalid_o), .rdata_o(core3_rdata_o),
        
        .tl_a_valid_o(l1_3_tl_a_valid_o), .tl_a_ready_i(l1_3_tl_a_ready_i), .tl_a_opcode_o(l1_3_tl_a_opcode_o), .tl_a_param_o(l1_3_tl_a_param_o),
        .tl_a_size_o(l1_3_tl_a_size_o), .tl_a_source_o(l1_3_tl_a_source_o), .tl_a_address_o(l1_3_tl_a_address_o), .tl_a_mask_o(l1_3_tl_a_mask_o),
        .tl_a_data_o(l1_3_tl_a_data_o), .tl_a_corrupt_o(l1_3_tl_a_corrupt_o),

        .tl_b_valid_i(l1_3_tl_b_valid_i), .tl_b_ready_o(l1_3_tl_b_ready_o), .tl_b_opcode_i(l1_3_tl_b_opcode_i), .tl_b_param_i(l1_3_tl_b_param_i),
        .tl_b_size_i(l1_3_tl_b_size_i), .tl_b_source_i(l1_3_tl_b_source_i), .tl_b_address_i(l1_3_tl_b_address_i), .tl_b_mask_i(l1_3_tl_b_mask_i),
        .tl_b_data_i(l1_3_tl_b_data_i), .tl_b_corrupt_i(l1_3_tl_b_corrupt_i),

        .tl_c_valid_o(l1_3_tl_c_valid_o), .tl_c_ready_i(l1_3_tl_c_ready_i), .tl_c_opcode_o(l1_3_tl_c_opcode_o), .tl_c_param_o(l1_3_tl_c_param_o),
        .tl_c_size_o(l1_3_tl_c_size_o), .tl_c_source_o(l1_3_tl_c_source_o), .tl_c_address_o(l1_3_tl_c_address_o), .tl_c_data_o(l1_3_tl_c_data_o),
        .tl_c_corrupt_o(l1_3_tl_c_corrupt_o),

        .tl_d_valid_i(l1_3_tl_d_valid_i), .tl_d_ready_o(l1_3_tl_d_ready_o), .tl_d_opcode_i(l1_3_tl_d_opcode_i), .tl_d_param_i(l1_3_tl_d_param_i),
        .tl_d_size_i(l1_3_tl_d_size_i), .tl_d_source_i(l1_3_tl_d_source_i), .tl_d_sink_i(l1_3_tl_d_sink_i), .tl_d_denied_i(l1_3_tl_d_denied_i),
        .tl_d_data_i(l1_3_tl_d_data_i), .tl_d_corrupt_i(l1_3_tl_d_corrupt_i),

        .tl_e_valid_o(l1_3_tl_e_valid_o), .tl_e_ready_i(l1_3_tl_e_ready_i), .tl_e_sink_o(l1_3_tl_e_sink_o),

        .bkdr_valid_i(l1_3_bkdr_valid_i), .bkdr_core_id_i(l1_3_bkdr_core_id_i), .bkdr_array_id_i(l1_3_bkdr_array_id_i),
        .bkdr_way_i(l1_3_bkdr_way_i), .bkdr_set_i(l1_3_bkdr_set_i), .bkdr_data_i(l1_3_bkdr_data_i)
    );
endmodule

// ============================================================================
// L2 Wrapper
// ============================================================================
module l2_wrapper (
    input clk_i, input rst_ni,

    // L2 Slave Interface (From Xbar)
    // Channel A (Sink)
    input [2:0] l2_tl_a_opcode_i, input [2:0] l2_tl_a_param_i, input [3:0] l2_tl_a_size_i, input [5:0] l2_tl_a_source_i, input [63:0] l2_tl_a_address_i,
    input [7:0] l2_tl_a_mask_i, input [63:0] l2_tl_a_data_i, input l2_tl_a_corrupt_i,
    input l2_tl_a_valid_i, output l2_tl_a_ready_o,

    // Channel B (Source)
    output [2:0] l2_tl_b_opcode_o, output [2:0] l2_tl_b_param_o, output [63:0] l2_tl_b_address_o,
    output [3:0] l2_tl_b_size_o, output [5:0] l2_tl_b_source_o, output [7:0] l2_tl_b_mask_o, output [63:0] l2_tl_b_data_o, output l2_tl_b_corrupt_o,
    output l2_tl_b_valid_o, input l2_tl_b_ready_i, output [1:0] l2_tl_b_dest_o,

    // Channel C (Sink)
    input [2:0] l2_tl_c_opcode_i, input [2:0] l2_tl_c_param_i, input [3:0] l2_tl_c_size_i, input [5:0] l2_tl_c_source_i, input [63:0] l2_tl_c_address_i,
    input [63:0] l2_tl_c_data_i, input l2_tl_c_corrupt_i, 
    input l2_tl_c_valid_i, output l2_tl_c_ready_o,

    // Channel D (Source)
    output [2:0] l2_tl_d_opcode_o, output [1:0] l2_tl_d_param_o, output [63:0] l2_tl_d_data_o, output [5:0] l2_tl_d_source_o,
    output [3:0] l2_tl_d_size_o, output [1:0] l2_tl_d_sink_o, output l2_tl_d_denied_o, output l2_tl_d_corrupt_o,
    output l2_tl_d_valid_o, input l2_tl_d_ready_i,

    // Channel E (Sink)
    input l2_tl_e_valid_i, input [1:0] l2_tl_e_sink_i, output l2_tl_e_ready_o,

    // Memory Interface (To Memory)
    output [2:0] mem_a_opcode_o, output [2:0] mem_a_param_o, output [2:0] mem_a_size_o, output [3:0] mem_a_source_o,
    output [63:0] mem_a_address_o, output [7:0] mem_a_mask_o, output [63:0] mem_a_data_o,
    output mem_a_valid_o, input mem_a_ready_i,

    input [2:0] mem_d_opcode_i, input [1:0] mem_d_param_i, input [2:0] mem_d_size_i, input [3:0] mem_d_source_i,
    input [1:0] mem_d_sink_i, input mem_d_denied_i, input [63:0] mem_d_data_i, input mem_d_corrupt_i,
    input mem_d_valid_i, output mem_d_ready_o,

    // Backdoor
    input l2_bkdr_valid_i, input [3:0] l2_bkdr_core_id_i, input [1:0] l2_bkdr_array_id_i, input [7:0] l2_bkdr_way_i, input [15:0] l2_bkdr_set_i, input [63:0] l2_bkdr_data_i
);
    // Assign missing output signals (defaults)
    assign l2_tl_b_size_o = 4'd6; // 64 bytes
    assign l2_tl_b_source_o = 6'd0;
    assign l2_tl_b_mask_o = 8'hFF;
    assign l2_tl_b_data_o = 64'd0;
    assign l2_tl_b_corrupt_o = 1'b0;
    
    assign l2_tl_d_size_o = 4'd6; // 64 bytes
    assign l2_tl_d_denied_o = 1'b0;
    assign l2_tl_d_corrupt_o = 1'b0;

    rv64g_l2_cache l2 (
        .clk_i(clk_i), .rst_ni(rst_ni),
        .tl_a_opcode_i(l2_tl_a_opcode_i), .tl_a_param_i(l2_tl_a_param_i), .tl_a_source_i(l2_tl_a_source_i), .tl_a_address_i(l2_tl_a_address_i),
        .tl_a_valid_i(l2_tl_a_valid_i), .tl_a_ready_o(l2_tl_a_ready_o),

        .tl_b_opcode_o(l2_tl_b_opcode_o), .tl_b_param_o(l2_tl_b_param_o), .tl_b_address_o(l2_tl_b_address_o),
        .tl_b_valid_o(l2_tl_b_valid_o), .tl_b_ready_i(l2_tl_b_ready_i), .tl_b_dest_o(l2_tl_b_dest_o),

        .tl_c_opcode_i(l2_tl_c_opcode_i), .tl_c_param_i(l2_tl_c_param_i), .tl_c_source_i(l2_tl_c_source_i), .tl_c_address_i(l2_tl_c_address_i),
        .tl_c_data_i(l2_tl_c_data_i), .tl_c_valid_i(l2_tl_c_valid_i), .tl_c_ready_o(l2_tl_c_ready_o),

        .tl_d_opcode_o(l2_tl_d_opcode_o), .tl_d_param_o(l2_tl_d_param_o), .tl_d_data_o(l2_tl_d_data_o), .tl_d_source_o(l2_tl_d_source_o),
        .tl_d_sink_o(l2_tl_d_sink_o), .tl_d_valid_o(l2_tl_d_valid_o), .tl_d_ready_i(l2_tl_d_ready_i),

        .tl_e_valid_i(l2_tl_e_valid_i), .tl_e_sink_i(l2_tl_e_sink_i), .tl_e_ready_o(l2_tl_e_ready_o),

        .mem_a_opcode_o(mem_a_opcode_o), .mem_a_param_o(mem_a_param_o), .mem_a_size_o(mem_a_size_o), .mem_a_source_o(mem_a_source_o),
        .mem_a_address_o(mem_a_address_o), .mem_a_mask_o(mem_a_mask_o), .mem_a_data_o(mem_a_data_o),
        .mem_a_valid_o(mem_a_valid_o), .mem_a_ready_i(mem_a_ready_i),

        .mem_d_opcode_i(mem_d_opcode_i), .mem_d_param_i(mem_d_param_i), .mem_d_size_i(mem_d_size_i), .mem_d_source_i(mem_d_source_i),
        .mem_d_sink_i(mem_d_sink_i), .mem_d_denied_i(mem_d_denied_i), .mem_d_data_i(mem_d_data_i), .mem_d_corrupt_i(mem_d_corrupt_i),
        .mem_d_valid_i(mem_d_valid_i), .mem_d_ready_o(mem_d_ready_o),

        .bkdr_valid_i(l2_bkdr_valid_i), .bkdr_core_id_i(l2_bkdr_core_id_i), .bkdr_array_id_i(l2_bkdr_array_id_i),
        .bkdr_way_i(l2_bkdr_way_i), .bkdr_set_i(l2_bkdr_set_i), .bkdr_data_i(l2_bkdr_data_i)
    );
endmodule

// ============================================================================
// Socket Wrapper (The Beast)
// ============================================================================
module socket_wrapper (
    input clk, input rst_n,

    // Client 0 Inputs (From L1_0)
    input l1_0_tl_a_valid_o, output l1_0_tl_a_ready_i, input [2:0] l1_0_tl_a_opcode_o, input [2:0] l1_0_tl_a_param_o, input [3:0] l1_0_tl_a_size_o, input [3:0] l1_0_tl_a_source_o, input [63:0] l1_0_tl_a_address_o, input [7:0] l1_0_tl_a_mask_o, input [63:0] l1_0_tl_a_data_o, input l1_0_tl_a_corrupt_o,
    output l1_0_tl_b_valid_i, input l1_0_tl_b_ready_o, output [2:0] l1_0_tl_b_opcode_i, output [2:0] l1_0_tl_b_param_i, output [3:0] l1_0_tl_b_size_i, output [3:0] l1_0_tl_b_source_i, output [63:0] l1_0_tl_b_address_i, output [7:0] l1_0_tl_b_mask_i, output [63:0] l1_0_tl_b_data_i, output l1_0_tl_b_corrupt_i,
    input l1_0_tl_c_valid_o, output l1_0_tl_c_ready_i, input [2:0] l1_0_tl_c_opcode_o, input [2:0] l1_0_tl_c_param_o, input [3:0] l1_0_tl_c_size_o, input [3:0] l1_0_tl_c_source_o, input [63:0] l1_0_tl_c_address_o, input [63:0] l1_0_tl_c_data_o, input l1_0_tl_c_corrupt_o,
    output l1_0_tl_d_valid_i, input l1_0_tl_d_ready_o, output [2:0] l1_0_tl_d_opcode_i, output [1:0] l1_0_tl_d_param_i, output [3:0] l1_0_tl_d_size_i, output [3:0] l1_0_tl_d_source_i, output [3:0] l1_0_tl_d_sink_i, output l1_0_tl_d_denied_i, output [63:0] l1_0_tl_d_data_i, output l1_0_tl_d_corrupt_i,
    input l1_0_tl_e_valid_o, output l1_0_tl_e_ready_i, input [3:0] l1_0_tl_e_sink_o,

    // Client 1 Inputs (From L1_1)
    input l1_1_tl_a_valid_o, output l1_1_tl_a_ready_i, input [2:0] l1_1_tl_a_opcode_o, input [2:0] l1_1_tl_a_param_o, input [3:0] l1_1_tl_a_size_o, input [3:0] l1_1_tl_a_source_o, input [63:0] l1_1_tl_a_address_o, input [7:0] l1_1_tl_a_mask_o, input [63:0] l1_1_tl_a_data_o, input l1_1_tl_a_corrupt_o,
    output l1_1_tl_b_valid_i, input l1_1_tl_b_ready_o, output [2:0] l1_1_tl_b_opcode_i, output [2:0] l1_1_tl_b_param_i, output [3:0] l1_1_tl_b_size_i, output [3:0] l1_1_tl_b_source_i, output [63:0] l1_1_tl_b_address_i, output [7:0] l1_1_tl_b_mask_i, output [63:0] l1_1_tl_b_data_i, output l1_1_tl_b_corrupt_i,
    input l1_1_tl_c_valid_o, output l1_1_tl_c_ready_i, input [2:0] l1_1_tl_c_opcode_o, input [2:0] l1_1_tl_c_param_o, input [3:0] l1_1_tl_c_size_o, input [3:0] l1_1_tl_c_source_o, input [63:0] l1_1_tl_c_address_o, input [63:0] l1_1_tl_c_data_o, input l1_1_tl_c_corrupt_o,
    output l1_1_tl_d_valid_i, input l1_1_tl_d_ready_o, output [2:0] l1_1_tl_d_opcode_i, output [1:0] l1_1_tl_d_param_i, output [3:0] l1_1_tl_d_size_i, output [3:0] l1_1_tl_d_source_i, output [3:0] l1_1_tl_d_sink_i, output l1_1_tl_d_denied_i, output [63:0] l1_1_tl_d_data_i, output l1_1_tl_d_corrupt_i,
    input l1_1_tl_e_valid_o, output l1_1_tl_e_ready_i, input [3:0] l1_1_tl_e_sink_o,

    // Client 2 Inputs (From L1_2)
    input l1_2_tl_a_valid_o, output l1_2_tl_a_ready_i, input [2:0] l1_2_tl_a_opcode_o, input [2:0] l1_2_tl_a_param_o, input [3:0] l1_2_tl_a_size_o, input [3:0] l1_2_tl_a_source_o, input [63:0] l1_2_tl_a_address_o, input [7:0] l1_2_tl_a_mask_o, input [63:0] l1_2_tl_a_data_o, input l1_2_tl_a_corrupt_o,
    output l1_2_tl_b_valid_i, input l1_2_tl_b_ready_o, output [2:0] l1_2_tl_b_opcode_i, output [2:0] l1_2_tl_b_param_i, output [3:0] l1_2_tl_b_size_i, output [3:0] l1_2_tl_b_source_i, output [63:0] l1_2_tl_b_address_i, output [7:0] l1_2_tl_b_mask_i, output [63:0] l1_2_tl_b_data_i, output l1_2_tl_b_corrupt_i,
    input l1_2_tl_c_valid_o, output l1_2_tl_c_ready_i, input [2:0] l1_2_tl_c_opcode_o, input [2:0] l1_2_tl_c_param_o, input [3:0] l1_2_tl_c_size_o, input [3:0] l1_2_tl_c_source_o, input [63:0] l1_2_tl_c_address_o, input [63:0] l1_2_tl_c_data_o, input l1_2_tl_c_corrupt_o,
    output l1_2_tl_d_valid_i, input l1_2_tl_d_ready_o, output [2:0] l1_2_tl_d_opcode_i, output [1:0] l1_2_tl_d_param_i, output [3:0] l1_2_tl_d_size_i, output [3:0] l1_2_tl_d_source_i, output [3:0] l1_2_tl_d_sink_i, output l1_2_tl_d_denied_i, output [63:0] l1_2_tl_d_data_i, output l1_2_tl_d_corrupt_i,
    input l1_2_tl_e_valid_o, output l1_2_tl_e_ready_i, input [3:0] l1_2_tl_e_sink_o,

    // Client 3 Inputs (From L1_3)
    input l1_3_tl_a_valid_o, output l1_3_tl_a_ready_i, input [2:0] l1_3_tl_a_opcode_o, input [2:0] l1_3_tl_a_param_o, input [3:0] l1_3_tl_a_size_o, input [3:0] l1_3_tl_a_source_o, input [63:0] l1_3_tl_a_address_o, input [7:0] l1_3_tl_a_mask_o, input [63:0] l1_3_tl_a_data_o, input l1_3_tl_a_corrupt_o,
    output l1_3_tl_b_valid_i, input l1_3_tl_b_ready_o, output [2:0] l1_3_tl_b_opcode_i, output [2:0] l1_3_tl_b_param_i, output [3:0] l1_3_tl_b_size_i, output [3:0] l1_3_tl_b_source_i, output [63:0] l1_3_tl_b_address_i, output [7:0] l1_3_tl_b_mask_i, output [63:0] l1_3_tl_b_data_i, output l1_3_tl_b_corrupt_i,
    input l1_3_tl_c_valid_o, output l1_3_tl_c_ready_i, input [2:0] l1_3_tl_c_opcode_o, input [2:0] l1_3_tl_c_param_o, input [3:0] l1_3_tl_c_size_o, input [3:0] l1_3_tl_c_source_o, input [63:0] l1_3_tl_c_address_o, input [63:0] l1_3_tl_c_data_o, input l1_3_tl_c_corrupt_o,
    output l1_3_tl_d_valid_i, input l1_3_tl_d_ready_o, output [2:0] l1_3_tl_d_opcode_i, output [1:0] l1_3_tl_d_param_i, output [3:0] l1_3_tl_d_size_i, output [3:0] l1_3_tl_d_source_i, output [3:0] l1_3_tl_d_sink_i, output l1_3_tl_d_denied_i, output [63:0] l1_3_tl_d_data_i, output l1_3_tl_d_corrupt_i,
    input l1_3_tl_e_valid_o, output l1_3_tl_e_ready_i, input [3:0] l1_3_tl_e_sink_o,

    // Manager (To L2)
    output l2_tl_a_valid_i, input l2_tl_a_ready_o, output [2:0] l2_tl_a_opcode_i, output [2:0] l2_tl_a_param_i, output [3:0] l2_tl_a_size_i, output [5:0] l2_tl_a_source_i, output [63:0] l2_tl_a_address_i, output [7:0] l2_tl_a_mask_i, output [63:0] l2_tl_a_data_i, output l2_tl_a_corrupt_i,
    input l2_tl_b_valid_o, output l2_tl_b_ready_i, input [2:0] l2_tl_b_opcode_o, input [2:0] l2_tl_b_param_o, input [3:0] l2_tl_b_size_o, input [5:0] l2_tl_b_source_o, input [63:0] l2_tl_b_address_o, input [7:0] l2_tl_b_mask_o, input [63:0] l2_tl_b_data_o, input l2_tl_b_corrupt_o, input [1:0] l2_tl_b_dest_o,
    output l2_tl_c_valid_i, input l2_tl_c_ready_o, output [2:0] l2_tl_c_opcode_i, output [2:0] l2_tl_c_param_i, output [3:0] l2_tl_c_size_i, output [5:0] l2_tl_c_source_i, output [63:0] l2_tl_c_address_i, output [63:0] l2_tl_c_data_i, output l2_tl_c_corrupt_i,
    input l2_tl_d_valid_o, output l2_tl_d_ready_i, input [2:0] l2_tl_d_opcode_o, input [1:0] l2_tl_d_param_o, input [3:0] l2_tl_d_size_o, input [5:0] l2_tl_d_source_o, input [1:0] l2_tl_d_sink_o, input l2_tl_d_denied_o, input [63:0] l2_tl_d_data_o, input l2_tl_d_corrupt_o,
    output l2_tl_e_valid_i, input l2_tl_e_ready_o, output [1:0] l2_tl_e_sink_i
);
    tl_socket_m1 #(.N_CLIENTS(4)) xbar (
        .clk(clk), .rst_n(rst_n),
        .cli_a_valid_i({l1_3_tl_a_valid_o, l1_2_tl_a_valid_o, l1_1_tl_a_valid_o, l1_0_tl_a_valid_o}),
        .cli_a_ready_o({l1_3_tl_a_ready_i, l1_2_tl_a_ready_i, l1_1_tl_a_ready_i, l1_0_tl_a_ready_i}),
        .cli_a_opcode_i({l1_3_tl_a_opcode_o, l1_2_tl_a_opcode_o, l1_1_tl_a_opcode_o, l1_0_tl_a_opcode_o}),
        .cli_a_param_i({l1_3_tl_a_param_o, l1_2_tl_a_param_o, l1_1_tl_a_param_o, l1_0_tl_a_param_o}),
        .cli_a_size_i({l1_3_tl_a_size_o, l1_2_tl_a_size_o, l1_1_tl_a_size_o, l1_0_tl_a_size_o}),
        .cli_a_source_i({l1_3_tl_a_source_o, l1_2_tl_a_source_o, l1_1_tl_a_source_o, l1_0_tl_a_source_o}),
        .cli_a_address_i({l1_3_tl_a_address_o, l1_2_tl_a_address_o, l1_1_tl_a_address_o, l1_0_tl_a_address_o}),
        .cli_a_mask_i({l1_3_tl_a_mask_o, l1_2_tl_a_mask_o, l1_1_tl_a_mask_o, l1_0_tl_a_mask_o}),
        .cli_a_data_i({l1_3_tl_a_data_o, l1_2_tl_a_data_o, l1_1_tl_a_data_o, l1_0_tl_a_data_o}),
        .cli_a_corrupt_i({l1_3_tl_a_corrupt_o, l1_2_tl_a_corrupt_o, l1_1_tl_a_corrupt_o, l1_0_tl_a_corrupt_o}),

        .cli_b_valid_o({l1_3_tl_b_valid_i, l1_2_tl_b_valid_i, l1_1_tl_b_valid_i, l1_0_tl_b_valid_i}),
        .cli_b_ready_i({l1_3_tl_b_ready_o, l1_2_tl_b_ready_o, l1_1_tl_b_ready_o, l1_0_tl_b_ready_o}),
        .cli_b_opcode_o({l1_3_tl_b_opcode_i, l1_2_tl_b_opcode_i, l1_1_tl_b_opcode_i, l1_0_tl_b_opcode_i}),
        .cli_b_param_o({l1_3_tl_b_param_i, l1_2_tl_b_param_i, l1_1_tl_b_param_i, l1_0_tl_b_param_i}),
        .cli_b_size_o({l1_3_tl_b_size_i, l1_2_tl_b_size_i, l1_1_tl_b_size_i, l1_0_tl_b_size_i}),
        .cli_b_source_o({l1_3_tl_b_source_i, l1_2_tl_b_source_i, l1_1_tl_b_source_i, l1_0_tl_b_source_i}),
        .cli_b_address_o({l1_3_tl_b_address_i, l1_2_tl_b_address_i, l1_1_tl_b_address_i, l1_0_tl_b_address_i}),
        .cli_b_mask_o({l1_3_tl_b_mask_i, l1_2_tl_b_mask_i, l1_1_tl_b_mask_i, l1_0_tl_b_mask_i}),
        .cli_b_data_o({l1_3_tl_b_data_i, l1_2_tl_b_data_i, l1_1_tl_b_data_i, l1_0_tl_b_data_i}),
        .cli_b_corrupt_o({l1_3_tl_b_corrupt_i, l1_2_tl_b_corrupt_i, l1_1_tl_b_corrupt_i, l1_0_tl_b_corrupt_i}),

        .cli_c_valid_i({l1_3_tl_c_valid_o, l1_2_tl_c_valid_o, l1_1_tl_c_valid_o, l1_0_tl_c_valid_o}),
        .cli_c_ready_o({l1_3_tl_c_ready_i, l1_2_tl_c_ready_i, l1_1_tl_c_ready_i, l1_0_tl_c_ready_i}),
        .cli_c_opcode_i({l1_3_tl_c_opcode_o, l1_2_tl_c_opcode_o, l1_1_tl_c_opcode_o, l1_0_tl_c_opcode_o}),
        .cli_c_param_i({l1_3_tl_c_param_o, l1_2_tl_c_param_o, l1_1_tl_c_param_o, l1_0_tl_c_param_o}),
        .cli_c_size_i({l1_3_tl_c_size_o, l1_2_tl_c_size_o, l1_1_tl_c_size_o, l1_0_tl_c_size_o}),
        .cli_c_source_i({l1_3_tl_c_source_o, l1_2_tl_c_source_o, l1_1_tl_c_source_o, l1_0_tl_c_source_o}),
        .cli_c_address_i({l1_3_tl_c_address_o, l1_2_tl_c_address_o, l1_1_tl_c_address_o, l1_0_tl_c_address_o}),
        .cli_c_data_i({l1_3_tl_c_data_o, l1_2_tl_c_data_o, l1_1_tl_c_data_o, l1_0_tl_c_data_o}),
        .cli_c_corrupt_i({l1_3_tl_c_corrupt_o, l1_2_tl_c_corrupt_o, l1_1_tl_c_corrupt_o, l1_0_tl_c_corrupt_o}),

        .cli_d_valid_o({l1_3_tl_d_valid_i, l1_2_tl_d_valid_i, l1_1_tl_d_valid_i, l1_0_tl_d_valid_i}),
        .cli_d_ready_i({l1_3_tl_d_ready_o, l1_2_tl_d_ready_o, l1_1_tl_d_ready_o, l1_0_tl_d_ready_o}),
        .cli_d_opcode_o({l1_3_tl_d_opcode_i, l1_2_tl_d_opcode_i, l1_1_tl_d_opcode_i, l1_0_tl_d_opcode_i}),
        .cli_d_param_o({l1_3_tl_d_param_i, l1_2_tl_d_param_i, l1_1_tl_d_param_i, l1_0_tl_d_param_i}),
        .cli_d_size_o({l1_3_tl_d_size_i, l1_2_tl_d_size_i, l1_1_tl_d_size_i, l1_0_tl_d_size_i}),
        .cli_d_source_o({l1_3_tl_d_source_i, l1_2_tl_d_source_i, l1_1_tl_d_source_i, l1_0_tl_d_source_i}),
        .cli_d_sink_o({l1_3_tl_d_sink_i, l1_2_tl_d_sink_i, l1_1_tl_d_sink_i, l1_0_tl_d_sink_i}),
        .cli_d_denied_o({l1_3_tl_d_denied_i, l1_2_tl_d_denied_i, l1_1_tl_d_denied_i, l1_0_tl_d_denied_i}),
        .cli_d_data_o({l1_3_tl_d_data_i, l1_2_tl_d_data_i, l1_1_tl_d_data_i, l1_0_tl_d_data_i}),
        .cli_d_corrupt_o({l1_3_tl_d_corrupt_i, l1_2_tl_d_corrupt_i, l1_1_tl_d_corrupt_i, l1_0_tl_d_corrupt_i}),

        .cli_e_valid_i({l1_3_tl_e_valid_o, l1_2_tl_e_valid_o, l1_1_tl_e_valid_o, l1_0_tl_e_valid_o}),
        .cli_e_ready_o({l1_3_tl_e_ready_i, l1_2_tl_e_ready_i, l1_1_tl_e_ready_i, l1_0_tl_e_ready_i}),
        .cli_e_sink_i({l1_3_tl_e_sink_o, l1_2_tl_e_sink_o, l1_1_tl_e_sink_o, l1_0_tl_e_sink_o}),

        // Manager Side (L2)
        .mgr_a_valid_o(l2_tl_a_valid_i), .mgr_a_ready_i(l2_tl_a_ready_o), .mgr_a_opcode_o(l2_tl_a_opcode_i), .mgr_a_param_o(l2_tl_a_param_i), .mgr_a_size_o(l2_tl_a_size_i), .mgr_a_source_o(l2_tl_a_source_i), .mgr_a_address_o(l2_tl_a_address_i), .mgr_a_mask_o(l2_tl_a_mask_i), .mgr_a_data_o(l2_tl_a_data_i), .mgr_a_corrupt_o(l2_tl_a_corrupt_i),
        .mgr_b_valid_i(l2_tl_b_valid_o), .mgr_b_ready_o(l2_tl_b_ready_i), .mgr_b_opcode_i(l2_tl_b_opcode_o), .mgr_b_param_i(l2_tl_b_param_o), .mgr_b_size_i(l2_tl_b_size_o), .mgr_b_source_i(l2_tl_b_source_o), .mgr_b_address_i(l2_tl_b_address_o), .mgr_b_mask_i(l2_tl_b_mask_o), .mgr_b_data_i(l2_tl_b_data_o), .mgr_b_corrupt_i(l2_tl_b_corrupt_o), .mgr_b_dest_i(l2_tl_b_dest_o),
        .mgr_c_valid_o(l2_tl_c_valid_i), .mgr_c_ready_i(l2_tl_c_ready_o), .mgr_c_opcode_o(l2_tl_c_opcode_i), .mgr_c_param_o(l2_tl_c_param_i), .mgr_c_size_o(l2_tl_c_size_i), .mgr_c_source_o(l2_tl_c_source_i), .mgr_c_address_o(l2_tl_c_address_i), .mgr_c_data_o(l2_tl_c_data_i), .mgr_c_corrupt_o(l2_tl_c_corrupt_i),
        .mgr_d_valid_i(l2_tl_d_valid_o), .mgr_d_ready_o(l2_tl_d_ready_i), .mgr_d_opcode_i(l2_tl_d_opcode_o), .mgr_d_param_i(l2_tl_d_param_o), .mgr_d_size_i(l2_tl_d_size_o), .mgr_d_source_i(l2_tl_d_source_o), .mgr_d_sink_i(l2_tl_d_sink_o), .mgr_d_denied_i(l2_tl_d_denied_o), .mgr_d_data_i(l2_tl_d_data_o), .mgr_d_corrupt_i(l2_tl_d_corrupt_o),
        .mgr_e_valid_o(l2_tl_e_valid_i), .mgr_e_ready_i(l2_tl_e_ready_o), .mgr_e_sink_o(l2_tl_e_sink_i)
    );
endmodule

module mem_wrapper (
    input clk, input rst_n,
    input mem_a_valid_o, output mem_a_ready_i, input [2:0] mem_a_opcode_o, input [2:0] mem_a_param_o, input [2:0] mem_a_size_o, input [3:0] mem_a_source_o, input [63:0] mem_a_address_o, input [7:0] mem_a_mask_o, input [63:0] mem_a_data_o, // input mem_a_valid_corrupt_o // removed
    output mem_d_valid_i, input mem_d_ready_o, output [2:0] mem_d_opcode_i, output [1:0] mem_d_param_i, output [2:0] mem_d_size_i, output [3:0] mem_d_source_i, output [1:0] mem_d_sink_i, output mem_d_denied_i, output [63:0] mem_d_data_i, output mem_d_corrupt_i
);
    simple_ram mem (
        .clk(clk), .rst_n(rst_n),
        .a_valid(mem_a_valid_o), .a_ready(mem_a_ready_i), .a_opcode(mem_a_opcode_o), .a_param(mem_a_param_o), .a_size(mem_a_size_o), .a_source(mem_a_source_o), .a_address(mem_a_address_o), .a_mask(mem_a_mask_o), .a_data(mem_a_data_o),
        .d_valid(mem_d_valid_i), .d_ready(mem_d_ready_o), .d_opcode(mem_d_opcode_i), .d_param(mem_d_param_i), .d_size(mem_d_size_i), .d_source(mem_d_source_i), .d_sink(mem_d_sink_i), .d_denied(mem_d_denied_i), .d_data(mem_d_data_i), .d_corrupt(mem_d_corrupt_i)
    );
endmodule

// ============================================================================
// Monitor Wrappers
// ============================================================================
module mon_l1_wrapper_0 (
    input clk, input rst_n,
    input l1_0_tl_a_valid_o, input l1_0_tl_a_ready_i, input [2:0] l1_0_tl_a_opcode_o, input [2:0] l1_0_tl_a_param_o, input [3:0] l1_0_tl_a_size_o, input [3:0] l1_0_tl_a_source_o, input [63:0] l1_0_tl_a_address_o, input [7:0] l1_0_tl_a_mask_o, input [63:0] l1_0_tl_a_data_o, 
    input l1_0_tl_b_valid_i, input l1_0_tl_b_ready_o, input [2:0] l1_0_tl_b_opcode_i, input [2:0] l1_0_tl_b_param_i, input [3:0] l1_0_tl_b_size_i, input [3:0] l1_0_tl_b_source_i, input [63:0] l1_0_tl_b_address_i, input [7:0] l1_0_tl_b_mask_i, input [63:0] l1_0_tl_b_data_i,
    input l1_0_tl_c_valid_o, input l1_0_tl_c_ready_i, input [2:0] l1_0_tl_c_opcode_o, input [2:0] l1_0_tl_c_param_o, input [3:0] l1_0_tl_c_size_o, input [3:0] l1_0_tl_c_source_o, input [63:0] l1_0_tl_c_address_o, input [63:0] l1_0_tl_c_data_o,
    input l1_0_tl_d_valid_i, input l1_0_tl_d_ready_o, input [2:0] l1_0_tl_d_opcode_i, input [1:0] l1_0_tl_d_param_i, input [3:0] l1_0_tl_d_size_i, input [3:0] l1_0_tl_d_source_i, input [3:0] l1_0_tl_d_sink_i, input l1_0_tl_d_denied_i, input [63:0] l1_0_tl_d_data_i,
    input l1_0_tl_e_valid_o, input l1_0_tl_e_ready_i, input [3:0] l1_0_tl_e_sink_o
);
    tl_monitor #(.CHANNEL_NAME("L1[0]")) mon (
        .a_valid(l1_0_tl_a_valid_o), .a_ready(l1_0_tl_a_ready_i), .a_opcode(l1_0_tl_a_opcode_o), .a_param(l1_0_tl_a_param_o), .a_size(l1_0_tl_a_size_o), .a_source(l1_0_tl_a_source_o), .a_address(l1_0_tl_a_address_o), .a_mask(l1_0_tl_a_mask_o), .a_data(l1_0_tl_a_data_o),
        .b_valid(l1_0_tl_b_valid_i), .b_ready(l1_0_tl_b_ready_o), .b_opcode(l1_0_tl_b_opcode_i), .b_param(l1_0_tl_b_param_i), .b_size(l1_0_tl_b_size_i), .b_source(l1_0_tl_b_source_i), .b_address(l1_0_tl_b_address_i), .b_mask(l1_0_tl_b_mask_i), .b_data(l1_0_tl_b_data_i),
        .c_valid(l1_0_tl_c_valid_o), .c_ready(l1_0_tl_c_ready_i), .c_opcode(l1_0_tl_c_opcode_o), .c_param(l1_0_tl_c_param_o), .c_size(l1_0_tl_c_size_o), .c_source(l1_0_tl_c_source_o), .c_address(l1_0_tl_c_address_o), .c_data(l1_0_tl_c_data_o),
        .d_valid(l1_0_tl_d_valid_i), .d_ready(l1_0_tl_d_ready_o), .d_opcode(l1_0_tl_d_opcode_i), .d_param(l1_0_tl_d_param_i), .d_size(l1_0_tl_d_size_i), .d_source(l1_0_tl_d_source_i), .d_sink(l1_0_tl_d_sink_i), .d_denied(l1_0_tl_d_denied_i), .d_data(l1_0_tl_d_data_i),
        .e_valid(l1_0_tl_e_valid_o), .e_ready(l1_0_tl_e_ready_i), .e_sink(l1_0_tl_e_sink_o)
    );
endmodule

module mon_l1_wrapper_1 (
    input clk, input rst_n,
    input l1_1_tl_a_valid_o, input l1_1_tl_a_ready_i, input [2:0] l1_1_tl_a_opcode_o, input [2:0] l1_1_tl_a_param_o, input [3:0] l1_1_tl_a_size_o, input [3:0] l1_1_tl_a_source_o, input [63:0] l1_1_tl_a_address_o, input [7:0] l1_1_tl_a_mask_o, input [63:0] l1_1_tl_a_data_o, 
    input l1_1_tl_b_valid_i, input l1_1_tl_b_ready_o, input [2:0] l1_1_tl_b_opcode_i, input [2:0] l1_1_tl_b_param_i, input [3:0] l1_1_tl_b_size_i, input [3:0] l1_1_tl_b_source_i, input [63:0] l1_1_tl_b_address_i, input [7:0] l1_1_tl_b_mask_i, input [63:0] l1_1_tl_b_data_i,
    input l1_1_tl_c_valid_o, input l1_1_tl_c_ready_i, input [2:0] l1_1_tl_c_opcode_o, input [2:0] l1_1_tl_c_param_o, input [3:0] l1_1_tl_c_size_o, input [3:0] l1_1_tl_c_source_o, input [63:0] l1_1_tl_c_address_o, input [63:0] l1_1_tl_c_data_o,
    input l1_1_tl_d_valid_i, input l1_1_tl_d_ready_o, input [2:0] l1_1_tl_d_opcode_i, input [1:0] l1_1_tl_d_param_i, input [3:0] l1_1_tl_d_size_i, input [3:0] l1_1_tl_d_source_i, input [3:0] l1_1_tl_d_sink_i, input l1_1_tl_d_denied_i, input [63:0] l1_1_tl_d_data_i,
    input l1_1_tl_e_valid_o, input l1_1_tl_e_ready_i, input [3:0] l1_1_tl_e_sink_o
);
    tl_monitor #(.CHANNEL_NAME("L1[1]")) mon (
        .a_valid(l1_1_tl_a_valid_o), .a_ready(l1_1_tl_a_ready_i), .a_opcode(l1_1_tl_a_opcode_o), .a_param(l1_1_tl_a_param_o), .a_size(l1_1_tl_a_size_o), .a_source(l1_1_tl_a_source_o), .a_address(l1_1_tl_a_address_o), .a_mask(l1_1_tl_a_mask_o), .a_data(l1_1_tl_a_data_o),
        .b_valid(l1_1_tl_b_valid_i), .b_ready(l1_1_tl_b_ready_o), .b_opcode(l1_1_tl_b_opcode_i), .b_param(l1_1_tl_b_param_i), .b_size(l1_1_tl_b_size_i), .b_source(l1_1_tl_b_source_i), .b_address(l1_1_tl_b_address_i), .b_mask(l1_1_tl_b_mask_i), .b_data(l1_1_tl_b_data_i),
        .c_valid(l1_1_tl_c_valid_o), .c_ready(l1_1_tl_c_ready_i), .c_opcode(l1_1_tl_c_opcode_o), .c_param(l1_1_tl_c_param_o), .c_size(l1_1_tl_c_size_o), .c_source(l1_1_tl_c_source_o), .c_address(l1_1_tl_c_address_o), .c_data(l1_1_tl_c_data_o),
        .d_valid(l1_1_tl_d_valid_i), .d_ready(l1_1_tl_d_ready_o), .d_opcode(l1_1_tl_d_opcode_i), .d_param(l1_1_tl_d_param_i), .d_size(l1_1_tl_d_size_i), .d_source(l1_1_tl_d_source_i), .d_sink(l1_1_tl_d_sink_i), .d_denied(l1_1_tl_d_denied_i), .d_data(l1_1_tl_d_data_i),
        .e_valid(l1_1_tl_e_valid_o), .e_ready(l1_1_tl_e_ready_i), .e_sink(l1_1_tl_e_sink_o)
    );
endmodule

module mon_l1_wrapper_2 (
    input clk, input rst_n,
    input l1_2_tl_a_valid_o, input l1_2_tl_a_ready_i, input [2:0] l1_2_tl_a_opcode_o, input [2:0] l1_2_tl_a_param_o, input [3:0] l1_2_tl_a_size_o, input [3:0] l1_2_tl_a_source_o, input [63:0] l1_2_tl_a_address_o, input [7:0] l1_2_tl_a_mask_o, input [63:0] l1_2_tl_a_data_o, 
    input l1_2_tl_b_valid_i, input l1_2_tl_b_ready_o, input [2:0] l1_2_tl_b_opcode_i, input [2:0] l1_2_tl_b_param_i, input [3:0] l1_2_tl_b_size_i, input [3:0] l1_2_tl_b_source_i, input [63:0] l1_2_tl_b_address_i, input [7:0] l1_2_tl_b_mask_i, input [63:0] l1_2_tl_b_data_i,
    input l1_2_tl_c_valid_o, input l1_2_tl_c_ready_i, input [2:0] l1_2_tl_c_opcode_o, input [2:0] l1_2_tl_c_param_o, input [3:0] l1_2_tl_c_size_o, input [3:0] l1_2_tl_c_source_o, input [63:0] l1_2_tl_c_address_o, input [63:0] l1_2_tl_c_data_o,
    input l1_2_tl_d_valid_i, input l1_2_tl_d_ready_o, input [2:0] l1_2_tl_d_opcode_i, input [1:0] l1_2_tl_d_param_i, input [3:0] l1_2_tl_d_size_i, input [3:0] l1_2_tl_d_source_i, input [3:0] l1_2_tl_d_sink_i, input l1_2_tl_d_denied_i, input [63:0] l1_2_tl_d_data_i,
    input l1_2_tl_e_valid_o, input l1_2_tl_e_ready_i, input [3:0] l1_2_tl_e_sink_o
);
    tl_monitor #(.CHANNEL_NAME("L1[2]")) mon (
        .a_valid(l1_2_tl_a_valid_o), .a_ready(l1_2_tl_a_ready_i), .a_opcode(l1_2_tl_a_opcode_o), .a_param(l1_2_tl_a_param_o), .a_size(l1_2_tl_a_size_o), .a_source(l1_2_tl_a_source_o), .a_address(l1_2_tl_a_address_o), .a_mask(l1_2_tl_a_mask_o), .a_data(l1_2_tl_a_data_o),
        .b_valid(l1_2_tl_b_valid_i), .b_ready(l1_2_tl_b_ready_o), .b_opcode(l1_2_tl_b_opcode_i), .b_param(l1_2_tl_b_param_i), .b_size(l1_2_tl_b_size_i), .b_source(l1_2_tl_b_source_i), .b_address(l1_2_tl_b_address_i), .b_mask(l1_2_tl_b_mask_i), .b_data(l1_2_tl_b_data_i),
        .c_valid(l1_2_tl_c_valid_o), .c_ready(l1_2_tl_c_ready_i), .c_opcode(l1_2_tl_c_opcode_o), .c_param(l1_2_tl_c_param_o), .c_size(l1_2_tl_c_size_o), .c_source(l1_2_tl_c_source_o), .c_address(l1_2_tl_c_address_o), .c_data(l1_2_tl_c_data_o),
        .d_valid(l1_2_tl_d_valid_i), .d_ready(l1_2_tl_d_ready_o), .d_opcode(l1_2_tl_d_opcode_i), .d_param(l1_2_tl_d_param_i), .d_size(l1_2_tl_d_size_i), .d_source(l1_2_tl_d_source_i), .d_sink(l1_2_tl_d_sink_i), .d_denied(l1_2_tl_d_denied_i), .d_data(l1_2_tl_d_data_i),
        .e_valid(l1_2_tl_e_valid_o), .e_ready(l1_2_tl_e_ready_i), .e_sink(l1_2_tl_e_sink_o)
    );
endmodule

module mon_l1_wrapper_3 (
    input clk, input rst_n,
    input l1_3_tl_a_valid_o, input l1_3_tl_a_ready_i, input [2:0] l1_3_tl_a_opcode_o, input [2:0] l1_3_tl_a_param_o, input [3:0] l1_3_tl_a_size_o, input [3:0] l1_3_tl_a_source_o, input [63:0] l1_3_tl_a_address_o, input [7:0] l1_3_tl_a_mask_o, input [63:0] l1_3_tl_a_data_o, 
    input l1_3_tl_b_valid_i, input l1_3_tl_b_ready_o, input [2:0] l1_3_tl_b_opcode_i, input [2:0] l1_3_tl_b_param_i, input [3:0] l1_3_tl_b_size_i, input [3:0] l1_3_tl_b_source_i, input [63:0] l1_3_tl_b_address_i, input [7:0] l1_3_tl_b_mask_i, input [63:0] l1_3_tl_b_data_i,
    input l1_3_tl_c_valid_o, input l1_3_tl_c_ready_i, input [2:0] l1_3_tl_c_opcode_o, input [2:0] l1_3_tl_c_param_o, input [3:0] l1_3_tl_c_size_o, input [3:0] l1_3_tl_c_source_o, input [63:0] l1_3_tl_c_address_o, input [63:0] l1_3_tl_c_data_o,
    input l1_3_tl_d_valid_i, input l1_3_tl_d_ready_o, input [2:0] l1_3_tl_d_opcode_i, input [1:0] l1_3_tl_d_param_i, input [3:0] l1_3_tl_d_size_i, input [3:0] l1_3_tl_d_source_i, input [3:0] l1_3_tl_d_sink_i, input l1_3_tl_d_denied_i, input [63:0] l1_3_tl_d_data_i,
    input l1_3_tl_e_valid_o, input l1_3_tl_e_ready_i, input [3:0] l1_3_tl_e_sink_o
);
    tl_monitor #(.CHANNEL_NAME("L1[3]")) mon (
        .a_valid(l1_3_tl_a_valid_o), .a_ready(l1_3_tl_a_ready_i), .a_opcode(l1_3_tl_a_opcode_o), .a_param(l1_3_tl_a_param_o), .a_size(l1_3_tl_a_size_o), .a_source(l1_3_tl_a_source_o), .a_address(l1_3_tl_a_address_o), .a_mask(l1_3_tl_a_mask_o), .a_data(l1_3_tl_a_data_o),
        .b_valid(l1_3_tl_b_valid_i), .b_ready(l1_3_tl_b_ready_o), .b_opcode(l1_3_tl_b_opcode_i), .b_param(l1_3_tl_b_param_i), .b_size(l1_3_tl_b_size_i), .b_source(l1_3_tl_b_source_i), .b_address(l1_3_tl_b_address_i), .b_mask(l1_3_tl_b_mask_i), .b_data(l1_3_tl_b_data_i),
        .c_valid(l1_3_tl_c_valid_o), .c_ready(l1_3_tl_c_ready_i), .c_opcode(l1_3_tl_c_opcode_o), .c_param(l1_3_tl_c_param_o), .c_size(l1_3_tl_c_size_o), .c_source(l1_3_tl_c_source_o), .c_address(l1_3_tl_c_address_o), .c_data(l1_3_tl_c_data_o),
        .d_valid(l1_3_tl_d_valid_i), .d_ready(l1_3_tl_d_ready_o), .d_opcode(l1_3_tl_d_opcode_i), .d_param(l1_3_tl_d_param_i), .d_size(l1_3_tl_d_size_i), .d_source(l1_3_tl_d_source_i), .d_sink(l1_3_tl_d_sink_i), .d_denied(l1_3_tl_d_denied_i), .d_data(l1_3_tl_d_data_i),
        .e_valid(l1_3_tl_e_valid_o), .e_ready(l1_3_tl_e_ready_i), .e_sink(l1_3_tl_e_sink_o)
    );
endmodule

module mon_l2_wrapper (

    input l2_tl_a_valid_i, input l2_tl_a_ready_o, input [2:0] l2_tl_a_opcode_i, input [2:0] l2_tl_a_param_i, input [3:0] l2_tl_a_size_i, input [5:0] l2_tl_a_source_i, input [63:0] l2_tl_a_address_i, input [7:0] l2_tl_a_mask_i, input [63:0] l2_tl_a_data_i,
    input l2_tl_b_valid_o, input l2_tl_b_ready_i, input [2:0] l2_tl_b_opcode_o, input [2:0] l2_tl_b_param_o, input [3:0] l2_tl_b_size_o, input [5:0] l2_tl_b_source_o, input [63:0] l2_tl_b_address_o, input [7:0] l2_tl_b_mask_o, input [63:0] l2_tl_b_data_o,
    input l2_tl_c_valid_i, input l2_tl_c_ready_o, input [2:0] l2_tl_c_opcode_i, input [2:0] l2_tl_c_param_i, input [3:0] l2_tl_c_size_i, input [5:0] l2_tl_c_source_i, input [63:0] l2_tl_c_address_i, input [63:0] l2_tl_c_data_i,
    input l2_tl_d_valid_o, input l2_tl_d_ready_i, input [2:0] l2_tl_d_opcode_o, input [1:0] l2_tl_d_param_o, input [3:0] l2_tl_d_size_o, input [5:0] l2_tl_d_source_o, input [1:0] l2_tl_d_sink_o, input l2_tl_d_denied_o, input [63:0] l2_tl_d_data_o,
    input l2_tl_e_valid_i, input l2_tl_e_ready_o, input [1:0] l2_tl_e_sink_i
);
    tl_monitor #(.CHANNEL_NAME("L2"), .IS_MANAGER(1), .SOURCE_W(6), .SINK_W(2)) mon (

        .a_valid(l2_tl_a_valid_i), .a_ready(l2_tl_a_ready_o), .a_opcode(l2_tl_a_opcode_i), .a_param(l2_tl_a_param_i), .a_size(l2_tl_a_size_i), .a_source(l2_tl_a_source_i), .a_address(l2_tl_a_address_i), .a_mask(l2_tl_a_mask_i), .a_data(l2_tl_a_data_i),
        .b_valid(l2_tl_b_valid_o), .b_ready(l2_tl_b_ready_i), .b_opcode(l2_tl_b_opcode_o), .b_param(l2_tl_b_param_o), .b_size(l2_tl_b_size_o), .b_source(l2_tl_b_source_o), .b_address(l2_tl_b_address_o), .b_mask(l2_tl_b_mask_o), .b_data(l2_tl_b_data_o),
        .c_valid(l2_tl_c_valid_i), .c_ready(l2_tl_c_ready_o), .c_opcode(l2_tl_c_opcode_i), .c_param(l2_tl_c_param_i), .c_size(l2_tl_c_size_i), .c_source(l2_tl_c_source_i), .c_address(l2_tl_c_address_i), .c_data(l2_tl_c_data_i),
        .d_valid(l2_tl_d_valid_o), .d_ready(l2_tl_d_ready_i), .d_opcode(l2_tl_d_opcode_o), .d_param(l2_tl_d_param_o), .d_size(l2_tl_d_size_o), .d_source(l2_tl_d_source_o), .d_sink(l2_tl_d_sink_o), .d_denied(l2_tl_d_denied_o), .d_data(l2_tl_d_data_o),
        .e_valid(l2_tl_e_valid_i), .e_ready(l2_tl_e_ready_o), .e_sink(l2_tl_e_sink_i)
    );
endmodule

module mon_mem_wrapper (
    input clk, input rst_n,
    input mem_a_valid_o, input mem_a_ready_i, input [2:0] mem_a_opcode_o, input [2:0] mem_a_param_o, input [2:0] mem_a_size_o, input [3:0] mem_a_source_o, input [63:0] mem_a_address_o, input [7:0] mem_a_mask_o, input [63:0] mem_a_data_o,
    input mem_d_valid_i, input mem_d_ready_o, input [2:0] mem_d_opcode_i, input [1:0] mem_d_param_i, input [2:0] mem_d_size_i, input [3:0] mem_d_source_i, input [1:0] mem_d_sink_i, input mem_d_denied_i, input [63:0] mem_d_data_i
);
    tl_monitor #(.CHANNEL_NAME("MEM"), .IS_MANAGER(1), .SINK_W(2)) mon (
        .a_valid(mem_a_valid_o), .a_ready(mem_a_ready_i), .a_opcode(mem_a_opcode_o), .a_param(mem_a_param_o), .a_size({1'b0, mem_a_size_o}), .a_source(mem_a_source_o), .a_address(mem_a_address_o), .a_mask(mem_a_mask_o), .a_data(mem_a_data_o),
        .b_valid(1'b0), .b_ready(1'b1), .b_opcode(3'b0), .b_param(3'b0), .b_size(4'b0), .b_source(4'b0), .b_address(64'b0), .b_mask(8'b0), .b_data(64'b0),
        .c_valid(1'b0), .c_ready(1'b1), .c_opcode(3'b0), .c_param(3'b0), .c_size(4'b0), .c_source(4'b0), .c_address(64'b0), .c_data(64'b0),
        .d_valid(mem_d_valid_i), .d_ready(mem_d_ready_o), .d_opcode(mem_d_opcode_i), .d_param(mem_d_param_i), .d_size({1'b0, mem_d_size_i}), .d_source(mem_d_source_i), .d_sink(mem_d_sink_i), .d_denied(mem_d_denied_i), .d_data(mem_d_data_i),
        .e_valid(1'b0), .e_ready(1'b1), .e_sink(4'b0)
    );
endmodule



