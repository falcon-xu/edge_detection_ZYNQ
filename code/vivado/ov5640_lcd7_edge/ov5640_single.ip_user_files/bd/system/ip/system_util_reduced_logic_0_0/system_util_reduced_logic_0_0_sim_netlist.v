// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2018.3 (win64) Build 2405991 Thu Dec  6 23:38:27 MST 2018
// Date        : Wed Jul 10 15:11:12 2019
// Host        : LAPTOP-L7UCABIP running 64-bit major release  (build 9200)
// Command     : write_verilog -force -mode funcsim
//               E:/vivado/vivado_lab/ZYNQ/ov5640_and_lcd7_display/ov5640_single.srcs/sources_1/bd/system/ip/system_util_reduced_logic_0_0/system_util_reduced_logic_0_0_sim_netlist.v
// Design      : system_util_reduced_logic_0_0
// Purpose     : This verilog netlist is a functional simulation representation of the design and should not be modified
//               or synthesized. This netlist cannot be used for SDF annotated simulation.
// Device      : xc7z020clg400-2
// --------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CHECK_LICENSE_TYPE = "system_util_reduced_logic_0_0,util_reduced_logic_v2_0_4_util_reduced_logic,{}" *) (* DowngradeIPIdentifiedWarnings = "yes" *) (* X_CORE_INFO = "util_reduced_logic_v2_0_4_util_reduced_logic,Vivado 2018.3" *) 
(* NotValidForBitStream *)
module system_util_reduced_logic_0_0
   (Op1,
    Res);
  input [7:0]Op1;
  output Res;

  wire [7:0]Op1;
  wire Res;

  system_util_reduced_logic_0_0_util_reduced_logic_v2_0_4_util_reduced_logic inst
       (.Op1(Op1),
        .Res(Res));
endmodule

(* ORIG_REF_NAME = "util_reduced_logic_v2_0_4_util_reduced_logic" *) 
module system_util_reduced_logic_0_0_util_reduced_logic_v2_0_4_util_reduced_logic
   (Res,
    Op1);
  output Res;
  input [7:0]Op1;

  wire [7:0]Op1;
  wire Res;
  wire Res_INST_0_i_1_n_0;

  LUT5 #(
    .INIT(32'h00008000)) 
    Res_INST_0
       (.I0(Op1[2]),
        .I1(Op1[3]),
        .I2(Op1[0]),
        .I3(Op1[1]),
        .I4(Res_INST_0_i_1_n_0),
        .O(Res));
  LUT4 #(
    .INIT(16'h7FFF)) 
    Res_INST_0_i_1
       (.I0(Op1[5]),
        .I1(Op1[4]),
        .I2(Op1[7]),
        .I3(Op1[6]),
        .O(Res_INST_0_i_1_n_0));
endmodule
`ifndef GLBL
`define GLBL
`timescale  1 ps / 1 ps

module glbl ();

    parameter ROC_WIDTH = 100000;
    parameter TOC_WIDTH = 0;

//--------   STARTUP Globals --------------
    wire GSR;
    wire GTS;
    wire GWE;
    wire PRLD;
    tri1 p_up_tmp;
    tri (weak1, strong0) PLL_LOCKG = p_up_tmp;

    wire PROGB_GLBL;
    wire CCLKO_GLBL;
    wire FCSBO_GLBL;
    wire [3:0] DO_GLBL;
    wire [3:0] DI_GLBL;
   
    reg GSR_int;
    reg GTS_int;
    reg PRLD_int;

//--------   JTAG Globals --------------
    wire JTAG_TDO_GLBL;
    wire JTAG_TCK_GLBL;
    wire JTAG_TDI_GLBL;
    wire JTAG_TMS_GLBL;
    wire JTAG_TRST_GLBL;

    reg JTAG_CAPTURE_GLBL;
    reg JTAG_RESET_GLBL;
    reg JTAG_SHIFT_GLBL;
    reg JTAG_UPDATE_GLBL;
    reg JTAG_RUNTEST_GLBL;

    reg JTAG_SEL1_GLBL = 0;
    reg JTAG_SEL2_GLBL = 0 ;
    reg JTAG_SEL3_GLBL = 0;
    reg JTAG_SEL4_GLBL = 0;

    reg JTAG_USER_TDO1_GLBL = 1'bz;
    reg JTAG_USER_TDO2_GLBL = 1'bz;
    reg JTAG_USER_TDO3_GLBL = 1'bz;
    reg JTAG_USER_TDO4_GLBL = 1'bz;

    assign (strong1, weak0) GSR = GSR_int;
    assign (strong1, weak0) GTS = GTS_int;
    assign (weak1, weak0) PRLD = PRLD_int;

    initial begin
	GSR_int = 1'b1;
	PRLD_int = 1'b1;
	#(ROC_WIDTH)
	GSR_int = 1'b0;
	PRLD_int = 1'b0;
    end

    initial begin
	GTS_int = 1'b1;
	#(TOC_WIDTH)
	GTS_int = 1'b0;
    end

endmodule
`endif
