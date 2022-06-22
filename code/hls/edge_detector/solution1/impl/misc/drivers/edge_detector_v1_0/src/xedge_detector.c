// ==============================================================
// File generated on Fri Jul 12 17:42:55 +0800 2019
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
/***************************** Include Files *********************************/
#include "xedge_detector.h"

/************************** Function Implementation *************************/
#ifndef __linux__
int XEdge_detector_CfgInitialize(XEdge_detector *InstancePtr, XEdge_detector_Config *ConfigPtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(ConfigPtr != NULL);

    InstancePtr->Axilites_BaseAddress = ConfigPtr->Axilites_BaseAddress;
    InstancePtr->IsReady = XIL_COMPONENT_IS_READY;

    return XST_SUCCESS;
}
#endif

void XEdge_detector_Set_threshold(XEdge_detector *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XEdge_detector_WriteReg(InstancePtr->Axilites_BaseAddress, XEDGE_DETECTOR_AXILITES_ADDR_THRESHOLD_DATA, Data);
}

u32 XEdge_detector_Get_threshold(XEdge_detector *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XEdge_detector_ReadReg(InstancePtr->Axilites_BaseAddress, XEDGE_DETECTOR_AXILITES_ADDR_THRESHOLD_DATA);
    return Data;
}

