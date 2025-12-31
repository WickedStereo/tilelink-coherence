`timescale 1ns/1ps

module simple_ram #(
    parameter DATA_W = 64,
    parameter ADDR_W = 64,
    parameter MEM_SIZE = 65536
) (
    input wire clk,
    input wire rst_n,

    // TL-UH Interface (A Channel - Request)
    input wire [2:0]   a_opcode,
    input wire [2:0]   a_param,
    input wire [2:0]   a_size,
    input wire [3:0]   a_source,
    input wire [ADDR_W-1:0]  a_address,
    input wire [7:0]   a_mask,
    input wire [DATA_W-1:0]  a_data,
    input wire         a_valid,
    output reg         a_ready,

    // TL-UH Interface (D Channel - Response)
    output reg [2:0]   d_opcode,
    output reg [1:0]   d_param,
    output reg [2:0]   d_size,
    output reg [3:0]   d_source,
    output reg [1:0]   d_sink,
    output reg         d_denied,
    output reg [DATA_W-1:0]  d_data,
    output reg         d_corrupt,
    output reg         d_valid,
    input wire         d_ready
);

    // Memory Array
    reg [63:0] memory [0:MEM_SIZE-1];
    integer i;

    // State Machine
    localparam S_IDLE = 0;
    localparam S_READ_BURST = 1;
    localparam S_WRITE_BURST = 2;
    
    reg [1:0] state;
    reg [2:0] burst_cnt;
    reg [63:0] burst_addr;
    reg [3:0] burst_source;
    reg [2:0] burst_size;

    // Initialization
    initial begin
        for (i=0; i<MEM_SIZE; i=i+1) memory[i] = i; // Default init
        a_ready = 0;
        d_valid = 0;
        state = S_IDLE;
        burst_cnt = 0;
    end

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            state <= S_IDLE;
            burst_cnt <= 0;
            d_valid <= 0;
            a_ready <= 0;
        end else begin
            // D Channel Logic (Responses)
            if (d_valid && d_ready) begin
                if (state == S_READ_BURST) begin
                    if (burst_cnt == 7) begin
                        state <= S_IDLE;
                        d_valid <= 0;
                        a_ready <= 1; // Ready for next request
                    end else begin
                        burst_cnt <= burst_cnt + 1;
                        d_data <= memory[((burst_addr >> 3) & (MEM_SIZE-1)) + burst_cnt + 1];
                    end
                end else begin
                    d_valid <= 0; // Clear valid after single beat (Write Ack)
                end
            end
            
            // A Channel Logic
            case (state)
                S_IDLE: begin
                    a_ready <= 1;
                    if (a_valid && a_ready) begin
                        if (a_opcode == 3'd4) begin // Get (Read)
                            state <= S_READ_BURST;
                            burst_cnt <= 0;
                            burst_addr <= a_address;
                            burst_source <= a_source;
                            burst_size <= a_size;
                            
                            d_valid <= 1;
                            d_opcode <= 3'd1; // AccessAckData
                            d_param <= 0;
                            d_size <= a_size;
                            d_source <= a_source;
                            d_sink <= 0;
                            d_denied <= 0;
                            d_corrupt <= 0;
                            d_data <= memory[(a_address >> 3) & (MEM_SIZE-1)];
                            
                            a_ready <= 0; // Busy
                        end else if (a_opcode == 3'd0) begin // PutFullData (Write)
                            // First beat write
                            memory[(a_address >> 3) & (MEM_SIZE-1)] = a_data;
                            
                            burst_cnt <= 0;
                            burst_addr <= a_address;
                            burst_source <= a_source;
                            state <= S_WRITE_BURST;
                            // Keep a_ready high to accept burst
                        end
                    end
                end
                
                S_WRITE_BURST: begin
                    a_ready <= 1;
                    if (a_valid && a_ready) begin
                        memory[((burst_addr >> 3) & (MEM_SIZE-1)) + burst_cnt + 1] = a_data;
                        
                        if (burst_cnt == 6) begin // Last beat (7)
                            state <= S_IDLE;
                            // Send Ack
                            d_valid <= 1;
                            d_opcode <= 3'd0; // AccessAck
                            d_param <= 0;
                            d_size <= 3'd6; // 64B
                            d_source <= burst_source;
                            d_sink <= 0;
                            d_denied <= 0;
                            d_corrupt <= 0;
                            d_data <= 0;
                        end else begin
                            burst_cnt <= burst_cnt + 1;
                        end
                    end
                end
                
                S_READ_BURST: begin
                    a_ready <= 0; // Busy reading
                end
            endcase
        end
    end

endmodule
