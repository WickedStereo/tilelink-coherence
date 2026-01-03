`timescale 1ns/100ps

module rv64g_l1_dcache_tb(
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

	// Memory-side
	wire        m_req;
	wire        m_we;
	wire [7:0]  m_be;
	wire [63:0] m_addr;
	wire [63:0] m_wdata;
	wire        m_gnt;
	wire        m_rvalid;
	wire [63:0] m_rdata;

	// DUT
	rv64g_l1_dcache dut (
		.clk_i(clk), .rst_ni(rst_n), .invalidate_all_i(1'b0),
		.req_i(req), .we_i(we), .be_i(be), .addr_i(addr), .wdata_i(wdata),
		.gnt_o(gnt), .rvalid_o(rvalid), .rdata_o(rdata),
		.req_o(m_req), .we_o(m_we), .be_o(m_be), .addr_o(m_addr), .wdata_o(m_wdata),
		.gnt_i(m_gnt), .rvalid_i(m_rvalid), .rdata_i(m_rdata)
	);

	// Memory model
	rv64g_l1_mem_model mem (
		.clk_i(clk), .rst_ni(rst_n),
		.req_i(m_req), .we_i(m_we), .be_i(m_be), .addr_i(m_addr), .wdata_i(m_wdata),
		.gnt_o(m_gnt), .rvalid_o(m_rvalid), .rdata_o(m_rdata)
	);

	// FSM-based stimulus
	reg [4:0] tb_state;
	reg [63:0] d0, d1;
	localparam S_IDLE          = 5'd0,
	           S_RD1_REQ       = 5'd1,
	           S_RD1_WAIT_GNT  = 5'd2,
	           S_RD1_WAIT_RV   = 5'd3,
	           S_RD2_REQ       = 5'd4,
	           S_RD2_WAIT_GNT  = 5'd5,
	           S_RD2_WAIT_RV   = 5'd6,
	           S_WRHIT_REQ     = 5'd7,
	           S_WRHIT_WAIT_G  = 5'd8,
	           S_RD3_REQ       = 5'd9,
	           S_RD3_WAIT_GNT  = 5'd10,
	           S_RD3_WAIT_RV   = 5'd11,
	           S_WRMISS_REQ    = 5'd12,
	           S_WRMISS_WAIT_G = 5'd13,
	           S_RD4_REQ       = 5'd14,
	           S_RD4_WAIT_GNT  = 5'd15,
	           S_RD4_WAIT_RV   = 5'd16,
	           S_DONE          = 5'd31;

	always @(posedge clk) begin
		if (!rst_n) begin
			req <= 0; we <= 0; be <= 0; addr <= 0; wdata <= 0;
			d0 <= 64'd0; d1 <= 64'd0;
			tb_state <= S_IDLE;
		end else begin
			case (tb_state)
			S_IDLE: tb_state <= S_RD1_REQ;
			S_RD1_REQ: begin
				req <= 1; we <= 0; be <= 8'h00; addr <= 64'h0000_0000_0000_1000; wdata <= 64'd0;
				tb_state <= S_RD1_WAIT_GNT;
			end
			S_RD1_WAIT_GNT: begin
				if (gnt) begin req <= 0; tb_state <= S_RD1_WAIT_RV; end
			end
			S_RD1_WAIT_RV: begin
				if (rvalid) begin d0 <= rdata; tb_state <= S_RD2_REQ; end
			end
			S_RD2_REQ: begin
				req <= 1; we <= 0; be <= 8'h00; addr <= 64'h0000_0000_0000_1000; wdata <= 64'd0;
				tb_state <= S_RD2_WAIT_GNT;
			end
			S_RD2_WAIT_GNT: begin
				if (gnt) begin req <= 0; tb_state <= S_RD2_WAIT_RV; end
			end
			S_RD2_WAIT_RV: begin
				if (rvalid) begin d1 <= rdata; tb_state <= S_WRHIT_REQ; end
			end
			S_WRHIT_REQ: begin
				req <= 1; we <= 1; be <= 8'h01; addr <= 64'h0000_0000_0000_1000; wdata <= 64'h0000_0000_0000_00AA;
				tb_state <= S_WRHIT_WAIT_G;
			end
			S_WRHIT_WAIT_G: begin
				if (gnt) begin req <= 0; tb_state <= S_RD3_REQ; end
			end
			S_RD3_REQ: begin
				req <= 1; we <= 0; be <= 8'h00; addr <= 64'h0000_0000_0000_1000; wdata <= 64'd0;
				tb_state <= S_RD3_WAIT_GNT;
			end
			S_RD3_WAIT_GNT: begin
				if (gnt) begin req <= 0; tb_state <= S_RD3_WAIT_RV; end
			end
			S_RD3_WAIT_RV: begin
				if (rvalid) begin d0 <= rdata; tb_state <= S_WRMISS_REQ; end
			end
			S_WRMISS_REQ: begin
				req <= 1; we <= 1; be <= 8'hF0; addr <= 64'h0000_0000_0000_2008; wdata <= 64'hBEEF_BEEF_0000_0000;
				tb_state <= S_WRMISS_WAIT_G;
			end
			S_WRMISS_WAIT_G: begin
				if (gnt) begin req <= 0; tb_state <= S_RD4_REQ; end
			end
			S_RD4_REQ: begin
				req <= 1; we <= 0; be <= 8'h00; addr <= 64'h0000_0000_0000_2008; wdata <= 64'd0;
				tb_state <= S_RD4_WAIT_GNT;
			end
			S_RD4_WAIT_GNT: begin
				if (gnt) begin req <= 0; tb_state <= S_RD4_WAIT_RV; end
			end
			S_RD4_WAIT_RV: begin
				if (rvalid) begin d1 <= rdata; tb_state <= S_DONE; end
			end
			S_DONE: begin
				$display("Done. d0=%h d1=%h", d0, d1);
				// Checker
				if (d0 !== 64'h0000_0000_0000_00AA) begin
					$display("ERROR: d0 mismatch. Expected: %h, Got: %h", 64'h0000_0000_0000_00AA, d0);
				end else begin
					$display("PASS: d0 matches expected value");
				end
				if (d1 !== 64'hBEEF_BEEF_0000_0000) begin
					$display("ERROR: d1 mismatch. Expected: %h, Got: %h", 64'hBEEF_BEEF_0000_0000, d1);
				end else begin
					$display("PASS: d1 matches expected value");
				end
				$finish;
			end
			default: tb_state <= S_DONE;
			endcase
		end
	end

endmodule


