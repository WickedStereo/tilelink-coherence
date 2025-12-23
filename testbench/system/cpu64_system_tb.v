`timescale 1ns/1ps

module cpu64_system_tb;

    parameter CORES = 4;
    parameter ADDR_W = 64;
    parameter DATA_W = 64;

    reg clk;
    reg rst_n;

    // CPU Interfaces
    reg  [CORES-1:0] cpu_req;
    reg  [CORES-1:0] cpu_we;
    reg  [CORES*8-1:0] cpu_be;
    reg  [CORES*64-1:0] cpu_addr;
    reg  [CORES*64-1:0] cpu_wdata;
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
    reg          mem_a_ready;

    reg  [2:0]   mem_d_opcode;
    reg  [1:0]   mem_d_param;
    reg  [2:0]   mem_d_size;
    reg  [3:0]   mem_d_source;
    reg  [1:0]   mem_d_sink;
    reg          mem_d_denied;
    reg  [DATA_W-1:0]  mem_d_data;
    reg          mem_d_corrupt;
    reg          mem_d_valid;
    wire         mem_d_ready;

    // DUT
    cpu64_system #(
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

    // Clock Generation
    initial begin
        clk = 0;
        forever #5 clk = ~clk;
    end

    // Memory Responder (Simple RAM)
    reg [63:0] memory [0:1023]; // 8KB
    integer i;
    
    initial begin
        for (i=0; i<1024; i=i+1) memory[i] = i; // Init with index
        mem_a_ready = 0;
        mem_d_valid = 0;
        burst_active = 0;
        burst_cnt = 0;
    end

    // Burst Responder Logic
    reg [2:0] burst_cnt;
    reg [63:0] burst_addr;
    reg burst_active;
    reg [2:0] burst_opcode;
    reg [3:0] burst_source;
    reg [2:0] burst_size;

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            burst_active <= 0;
            burst_cnt <= 0;
            mem_d_valid <= 0;
            mem_a_ready <= 0;
        end else begin
            mem_a_ready <= !burst_active; // Only accept new req if not bursting

            if (mem_d_valid && mem_d_ready) begin
                if (burst_active) begin
                    if (burst_cnt == 7) begin
                        burst_active <= 0;
                        mem_d_valid <= 0;
                    end else begin
                        burst_cnt <= burst_cnt + 1;
                        mem_d_data <= memory[(burst_addr[12:3]) + burst_cnt + 1];
                    end
                end else begin
                    mem_d_valid <= 0;
                end
            end

            if (mem_a_valid && mem_a_ready) begin
                if (mem_a_opcode == 3'd4) begin // Get
                    burst_active <= 1;
                    burst_cnt <= 0;
                    burst_addr <= mem_a_address;
                    burst_opcode <= 3'd1; // AccessAckData
                    burst_source <= mem_a_source;
                    burst_size <= mem_a_size;
                    
                    mem_d_valid <= 1;
                    mem_d_opcode <= 3'd1;
                    mem_d_param <= 0;
                    mem_d_size <= mem_a_size;
                    mem_d_source <= mem_a_source;
                    mem_d_data <= memory[mem_a_address[12:3]];
                end else if (mem_a_opcode == 3'd0) begin // PutFullData
                    // Write (assume single beat for now? No, L2 writes back full line)
                    // But L2 Writeback is also burst.
                    // For now, just Ack.
                    mem_d_valid <= 1;
                    mem_d_opcode <= 3'd0; // AccessAck
                    mem_d_source <= mem_a_source;
                end
            end
        end
    end

    // Test Sequence
    initial begin
        rst_n = 0;
        cpu_req = 0;
        cpu_we = 0;
        cpu_addr = 0;
        #20 rst_n = 1;
        
        #20;
        $display("Starting Test...");
        
        // Core 0 Read Address 0x100
        $display("Sending Req to Core 0 (Read 0x100)...");
        cpu_req[0] = 1;
        cpu_we[0] = 0;
        cpu_addr[0 +: 64] = 64'h100;
        
        wait(cpu_gnt[0]);
        $display("Got Gnt from Core 0");
        #10;
        cpu_req[0] = 0;
        
        wait(cpu_rvalid[0]);
        $display("Got RValid from Core 0");
        $display("Core 0 Read Data: %h", cpu_rdata[0 +: 64]);
        if (cpu_rdata[0 +: 64] !== 64'h20) $display("ERROR: Core 0 Read Mismatch!");

        #100;

        // Core 1 Read Address 0x100 (Should be Shared)
        $display("Sending Req to Core 1 (Read 0x100)...");
        cpu_req[1] = 1;
        cpu_we[1] = 0;
        cpu_addr[1*64 +: 64] = 64'h100;

        wait(cpu_gnt[1]);
        $display("Got Gnt from Core 1");
        #10;
        cpu_req[1] = 0;

        wait(cpu_rvalid[1]);
        $display("Got RValid from Core 1");
        $display("Core 1 Read Data: %h", cpu_rdata[1*64 +: 64]);
        if (cpu_rdata[1*64 +: 64] !== 64'h20) $display("ERROR: Core 1 Read Mismatch!");

        #100;

        // Core 0 Write Address 0x100 (Should Invalidate Core 1)
        $display("Sending Req to Core 0 (Write 0x100 = 0xDEADBEEF)...");
        cpu_req[0] = 1;
        cpu_we[0] = 1;
        cpu_addr[0 +: 64] = 64'h100;
        cpu_wdata[0 +: 64] = 64'hDEADBEEF;
        cpu_be[0 +: 8] = 8'hFF;

        wait(cpu_gnt[0]);
        $display("Got Gnt from Core 0");
        #10;
        cpu_req[0] = 0;
        cpu_we[0] = 0;

        // Wait for write to complete (no explicit ack in this simple cpu interface, but we wait a bit)
        #200;

        // Core 1 Read Address 0x100 (Should Miss, Probe Core 0, Get New Data)
        $display("Sending Req to Core 1 (Read 0x100)...");
        cpu_req[1] = 1;
        cpu_we[1] = 0;
        cpu_addr[1*64 +: 64] = 64'h100;

        wait(cpu_gnt[1]);
        $display("Got Gnt from Core 1");
        #10;
        cpu_req[1] = 0;

        wait(cpu_rvalid[1]);
        $display("Got RValid from Core 1");
        $display("Core 1 Read Data: %h", cpu_rdata[1*64 +: 64]);
        if (cpu_rdata[1*64 +: 64] !== 64'hDEADBEEF) $display("ERROR: Core 1 Read Mismatch (Coherence Fail)!");
        else $display("SUCCESS: Coherence Test Passed!");

        #100;
        $finish;
    end

    // VCD Dump
    initial begin
        $dumpfile("obj_dir/wave_system.vcd");
        $dumpvars(0, cpu64_system_tb);
    end

endmodule
