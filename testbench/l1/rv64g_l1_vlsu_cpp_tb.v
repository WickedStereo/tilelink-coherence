// rv64g_l1_vlsu_cpp_tb.v - VLSU integration test with C++ driven clock
`timescale 1ns/1ps
`include "params.vh"

module rv64g_l1_vlsu_cpp_tb (
    input  wire        clk,
    input  wire        rst_n,
    
    // VLSU control inputs (C++ drives)
    input  wire        vlsu_req,
    input  wire [7:0]  vlsu_lane_valid,
    input  wire [7:0]  vlsu_lane_we,
    input  wire [63:0] vlsu_lane_be,  // 8 bits per lane
    input  wire [63:0] vlsu_addr0,
    input  wire [63:0] vlsu_addr1,
    input  wire [63:0] vlsu_addr2,
    input  wire [63:0] vlsu_addr3,
    input  wire [63:0] vlsu_addr4,
    input  wire [63:0] vlsu_addr5,
    input  wire [63:0] vlsu_addr6,
    input  wire [63:0] vlsu_addr7,
    input  wire [63:0] vlsu_wdata0,
    input  wire [63:0] vlsu_wdata1,
    input  wire [63:0] vlsu_wdata2,
    input  wire [63:0] vlsu_wdata3,
    input  wire [63:0] vlsu_wdata4,
    input  wire [63:0] vlsu_wdata5,
    input  wire [63:0] vlsu_wdata6,
    input  wire [63:0] vlsu_wdata7,
    
    // TileLink memory interface (C++ memory model)
    input  wire        tl_a_ready,
    input  wire        tl_d_valid,
    input  wire [2:0]  tl_d_opcode,
    input  wire [1:0]  tl_d_param,
    input  wire [3:0]  tl_d_size,
    input  wire [3:0]  tl_d_source,
    input  wire [3:0]  tl_d_sink,
    input  wire [63:0] tl_d_data,
    
    // VLSU outputs (C++ observes)
    output wire        vlsu_ready,
    output wire        vlsu_done,
    output wire [7:0]  vlsu_lane_done,
    output wire [7:0]  vlsu_lane_hit,
    output wire [63:0] vlsu_rdata0,
    output wire [63:0] vlsu_rdata1,
    output wire [63:0] vlsu_rdata2,
    output wire [63:0] vlsu_rdata3,
    output wire [63:0] vlsu_rdata4,
    output wire [63:0] vlsu_rdata5,
    output wire [63:0] vlsu_rdata6,
    output wire [63:0] vlsu_rdata7,
    
    // TileLink A channel outputs
    output wire        tl_a_valid,
    output wire [2:0]  tl_a_opcode,
    output wire [2:0]  tl_a_param,
    output wire [3:0]  tl_a_size,
    output wire [3:0]  tl_a_source,
    output wire [63:0] tl_a_address,
    output wire [7:0]  tl_a_mask,
    output wire [63:0] tl_a_data,
    
    // Debug outputs
    output wire [3:0]  debug_state,
    output wire [2:0]  debug_miss_state,
    output wire [1:0]  debug_xbar_state,
    output wire        debug_vlsu_any_miss,
    output wire        debug_vlsu_xbar_done
);

    parameter integer NUM_LANES = 8;
    parameter integer NUM_BANKS = 8;
    
    // Pack addresses
    wire [NUM_LANES*64-1:0] vlsu_lane_addr = {vlsu_addr7, vlsu_addr6, vlsu_addr5, vlsu_addr4,
                                               vlsu_addr3, vlsu_addr2, vlsu_addr1, vlsu_addr0};
    wire [NUM_LANES*64-1:0] vlsu_lane_wdata = {vlsu_wdata7, vlsu_wdata6, vlsu_wdata5, vlsu_wdata4,
                                                vlsu_wdata3, vlsu_wdata2, vlsu_wdata1, vlsu_wdata0};
    wire [NUM_LANES*64-1:0] vlsu_lane_rdata;
    
    // Unpack rdata
    assign vlsu_rdata0 = vlsu_lane_rdata[63:0];
    assign vlsu_rdata1 = vlsu_lane_rdata[127:64];
    assign vlsu_rdata2 = vlsu_lane_rdata[191:128];
    assign vlsu_rdata3 = vlsu_lane_rdata[255:192];
    assign vlsu_rdata4 = vlsu_lane_rdata[319:256];
    assign vlsu_rdata5 = vlsu_lane_rdata[383:320];
    assign vlsu_rdata6 = vlsu_lane_rdata[447:384];
    assign vlsu_rdata7 = vlsu_lane_rdata[511:448];
    
    // TileLink C channel outputs (directly tied for simple test)
    wire tl_c_valid;
    wire [2:0] tl_c_opcode, tl_c_param;
    wire [3:0] tl_c_size, tl_c_source;
    wire [63:0] tl_c_address, tl_c_data;
    wire tl_c_corrupt;
    
    // TileLink E channel
    wire tl_e_valid;
    wire [3:0] tl_e_sink;

    // TileLink B probe (idle)
    wire        tl_b_valid = 1'b0;
    wire [2:0]  tl_b_opcode = 3'b0;
    wire [2:0]  tl_b_param = 3'b0;
    wire [3:0]  tl_b_size = 4'b0;
    wire [3:0]  tl_b_source = 4'b0;
    wire [63:0] tl_b_address = 64'b0;
    wire [7:0]  tl_b_mask = 8'b0;
    wire [63:0] tl_b_data = 64'b0;
    wire        tl_b_corrupt = 1'b0;
    wire        tl_b_ready;
    
    // TileLink A corrupt (not used)
    wire tl_a_corrupt;

    rv64g_l1_dcache #(
        .NUM_LANES(NUM_LANES),
        .NUM_BANKS(NUM_BANKS)
    ) dut (
        .clk_i              (clk),
        .rst_ni             (rst_n),
        .invalidate_all_i   (1'b0),
        
        // Scalar CPU interface - idle
        .req_i              (1'b0),
        .we_i               (1'b0),
        .be_i               (8'b0),
        .addr_i             (64'b0),
        .wdata_i            (64'b0),
        .gnt_o              (),
        .rvalid_o           (),
        .rdata_o            (),
        .amo_i              (1'b0),
        .lr_i               (1'b0),
        .sc_i               (1'b0),
        .amo_op_i           (5'b0),
        .amo_word_i         (1'b0),
        
        // VLSU interface
        .vlsu_req_i         (vlsu_req),
        .vlsu_lane_valid_i  (vlsu_lane_valid),
        .vlsu_lane_we_i     (vlsu_lane_we),
        .vlsu_lane_addr_i   (vlsu_lane_addr),
        .vlsu_lane_wdata_i  (vlsu_lane_wdata),
        .vlsu_lane_be_i     (vlsu_lane_be),
        .vlsu_ready_o       (vlsu_ready),
        .vlsu_done_o        (vlsu_done),
        .vlsu_lane_done_o   (vlsu_lane_done),
        .vlsu_lane_hit_o    (vlsu_lane_hit),
        .vlsu_lane_rdata_o  (vlsu_lane_rdata),
        
        // TileLink A
        .tl_a_valid_o       (tl_a_valid),
        .tl_a_ready_i       (tl_a_ready),
        .tl_a_opcode_o      (tl_a_opcode),
        .tl_a_param_o       (tl_a_param),
        .tl_a_size_o        (tl_a_size),
        .tl_a_source_o      (tl_a_source),
        .tl_a_address_o     (tl_a_address),
        .tl_a_mask_o        (tl_a_mask),
        .tl_a_data_o        (tl_a_data),
        .tl_a_corrupt_o     (tl_a_corrupt),
        
        // TileLink B (probe - idle)
        .tl_b_valid_i       (tl_b_valid),
        .tl_b_ready_o       (tl_b_ready),
        .tl_b_opcode_i      (tl_b_opcode),
        .tl_b_param_i       (tl_b_param),
        .tl_b_size_i        (tl_b_size),
        .tl_b_source_i      (tl_b_source),
        .tl_b_address_i     (tl_b_address),
        .tl_b_mask_i        (tl_b_mask),
        .tl_b_data_i        (tl_b_data),
        .tl_b_corrupt_i     (tl_b_corrupt),
        
        // TileLink C
        .tl_c_valid_o       (tl_c_valid),
        .tl_c_ready_i       (1'b1),
        .tl_c_opcode_o      (tl_c_opcode),
        .tl_c_param_o       (tl_c_param),
        .tl_c_size_o        (tl_c_size),
        .tl_c_source_o      (tl_c_source),
        .tl_c_address_o     (tl_c_address),
        .tl_c_data_o        (tl_c_data),
        .tl_c_corrupt_o     (tl_c_corrupt),
        
        // TileLink D
        .tl_d_valid_i       (tl_d_valid),
        .tl_d_ready_o       (),
        .tl_d_opcode_i      (tl_d_opcode),
        .tl_d_param_i       (tl_d_param),
        .tl_d_size_i        (tl_d_size),
        .tl_d_source_i      (tl_d_source),
        .tl_d_sink_i        (tl_d_sink),
        .tl_d_denied_i      (1'b0),
        .tl_d_data_i        (tl_d_data),
        .tl_d_corrupt_i     (1'b0),
        
        // TileLink E
        .tl_e_valid_o       (tl_e_valid),
        .tl_e_ready_i       (1'b1),
        .tl_e_sink_o        (tl_e_sink)
    );
    
    // Debug outputs
    assign debug_state = dut.state;
    assign debug_miss_state = dut.u_vlsu_miss.state_q;
    assign debug_xbar_state = dut.u_arrays.u_crossbar.state_q;
    assign debug_vlsu_any_miss = dut.vlsu_any_miss;
    assign debug_vlsu_xbar_done = dut.vlsu_xbar_done;

endmodule
