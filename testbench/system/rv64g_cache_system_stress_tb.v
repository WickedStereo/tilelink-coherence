`timescale 1ns/100ps
`include "params.vh"
`include "testbench/system/dut_wrappers.v"  // wrappers for unique ports

module rv64g_cache_system_stress_tb;

    // Parameters
    parameter ADDR_W = 64;
    parameter DATA_W = 64;
    parameter CORES  = 4;

    // Clock and Reset
    wire clk;
    wire rst_n;

    // ========================================================================
    // INTERCONECT WIRES
    // ========================================================================
    
    // CPU Interface Wires (Between Sequencer and Stimulus Wrappers)
    // Core 0
    wire cpu_req_0, cpu_we_0, cpu_amo_0, cpu_lr_0, cpu_sc_0, cpu_amo_word_0;
    wire [7:0] cpu_be_0; wire [63:0] cpu_addr_0, cpu_wdata_0; wire [4:0] cpu_amo_op_0;
    wire cpu_gnt_0, cpu_rvalid_0; wire [63:0] cpu_rdata_0;

    // Core 1
    wire cpu_req_1, cpu_we_1, cpu_amo_1, cpu_lr_1, cpu_sc_1, cpu_amo_word_1;
    wire [7:0] cpu_be_1; wire [63:0] cpu_addr_1, cpu_wdata_1; wire [4:0] cpu_amo_op_1;
    wire cpu_gnt_1, cpu_rvalid_1; wire [63:0] cpu_rdata_1;

    // Core 2
    wire cpu_req_2, cpu_we_2, cpu_amo_2, cpu_lr_2, cpu_sc_2, cpu_amo_word_2;
    wire [7:0] cpu_be_2; wire [63:0] cpu_addr_2, cpu_wdata_2; wire [4:0] cpu_amo_op_2;
    wire cpu_gnt_2, cpu_rvalid_2; wire [63:0] cpu_rdata_2;

    // Core 3
    wire cpu_req_3, cpu_we_3, cpu_amo_3, cpu_lr_3, cpu_sc_3, cpu_amo_word_3;
    wire [7:0] cpu_be_3; wire [63:0] cpu_addr_3, cpu_wdata_3; wire [4:0] cpu_amo_op_3;
    wire cpu_gnt_3, cpu_rvalid_3; wire [63:0] cpu_rdata_3;

    // Stimulus -> L1 Wires (The missing link!)
    // Core 0
    wire core0_req_i, core0_we_i, core0_amo_i, core0_lr_i, core0_sc_i, core0_amo_word_i;
    wire [7:0] core0_be_i; wire [63:0] core0_addr_i, core0_wdata_i; wire [4:0] core0_amo_op_i;
    wire core0_gnt_o, core0_rvalid_o; wire [63:0] core0_rdata_o;

    // Core 1
    wire core1_req_i, core1_we_i, core1_amo_i, core1_lr_i, core1_sc_i, core1_amo_word_i;
    wire [7:0] core1_be_i; wire [63:0] core1_addr_i, core1_wdata_i; wire [4:0] core1_amo_op_i;
    wire core1_gnt_o, core1_rvalid_o; wire [63:0] core1_rdata_o;

    // Core 2
    wire core2_req_i, core2_we_i, core2_amo_i, core2_lr_i, core2_sc_i, core2_amo_word_i;
    wire [7:0] core2_be_i; wire [63:0] core2_addr_i, core2_wdata_i; wire [4:0] core2_amo_op_i;
    wire core2_gnt_o, core2_rvalid_o; wire [63:0] core2_rdata_o;

    // Core 3
    wire core3_req_i, core3_we_i, core3_amo_i, core3_lr_i, core3_sc_i, core3_amo_word_i;
    wire [7:0] core3_be_i; wire [63:0] core3_addr_i, core3_wdata_i; wire [4:0] core3_amo_op_i;
    wire core3_gnt_o, core3_rvalid_o; wire [63:0] core3_rdata_o;


    // Backdoor Wires (Exploded per instance)
    // L1[0]
    wire l1_0_bkdr_valid_i; wire [3:0] l1_0_bkdr_core_id_i; wire [1:0] l1_0_bkdr_array_id_i; wire [7:0] l1_0_bkdr_way_i; wire [15:0] l1_0_bkdr_set_i; wire [63:0] l1_0_bkdr_data_i;
    // L1[1]
    wire l1_1_bkdr_valid_i; wire [3:0] l1_1_bkdr_core_id_i; wire [1:0] l1_1_bkdr_array_id_i; wire [7:0] l1_1_bkdr_way_i; wire [15:0] l1_1_bkdr_set_i; wire [63:0] l1_1_bkdr_data_i;
    // L1[2]
    wire l1_2_bkdr_valid_i; wire [3:0] l1_2_bkdr_core_id_i; wire [1:0] l1_2_bkdr_array_id_i; wire [7:0] l1_2_bkdr_way_i; wire [15:0] l1_2_bkdr_set_i; wire [63:0] l1_2_bkdr_data_i;
    // L1[3]
    wire l1_3_bkdr_valid_i; wire [3:0] l1_3_bkdr_core_id_i; wire [1:0] l1_3_bkdr_array_id_i; wire [7:0] l1_3_bkdr_way_i; wire [15:0] l1_3_bkdr_set_i; wire [63:0] l1_3_bkdr_data_i;
    // L2
    wire l2_bkdr_valid_i; wire [3:0] l2_bkdr_core_id_i; wire [1:0] l2_bkdr_array_id_i; wire [7:0] l2_bkdr_way_i; wire [15:0] l2_bkdr_set_i; wire [63:0] l2_bkdr_data_i;


    // TileLink Wires (L1 -> Xbar)
    // Core 0
    wire l1_0_tl_a_valid_o, l1_0_tl_a_ready_i; wire [2:0] l1_0_tl_a_opcode_o, l1_0_tl_a_param_o; wire [3:0] l1_0_tl_a_size_o, l1_0_tl_a_source_o; wire [63:0] l1_0_tl_a_address_o; wire [7:0] l1_0_tl_a_mask_o; wire [63:0] l1_0_tl_a_data_o; wire l1_0_tl_a_corrupt_o;
    wire l1_0_tl_b_valid_i, l1_0_tl_b_ready_o; wire [2:0] l1_0_tl_b_opcode_i, l1_0_tl_b_param_i; wire [3:0] l1_0_tl_b_size_i, l1_0_tl_b_source_i; wire [63:0] l1_0_tl_b_address_i; wire [7:0] l1_0_tl_b_mask_i; wire [63:0] l1_0_tl_b_data_i; wire l1_0_tl_b_corrupt_i;
    wire l1_0_tl_c_valid_o, l1_0_tl_c_ready_i; wire [2:0] l1_0_tl_c_opcode_o, l1_0_tl_c_param_o; wire [3:0] l1_0_tl_c_size_o, l1_0_tl_c_source_o; wire [63:0] l1_0_tl_c_address_o, l1_0_tl_c_data_o; wire l1_0_tl_c_corrupt_o;
    wire l1_0_tl_d_valid_i, l1_0_tl_d_ready_o; wire [2:0] l1_0_tl_d_opcode_i; wire [1:0] l1_0_tl_d_param_i; wire [3:0] l1_0_tl_d_size_i, l1_0_tl_d_source_i, l1_0_tl_d_sink_i; wire l1_0_tl_d_denied_i; wire [63:0] l1_0_tl_d_data_i; wire l1_0_tl_d_corrupt_i;
    wire l1_0_tl_e_valid_o, l1_0_tl_e_ready_i; wire [3:0] l1_0_tl_e_sink_o;

    // Core 1
    wire l1_1_tl_a_valid_o, l1_1_tl_a_ready_i; wire [2:0] l1_1_tl_a_opcode_o, l1_1_tl_a_param_o; wire [3:0] l1_1_tl_a_size_o, l1_1_tl_a_source_o; wire [63:0] l1_1_tl_a_address_o; wire [7:0] l1_1_tl_a_mask_o; wire [63:0] l1_1_tl_a_data_o; wire l1_1_tl_a_corrupt_o;
    wire l1_1_tl_b_valid_i, l1_1_tl_b_ready_o; wire [2:0] l1_1_tl_b_opcode_i, l1_1_tl_b_param_i; wire [3:0] l1_1_tl_b_size_i, l1_1_tl_b_source_i; wire [63:0] l1_1_tl_b_address_i; wire [7:0] l1_1_tl_b_mask_i; wire [63:0] l1_1_tl_b_data_i; wire l1_1_tl_b_corrupt_i;
    wire l1_1_tl_c_valid_o, l1_1_tl_c_ready_i; wire [2:0] l1_1_tl_c_opcode_o, l1_1_tl_c_param_o; wire [3:0] l1_1_tl_c_size_o, l1_1_tl_c_source_o; wire [63:0] l1_1_tl_c_address_o, l1_1_tl_c_data_o; wire l1_1_tl_c_corrupt_o;
    wire l1_1_tl_d_valid_i, l1_1_tl_d_ready_o; wire [2:0] l1_1_tl_d_opcode_i; wire [1:0] l1_1_tl_d_param_i; wire [3:0] l1_1_tl_d_size_i, l1_1_tl_d_source_i, l1_1_tl_d_sink_i; wire l1_1_tl_d_denied_i; wire [63:0] l1_1_tl_d_data_i; wire l1_1_tl_d_corrupt_i;
    wire l1_1_tl_e_valid_o, l1_1_tl_e_ready_i; wire [3:0] l1_1_tl_e_sink_o;

    // Core 2
    wire l1_2_tl_a_valid_o, l1_2_tl_a_ready_i; wire [2:0] l1_2_tl_a_opcode_o, l1_2_tl_a_param_o; wire [3:0] l1_2_tl_a_size_o, l1_2_tl_a_source_o; wire [63:0] l1_2_tl_a_address_o; wire [7:0] l1_2_tl_a_mask_o; wire [63:0] l1_2_tl_a_data_o; wire l1_2_tl_a_corrupt_o;
    wire l1_2_tl_b_valid_i, l1_2_tl_b_ready_o; wire [2:0] l1_2_tl_b_opcode_i, l1_2_tl_b_param_i; wire [3:0] l1_2_tl_b_size_i, l1_2_tl_b_source_i; wire [63:0] l1_2_tl_b_address_i; wire [7:0] l1_2_tl_b_mask_i; wire [63:0] l1_2_tl_b_data_i; wire l1_2_tl_b_corrupt_i;
    wire l1_2_tl_c_valid_o, l1_2_tl_c_ready_i; wire [2:0] l1_2_tl_c_opcode_o, l1_2_tl_c_param_o; wire [3:0] l1_2_tl_c_size_o, l1_2_tl_c_source_o; wire [63:0] l1_2_tl_c_address_o, l1_2_tl_c_data_o; wire l1_2_tl_c_corrupt_o;
    wire l1_2_tl_d_valid_i, l1_2_tl_d_ready_o; wire [2:0] l1_2_tl_d_opcode_i; wire [1:0] l1_2_tl_d_param_i; wire [3:0] l1_2_tl_d_size_i, l1_2_tl_d_source_i, l1_2_tl_d_sink_i; wire l1_2_tl_d_denied_i; wire [63:0] l1_2_tl_d_data_i; wire l1_2_tl_d_corrupt_i;
    wire l1_2_tl_e_valid_o, l1_2_tl_e_ready_i; wire [3:0] l1_2_tl_e_sink_o;

    // Core 3
    wire l1_3_tl_a_valid_o, l1_3_tl_a_ready_i; wire [2:0] l1_3_tl_a_opcode_o, l1_3_tl_a_param_o; wire [3:0] l1_3_tl_a_size_o, l1_3_tl_a_source_o; wire [63:0] l1_3_tl_a_address_o; wire [7:0] l1_3_tl_a_mask_o; wire [63:0] l1_3_tl_a_data_o; wire l1_3_tl_a_corrupt_o;
    wire l1_3_tl_b_valid_i, l1_3_tl_b_ready_o; wire [2:0] l1_3_tl_b_opcode_i, l1_3_tl_b_param_i; wire [3:0] l1_3_tl_b_size_i, l1_3_tl_b_source_i; wire [63:0] l1_3_tl_b_address_i; wire [7:0] l1_3_tl_b_mask_i; wire [63:0] l1_3_tl_b_data_i; wire l1_3_tl_b_corrupt_i;
    wire l1_3_tl_c_valid_o, l1_3_tl_c_ready_i; wire [2:0] l1_3_tl_c_opcode_o, l1_3_tl_c_param_o; wire [3:0] l1_3_tl_c_size_o, l1_3_tl_c_source_o; wire [63:0] l1_3_tl_c_address_o, l1_3_tl_c_data_o; wire l1_3_tl_c_corrupt_o;
    wire l1_3_tl_d_valid_i, l1_3_tl_d_ready_o; wire [2:0] l1_3_tl_d_opcode_i; wire [1:0] l1_3_tl_d_param_i; wire [3:0] l1_3_tl_d_size_i, l1_3_tl_d_source_i, l1_3_tl_d_sink_i; wire l1_3_tl_d_denied_i; wire [63:0] l1_3_tl_d_data_i; wire l1_3_tl_d_corrupt_i;
    wire l1_3_tl_e_valid_o, l1_3_tl_e_ready_i; wire [3:0] l1_3_tl_e_sink_o;

    // TL Socket M1 (Level 2 Interface)
    wire l2_tl_a_valid_i, l2_tl_a_ready_o; wire [2:0] l2_tl_a_opcode_i, l2_tl_a_param_i; wire [3:0] l2_tl_a_size_i; wire [5:0] l2_tl_a_source_i; wire [63:0] l2_tl_a_address_i; wire [7:0] l2_tl_a_mask_i; wire [63:0] l2_tl_a_data_i; wire l2_tl_a_corrupt_i;
    wire l2_tl_b_valid_o, l2_tl_b_ready_i; wire [2:0] l2_tl_b_opcode_o, l2_tl_b_param_o; wire [3:0] l2_tl_b_size_o; wire [5:0] l2_tl_b_source_o; wire [63:0] l2_tl_b_address_o; wire [7:0] l2_tl_b_mask_o; wire [63:0] l2_tl_b_data_o; wire l2_tl_b_corrupt_o; wire [1:0] l2_tl_b_dest_o;
    wire l2_tl_c_valid_i, l2_tl_c_ready_o; wire [2:0] l2_tl_c_opcode_i, l2_tl_c_param_i; wire [3:0] l2_tl_c_size_i; wire [5:0] l2_tl_c_source_i; wire [63:0] l2_tl_c_address_i; wire [63:0] l2_tl_c_data_i; wire l2_tl_c_corrupt_i;
    wire l2_tl_d_valid_o, l2_tl_d_ready_i; wire [2:0] l2_tl_d_opcode_o; wire [1:0] l2_tl_d_param_o; wire [3:0] l2_tl_d_size_o; wire [5:0] l2_tl_d_source_o; wire [1:0] l2_tl_d_sink_o; wire l2_tl_d_denied_o; wire [63:0] l2_tl_d_data_o; wire l2_tl_d_corrupt_o;
    wire l2_tl_e_valid_i, l2_tl_e_ready_o; wire [1:0] l2_tl_e_sink_i;

    // Memory Interface
    wire mem_a_valid_o, mem_a_ready_i; wire [2:0] mem_a_opcode_o, mem_a_param_o, mem_a_size_o; wire [3:0] mem_a_source_o; wire [63:0] mem_a_address_o; wire [7:0] mem_a_mask_o; wire [63:0] mem_a_data_o;
    wire mem_d_valid_i, mem_d_ready_o; wire [2:0] mem_d_opcode_i; wire [1:0] mem_d_param_i; wire [2:0] mem_d_size_i; wire [3:0] mem_d_source_i; wire [1:0] mem_d_sink_i; wire mem_d_denied_i; wire [63:0] mem_d_data_i; wire mem_d_corrupt_i;

    // ========================================================================
    // TEST SEQUENCER (Exploded Ports)
    // ========================================================================
    test_sequencer sequencer (
        .clk(clk),
        .rst_n(rst_n),
        // Core 0
        .cpu_req_0(cpu_req_0), .cpu_we_0(cpu_we_0), .cpu_be_0(cpu_be_0), .cpu_addr_0(cpu_addr_0), .cpu_wdata_0(cpu_wdata_0),
        .cpu_amo_0(cpu_amo_0), .cpu_lr_0(cpu_lr_0), .cpu_sc_0(cpu_sc_0), .cpu_amo_op_0(cpu_amo_op_0), .cpu_amo_word_0(cpu_amo_word_0),
        .cpu_gnt_0(cpu_gnt_0), .cpu_rvalid_0(cpu_rvalid_0), .cpu_rdata_0(cpu_rdata_0),
        // Core 1
        .cpu_req_1(cpu_req_1), .cpu_we_1(cpu_we_1), .cpu_be_1(cpu_be_1), .cpu_addr_1(cpu_addr_1), .cpu_wdata_1(cpu_wdata_1),
        .cpu_amo_1(cpu_amo_1), .cpu_lr_1(cpu_lr_1), .cpu_sc_1(cpu_sc_1), .cpu_amo_op_1(cpu_amo_op_1), .cpu_amo_word_1(cpu_amo_word_1),
        .cpu_gnt_1(cpu_gnt_1), .cpu_rvalid_1(cpu_rvalid_1), .cpu_rdata_1(cpu_rdata_1),
        // Core 2
        .cpu_req_2(cpu_req_2), .cpu_we_2(cpu_we_2), .cpu_be_2(cpu_be_2), .cpu_addr_2(cpu_addr_2), .cpu_wdata_2(cpu_wdata_2),
        .cpu_amo_2(cpu_amo_2), .cpu_lr_2(cpu_lr_2), .cpu_sc_2(cpu_sc_2), .cpu_amo_op_2(cpu_amo_op_2), .cpu_amo_word_2(cpu_amo_word_2),
        .cpu_gnt_2(cpu_gnt_2), .cpu_rvalid_2(cpu_rvalid_2), .cpu_rdata_2(cpu_rdata_2),
        // Core 3
        .cpu_req_3(cpu_req_3), .cpu_we_3(cpu_we_3), .cpu_be_3(cpu_be_3), .cpu_addr_3(cpu_addr_3), .cpu_wdata_3(cpu_wdata_3),
        .cpu_amo_3(cpu_amo_3), .cpu_lr_3(cpu_lr_3), .cpu_sc_3(cpu_sc_3), .cpu_amo_op_3(cpu_amo_op_3), .cpu_amo_word_3(cpu_amo_word_3),
        .cpu_gnt_3(cpu_gnt_3), .cpu_rvalid_3(cpu_rvalid_3), .cpu_rdata_3(cpu_rdata_3),
        
        // Backdoor Bus (Exploded)
        // L1[0]
        .l1_0_bkdr_valid(l1_0_bkdr_valid_i), .l1_0_bkdr_core_id(l1_0_bkdr_core_id_i), .l1_0_bkdr_array_id(l1_0_bkdr_array_id_i),
        .l1_0_bkdr_way(l1_0_bkdr_way_i), .l1_0_bkdr_set(l1_0_bkdr_set_i), .l1_0_bkdr_data(l1_0_bkdr_data_i),
        // L1[1]
        .l1_1_bkdr_valid(l1_1_bkdr_valid_i), .l1_1_bkdr_core_id(l1_1_bkdr_core_id_i), .l1_1_bkdr_array_id(l1_1_bkdr_array_id_i),
        .l1_1_bkdr_way(l1_1_bkdr_way_i), .l1_1_bkdr_set(l1_1_bkdr_set_i), .l1_1_bkdr_data(l1_1_bkdr_data_i),
        // L1[2]
        .l1_2_bkdr_valid(l1_2_bkdr_valid_i), .l1_2_bkdr_core_id(l1_2_bkdr_core_id_i), .l1_2_bkdr_array_id(l1_2_bkdr_array_id_i),
        .l1_2_bkdr_way(l1_2_bkdr_way_i), .l1_2_bkdr_set(l1_2_bkdr_set_i), .l1_2_bkdr_data(l1_2_bkdr_data_i),
        // L1[3]
        .l1_3_bkdr_valid(l1_3_bkdr_valid_i), .l1_3_bkdr_core_id(l1_3_bkdr_core_id_i), .l1_3_bkdr_array_id(l1_3_bkdr_array_id_i),
        .l1_3_bkdr_way(l1_3_bkdr_way_i), .l1_3_bkdr_set(l1_3_bkdr_set_i), .l1_3_bkdr_data(l1_3_bkdr_data_i),
        // L2
        .l2_bkdr_valid(l2_bkdr_valid_i), .l2_bkdr_core_id(l2_bkdr_core_id_i), .l2_bkdr_array_id(l2_bkdr_array_id_i),
        .l2_bkdr_way(l2_bkdr_way_i), .l2_bkdr_set(l2_bkdr_set_i), .l2_bkdr_data(l2_bkdr_data_i)
    );

    // ========================================================================
    // INSTANTIATIONS (Using Unique Port Names)
    // ========================================================================

    // Core Stimuli (Wrappers)
    stim_wrapper_0 stim_0 ( .clk(clk), .rst_n(rst_n), .* );
    stim_wrapper_1 stim_1 ( .clk(clk), .rst_n(rst_n), .* );
    stim_wrapper_2 stim_2 ( .clk(clk), .rst_n(rst_n), .* );
    stim_wrapper_3 stim_3 ( .clk(clk), .rst_n(rst_n), .* );

    // L1 Caches (Wrappers)
    l1_wrapper_0 l1_0 ( .clk(clk), .rst_n(rst_n), .* );
    l1_wrapper_1 l1_1 ( .clk(clk), .rst_n(rst_n), .* );
    l1_wrapper_2 l1_2 ( .clk(clk), .rst_n(rst_n), .* );
    l1_wrapper_3 l1_3 ( .clk(clk), .rst_n(rst_n), .* );

    // L2 Cache (Wrapper)
    l2_wrapper l2 ( .clk_i(clk), .rst_ni(rst_n), .* );

    // Interconnect (Socket Wrapper)
    socket_wrapper xbar ( .clk(clk), .rst_n(rst_n), .* );

    // Memory (Wrapper)
    mem_wrapper mem ( .clk(clk), .rst_n(rst_n), .* );

    // ========================================================================
    // EXTERNAL MONITORS (Monitor Wrappers)
    // ========================================================================
    mon_l1_wrapper_0 mon_0 ( .clk(clk), .rst_n(rst_n), .* );
    mon_l1_wrapper_1 mon_1 ( .clk(clk), .rst_n(rst_n), .* );
    mon_l1_wrapper_2 mon_2 ( .clk(clk), .rst_n(rst_n), .* );
    mon_l1_wrapper_3 mon_3 ( .clk(clk), .rst_n(rst_n), .* );
    
    mon_l2_wrapper mon_l2 ( .* );
    mon_mem_wrapper mon_mem ( .clk(clk), .rst_n(rst_n), .* );

endmodule
