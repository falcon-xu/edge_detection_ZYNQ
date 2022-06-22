// ==============================================================
// File generated on Fri Jul 12 17:42:55 +0800 2019
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef XEDGE_DETECTOR_H
#define XEDGE_DETECTOR_H

#ifdef __cplusplus
extern "C" {
#endif

/***************************** Include Files *********************************/
#ifndef __linux__
#include "xil_types.h"
#include "xil_assert.h"
#include "xstatus.h"
#include "xil_io.h"
#else
#include <stdint.h>
#include <assert.h>
#include <dirent.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#include <unistd.h>
#include <stddef.h>
#endif
#include "xedge_detector_hw.h"

/**************************** Type Definitions ******************************/
#ifdef __linux__
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
#else
typedef struct {
    u16 DeviceId;
    u32 Axilites_BaseAddress;
} XEdge_detector_Config;
#endif

typedef struct {
    u32 Axilites_BaseAddress;
    u32 IsReady;
} XEdge_detector;

/***************** Macros (Inline Functions) Definitions *********************/
#ifndef __linux__
#define XEdge_detector_WriteReg(BaseAddress, RegOffset, Data) \
    Xil_Out32((BaseAddress) + (RegOffset), (u32)(Data))
#define XEdge_detector_ReadReg(BaseAddress, RegOffset) \
    Xil_In32((BaseAddress) + (RegOffset))
#else
#define XEdge_detector_WriteReg(BaseAddress, RegOffset, Data) \
    *(volatile u32*)((BaseAddress) + (RegOffset)) = (u32)(Data)
#define XEdge_detector_ReadReg(BaseAddress, RegOffset) \
    *(volatile u32*)((BaseAddress) + (RegOffset))

#define Xil_AssertVoid(expr)    assert(expr)
#define Xil_AssertNonvoid(expr) assert(expr)

#define XST_SUCCESS             0
#define XST_DEVICE_NOT_FOUND    2
#define XST_OPEN_DEVICE_FAILED  3
#define XIL_COMPONENT_IS_READY  1
#endif

/************************** Function Prototypes *****************************/
#ifndef __linux__
int XEdge_detector_Initialize(XEdge_detector *InstancePtr, u16 DeviceId);
XEdge_detector_Config* XEdge_detector_LookupConfig(u16 DeviceId);
int XEdge_detector_CfgInitialize(XEdge_detector *InstancePtr, XEdge_detector_Config *ConfigPtr);
#else
int XEdge_detector_Initialize(XEdge_detector *InstancePtr, const char* InstanceName);
int XEdge_detector_Release(XEdge_detector *InstancePtr);
#endif


void XEdge_detector_Set_threshold(XEdge_detector *InstancePtr, u32 Data);
u32 XEdge_detector_Get_threshold(XEdge_detector *InstancePtr);

#ifdef __cplusplus
}
#endif

#endif
