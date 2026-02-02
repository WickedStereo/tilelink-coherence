// rv64g_l2_cache_tb_top.sv - Testbench wrapper for L2 Cache cocotb tests
`timescale 1ns/1ps

module rv64g_l2_cache_tb_top #(
    parameter CORES = 4,
    parameter WAYS = 16,
    parameter SETS = 256,
    parameter ADDR_W = 64,
    parameter DATA_W = 64,
    parameter SOURCE_W = 6,
    parameter CID_W = 2
) (
    input  wire clk_i,
    input  wire rst_ni,

    // =========================================================================
    // TileLink A Channel (from L1 caches) - Sink
    // =========================================================================
    input  wire [2:0]           tl_a_opcode_i,
    input  wire [2:0]           tl_a_param_i,
    input  wire [SOURCE_W-1:0]  tl_a_source_i,
    input  wire [ADDR_W-1:0]    tl_a_address_i,
    input  wire                 tl_a_valid_i,
    output wire                 tl_a_ready_o,

    // =========================================================================
    // TileLink B Channel (to L1 caches) - Probes
    // =========================================================================
    output wire [2:0]           tl_b_opcode_o,
    output wire [2:0]           tl_b_param_o,
    output wire [ADDR_W-1:0]    tl_b_address_o,
    output wire                 tl_b_valid_o,
    input  wire                 tl_b_ready_i,
    output wire [$clog2(CORES)-1:0] tl_b_dest_o,

    // =========================================================================
    // TileLink C Channel (from L1 caches) - Release/ProbeAck
    // =========================================================================
    input  wire [2:0]           tl_c_opcode_i,
    input  wire [2:0]           tl_c_param_i,
    input  wire [SOURCE_W-1:0]  tl_c_source_i,
    input  wire [ADDR_W-1:0]    tl_c_address_i,
    input  wire [DATA_W-1:0]    tl_c_data_i,
    input  wire                 tl_c_valid_i,
    output wire                 tl_c_ready_o,

    // =========================================================================
    // TileLink D Channel (to L1 caches) - Grants
    // =========================================================================
    output wire [2:0]           tl_d_opcode_o,
    output wire [1:0]           tl_d_param_o,
    output wire [DATA_W-1:0]    tl_d_data_o,
    output wire [SOURCE_W-1:0]  tl_d_source_o,
    output wire [1:0]           tl_d_sink_o,
    output wire                 tl_d_valid_o,
    input  wire                 tl_d_ready_i,

    // =========================================================================
    // TileLink E Channel (from L1 caches) - GrantAck
    // =========================================================================
    input  wire                 tl_e_valid_i,
    input  wire [1:0]           tl_e_sink_i,
    output wire                 tl_e_ready_o,

    // =========================================================================
    // Memory Interface (TL-UH to downstream memory/L3)
    // =========================================================================
    // A Channel (Source)
    output wire [2:0]           mem_a_opcode_o,
    output wire [2:0]           mem_a_param_o,
    output wire [2:0]           mem_a_size_o,
    output wire [3:0]           mem_a_source_o,
    output wire [ADDR_W-1:0]    mem_a_address_o,
    output wire [7:0]           mem_a_mask_o,
    output wire [DATA_W-1:0]    mem_a_data_o,
    output wire                 mem_a_valid_o,
    input  wire                 mem_a_ready_i,

    // D Channel (Sink)
    input  wire [2:0]           mem_d_opcode_i,
    input  wire [1:0]           mem_d_param_i,
    input  wire [2:0]           mem_d_size_i,
    input  wire [3:0]           mem_d_source_i,
    input  wire [1:0]           mem_d_sink_i,
    input  wire                 mem_d_denied_i,
    input  wire [DATA_W-1:0]    mem_d_data_i,
    input  wire                 mem_d_corrupt_i,
    input  wire                 mem_d_valid_i,
    output wire                 mem_d_ready_o
);

    // =========================================================================
    // DUT Instantiation
    // =========================================================================
    rv64g_l2_cache #(
        .CORES(CORES),
        .WAYS(WAYS),
        .SETS(SETS),
        .ADDR_W(ADDR_W),
        .DATA_W(DATA_W),
        .SOURCE_W(SOURCE_W),
        .CID_W(CID_W)
    ) dut (
        .clk_i              (clk_i),
        .rst_ni             (rst_ni),

        // TileLink A (from L1s)
        .tl_a_opcode_i      (tl_a_opcode_i),
        .tl_a_param_i       (tl_a_param_i),
        .tl_a_source_i      (tl_a_source_i),
        .tl_a_address_i     (tl_a_address_i),
        .tl_a_valid_i       (tl_a_valid_i),
        .tl_a_ready_o       (tl_a_ready_o),

        // TileLink B (Probes to L1s)
        .tl_b_opcode_o      (tl_b_opcode_o),
        .tl_b_param_o       (tl_b_param_o),
        .tl_b_address_o     (tl_b_address_o),
        .tl_b_valid_o       (tl_b_valid_o),
        .tl_b_ready_i       (tl_b_ready_i),
        .tl_b_dest_o        (tl_b_dest_o),

        // TileLink C (Release/ProbeAck from L1s)
        .tl_c_opcode_i      (tl_c_opcode_i),
        .tl_c_param_i       (tl_c_param_i),
        .tl_c_source_i      (tl_c_source_i),
        .tl_c_address_i     (tl_c_address_i),
        .tl_c_data_i        (tl_c_data_i),
        .tl_c_valid_i       (tl_c_valid_i),
        .tl_c_ready_o       (tl_c_ready_o),

        // TileLink D (Grants to L1s)
        .tl_d_opcode_o      (tl_d_opcode_o),
        .tl_d_param_o       (tl_d_param_o),
        .tl_d_data_o        (tl_d_data_o),
        .tl_d_source_o      (tl_d_source_o),
        .tl_d_sink_o        (tl_d_sink_o),
        .tl_d_valid_o       (tl_d_valid_o),
        .tl_d_ready_i       (tl_d_ready_i),

        // TileLink E (GrantAck from L1s)
        .tl_e_valid_i       (tl_e_valid_i),
        .tl_e_sink_i        (tl_e_sink_i),
        .tl_e_ready_o       (tl_e_ready_o),

        // Memory Interface
        .mem_a_opcode_o     (mem_a_opcode_o),
        .mem_a_param_o      (mem_a_param_o),
        .mem_a_size_o       (mem_a_size_o),
        .mem_a_source_o     (mem_a_source_o),
        .mem_a_address_o    (mem_a_address_o),
        .mem_a_mask_o       (mem_a_mask_o),
        .mem_a_data_o       (mem_a_data_o),
        .mem_a_valid_o      (mem_a_valid_o),
        .mem_a_ready_i      (mem_a_ready_i),

        .mem_d_opcode_i     (mem_d_opcode_i),
        .mem_d_param_i      (mem_d_param_i),
        .mem_d_size_i       (mem_d_size_i),
        .mem_d_source_i     (mem_d_source_i),
        .mem_d_sink_i       (mem_d_sink_i),
        .mem_d_denied_i     (mem_d_denied_i),
        .mem_d_data_i       (mem_d_data_i),
        .mem_d_corrupt_i    (mem_d_corrupt_i),
        .mem_d_valid_i      (mem_d_valid_i),
        .mem_d_ready_o      (mem_d_ready_o)
    );

    // =========================================================================
    // Dump VCD for debugging (optional, enabled via plusargs)
    // =========================================================================
    initial begin
        if ($test$plusargs("trace")) begin
            $dumpfile("l2_cache_test.vcd");
            $dumpvars(0, rv64g_l2_cache_tb_top);
        end
    end

endmodule
