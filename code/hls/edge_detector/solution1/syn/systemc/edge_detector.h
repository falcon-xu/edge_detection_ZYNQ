// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _edge_detector_HH_
#define _edge_detector_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "Block_proc232.h"
#include "AXIvideo2Mat.h"
#include "CvtColor.h"
#include "Duplicate.h"
#include "Filter2D102.h"
#include "Filter2D.h"
#include "AddWeighted.h"
#include "thresholding.h"
#include "CvtColor_1.h"
#include "Mat2AXIvideo.h"
#include "fifo_w12_d2_A.h"
#include "fifo_w8_d7_A.h"
#include "fifo_w8_d2_A.h"
#include "start_for_threshopcA.h"
#include "start_for_CvtColoqcK.h"
#include "start_for_DuplicarcU.h"
#include "start_for_Filter2sc4.h"
#include "start_for_Filter2tde.h"
#include "start_for_AddWeigudo.h"
#include "start_for_CvtColovdy.h"
#include "start_for_Mat2AXIwdI.h"
#include "edge_detector_AXILiteS_s_axi.h"

namespace ap_rtl {

template<unsigned int C_S_AXI_AXILITES_ADDR_WIDTH = 5,
         unsigned int C_S_AXI_AXILITES_DATA_WIDTH = 32>
struct edge_detector : public sc_module {
    // Port declarations 37
    sc_in< sc_logic > s_axi_AXILiteS_AWVALID;
    sc_out< sc_logic > s_axi_AXILiteS_AWREADY;
    sc_in< sc_uint<C_S_AXI_AXILITES_ADDR_WIDTH> > s_axi_AXILiteS_AWADDR;
    sc_in< sc_logic > s_axi_AXILiteS_WVALID;
    sc_out< sc_logic > s_axi_AXILiteS_WREADY;
    sc_in< sc_uint<C_S_AXI_AXILITES_DATA_WIDTH> > s_axi_AXILiteS_WDATA;
    sc_in< sc_uint<C_S_AXI_AXILITES_DATA_WIDTH/8> > s_axi_AXILiteS_WSTRB;
    sc_in< sc_logic > s_axi_AXILiteS_ARVALID;
    sc_out< sc_logic > s_axi_AXILiteS_ARREADY;
    sc_in< sc_uint<C_S_AXI_AXILITES_ADDR_WIDTH> > s_axi_AXILiteS_ARADDR;
    sc_out< sc_logic > s_axi_AXILiteS_RVALID;
    sc_in< sc_logic > s_axi_AXILiteS_RREADY;
    sc_out< sc_uint<C_S_AXI_AXILITES_DATA_WIDTH> > s_axi_AXILiteS_RDATA;
    sc_out< sc_lv<2> > s_axi_AXILiteS_RRESP;
    sc_out< sc_logic > s_axi_AXILiteS_BVALID;
    sc_in< sc_logic > s_axi_AXILiteS_BREADY;
    sc_out< sc_lv<2> > s_axi_AXILiteS_BRESP;
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst_n;
    sc_in< sc_lv<24> > src_TDATA;
    sc_in< sc_lv<3> > src_TKEEP;
    sc_in< sc_lv<3> > src_TSTRB;
    sc_in< sc_lv<1> > src_TUSER;
    sc_in< sc_lv<1> > src_TLAST;
    sc_in< sc_lv<1> > src_TID;
    sc_in< sc_lv<1> > src_TDEST;
    sc_out< sc_lv<24> > dst_TDATA;
    sc_out< sc_lv<3> > dst_TKEEP;
    sc_out< sc_lv<3> > dst_TSTRB;
    sc_out< sc_lv<1> > dst_TUSER;
    sc_out< sc_lv<1> > dst_TLAST;
    sc_out< sc_lv<1> > dst_TID;
    sc_out< sc_lv<1> > dst_TDEST;
    sc_in< sc_logic > src_TVALID;
    sc_out< sc_logic > src_TREADY;
    sc_out< sc_logic > dst_TVALID;
    sc_in< sc_logic > dst_TREADY;
    sc_signal< sc_logic > ap_var_for_const0;


    // Module declarations
    edge_detector(sc_module_name name);
    SC_HAS_PROCESS(edge_detector);

    ~edge_detector();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    edge_detector_AXILiteS_s_axi<C_S_AXI_AXILITES_ADDR_WIDTH,C_S_AXI_AXILITES_DATA_WIDTH>* edge_detector_AXILiteS_s_axi_U;
    Block_proc232* Block_proc232_U0;
    AXIvideo2Mat* AXIvideo2Mat_U0;
    CvtColor* CvtColor_U0;
    Duplicate* Duplicate_U0;
    Filter2D102* Filter2D102_U0;
    Filter2D* Filter2D_U0;
    AddWeighted* AddWeighted_U0;
    thresholding* thresholding_U0;
    CvtColor_1* CvtColor_1_U0;
    Mat2AXIvideo* Mat2AXIvideo_U0;
    fifo_w12_d2_A* srcImg_rows_V_c_U;
    fifo_w12_d2_A* srcImg_cols_V_c_U;
    fifo_w8_d7_A* threshold_c_U;
    fifo_w8_d2_A* srcImg_data_stream_0_U;
    fifo_w8_d2_A* srcImg_data_stream_1_U;
    fifo_w8_d2_A* srcImg_data_stream_2_U;
    fifo_w12_d2_A* srcImg_rows_V_c20_U;
    fifo_w12_d2_A* srcImg_cols_V_c21_U;
    fifo_w8_d2_A* grayImg_data_stream_s_U;
    fifo_w8_d2_A* split0_data_stream_0_U;
    fifo_w8_d2_A* split1_data_stream_0_U;
    fifo_w8_d2_A* sobelImg_x_data_stre_U;
    fifo_w8_d2_A* sobelImg_y_data_stre_U;
    fifo_w8_d2_A* sobelImg_data_stream_U;
    fifo_w8_d2_A* thresholdImg_data_st_U;
    fifo_w8_d2_A* rgbSobel_data_stream_U;
    fifo_w8_d2_A* rgbSobel_data_stream_1_U;
    fifo_w8_d2_A* rgbSobel_data_stream_2_U;
    start_for_threshopcA* start_for_threshopcA_U;
    start_for_CvtColoqcK* start_for_CvtColoqcK_U;
    start_for_DuplicarcU* start_for_DuplicarcU_U;
    start_for_Filter2sc4* start_for_Filter2sc4_U;
    start_for_Filter2tde* start_for_Filter2tde_U;
    start_for_AddWeigudo* start_for_AddWeigudo_U;
    start_for_CvtColovdy* start_for_CvtColovdy_U;
    start_for_Mat2AXIwdI* start_for_Mat2AXIwdI_U;
    sc_signal< sc_logic > ap_rst_n_inv;
    sc_signal< sc_lv<8> > threshold;
    sc_signal< sc_logic > Block_proc232_U0_ap_start;
    sc_signal< sc_logic > Block_proc232_U0_ap_done;
    sc_signal< sc_logic > Block_proc232_U0_ap_continue;
    sc_signal< sc_logic > Block_proc232_U0_ap_idle;
    sc_signal< sc_logic > Block_proc232_U0_ap_ready;
    sc_signal< sc_logic > Block_proc232_U0_start_out;
    sc_signal< sc_logic > Block_proc232_U0_start_write;
    sc_signal< sc_lv<12> > Block_proc232_U0_srcImg_rows_V_out_din;
    sc_signal< sc_logic > Block_proc232_U0_srcImg_rows_V_out_write;
    sc_signal< sc_lv<12> > Block_proc232_U0_srcImg_cols_V_out_din;
    sc_signal< sc_logic > Block_proc232_U0_srcImg_cols_V_out_write;
    sc_signal< sc_lv<8> > Block_proc232_U0_threshold_out_din;
    sc_signal< sc_logic > Block_proc232_U0_threshold_out_write;
    sc_signal< sc_logic > AXIvideo2Mat_U0_ap_start;
    sc_signal< sc_logic > AXIvideo2Mat_U0_ap_done;
    sc_signal< sc_logic > AXIvideo2Mat_U0_ap_continue;
    sc_signal< sc_logic > AXIvideo2Mat_U0_ap_idle;
    sc_signal< sc_logic > AXIvideo2Mat_U0_ap_ready;
    sc_signal< sc_logic > AXIvideo2Mat_U0_start_out;
    sc_signal< sc_logic > AXIvideo2Mat_U0_start_write;
    sc_signal< sc_logic > AXIvideo2Mat_U0_src_TREADY;
    sc_signal< sc_logic > AXIvideo2Mat_U0_img_rows_V_read;
    sc_signal< sc_logic > AXIvideo2Mat_U0_img_cols_V_read;
    sc_signal< sc_lv<8> > AXIvideo2Mat_U0_img_data_stream_0_V_din;
    sc_signal< sc_logic > AXIvideo2Mat_U0_img_data_stream_0_V_write;
    sc_signal< sc_lv<8> > AXIvideo2Mat_U0_img_data_stream_1_V_din;
    sc_signal< sc_logic > AXIvideo2Mat_U0_img_data_stream_1_V_write;
    sc_signal< sc_lv<8> > AXIvideo2Mat_U0_img_data_stream_2_V_din;
    sc_signal< sc_logic > AXIvideo2Mat_U0_img_data_stream_2_V_write;
    sc_signal< sc_lv<12> > AXIvideo2Mat_U0_img_rows_V_out_din;
    sc_signal< sc_logic > AXIvideo2Mat_U0_img_rows_V_out_write;
    sc_signal< sc_lv<12> > AXIvideo2Mat_U0_img_cols_V_out_din;
    sc_signal< sc_logic > AXIvideo2Mat_U0_img_cols_V_out_write;
    sc_signal< sc_logic > CvtColor_U0_ap_start;
    sc_signal< sc_logic > CvtColor_U0_ap_done;
    sc_signal< sc_logic > CvtColor_U0_ap_continue;
    sc_signal< sc_logic > CvtColor_U0_ap_idle;
    sc_signal< sc_logic > CvtColor_U0_ap_ready;
    sc_signal< sc_logic > CvtColor_U0_start_out;
    sc_signal< sc_logic > CvtColor_U0_start_write;
    sc_signal< sc_logic > CvtColor_U0_p_src_rows_V_read;
    sc_signal< sc_logic > CvtColor_U0_p_src_cols_V_read;
    sc_signal< sc_logic > CvtColor_U0_p_src_data_stream_0_V_read;
    sc_signal< sc_logic > CvtColor_U0_p_src_data_stream_1_V_read;
    sc_signal< sc_logic > CvtColor_U0_p_src_data_stream_2_V_read;
    sc_signal< sc_lv<8> > CvtColor_U0_p_dst_data_stream_V_din;
    sc_signal< sc_logic > CvtColor_U0_p_dst_data_stream_V_write;
    sc_signal< sc_logic > Duplicate_U0_ap_start;
    sc_signal< sc_logic > Duplicate_U0_start_full_n;
    sc_signal< sc_logic > Duplicate_U0_ap_done;
    sc_signal< sc_logic > Duplicate_U0_ap_continue;
    sc_signal< sc_logic > Duplicate_U0_ap_idle;
    sc_signal< sc_logic > Duplicate_U0_ap_ready;
    sc_signal< sc_logic > Duplicate_U0_start_out;
    sc_signal< sc_logic > Duplicate_U0_start_write;
    sc_signal< sc_logic > Duplicate_U0_src_data_stream_V_read;
    sc_signal< sc_lv<8> > Duplicate_U0_dst1_data_stream_V_din;
    sc_signal< sc_logic > Duplicate_U0_dst1_data_stream_V_write;
    sc_signal< sc_lv<8> > Duplicate_U0_dst2_data_stream_V_din;
    sc_signal< sc_logic > Duplicate_U0_dst2_data_stream_V_write;
    sc_signal< sc_logic > Filter2D102_U0_ap_start;
    sc_signal< sc_logic > Filter2D102_U0_ap_done;
    sc_signal< sc_logic > Filter2D102_U0_ap_continue;
    sc_signal< sc_logic > Filter2D102_U0_ap_idle;
    sc_signal< sc_logic > Filter2D102_U0_ap_ready;
    sc_signal< sc_logic > Filter2D102_U0_start_out;
    sc_signal< sc_logic > Filter2D102_U0_start_write;
    sc_signal< sc_logic > Filter2D102_U0_p_src_data_stream_V_read;
    sc_signal< sc_lv<8> > Filter2D102_U0_p_dst_data_stream_V_din;
    sc_signal< sc_logic > Filter2D102_U0_p_dst_data_stream_V_write;
    sc_signal< sc_logic > Filter2D_U0_ap_start;
    sc_signal< sc_logic > Filter2D_U0_ap_done;
    sc_signal< sc_logic > Filter2D_U0_ap_continue;
    sc_signal< sc_logic > Filter2D_U0_ap_idle;
    sc_signal< sc_logic > Filter2D_U0_ap_ready;
    sc_signal< sc_logic > Filter2D_U0_p_src_data_stream_V_read;
    sc_signal< sc_lv<8> > Filter2D_U0_p_dst_data_stream_V_din;
    sc_signal< sc_logic > Filter2D_U0_p_dst_data_stream_V_write;
    sc_signal< sc_logic > AddWeighted_U0_ap_start;
    sc_signal< sc_logic > AddWeighted_U0_ap_done;
    sc_signal< sc_logic > AddWeighted_U0_ap_continue;
    sc_signal< sc_logic > AddWeighted_U0_ap_idle;
    sc_signal< sc_logic > AddWeighted_U0_ap_ready;
    sc_signal< sc_logic > AddWeighted_U0_src1_data_stream_V_read;
    sc_signal< sc_logic > AddWeighted_U0_src2_data_stream_V_read;
    sc_signal< sc_lv<8> > AddWeighted_U0_dst_data_stream_V_din;
    sc_signal< sc_logic > AddWeighted_U0_dst_data_stream_V_write;
    sc_signal< sc_logic > thresholding_U0_ap_start;
    sc_signal< sc_logic > thresholding_U0_ap_done;
    sc_signal< sc_logic > thresholding_U0_ap_continue;
    sc_signal< sc_logic > thresholding_U0_ap_idle;
    sc_signal< sc_logic > thresholding_U0_ap_ready;
    sc_signal< sc_logic > thresholding_U0_start_out;
    sc_signal< sc_logic > thresholding_U0_start_write;
    sc_signal< sc_lv<8> > thresholding_U0_dst_data_stream_V_din;
    sc_signal< sc_logic > thresholding_U0_dst_data_stream_V_write;
    sc_signal< sc_logic > thresholding_U0_src_data_stream_V_read;
    sc_signal< sc_logic > thresholding_U0_threshold_read;
    sc_signal< sc_logic > CvtColor_1_U0_ap_start;
    sc_signal< sc_logic > CvtColor_1_U0_ap_done;
    sc_signal< sc_logic > CvtColor_1_U0_ap_continue;
    sc_signal< sc_logic > CvtColor_1_U0_ap_idle;
    sc_signal< sc_logic > CvtColor_1_U0_ap_ready;
    sc_signal< sc_logic > CvtColor_1_U0_start_out;
    sc_signal< sc_logic > CvtColor_1_U0_start_write;
    sc_signal< sc_logic > CvtColor_1_U0_p_src_data_stream_V_read;
    sc_signal< sc_lv<8> > CvtColor_1_U0_p_dst_data_stream_0_V_din;
    sc_signal< sc_logic > CvtColor_1_U0_p_dst_data_stream_0_V_write;
    sc_signal< sc_lv<8> > CvtColor_1_U0_p_dst_data_stream_1_V_din;
    sc_signal< sc_logic > CvtColor_1_U0_p_dst_data_stream_1_V_write;
    sc_signal< sc_lv<8> > CvtColor_1_U0_p_dst_data_stream_2_V_din;
    sc_signal< sc_logic > CvtColor_1_U0_p_dst_data_stream_2_V_write;
    sc_signal< sc_logic > Mat2AXIvideo_U0_ap_start;
    sc_signal< sc_logic > Mat2AXIvideo_U0_ap_done;
    sc_signal< sc_logic > Mat2AXIvideo_U0_ap_continue;
    sc_signal< sc_logic > Mat2AXIvideo_U0_ap_idle;
    sc_signal< sc_logic > Mat2AXIvideo_U0_ap_ready;
    sc_signal< sc_logic > Mat2AXIvideo_U0_img_data_stream_0_V_read;
    sc_signal< sc_logic > Mat2AXIvideo_U0_img_data_stream_1_V_read;
    sc_signal< sc_logic > Mat2AXIvideo_U0_img_data_stream_2_V_read;
    sc_signal< sc_lv<24> > Mat2AXIvideo_U0_dst_TDATA;
    sc_signal< sc_logic > Mat2AXIvideo_U0_dst_TVALID;
    sc_signal< sc_lv<3> > Mat2AXIvideo_U0_dst_TKEEP;
    sc_signal< sc_lv<3> > Mat2AXIvideo_U0_dst_TSTRB;
    sc_signal< sc_lv<1> > Mat2AXIvideo_U0_dst_TUSER;
    sc_signal< sc_lv<1> > Mat2AXIvideo_U0_dst_TLAST;
    sc_signal< sc_lv<1> > Mat2AXIvideo_U0_dst_TID;
    sc_signal< sc_lv<1> > Mat2AXIvideo_U0_dst_TDEST;
    sc_signal< sc_logic > ap_sync_continue;
    sc_signal< sc_logic > srcImg_rows_V_c_full_n;
    sc_signal< sc_lv<12> > srcImg_rows_V_c_dout;
    sc_signal< sc_logic > srcImg_rows_V_c_empty_n;
    sc_signal< sc_logic > srcImg_cols_V_c_full_n;
    sc_signal< sc_lv<12> > srcImg_cols_V_c_dout;
    sc_signal< sc_logic > srcImg_cols_V_c_empty_n;
    sc_signal< sc_logic > threshold_c_full_n;
    sc_signal< sc_lv<8> > threshold_c_dout;
    sc_signal< sc_logic > threshold_c_empty_n;
    sc_signal< sc_logic > srcImg_data_stream_0_full_n;
    sc_signal< sc_lv<8> > srcImg_data_stream_0_dout;
    sc_signal< sc_logic > srcImg_data_stream_0_empty_n;
    sc_signal< sc_logic > srcImg_data_stream_1_full_n;
    sc_signal< sc_lv<8> > srcImg_data_stream_1_dout;
    sc_signal< sc_logic > srcImg_data_stream_1_empty_n;
    sc_signal< sc_logic > srcImg_data_stream_2_full_n;
    sc_signal< sc_lv<8> > srcImg_data_stream_2_dout;
    sc_signal< sc_logic > srcImg_data_stream_2_empty_n;
    sc_signal< sc_logic > srcImg_rows_V_c20_full_n;
    sc_signal< sc_lv<12> > srcImg_rows_V_c20_dout;
    sc_signal< sc_logic > srcImg_rows_V_c20_empty_n;
    sc_signal< sc_logic > srcImg_cols_V_c21_full_n;
    sc_signal< sc_lv<12> > srcImg_cols_V_c21_dout;
    sc_signal< sc_logic > srcImg_cols_V_c21_empty_n;
    sc_signal< sc_logic > grayImg_data_stream_s_full_n;
    sc_signal< sc_lv<8> > grayImg_data_stream_s_dout;
    sc_signal< sc_logic > grayImg_data_stream_s_empty_n;
    sc_signal< sc_logic > split0_data_stream_0_full_n;
    sc_signal< sc_lv<8> > split0_data_stream_0_dout;
    sc_signal< sc_logic > split0_data_stream_0_empty_n;
    sc_signal< sc_logic > split1_data_stream_0_full_n;
    sc_signal< sc_lv<8> > split1_data_stream_0_dout;
    sc_signal< sc_logic > split1_data_stream_0_empty_n;
    sc_signal< sc_logic > sobelImg_x_data_stre_full_n;
    sc_signal< sc_lv<8> > sobelImg_x_data_stre_dout;
    sc_signal< sc_logic > sobelImg_x_data_stre_empty_n;
    sc_signal< sc_logic > sobelImg_y_data_stre_full_n;
    sc_signal< sc_lv<8> > sobelImg_y_data_stre_dout;
    sc_signal< sc_logic > sobelImg_y_data_stre_empty_n;
    sc_signal< sc_logic > sobelImg_data_stream_full_n;
    sc_signal< sc_lv<8> > sobelImg_data_stream_dout;
    sc_signal< sc_logic > sobelImg_data_stream_empty_n;
    sc_signal< sc_logic > thresholdImg_data_st_full_n;
    sc_signal< sc_lv<8> > thresholdImg_data_st_dout;
    sc_signal< sc_logic > thresholdImg_data_st_empty_n;
    sc_signal< sc_logic > rgbSobel_data_stream_full_n;
    sc_signal< sc_lv<8> > rgbSobel_data_stream_dout;
    sc_signal< sc_logic > rgbSobel_data_stream_empty_n;
    sc_signal< sc_logic > rgbSobel_data_stream_1_full_n;
    sc_signal< sc_lv<8> > rgbSobel_data_stream_1_dout;
    sc_signal< sc_logic > rgbSobel_data_stream_1_empty_n;
    sc_signal< sc_logic > rgbSobel_data_stream_2_full_n;
    sc_signal< sc_lv<8> > rgbSobel_data_stream_2_dout;
    sc_signal< sc_logic > rgbSobel_data_stream_2_empty_n;
    sc_signal< sc_lv<1> > start_for_thresholding_U0_din;
    sc_signal< sc_logic > start_for_thresholding_U0_full_n;
    sc_signal< sc_lv<1> > start_for_thresholding_U0_dout;
    sc_signal< sc_logic > start_for_thresholding_U0_empty_n;
    sc_signal< sc_lv<1> > start_for_CvtColor_U0_din;
    sc_signal< sc_logic > start_for_CvtColor_U0_full_n;
    sc_signal< sc_lv<1> > start_for_CvtColor_U0_dout;
    sc_signal< sc_logic > start_for_CvtColor_U0_empty_n;
    sc_signal< sc_lv<1> > start_for_Duplicate_U0_din;
    sc_signal< sc_logic > start_for_Duplicate_U0_full_n;
    sc_signal< sc_lv<1> > start_for_Duplicate_U0_dout;
    sc_signal< sc_logic > start_for_Duplicate_U0_empty_n;
    sc_signal< sc_lv<1> > start_for_Filter2D102_U0_din;
    sc_signal< sc_logic > start_for_Filter2D102_U0_full_n;
    sc_signal< sc_lv<1> > start_for_Filter2D102_U0_dout;
    sc_signal< sc_logic > start_for_Filter2D102_U0_empty_n;
    sc_signal< sc_lv<1> > start_for_Filter2D_U0_din;
    sc_signal< sc_logic > start_for_Filter2D_U0_full_n;
    sc_signal< sc_lv<1> > start_for_Filter2D_U0_dout;
    sc_signal< sc_logic > start_for_Filter2D_U0_empty_n;
    sc_signal< sc_lv<1> > start_for_AddWeighted_U0_din;
    sc_signal< sc_logic > start_for_AddWeighted_U0_full_n;
    sc_signal< sc_lv<1> > start_for_AddWeighted_U0_dout;
    sc_signal< sc_logic > start_for_AddWeighted_U0_empty_n;
    sc_signal< sc_logic > Filter2D_U0_start_full_n;
    sc_signal< sc_logic > Filter2D_U0_start_write;
    sc_signal< sc_logic > AddWeighted_U0_start_full_n;
    sc_signal< sc_logic > AddWeighted_U0_start_write;
    sc_signal< sc_lv<1> > start_for_CvtColor_1_U0_din;
    sc_signal< sc_logic > start_for_CvtColor_1_U0_full_n;
    sc_signal< sc_lv<1> > start_for_CvtColor_1_U0_dout;
    sc_signal< sc_logic > start_for_CvtColor_1_U0_empty_n;
    sc_signal< sc_lv<1> > start_for_Mat2AXIvideo_U0_din;
    sc_signal< sc_logic > start_for_Mat2AXIvideo_U0_full_n;
    sc_signal< sc_lv<1> > start_for_Mat2AXIvideo_U0_dout;
    sc_signal< sc_logic > start_for_Mat2AXIvideo_U0_empty_n;
    sc_signal< sc_logic > Mat2AXIvideo_U0_start_full_n;
    sc_signal< sc_logic > Mat2AXIvideo_U0_start_write;
    static const int C_S_AXI_DATA_WIDTH;
    static const int C_S_AXI_WSTRB_WIDTH;
    static const int C_S_AXI_ADDR_WIDTH;
    static const sc_logic ap_const_logic_1;
    static const sc_lv<24> ap_const_lv24_0;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_logic ap_const_logic_0;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_AXIvideo2Mat_U0_ap_continue();
    void thread_AXIvideo2Mat_U0_ap_start();
    void thread_AddWeighted_U0_ap_continue();
    void thread_AddWeighted_U0_ap_start();
    void thread_AddWeighted_U0_start_full_n();
    void thread_AddWeighted_U0_start_write();
    void thread_Block_proc232_U0_ap_continue();
    void thread_Block_proc232_U0_ap_start();
    void thread_CvtColor_1_U0_ap_continue();
    void thread_CvtColor_1_U0_ap_start();
    void thread_CvtColor_U0_ap_continue();
    void thread_CvtColor_U0_ap_start();
    void thread_Duplicate_U0_ap_continue();
    void thread_Duplicate_U0_ap_start();
    void thread_Duplicate_U0_start_full_n();
    void thread_Filter2D102_U0_ap_continue();
    void thread_Filter2D102_U0_ap_start();
    void thread_Filter2D_U0_ap_continue();
    void thread_Filter2D_U0_ap_start();
    void thread_Filter2D_U0_start_full_n();
    void thread_Filter2D_U0_start_write();
    void thread_Mat2AXIvideo_U0_ap_continue();
    void thread_Mat2AXIvideo_U0_ap_start();
    void thread_Mat2AXIvideo_U0_start_full_n();
    void thread_Mat2AXIvideo_U0_start_write();
    void thread_ap_rst_n_inv();
    void thread_ap_sync_continue();
    void thread_dst_TDATA();
    void thread_dst_TDEST();
    void thread_dst_TID();
    void thread_dst_TKEEP();
    void thread_dst_TLAST();
    void thread_dst_TSTRB();
    void thread_dst_TUSER();
    void thread_dst_TVALID();
    void thread_src_TREADY();
    void thread_start_for_AddWeighted_U0_din();
    void thread_start_for_CvtColor_1_U0_din();
    void thread_start_for_CvtColor_U0_din();
    void thread_start_for_Duplicate_U0_din();
    void thread_start_for_Filter2D102_U0_din();
    void thread_start_for_Filter2D_U0_din();
    void thread_start_for_Mat2AXIvideo_U0_din();
    void thread_start_for_thresholding_U0_din();
    void thread_thresholding_U0_ap_continue();
    void thread_thresholding_U0_ap_start();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif
