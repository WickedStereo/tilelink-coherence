`timescale 1ns/1ps
`include "params.vh"

module cpu64_l1_probe_tb(
	input clk,
	input rst_n
);

	// CPU-side
	reg        req;
	reg        we;
	reg [7:0]  be;
	reg [63:0] addr;
	reg [63:0] wdata;
	wire       gnt;
	wire       rvalid;
	wire [63:0] rdata;

	// TileLink A
	wire        tl_a_valid;
	reg         tl_a_ready;
	wire [2:0]  tl_a_opcode;
	wire [2:0]  tl_a_param;
	wire [3:0]  tl_a_size;
	wire [3:0]  tl_a_source;
	wire [63:0] tl_a_address;
	wire [7:0]  tl_a_mask;
	wire [63:0] tl_a_data;
	wire        tl_a_corrupt;

	// TileLink B
	reg         tl_b_valid;
	wire        tl_b_ready;
	reg  [2:0]  tl_b_opcode;
	reg  [2:0]  tl_b_param;
	reg  [3:0]  tl_b_size;
	reg  [3:0]  tl_b_source;
	reg  [63:0] tl_b_address;
	reg  [7:0]  tl_b_mask;
	reg  [63:0] tl_b_data;
	reg         tl_b_corrupt;

	// TileLink C
	wire        tl_c_valid;
	reg         tl_c_ready;
	wire [2:0]  tl_c_opcode;
	wire [2:0]  tl_c_param;
	wire [3:0]  tl_c_size;
	wire [3:0]  tl_c_source;
	wire [63:0] tl_c_address;
	wire [63:0] tl_c_data;
	wire        tl_c_corrupt;

	// TileLink D
	reg         tl_d_valid;
	wire        tl_d_ready;
	reg  [2:0]  tl_d_opcode;
	reg  [1:0]  tl_d_param;
	reg  [3:0]  tl_d_size;
	reg  [3:0]  tl_d_source;
	reg  [3:0]  tl_d_sink;
	reg         tl_d_denied;
	reg  [63:0] tl_d_data;
	reg         tl_d_corrupt;

	// TileLink E
	wire        tl_e_valid;
	reg         tl_e_ready;
	wire [3:0]  tl_e_sink;

	// DUT
	cpu64_l1_dcache dut (
		.clk_i(clk), .rst_ni(rst_n),
		.invalidate_all_i(1'b0),
		.binv_req_i(1'b0), .binv_addr_i(64'd0), .binv_ack_o(), // Legacy ports

		.req_i(req), .we_i(we), .be_i(be), .addr_i(addr), .wdata_i(wdata),
		.gnt_o(gnt), .rvalid_o(rvalid), .rdata_o(rdata),

		.tl_a_valid_o(tl_a_valid), .tl_a_ready_i(tl_a_ready),
		.tl_a_opcode_o(tl_a_opcode), .tl_a_param_o(tl_a_param),
		.tl_a_size_o(tl_a_size), .tl_a_source_o(tl_a_source),
		.tl_a_address_o(tl_a_address), .tl_a_mask_o(tl_a_mask),
		.tl_a_data_o(tl_a_data), .tl_a_corrupt_o(tl_a_corrupt),

		.tl_b_valid_i(tl_b_valid), .tl_b_ready_o(tl_b_ready),
		.tl_b_opcode_i(tl_b_opcode), .tl_b_param_i(tl_b_param),
		.tl_b_size_i(tl_b_size), .tl_b_source_i(tl_b_source),
		.tl_b_address_i(tl_b_address), .tl_b_mask_i(tl_b_mask),
		.tl_b_data_i(tl_b_data), .tl_b_corrupt_i(tl_b_corrupt),

		.tl_c_valid_o(tl_c_valid), .tl_c_ready_i(tl_c_ready),
		.tl_c_opcode_o(tl_c_opcode), .tl_c_param_o(tl_c_param),
		.tl_c_size_o(tl_c_size), .tl_c_source_o(tl_c_source),
		.tl_c_address_o(tl_c_address), .tl_c_data_o(tl_c_data),
		.tl_c_corrupt_o(tl_c_corrupt),

		.tl_d_valid_i(tl_d_valid), .tl_d_ready_o(tl_d_ready),
		.tl_d_opcode_i(tl_d_opcode), .tl_d_param_i(tl_d_param),
		.tl_d_size_i(tl_d_size), .tl_d_source_i(tl_d_source),
		.tl_d_sink_i(tl_d_sink), .tl_d_denied_i(tl_d_denied),
		.tl_d_data_i(tl_d_data), .tl_d_corrupt_i(tl_d_corrupt),

		.tl_e_valid_o(tl_e_valid), .tl_e_ready_i(tl_e_ready),
		.tl_e_sink_o(tl_e_sink)
	);

	// FSM
	reg [4:0] tb_state;
	reg [3:0] beat_cnt;
	
	localparam S_IDLE = 0,
	           S_WRITE_REQ = 1,
	           S_WRITE_WAIT_GNT = 2,
	           S_WRITE_WAIT_A = 3,
	           S_WRITE_SEND_D = 4,
	           S_WRITE_WAIT_E = 5,
	           S_PROBE_REQ = 6,
	           S_PROBE_WAIT_C = 7,
	           S_READ_REQ = 8,
	           S_READ_WAIT_GNT = 9,
	           S_READ_WAIT_A = 10,
	           S_DONE = 31;

	always @(posedge clk) begin
		if (!rst_n) begin
			req <= 0; we <= 0; be <= 0; addr <= 0; wdata <= 0;
			tl_a_ready <= 0;
			tl_b_valid <= 0; tl_b_opcode <= 0; tl_b_param <= 0; tl_b_size <= 0; tl_b_source <= 0; tl_b_address <= 0; tl_b_mask <= 0; tl_b_data <= 0; tl_b_corrupt <= 0;
			tl_c_ready <= 0;
			tl_d_valid <= 0; tl_d_opcode <= 0; tl_d_param <= 0; tl_d_size <= 0; tl_d_source <= 0; tl_d_sink <= 0; tl_d_denied <= 0; tl_d_data <= 0; tl_d_corrupt <= 0;
			tl_e_ready <= 0;
			tb_state <= S_IDLE;
			beat_cnt <= 0;
		end else begin
			case (tb_state)
			S_IDLE: tb_state <= S_WRITE_REQ;
			
			// 1. CPU Write Miss (0x1000)
			S_WRITE_REQ: begin
				req <= 1; we <= 1; be <= 8'hFF; addr <= 64'h1000; wdata <= 64'hDEADBEEF;
				tb_state <= S_WRITE_WAIT_GNT;
			end
			S_WRITE_WAIT_GNT: begin
				// Wait for grant (might be delayed by refill)
				// Actually, for a miss, GNT comes immediately to accept the request, then we wait for refill
				if (gnt) begin
					req <= 0;
					tl_a_ready <= 1; // Enable A ready to catch Acquire
					tb_state <= S_WRITE_WAIT_A;
				end
			end
			S_WRITE_WAIT_A: begin
				if (tl_a_valid) begin
					if (tl_a_opcode == A_ACQUIRE_BLOCK) begin
						$display("PASS: Got AcquireBlock");
						tl_a_ready <= 0;
						beat_cnt <= 0;
						tb_state <= S_WRITE_SEND_D;
					end else begin
						$display("FAIL: Expected AcquireBlock, got %d", tl_a_opcode);
						tb_state <= S_DONE;
					end
				end
			end
			S_WRITE_SEND_D: begin
				tl_d_valid <= 1;
				tl_d_opcode <= D_GRANT_DATA;
				tl_d_param <= NtoT;
				tl_d_size <= 4'd6;
				tl_d_source <= 0;
				tl_d_sink <= 1;
				tl_d_data <= 64'h0 + beat_cnt;
				
				if (tl_d_ready) begin
					if (beat_cnt == 7) begin
						tl_d_valid <= 0;
						tl_e_ready <= 1;
						tb_state <= S_WRITE_WAIT_E;
					end else begin
						beat_cnt <= beat_cnt + 1;
					end
				end
			end
			S_WRITE_WAIT_E: begin
				if (tl_e_valid) begin
					$display("PASS: Got GrantAck");
					tl_e_ready <= 0;
					tb_state <= S_PROBE_REQ;
				end
			end

			// 2. Probe (0x1000)
			S_PROBE_REQ: begin
				tl_b_valid <= 1;
				tl_b_opcode <= B_PROBE;
				tl_b_param <= TtoN;
				tl_b_size <= 4'd6;
				tl_b_source <= 2;
				tl_b_address <= 64'h1000;
				tl_b_mask <= 8'hFF;
				
				if (tl_b_ready) begin
					tl_b_valid <= 0;
					tl_c_ready <= 1;
					beat_cnt <= 0;
					tb_state <= S_PROBE_WAIT_C;
				end
			end
			S_PROBE_WAIT_C: begin
				if (tl_c_valid) begin
					if (beat_cnt == 0) begin
						if (tl_c_opcode == C_PROBE_ACK_DATA) $display("PASS: Got ProbeAckData");
						else $display("FAIL: Expected ProbeAckData, got %d", tl_c_opcode);
					end
					
					if (beat_cnt == 7) begin
						tl_c_ready <= 0;
						tb_state <= S_READ_REQ;
					end else begin
						beat_cnt <= beat_cnt + 1;
					end
				end
			end

			// 3. CPU Read Miss (0x1000)
			S_READ_REQ: begin
				req <= 1; we <= 0; addr <= 64'h1000;
				tb_state <= S_READ_WAIT_GNT;
			end
			S_READ_WAIT_GNT: begin
				if (gnt) begin
					req <= 0;
					tl_a_ready <= 1;
					tb_state <= S_READ_WAIT_A;
				end
			end
			S_READ_WAIT_A: begin
				if (tl_a_valid) begin
					if (tl_a_opcode == A_ACQUIRE_BLOCK) begin
						$display("PASS: Got AcquireBlock (Miss confirmed)");
					end else begin
						$display("FAIL: Did not get AcquireBlock (Hit? Should be Miss)");
					end
					tl_a_ready <= 0;
					tb_state <= S_DONE;
				end
			end

			S_DONE: begin
				$display("Test Complete");
				$finish;
			end
			endcase
		end
	end

endmodule
