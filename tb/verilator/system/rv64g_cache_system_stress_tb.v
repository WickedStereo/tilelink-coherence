`timescale 1ns/1ps

// ============================================================================
// Cache System Stress Testbench
// ============================================================================
// This testbench includes comprehensive TileLink transaction monitoring:
//
// 1. L1 Cache Monitors (4 instances, one per core)
//    - Monitor all TileLink channels (A, B, C, D, E)
//    - Shows: Acquire requests, Probe responses, Releases, Grants
//    - Labeled as "L1[0]", "L1[1]", "L1[2]", "L1[3]"
//
// 2. L2 Cache Monitor (1 instance)
//    - Monitors L2's TileLink interface with the crossbar
//    - Shows: Coherence requests, Probes sent to L1s, Grants to L1s
//    - Labeled as "L2"
//
// 3. Memory Interface Monitor (1 instance)
//    - Monitors L2's memory interface (TL-UH protocol)
//    - Shows: Memory read/write requests and responses
//    - Labeled as "MEM"
//
// To disable L1/L2 monitoring (reduce verbosity), set ENABLE_CACHE_MONITORS = 0
// Memory monitor is always enabled as it's useful for understanding memory traffic
// ============================================================================

module rv64g_cache_system_stress_tb;

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
    
    // Atomic Interfaces
    wire [CORES-1:0]    cpu_amo;
    wire [CORES-1:0]    cpu_lr;
    wire [CORES-1:0]    cpu_sc;
    wire [CORES*5-1:0]  cpu_amo_op;
    wire [CORES-1:0]    cpu_amo_word;

    // Memory Interface (Internal wires for connection)
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
        
        .cpu_amo(cpu_amo),
        .cpu_lr(cpu_lr),
        .cpu_sc(cpu_sc),
        .cpu_amo_op(cpu_amo_op),
        .cpu_amo_word(cpu_amo_word),
        
        // CPU From DUT
        .cpu_gnt(cpu_gnt),
        .cpu_rvalid(cpu_rvalid),
        .cpu_rdata(cpu_rdata),

        // Memory Connections (Pass-through for monitoring if needed, 
        // but Stimulus no longer drives memory directly)
        .mem_a_opcode(mem_a_opcode),
        .mem_a_param(mem_a_param),
        .mem_a_size(mem_a_size),
        .mem_a_source(mem_a_source),
        .mem_a_address(mem_a_address),
        .mem_a_mask(mem_a_mask),
        .mem_a_data(mem_a_data),
        .mem_a_valid(mem_a_valid),
        .mem_d_ready(mem_d_ready)
    );

    // Memory Model Instance
    simple_ram #(
        .ADDR_W(ADDR_W),
        .DATA_W(DATA_W)
    ) mem (
        .clk(clk),
        .rst_n(rst_n),
        
        // A Channel (DUT -> Memory)
        .a_opcode(mem_a_opcode),
        .a_param(mem_a_param),
        .a_size(mem_a_size),
        .a_source(mem_a_source),
        .a_address(mem_a_address),
        .a_mask(mem_a_mask),
        .a_data(mem_a_data),
        .a_valid(mem_a_valid),
        .a_ready(mem_a_ready),
        
        // D Channel (Memory -> DUT)
        .d_opcode(mem_d_opcode),
        .d_param(mem_d_param),
        .d_size(mem_d_size),
        .d_source(mem_d_source),
        .d_sink(mem_d_sink),
        .d_denied(mem_d_denied),
        .d_data(mem_d_data),
        .d_corrupt(mem_d_corrupt),
        .d_valid(mem_d_valid),
        .d_ready(mem_d_ready)
    );

    // DUT Block
    rv64g_cache_system #(
        .CORES(CORES)
    ) dut (
        .clk_i(clk),
        .rst_ni(rst_n),
        .cpu_req_i(cpu_req),
        .cpu_we_i(cpu_we),
        .cpu_be_i(cpu_be),
        .cpu_addr_i(cpu_addr),
        .cpu_wdata_i(cpu_wdata),
        .cpu_amo_i(cpu_amo),
        .cpu_lr_i(cpu_lr),
        .cpu_sc_i(cpu_sc),
        .cpu_amo_op_i(cpu_amo_op),
        .cpu_amo_word_i(cpu_amo_word),
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

    // ============================================================
    // TileLink Monitors Configuration
    // ============================================================
    // Enable/disable verbose cache monitoring with this parameter
    // Set to 0 to disable L1/L2 monitoring (reduces output verbosity)
    // Memory monitor is always enabled
    parameter ENABLE_CACHE_MONITORS = 1;
    
    // Generate monitors for each L1 cache
    genvar m;
    generate
        if (ENABLE_CACHE_MONITORS) begin : gen_l1_monitors
            for (m = 0; m < CORES; m = m + 1) begin : gen_l1_monitor
                tl_monitor #(
                    .ADDR_W(ADDR_W),
                    .DATA_W(DATA_W),
                    .SOURCE_W(4),
                    .SINK_W(4),
                    .CHANNEL_NAME(m==0 ? "L1[0]" : m==1 ? "L1[1]" : m==2 ? "L1[2]" : "L1[3]")
                ) l1_monitor (
                    // Channel A (L1 -> Xbar requests)
                    .a_valid(dut.gen_l1[m].l1.tl_a_valid_o),
                    .a_ready(dut.gen_l1[m].l1.tl_a_ready_i),
                    .a_opcode(dut.gen_l1[m].l1.tl_a_opcode_o),
                    .a_param(dut.gen_l1[m].l1.tl_a_param_o),
                    .a_size(dut.gen_l1[m].l1.tl_a_size_o),
                    .a_source(dut.gen_l1[m].l1.tl_a_source_o),
                    .a_address(dut.gen_l1[m].l1.tl_a_address_o),
                    .a_mask(dut.gen_l1[m].l1.tl_a_mask_o),
                    .a_data(dut.gen_l1[m].l1.tl_a_data_o),
                    
                    // Channel B (Xbar -> L1 probes)
                    .b_valid(dut.gen_l1[m].l1.tl_b_valid_i),
                    .b_ready(dut.gen_l1[m].l1.tl_b_ready_o),
                    .b_opcode(dut.gen_l1[m].l1.tl_b_opcode_i),
                    .b_param(dut.gen_l1[m].l1.tl_b_param_i),
                    .b_size(dut.gen_l1[m].l1.tl_b_size_i),
                    .b_source(dut.gen_l1[m].l1.tl_b_source_i),
                    .b_address(dut.gen_l1[m].l1.tl_b_address_i),
                    .b_mask(dut.gen_l1[m].l1.tl_b_mask_i),
                    .b_data(dut.gen_l1[m].l1.tl_b_data_i),
                    
                    // Channel C (L1 -> Xbar releases/probe acks)
                    .c_valid(dut.gen_l1[m].l1.tl_c_valid_o),
                    .c_ready(dut.gen_l1[m].l1.tl_c_ready_i),
                    .c_opcode(dut.gen_l1[m].l1.tl_c_opcode_o),
                    .c_param(dut.gen_l1[m].l1.tl_c_param_o),
                    .c_size(dut.gen_l1[m].l1.tl_c_size_o),
                    .c_source(dut.gen_l1[m].l1.tl_c_source_o),
                    .c_address(dut.gen_l1[m].l1.tl_c_address_o),
                    .c_data(dut.gen_l1[m].l1.tl_c_data_o),
                    
                    // Channel D (Xbar -> L1 grants)
                    .d_valid(dut.gen_l1[m].l1.tl_d_valid_i),
                    .d_ready(dut.gen_l1[m].l1.tl_d_ready_o),
                    .d_opcode(dut.gen_l1[m].l1.tl_d_opcode_i),
                    .d_param({1'b0, dut.gen_l1[m].l1.tl_d_param_i[0]}), // Fix width mismatch
                    .d_size(dut.gen_l1[m].l1.tl_d_size_i),
                    .d_source(dut.gen_l1[m].l1.tl_d_source_i),
                    .d_sink(dut.gen_l1[m].l1.tl_d_sink_i),
                    .d_denied(dut.gen_l1[m].l1.tl_d_denied_i),
                    .d_data(dut.gen_l1[m].l1.tl_d_data_i),
                    
                    // Channel E (L1 -> Xbar grant acks)
                    .e_valid(dut.gen_l1[m].l1.tl_e_valid_o),
                    .e_ready(dut.gen_l1[m].l1.tl_e_ready_i),
                    .e_sink(dut.gen_l1[m].l1.tl_e_sink_o)
                );
            end
        end
    endgenerate
    
    // Monitor for L2 Cache (Xbar <-> L2 interface)
    // Note: We access the internal wires in the system module via hierarchical references
    generate
        if (ENABLE_CACHE_MONITORS) begin : gen_l2_monitor
            // We need to create wires to tap into the internal signals
            // Since we can't directly access internal wires, we'll use the L2 module ports
            wire l2_a_valid, l2_a_ready;
            wire [2:0] l2_a_opcode;
            wire [2:0] l2_a_param;
            wire [5:0] l2_a_source;  // M_SOURCE_W = 6
            wire [ADDR_W-1:0] l2_a_address;
            
            wire l2_b_valid, l2_b_ready;
            wire [2:0] l2_b_opcode;
            wire [1:0] l2_b_param;
            wire [ADDR_W-1:0] l2_b_address;
            
            wire l2_c_valid, l2_c_ready;
            wire [2:0] l2_c_opcode;
            wire [2:0] l2_c_param;
            wire [5:0] l2_c_source;
            wire [ADDR_W-1:0] l2_c_address;
            wire [DATA_W-1:0] l2_c_data;
            
            wire l2_d_valid, l2_d_ready;
            wire [2:0] l2_d_opcode;
            wire [1:0] l2_d_param;
            wire [5:0] l2_d_source;
            wire [1:0] l2_d_sink;
            wire [DATA_W-1:0] l2_d_data;
            
            // Connect to internal signals via hierarchical reference
            assign l2_a_valid = dut.l2.tl_a_valid_i;
            assign l2_a_ready = dut.l2.tl_a_ready_o;
            assign l2_a_opcode = dut.l2.tl_a_opcode_i;
            assign l2_a_param = dut.l2.tl_a_param_i;
            assign l2_a_source = dut.l2.tl_a_source_i;
            assign l2_a_address = dut.l2.tl_a_address_i;
            
            assign l2_b_valid = dut.l2.tl_b_valid_o;
            assign l2_b_ready = dut.l2.tl_b_ready_i;
            assign l2_b_opcode = dut.l2.tl_b_opcode_o;
            assign l2_b_param = dut.l2.tl_b_param_o[1:0];
            assign l2_b_address = dut.l2.tl_b_address_o;
            
            assign l2_c_valid = dut.l2.tl_c_valid_i;
            assign l2_c_ready = dut.l2.tl_c_ready_o;
            assign l2_c_opcode = dut.l2.tl_c_opcode_i;
            assign l2_c_param = dut.l2.tl_c_param_i;
            assign l2_c_source = dut.l2.tl_c_source_i;
            assign l2_c_address = dut.l2.tl_c_address_i;
            assign l2_c_data = dut.l2.tl_c_data_i;
            
            assign l2_d_valid = dut.l2.tl_d_valid_o;
            assign l2_d_ready = dut.l2.tl_d_ready_i;
            assign l2_d_opcode = dut.l2.tl_d_opcode_o;
            assign l2_d_param = dut.l2.tl_d_param_o;
            assign l2_d_source = dut.l2.tl_d_source_o;
            assign l2_d_sink = dut.l2.tl_d_sink_o;
            assign l2_d_data = dut.l2.tl_d_data_o;
            
            tl_monitor #(
                .ADDR_W(ADDR_W),
                .DATA_W(DATA_W),
                .SOURCE_W(6),  // M_SOURCE_W = 4 + 2
                .SINK_W(2),
                .CHANNEL_NAME("L2"),
                .IS_MANAGER(1)
            ) l2_monitor (
                // Channel A (Xbar -> L2 requests)
                .a_valid(l2_a_valid),
                .a_ready(l2_a_ready),
                .a_opcode(l2_a_opcode),
                .a_param(l2_a_param),
                .a_size(4'd6),  // Fixed 64 bytes
                .a_source(l2_a_source),
                .a_address(l2_a_address),
                .a_mask(8'hFF),
                .a_data(64'd0),
                
                // Channel B (L2 -> Xbar probes)
                .b_valid(l2_b_valid),
                .b_ready(l2_b_ready),
                .b_opcode(l2_b_opcode),
                .b_param({1'b0, l2_b_param}),
                .b_size(4'd6),
                .b_source(4'd0),  // L2 doesn't use source on B channel
                .b_address(l2_b_address),
                .b_mask(8'hFF),
                .b_data(64'd0),
                
                // Channel C (Xbar -> L2 releases/probe acks)
                .c_valid(l2_c_valid),
                .c_ready(l2_c_ready),
                .c_opcode(l2_c_opcode),
                .c_param(l2_c_param),
                .c_size(4'd6),
                .c_source(l2_c_source),
                .c_address(l2_c_address),
                .c_data(l2_c_data),
                
                // Channel D (L2 -> Xbar grants)
                .d_valid(l2_d_valid),
                .d_ready(l2_d_ready),
                .d_opcode(l2_d_opcode),
                .d_param({1'b0, l2_d_param[0]}), // Fix width mismatch
                .d_size(4'd6),
                .d_source(l2_d_source),
                .d_sink(l2_d_sink),
                .d_denied(1'b0),
                .d_data(l2_d_data),
                
                // Channel E (not used by L2)
                .e_valid(1'b0),
                .e_ready(1'b1),
                .e_sink(2'd0)
            );
        end
    endgenerate

    // TileLink Monitor for Memory Interface (L2 <-> Memory)
    // This monitors the TileLink transactions between L2 and main memory
    // Note: Memory interface uses TL-UH (uncached, no coherence), so only A and D channels are used
    tl_monitor #(
        .ADDR_W(ADDR_W),
        .DATA_W(DATA_W),
        .SOURCE_W(4),
        .SINK_W(2),
        .CHANNEL_NAME("MEM"),
        .IS_MANAGER(1)
    ) mem_monitor (
        // Channel A (L2 -> Memory requests: Get, PutFullData)
        .a_valid(mem_a_valid),
        .a_ready(mem_a_ready),
        .a_opcode(mem_a_opcode),
        .a_param(mem_a_param),
        .a_size({1'b0, mem_a_size}),  // mem_a_size is [2:0], monitor expects [3:0]
        .a_source(mem_a_source),
        .a_address(mem_a_address),
        .a_mask(mem_a_mask),
        .a_data(mem_a_data),
        
        // Channel B (not used in memory interface - no probes)
        .b_valid(1'b0),
        .b_ready(1'b0),
        .b_opcode(3'd0),
        .b_param(3'd0),
        .b_size(4'd0),
        .b_source(4'd0),
        .b_address(64'd0),
        .b_mask(8'd0),
        .b_data(64'd0),
        
        // Channel C (not used in memory interface - no releases)
        .c_valid(1'b0),
        .c_ready(1'b0),
        .c_opcode(3'd0),
        .c_param(3'd0),
        .c_size(4'd0),
        .c_source(4'd0),
        .c_address(64'd0),
        .c_data(64'd0),
        
        // Channel D (Memory -> L2 responses: AccessAck, AccessAckData)
        .d_valid(mem_d_valid),
        .d_ready(mem_d_ready),
        .d_opcode(mem_d_opcode),
        .d_param({1'b0, mem_d_param[0]}),  // mem_d_param is [1:0], monitor expects [2:0]
        .d_size({1'b0, mem_d_size}),    // mem_d_size is [2:0], monitor expects [3:0]
        .d_source(mem_d_source),
        .d_sink(mem_d_sink),
        .d_denied(mem_d_denied),
        .d_data(mem_d_data),
        
        // Channel E (not used in memory interface - no GrantAck)
        .e_valid(1'b0),
        .e_ready(1'b0),
        .e_sink(2'd0)
    );

endmodule
