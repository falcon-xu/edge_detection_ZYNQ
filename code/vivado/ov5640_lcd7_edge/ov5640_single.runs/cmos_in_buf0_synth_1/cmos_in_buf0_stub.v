// Copyright 1986-2015 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2015.4 (win64) Build 1412921 Wed Nov 18 09:43:45 MST 2015
// Date        : Wed May 31 10:01:39 2017
// Host        : LUO running 64-bit Service Pack 1  (build 7601)
// Command     : write_verilog -force -mode synth_stub
//               Y:/project/AX/AX7010/vivado_project_B/03_ov5640_single/ov5640_single.runs/cmos_in_buf0_synth_1/cmos_in_buf0_stub.v
// Design      : cmos_in_buf0
// Purpose     : Stub declaration of top-level module interface
// Device      : xc7z010clg400-1
// --------------------------------------------------------------------------------

// This empty module with port declaration file causes synthesis tools to infer a black box for IP.
// The synthesis directives are for Synopsys Synplify support to prevent IO buffer insertion.
// Please paste the declaration into a Verilog source file or add the file as an additional source.
(* x_core_info = "fifo_generator_v13_0_1,Vivado 2015.4" *)
module cmos_in_buf0(rst, wr_clk, rd_clk, din, wr_en, rd_en, dout, full, overflow, empty, underflow)
/* synthesis syn_black_box black_box_pad_pin="rst,wr_clk,rd_clk,din[26:0],wr_en,rd_en,dout[26:0],full,overflow,empty,underflow" */;
  input rst;
  input wr_clk;
  input rd_clk;
  input [26:0]din;
  input wr_en;
  input rd_en;
  output [26:0]dout;
  output full;
  output overflow;
  output empty;
  output underflow;
endmodule
