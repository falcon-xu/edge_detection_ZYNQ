-makelib ies_lib/xilinx_vip -sv \
  "E:/vivado/Vivado/2018.3/data/xilinx_vip/hdl/axi4stream_vip_axi4streampc.sv" \
  "E:/vivado/Vivado/2018.3/data/xilinx_vip/hdl/axi_vip_axi4pc.sv" \
  "E:/vivado/Vivado/2018.3/data/xilinx_vip/hdl/xil_common_vip_pkg.sv" \
  "E:/vivado/Vivado/2018.3/data/xilinx_vip/hdl/axi4stream_vip_pkg.sv" \
  "E:/vivado/Vivado/2018.3/data/xilinx_vip/hdl/axi_vip_pkg.sv" \
  "E:/vivado/Vivado/2018.3/data/xilinx_vip/hdl/axi4stream_vip_if.sv" \
  "E:/vivado/Vivado/2018.3/data/xilinx_vip/hdl/axi_vip_if.sv" \
  "E:/vivado/Vivado/2018.3/data/xilinx_vip/hdl/clk_vip_if.sv" \
  "E:/vivado/Vivado/2018.3/data/xilinx_vip/hdl/rst_vip_if.sv" \
-endlib
-makelib ies_lib/xil_defaultlib -sv \
  "E:/vivado/Vivado/2018.3/data/ip/xpm/xpm_cdc/hdl/xpm_cdc.sv" \
  "E:/vivado/Vivado/2018.3/data/ip/xpm/xpm_fifo/hdl/xpm_fifo.sv" \
  "E:/vivado/Vivado/2018.3/data/ip/xpm/xpm_memory/hdl/xpm_memory.sv" \
-endlib
-makelib ies_lib/xpm \
  "E:/vivado/Vivado/2018.3/data/ip/xpm/xpm_VCOMP.vhd" \
-endlib
-makelib ies_lib/xil_defaultlib \
  "../../../bd/system/ip/system_alinx_ov5640_0_0/src/ila_0/sim/ila_0.v" \
  "../../../../ov5640_single.srcs/sources_1/bd/system/ipshared/564b/src/cmos_8_16bit.v" \
  "../../../../ov5640_single.srcs/sources_1/bd/system/ipshared/564b/src/alinx_ov5640.v" \
  "../../../bd/system/ip/system_alinx_ov5640_0_0/sim/system_alinx_ov5640_0_0.v" \
  "../../../../ov5640_single.srcs/sources_1/bd/system/ipshared/9097/src/mmcme2_drp.v" \
-endlib
-makelib ies_lib/xil_defaultlib \
  "../../../../ov5640_single.srcs/sources_1/bd/system/ipshared/9097/src/axi_dynclk_S00_AXI.vhd" \
  "../../../../ov5640_single.srcs/sources_1/bd/system/ipshared/9097/src/axi_dynclk.vhd" \
  "../../../bd/system/ip/system_axi_dynclk_0_0/sim/system_axi_dynclk_0_0.vhd" \
-endlib
-makelib ies_lib/lib_cdc_v1_0_2 \
  "../../../../ov5640_single.srcs/sources_1/bd/system/ipshared/ef1e/hdl/lib_cdc_v1_0_rfs.vhd" \
-endlib
-makelib ies_lib/lib_pkg_v1_0_2 \
  "../../../../ov5640_single.srcs/sources_1/bd/system/ipshared/0513/hdl/lib_pkg_v1_0_rfs.vhd" \
-endlib
-makelib ies_lib/fifo_generator_v13_2_3 \
  "../../../../ov5640_single.srcs/sources_1/bd/system/ipshared/64f4/simulation/fifo_generator_vlog_beh.v" \
-endlib
-makelib ies_lib/fifo_generator_v13_2_3 \
  "../../../../ov5640_single.srcs/sources_1/bd/system/ipshared/64f4/hdl/fifo_generator_v13_2_rfs.vhd" \
-endlib
-makelib ies_lib/fifo_generator_v13_2_3 \
  "../../../../ov5640_single.srcs/sources_1/bd/system/ipshared/64f4/hdl/fifo_generator_v13_2_rfs.v" \
-endlib
-makelib ies_lib/lib_fifo_v1_0_12 \
  "../../../../ov5640_single.srcs/sources_1/bd/system/ipshared/544a/hdl/lib_fifo_v1_0_rfs.vhd" \
-endlib
-makelib ies_lib/blk_mem_gen_v8_4_2 \
  "../../../../ov5640_single.srcs/sources_1/bd/system/ipshared/37c2/simulation/blk_mem_gen_v8_4.v" \
-endlib
-makelib ies_lib/lib_bmg_v1_0_11 \
  "../../../../ov5640_single.srcs/sources_1/bd/system/ipshared/556c/hdl/lib_bmg_v1_0_rfs.vhd" \
-endlib
-makelib ies_lib/lib_srl_fifo_v1_0_2 \
  "../../../../ov5640_single.srcs/sources_1/bd/system/ipshared/51ce/hdl/lib_srl_fifo_v1_0_rfs.vhd" \
-endlib
-makelib ies_lib/axi_datamover_v5_1_20 \
  "../../../../ov5640_single.srcs/sources_1/bd/system/ipshared/dfb3/hdl/axi_datamover_v5_1_vh_rfs.vhd" \
-endlib
-makelib ies_lib/axi_vdma_v6_3_6 \
  "../../../../ov5640_single.srcs/sources_1/bd/system/ipshared/58e2/hdl/axi_vdma_v6_3_rfs.v" \
-endlib
-makelib ies_lib/axi_vdma_v6_3_6 \
  "../../../../ov5640_single.srcs/sources_1/bd/system/ipshared/58e2/hdl/axi_vdma_v6_3_rfs.vhd" \
-endlib
-makelib ies_lib/xil_defaultlib \
  "../../../bd/system/ip/system_axi_vdma_0_0/sim/system_axi_vdma_0_0.vhd" \
  "../../../bd/system/ip/system_axi_vdma_1_0/sim/system_axi_vdma_1_0.vhd" \
-endlib
-makelib ies_lib/axi_infrastructure_v1_1_0 \
  "../../../../ov5640_single.srcs/sources_1/bd/system/ipshared/ec67/hdl/axi_infrastructure_v1_1_vl_rfs.v" \
-endlib
-makelib ies_lib/axi_vip_v1_1_4 -sv \
  "../../../../ov5640_single.srcs/sources_1/bd/system/ipshared/98af/hdl/axi_vip_v1_1_vl_rfs.sv" \
-endlib
-makelib ies_lib/processing_system7_vip_v1_0_6 -sv \
  "../../../../ov5640_single.srcs/sources_1/bd/system/ipshared/70cf/hdl/processing_system7_vip_v1_0_vl_rfs.sv" \
-endlib
-makelib ies_lib/xil_defaultlib \
  "../../../bd/system/ip/system_processing_system7_0_0/sim/system_processing_system7_0_0.v" \
-endlib
-makelib ies_lib/proc_sys_reset_v5_0_13 \
  "../../../../ov5640_single.srcs/sources_1/bd/system/ipshared/8842/hdl/proc_sys_reset_v5_0_vh_rfs.vhd" \
-endlib
-makelib ies_lib/xil_defaultlib \
  "../../../bd/system/ip/system_rst_processing_system7_0_100M_0/sim/system_rst_processing_system7_0_100M_0.vhd" \
  "../../../bd/system/ip/system_rst_processing_system7_0_150M_0/sim/system_rst_processing_system7_0_150M_0.vhd" \
-endlib
-makelib ies_lib/axi_lite_ipif_v3_0_4 \
  "../../../../ov5640_single.srcs/sources_1/bd/system/ipshared/66ea/hdl/axi_lite_ipif_v3_0_vh_rfs.vhd" \
-endlib
-makelib ies_lib/v_tc_v6_1_13 \
  "../../../../ov5640_single.srcs/sources_1/bd/system/ipshared/a92c/hdl/v_tc_v6_1_vh_rfs.vhd" \
-endlib
-makelib ies_lib/v_vid_in_axi4s_v4_0_9 \
  "../../../../ov5640_single.srcs/sources_1/bd/system/ipshared/b2aa/hdl/v_vid_in_axi4s_v4_0_vl_rfs.v" \
-endlib
-makelib ies_lib/v_axi4s_vid_out_v4_0_10 \
  "../../../../ov5640_single.srcs/sources_1/bd/system/ipshared/a87e/hdl/v_axi4s_vid_out_v4_0_vl_rfs.v" \
-endlib
-makelib ies_lib/xil_defaultlib \
  "../../../bd/system/ip/system_v_axi4s_vid_out_0_0/sim/system_v_axi4s_vid_out_0_0.v" \
-endlib
-makelib ies_lib/xil_defaultlib \
  "../../../bd/system/ip/system_v_tc_0_0/sim/system_v_tc_0_0.vhd" \
-endlib
-makelib ies_lib/xlconcat_v2_1_1 \
  "../../../../ov5640_single.srcs/sources_1/bd/system/ipshared/2f66/hdl/xlconcat_v2_1_vl_rfs.v" \
-endlib
-makelib ies_lib/xil_defaultlib \
  "../../../bd/system/ip/system_xlconcat_0_0/sim/system_xlconcat_0_0.v" \
-endlib
-makelib ies_lib/xlconstant_v1_1_5 \
  "../../../../ov5640_single.srcs/sources_1/bd/system/ipshared/4649/hdl/xlconstant_v1_1_vl_rfs.v" \
-endlib
-makelib ies_lib/xil_defaultlib \
  "../../../bd/system/ip/system_xlconstant_1_0/sim/system_xlconstant_1_0.v" \
-endlib
-makelib ies_lib/axis_infrastructure_v1_1_0 \
  "../../../../ov5640_single.srcs/sources_1/bd/system/ipshared/8713/hdl/axis_infrastructure_v1_1_vl_rfs.v" \
-endlib
-makelib ies_lib/axis_register_slice_v1_1_18 \
  "../../../../ov5640_single.srcs/sources_1/bd/system/ipshared/af00/hdl/axis_register_slice_v1_1_vl_rfs.v" \
-endlib
-makelib ies_lib/xil_defaultlib \
  "../../../bd/system/ip/system_axis_subset_converter_0_1/hdl/tdata_system_axis_subset_converter_0_1.v" \
  "../../../bd/system/ip/system_axis_subset_converter_0_1/hdl/tuser_system_axis_subset_converter_0_1.v" \
  "../../../bd/system/ip/system_axis_subset_converter_0_1/hdl/tstrb_system_axis_subset_converter_0_1.v" \
  "../../../bd/system/ip/system_axis_subset_converter_0_1/hdl/tkeep_system_axis_subset_converter_0_1.v" \
  "../../../bd/system/ip/system_axis_subset_converter_0_1/hdl/tid_system_axis_subset_converter_0_1.v" \
  "../../../bd/system/ip/system_axis_subset_converter_0_1/hdl/tdest_system_axis_subset_converter_0_1.v" \
  "../../../bd/system/ip/system_axis_subset_converter_0_1/hdl/tlast_system_axis_subset_converter_0_1.v" \
-endlib
-makelib ies_lib/axis_subset_converter_v1_1_18 \
  "../../../../ov5640_single.srcs/sources_1/bd/system/ipshared/33dd/hdl/axis_subset_converter_v1_1_vl_rfs.v" \
-endlib
-makelib ies_lib/xil_defaultlib \
  "../../../bd/system/ip/system_axis_subset_converter_0_1/hdl/top_system_axis_subset_converter_0_1.v" \
  "../../../bd/system/ip/system_axis_subset_converter_0_1/sim/system_axis_subset_converter_0_1.v" \
-endlib
-makelib ies_lib/generic_baseblocks_v2_1_0 \
  "../../../../ov5640_single.srcs/sources_1/bd/system/ipshared/b752/hdl/generic_baseblocks_v2_1_vl_rfs.v" \
-endlib
-makelib ies_lib/axi_register_slice_v2_1_18 \
  "../../../../ov5640_single.srcs/sources_1/bd/system/ipshared/cc23/hdl/axi_register_slice_v2_1_vl_rfs.v" \
-endlib
-makelib ies_lib/axi_data_fifo_v2_1_17 \
  "../../../../ov5640_single.srcs/sources_1/bd/system/ipshared/c4fd/hdl/axi_data_fifo_v2_1_vl_rfs.v" \
-endlib
-makelib ies_lib/axi_crossbar_v2_1_19 \
  "../../../../ov5640_single.srcs/sources_1/bd/system/ipshared/6c9d/hdl/axi_crossbar_v2_1_vl_rfs.v" \
-endlib
-makelib ies_lib/xil_defaultlib \
  "../../../bd/system/ip/system_xbar_0/sim/system_xbar_0.v" \
  "../../../bd/system/ip/system_xbar_1/sim/system_xbar_1.v" \
  "../../../bd/system/ipshared/c3bd/src/ax_pwm.v" \
  "../../../bd/system/ipshared/c3bd/hdl/ax_pwm_v1_0_S00_AXI.v" \
  "../../../bd/system/ipshared/c3bd/hdl/ax_pwm_v1_0.v" \
  "../../../bd/system/ip/system_ax_pwm_0_0/sim/system_ax_pwm_0_0.v" \
-endlib
-makelib ies_lib/util_vector_logic_v2_0_1 \
  "../../../../ov5640_single.srcs/sources_1/bd/system/ipshared/2137/hdl/util_vector_logic_v2_0_vl_rfs.v" \
-endlib
-makelib ies_lib/xil_defaultlib \
  "../../../bd/system/ip/system_util_vector_logic_0_0/sim/system_util_vector_logic_0_0.v" \
-endlib
-makelib ies_lib/util_reduced_logic_v2_0_4 \
  "../../../../ov5640_single.srcs/sources_1/bd/system/ipshared/4c94/hdl/util_reduced_logic_v2_0_vl_rfs.v" \
-endlib
-makelib ies_lib/xil_defaultlib \
  "../../../bd/system/ip/system_util_reduced_logic_0_0/sim/system_util_reduced_logic_0_0.v" \
  "../../../bd/system/sim/system.v" \
-endlib
-makelib ies_lib/interrupt_control_v3_1_4 \
  "../../../../ov5640_single.srcs/sources_1/bd/system/ipshared/a040/hdl/interrupt_control_v3_1_vh_rfs.vhd" \
-endlib
-makelib ies_lib/axi_gpio_v2_0_20 \
  "../../../../ov5640_single.srcs/sources_1/bd/system/ipshared/a7c9/hdl/axi_gpio_v2_0_vh_rfs.vhd" \
-endlib
-makelib ies_lib/xil_defaultlib \
  "../../../bd/system/ip/system_axi_gpio_0_1/sim/system_axi_gpio_0_1.vhd" \
-endlib
-makelib ies_lib/xbip_utils_v3_0_9 \
  "../../../../ov5640_single.srcs/sources_1/bd/system/ipshared/0da8/hdl/xbip_utils_v3_0_vh_rfs.vhd" \
-endlib
-makelib ies_lib/axi_utils_v2_0_5 \
  "../../../../ov5640_single.srcs/sources_1/bd/system/ipshared/ec8e/hdl/axi_utils_v2_0_vh_rfs.vhd" \
-endlib
-makelib ies_lib/xbip_pipe_v3_0_5 \
  "../../../../ov5640_single.srcs/sources_1/bd/system/ipshared/442e/hdl/xbip_pipe_v3_0_vh_rfs.vhd" \
-endlib
-makelib ies_lib/xbip_dsp48_wrapper_v3_0_4 \
  "../../../../ov5640_single.srcs/sources_1/bd/system/ipshared/cdbf/hdl/xbip_dsp48_wrapper_v3_0_vh_rfs.vhd" \
-endlib
-makelib ies_lib/xbip_dsp48_addsub_v3_0_5 \
  "../../../../ov5640_single.srcs/sources_1/bd/system/ipshared/a04b/hdl/xbip_dsp48_addsub_v3_0_vh_rfs.vhd" \
-endlib
-makelib ies_lib/xbip_dsp48_multadd_v3_0_5 \
  "../../../../ov5640_single.srcs/sources_1/bd/system/ipshared/b226/hdl/xbip_dsp48_multadd_v3_0_vh_rfs.vhd" \
-endlib
-makelib ies_lib/xbip_bram18k_v3_0_5 \
  "../../../../ov5640_single.srcs/sources_1/bd/system/ipshared/c08f/hdl/xbip_bram18k_v3_0_vh_rfs.vhd" \
-endlib
-makelib ies_lib/mult_gen_v12_0_14 \
  "../../../../ov5640_single.srcs/sources_1/bd/system/ipshared/6bb5/hdl/mult_gen_v12_0_vh_rfs.vhd" \
-endlib
-makelib ies_lib/floating_point_v7_1_7 \
  "../../../../ov5640_single.srcs/sources_1/bd/system/ipshared/c63e/hdl/floating_point_v7_1_vh_rfs.vhd" \
-endlib
-makelib ies_lib/xil_defaultlib \
  "../../../../ov5640_single.srcs/sources_1/bd/system/ipshared/120e/hdl/verilog/AddWeighted.v" \
  "../../../../ov5640_single.srcs/sources_1/bd/system/ipshared/120e/hdl/verilog/AXIvideo2Mat.v" \
  "../../../../ov5640_single.srcs/sources_1/bd/system/ipshared/120e/hdl/verilog/Block_proc232.v" \
  "../../../../ov5640_single.srcs/sources_1/bd/system/ipshared/120e/hdl/verilog/CvtColor.v" \
  "../../../../ov5640_single.srcs/sources_1/bd/system/ipshared/120e/hdl/verilog/CvtColor_1.v" \
  "../../../../ov5640_single.srcs/sources_1/bd/system/ipshared/120e/hdl/verilog/Duplicate.v" \
  "../../../../ov5640_single.srcs/sources_1/bd/system/ipshared/120e/hdl/verilog/edge_detector_AXILiteS_s_axi.v" \
  "../../../../ov5640_single.srcs/sources_1/bd/system/ipshared/120e/hdl/verilog/edge_detector_fadlbW.v" \
  "../../../../ov5640_single.srcs/sources_1/bd/system/ipshared/120e/hdl/verilog/edge_detector_fmumb6.v" \
  "../../../../ov5640_single.srcs/sources_1/bd/system/ipshared/120e/hdl/verilog/edge_detector_fpeocq.v" \
  "../../../../ov5640_single.srcs/sources_1/bd/system/ipshared/120e/hdl/verilog/edge_detector_maccud.v" \
  "../../../../ov5640_single.srcs/sources_1/bd/system/ipshared/120e/hdl/verilog/edge_detector_macdEe.v" \
  "../../../../ov5640_single.srcs/sources_1/bd/system/ipshared/120e/hdl/verilog/edge_detector_mulbkb.v" \
  "../../../../ov5640_single.srcs/sources_1/bd/system/ipshared/120e/hdl/verilog/edge_detector_muxhbi.v" \
  "../../../../ov5640_single.srcs/sources_1/bd/system/ipshared/120e/hdl/verilog/edge_detector_uitncg.v" \
  "../../../../ov5640_single.srcs/sources_1/bd/system/ipshared/120e/hdl/verilog/fifo_w8_d2_A.v" \
  "../../../../ov5640_single.srcs/sources_1/bd/system/ipshared/120e/hdl/verilog/fifo_w8_d7_A.v" \
  "../../../../ov5640_single.srcs/sources_1/bd/system/ipshared/120e/hdl/verilog/fifo_w12_d2_A.v" \
  "../../../../ov5640_single.srcs/sources_1/bd/system/ipshared/120e/hdl/verilog/Filter2D.v" \
  "../../../../ov5640_single.srcs/sources_1/bd/system/ipshared/120e/hdl/verilog/Filter2D102.v" \
  "../../../../ov5640_single.srcs/sources_1/bd/system/ipshared/120e/hdl/verilog/Filter2D102_k_bufeOg.v" \
  "../../../../ov5640_single.srcs/sources_1/bd/system/ipshared/120e/hdl/verilog/Mat2AXIvideo.v" \
  "../../../../ov5640_single.srcs/sources_1/bd/system/ipshared/120e/hdl/verilog/start_for_AddWeigudo.v" \
  "../../../../ov5640_single.srcs/sources_1/bd/system/ipshared/120e/hdl/verilog/start_for_CvtColoqcK.v" \
  "../../../../ov5640_single.srcs/sources_1/bd/system/ipshared/120e/hdl/verilog/start_for_CvtColovdy.v" \
  "../../../../ov5640_single.srcs/sources_1/bd/system/ipshared/120e/hdl/verilog/start_for_DuplicarcU.v" \
  "../../../../ov5640_single.srcs/sources_1/bd/system/ipshared/120e/hdl/verilog/start_for_Filter2sc4.v" \
  "../../../../ov5640_single.srcs/sources_1/bd/system/ipshared/120e/hdl/verilog/start_for_Filter2tde.v" \
  "../../../../ov5640_single.srcs/sources_1/bd/system/ipshared/120e/hdl/verilog/start_for_Mat2AXIwdI.v" \
  "../../../../ov5640_single.srcs/sources_1/bd/system/ipshared/120e/hdl/verilog/start_for_threshopcA.v" \
  "../../../../ov5640_single.srcs/sources_1/bd/system/ipshared/120e/hdl/verilog/thresholding.v" \
  "../../../../ov5640_single.srcs/sources_1/bd/system/ipshared/120e/hdl/verilog/edge_detector.v" \
-endlib
-makelib ies_lib/xil_defaultlib \
  "../../../../ov5640_single.srcs/sources_1/bd/system/ipshared/120e/hdl/ip/edge_detector_ap_fadd_5_full_dsp_32.vhd" \
  "../../../../ov5640_single.srcs/sources_1/bd/system/ipshared/120e/hdl/ip/edge_detector_ap_fmul_2_max_dsp_32.vhd" \
  "../../../../ov5640_single.srcs/sources_1/bd/system/ipshared/120e/hdl/ip/edge_detector_ap_fpext_0_no_dsp_32.vhd" \
  "../../../../ov5640_single.srcs/sources_1/bd/system/ipshared/120e/hdl/ip/edge_detector_ap_uitofp_4_no_dsp_32.vhd" \
  "../../../bd/system/ip/system_edge_detector_0_0/sim/system_edge_detector_0_0.vhd" \
  "../../../bd/system/ip/system_util_ds_buf_0_0/util_ds_buf.vhd" \
  "../../../bd/system/ip/system_util_ds_buf_0_0/sim/system_util_ds_buf_0_0.vhd" \
  "../../../bd/system/ip/system_util_ds_buf_1_0/sim/system_util_ds_buf_1_0.vhd" \
-endlib
-makelib ies_lib/axi_protocol_converter_v2_1_18 \
  "../../../../ov5640_single.srcs/sources_1/bd/system/ipshared/7a04/hdl/axi_protocol_converter_v2_1_vl_rfs.v" \
-endlib
-makelib ies_lib/xil_defaultlib \
  "../../../bd/system/ip/system_auto_pc_0/sim/system_auto_pc_0.v" \
  "../../../bd/system/ip/system_auto_pc_1/sim/system_auto_pc_1.v" \
-endlib
-makelib ies_lib/axi_clock_converter_v2_1_17 \
  "../../../../ov5640_single.srcs/sources_1/bd/system/ipshared/693a/hdl/axi_clock_converter_v2_1_vl_rfs.v" \
-endlib
-makelib ies_lib/xil_defaultlib \
  "../../../bd/system/ip/system_auto_cc_0/sim/system_auto_cc_0.v" \
-endlib
-makelib ies_lib/xil_defaultlib \
  glbl.v
-endlib

