############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
############################################################
open_project edge_detector
set_top edge_detector
add_files edge_detector/edge_detector.cpp
add_files -tb edge_detector/test.cpp
open_solution "solution1"
set_part {xc7z015clg485-2} -tool vivado
create_clock -period 6.666 -name default
#source "./edge_detector/solution1/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -rtl verilog -format ip_catalog
