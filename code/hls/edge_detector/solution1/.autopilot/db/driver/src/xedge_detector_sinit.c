// ==============================================================
// File generated on Fri Jul 12 17:42:55 +0800 2019
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __linux__

#include "xstatus.h"
#include "xparameters.h"
#include "xedge_detector.h"

extern XEdge_detector_Config XEdge_detector_ConfigTable[];

XEdge_detector_Config *XEdge_detector_LookupConfig(u16 DeviceId) {
	XEdge_detector_Config *ConfigPtr = NULL;

	int Index;

	for (Index = 0; Index < XPAR_XEDGE_DETECTOR_NUM_INSTANCES; Index++) {
		if (XEdge_detector_ConfigTable[Index].DeviceId == DeviceId) {
			ConfigPtr = &XEdge_detector_ConfigTable[Index];
			break;
		}
	}

	return ConfigPtr;
}

int XEdge_detector_Initialize(XEdge_detector *InstancePtr, u16 DeviceId) {
	XEdge_detector_Config *ConfigPtr;

	Xil_AssertNonvoid(InstancePtr != NULL);

	ConfigPtr = XEdge_detector_LookupConfig(DeviceId);
	if (ConfigPtr == NULL) {
		InstancePtr->IsReady = 0;
		return (XST_DEVICE_NOT_FOUND);
	}

	return XEdge_detector_CfgInitialize(InstancePtr, ConfigPtr);
}

#endif

