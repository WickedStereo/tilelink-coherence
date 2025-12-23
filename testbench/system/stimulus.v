`timescale 1ns/1ps

module stimulus #(
    parameter CORES = 4,
    parameter ADDR_W = 64,
    parameter DATA_W = 64
) (
    // System Signals
    output reg clk,
    output reg rst_n,

    // CPU Interfaces (To DUT)
    output reg  [CORES-1:0] cpu_req,
    output reg  [CORES-1:0] cpu_we,
    output reg  [CORES*8-1:0] cpu_be,
    output reg  [CORES*64-1:0] cpu_addr,
    output reg  [CORES*64-1:0] cpu_wdata,
    
    // CPU Interfaces (From DUT)
    input wire [CORES-1:0] cpu_gnt,
    input wire [CORES-1:0] cpu_rvalid,
    input wire [CORES*64-1:0] cpu_rdata,

    // Memory Interface (From DUT - A Channel)
    input wire [2:0]   mem_a_opcode,
    input wire [2:0]   mem_a_param,
    input wire [2:0]   mem_a_size,
    input wire [3:0]   mem_a_source,
    input wire [ADDR_W-1:0]  mem_a_address,
    input wire [7:0]   mem_a_mask,
    input wire [DATA_W-1:0]  mem_a_data,
    input wire         mem_a_valid,
    
    // Memory Interface (To DUT - A Channel Ready)
    output reg          mem_a_ready,

    // Memory Interface (To DUT - D Channel)
    output reg  [2:0]   mem_d_opcode,
    output reg  [1:0]   mem_d_param,
    output reg  [2:0]   mem_d_size,
    output reg  [3:0]   mem_d_source,
    output reg  [1:0]   mem_d_sink,
    output reg          mem_d_denied,
    output reg  [DATA_W-1:0]  mem_d_data,
    output reg          mem_d_corrupt,
    output reg          mem_d_valid,
    
    // Memory Interface (From DUT - D Channel Ready)
    input wire         mem_d_ready
);

    // Clock Generation
    initial begin
        clk = 0;
        forever #5 clk = ~clk;
    end

    // Memory Responder (Simple RAM)
    reg [63:0] memory [0:65535]; // Larger memory for eviction test
    integer i;
    
    initial begin
        for (i=0; i<65536; i=i+1) memory[i] = i; // Init with index
        mem_a_ready = 0;
        mem_d_valid = 0;
        state = S_IDLE;
        burst_cnt = 0;
    end

    // Memory Responder Logic
    localparam S_IDLE = 0;
    localparam S_READ_BURST = 1;
    localparam S_WRITE_BURST = 2;
    
    reg [1:0] state;
    reg [2:0] burst_cnt;
    reg [63:0] burst_addr;
    reg [3:0] burst_source;
    reg [2:0] burst_size;

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            state <= S_IDLE;
            burst_cnt <= 0;
            mem_d_valid <= 0;
            mem_a_ready <= 0;
        end else begin
            // D Channel Logic (Responses)
            if (mem_d_valid && mem_d_ready) begin
                if (state == S_READ_BURST) begin
                    if (burst_cnt == 7) begin
                        state <= S_IDLE;
                        mem_d_valid <= 0;
                        mem_a_ready <= 1; // Ready for next
                    end else begin
                        burst_cnt <= burst_cnt + 1;
                        mem_d_data <= memory[(burst_addr[15:3]) + burst_cnt + 1];
                    end
                end else begin
                    mem_d_valid <= 0; // Clear valid after single beat response (Write Ack)
                end
            end
            
            // A Channel Logic
            case (state)
                S_IDLE: begin
                    mem_a_ready <= 1; // Ready for new request
                    if (mem_a_valid && mem_a_ready) begin
                        // $display("MEM: Received Request. Opcode: %d, Addr: %h", mem_a_opcode, mem_a_address);
                        if (mem_a_opcode == 3'd4) begin // Get (Read)
                            state <= S_READ_BURST;
                            burst_cnt <= 0;
                            burst_addr <= mem_a_address;
                            burst_source <= mem_a_source;
                            burst_size <= mem_a_size;
                            
                            mem_d_valid <= 1;
                            mem_d_opcode <= 3'd1; // AccessAckData
                            mem_d_param <= 0;
                            mem_d_size <= mem_a_size;
                            mem_d_source <= mem_a_source;
                            mem_d_data <= memory[mem_a_address[15:3]];
                            mem_a_ready <= 0; // Stop accepting A
                        end else if (mem_a_opcode == 3'd0) begin // PutFullData (Write)
                            // First beat
                            memory[mem_a_address[15:3]] = mem_a_data;
                            burst_cnt <= 0;
                            burst_addr <= mem_a_address;
                            burst_source <= mem_a_source;
                            state <= S_WRITE_BURST;
                            // Keep mem_a_ready high
                        end
                    end
                end
                
                S_WRITE_BURST: begin
                    mem_a_ready <= 1;
                    if (mem_a_valid && mem_a_ready) begin
                        memory[(burst_addr[15:3]) + burst_cnt + 1] = mem_a_data;
                        
                        if (burst_cnt == 6) begin // Received beat 7 (last one)
                            state <= S_IDLE;
                            // Send Ack
                            mem_d_valid <= 1;
                            mem_d_opcode <= 3'd0; // AccessAck
                            mem_d_param <= 0;
                            mem_d_size <= 3'd6; // 64 bytes
                            mem_d_source <= burst_source;
                        end else begin
                            burst_cnt <= burst_cnt + 1;
                        end
                    end
                end
                
                S_READ_BURST: begin
                    mem_a_ready <= 0; // Busy reading
                end
            endcase
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
        $display("Starting Stress Test...");
        
        // --- Test 1: Write/Write Contention ---
        $display("--- Test 1: Write/Write Contention (Addr 0x200) ---");
        // Core 0 writes 0xAAAA
        // Core 1 writes 0xBBBB
        // Simultaneously
        
        cpu_req[0] = 1;
        cpu_we[0] = 1;
        cpu_addr[0 +: 64] = 64'h200;
        cpu_wdata[0 +: 64] = 64'hAAAA;
        cpu_be[0 +: 8] = 8'hFF;

        cpu_req[1] = 1;
        cpu_we[1] = 1;
        cpu_addr[1*64 +: 64] = 64'h200;
        cpu_wdata[1*64 +: 64] = 64'hBBBB;
        cpu_be[1*8 +: 8] = 8'hFF;

        // Wait for both to finish
        fork
            begin
                wait(cpu_gnt[0]);
                cpu_req[0] = 0;
                cpu_we[0] = 0;
                $display("Core 0 Granted");
            end
            begin
                wait(cpu_gnt[1]);
                cpu_req[1] = 0;
                cpu_we[1] = 0;
                $display("Core 1 Granted");
            end
        join

        #200; // Wait for coherence to settle

        // Read back from Core 2 (Neutral observer)
        cpu_req[2] = 1;
        cpu_we[2] = 0;
        cpu_addr[2*64 +: 64] = 64'h200;
        
        wait(cpu_gnt[2]);
        cpu_req[2] = 0;
        
        wait(cpu_rvalid[2]);
        $display("Core 2 Read Data: %h", cpu_rdata[2*64 +: 64]);
        if (cpu_rdata[2*64 +: 64] == 64'hAAAA || cpu_rdata[2*64 +: 64] == 64'hBBBB) begin
            $display("PASS: Write Contention resolved (Last Writer Wins)");
        end else begin
            $display("FAIL: Write Contention failed. Expected AAAA or BBBB");
        end

        #100;

        // --- Test 2: Eviction with Sharers ---
        $display("--- Test 2: Eviction with Sharers ---");
        // Fill Set 0 (16 ways)
        // Addr = Tag << 14 | Set << 6 | Offset
        // Set = 0. Offset = 0.
        // Addr = Tag << 14.
        
        for (i=0; i<16; i=i+1) begin
            // Core 0 Reads
            cpu_req[0] = 1;
            cpu_we[0] = 0;
            cpu_addr[0 +: 64] = (i << 14); // 0, 16K, 32K...
            wait(cpu_gnt[0]);
            cpu_req[0] = 0;
            wait(cpu_rvalid[0]);
            
            // Core 1 Reads (Make it Shared)
            cpu_req[1] = 1;
            cpu_we[1] = 0;
            cpu_addr[1*64 +: 64] = (i << 14);
            wait(cpu_gnt[1]);
            cpu_req[1] = 0;
            wait(cpu_rvalid[1]);
        end
        
        $display("Set 0 Filled with 16 Shared Lines");
        
        // Access 17th line (Tag=16)
        // This should force eviction of one of the previous lines
        // Since they are Shared, L2 must Probe Core 0 and Core 1
        
        $display("Accessing 17th line (forcing eviction)...");
        cpu_req[0] = 1;
        cpu_we[0] = 0;
        cpu_addr[0 +: 64] = (16 << 14); // 17th line
        
        wait(cpu_gnt[0]);
        cpu_req[0] = 0;
        wait(cpu_rvalid[0]);
        
        $display("PASS: Eviction completed without hang");
        
        #100;
        $finish;
    end

endmodule
