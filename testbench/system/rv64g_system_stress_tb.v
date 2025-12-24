`timescale 1ns/1ps

module rv64g_system_stress_tb;

    parameter CORES = 4;
    parameter ADDR_W = 64;
    parameter DATA_W = 64;

    // Wires for connection
    wire clk;
    wire rst_n;

    // CPU Interfaces
    wire [CORES-1:0] cpu_req;
    wire [CORES-1:0] cpu_we;
    wire [CORES*8-1:0] cpu_be;
    wire [CORES*64-1:0] cpu_addr;
    wire [CORES*64-1:0] cpu_wdata;
    wire [CORES-1:0] cpu_gnt;
    wire [CORES-1:0] cpu_rvalid;
    wire [CORES*64-1:0] cpu_rdata;

    // Memory Interface
    wire [2:0]   mem_a_opcode;
    wire [2:0]   mem_a_param;
    wire [2:0]   mem_a_size;
    wire [3:0]   mem_a_source;
    wire [ADDR_W-1:0]  mem_a_address;
    wire [7:0]   mem_a_mask;
    wire [DATA_W-1:0]  mem_a_data;
    wire         mem_a_valid;
    wire         mem_a_ready;

    wire [2:0]   mem_d_opcode;
    wire [1:0]   mem_d_param;
    wire [2:0]   mem_d_size;
    wire [3:0]   mem_d_source;
    wire [1:0]   mem_d_sink;
    wire         mem_d_denied;
    wire [DATA_W-1:0]  mem_d_data;
    wire         mem_d_corrupt;
    wire         mem_d_valid;
    wire         mem_d_ready;

    // Stimulus Block
    stimulus #(
        .CORES(CORES),
        .ADDR_W(ADDR_W),
        .DATA_W(DATA_W)
    ) stim (
        .clk(clk),
        .rst_n(rst_n),
        
        // CPU To DUT
        .cpu_req(cpu_req),
        .cpu_we(cpu_we),
        .cpu_be(cpu_be),
        .cpu_addr(cpu_addr),
        .cpu_wdata(cpu_wdata),
        
        // CPU From DUT
        .cpu_gnt(cpu_gnt),
        .cpu_rvalid(cpu_rvalid),
        .cpu_rdata(cpu_rdata),

        // Memory From DUT
        .mem_a_opcode(mem_a_opcode),
        .mem_a_param(mem_a_param),
        .mem_a_size(mem_a_size),
        .mem_a_source(mem_a_source),
        .mem_a_address(mem_a_address),
        .mem_a_mask(mem_a_mask),
        .mem_a_data(mem_a_data),
        .mem_a_valid(mem_a_valid),
        
        // Memory To DUT
        .mem_a_ready(mem_a_ready),
        .mem_d_opcode(mem_d_opcode),
        .mem_d_param(mem_d_param),
        .mem_d_size(mem_d_size),
        .mem_d_source(mem_d_source),
        .mem_d_sink(mem_d_sink),
        .mem_d_denied(mem_d_denied),
        .mem_d_data(mem_d_data),
        .mem_d_corrupt(mem_d_corrupt),
        .mem_d_valid(mem_d_valid),
        .mem_d_ready(mem_d_ready)
    );

    // DUT Block
    rv64g_system #(
        .CORES(CORES)
    ) dut (
        .clk_i(clk),
        .rst_ni(rst_n),
        .cpu_req_i(cpu_req),
        .cpu_we_i(cpu_we),
        .cpu_be_i(cpu_be),
        .cpu_addr_i(cpu_addr),
        .cpu_wdata_i(cpu_wdata),
        .cpu_gnt_o(cpu_gnt),
        .cpu_rvalid_o(cpu_rvalid),
        .cpu_rdata_o(cpu_rdata),

        .mem_a_opcode_o(mem_a_opcode),
        .mem_a_param_o(mem_a_param),
        .mem_a_size_o(mem_a_size),
        .mem_a_source_o(mem_a_source),
        .mem_a_address_o(mem_a_address),
        .mem_a_mask_o(mem_a_mask),
        .mem_a_data_o(mem_a_data),
        .mem_a_valid_o(mem_a_valid),
        .mem_a_ready_i(mem_a_ready),

        .mem_d_opcode_i(mem_d_opcode),
        .mem_d_param_i(mem_d_param),
        .mem_d_size_i(mem_d_size),
        .mem_d_source_i(mem_d_source),
        .mem_d_sink_i(mem_d_sink),
        .mem_d_denied_i(mem_d_denied),
        .mem_d_data_i(mem_d_data),
        .mem_d_corrupt_i(mem_d_corrupt),
        .mem_d_valid_i(mem_d_valid),
        .mem_d_ready_o(mem_d_ready)
    );

endmodule
