/*
 * ov5640.h

 *
 *  Created on: 2019Äê7ÔÂ10ÈÕ
 *      Author: Ðì¹ÚÓî
 */

#ifndef SRC_OV5640_H_
#define SRC_OV5640_H_

#include "xil_types.h"
struct reginfo
{
    u16 reg;
    u8 val;
};

#define SEQUENCE_INIT        0x00
#define SEQUENCE_NORMAL      0x01

#define SEQUENCE_PROPERTY    0xFFFD
#define SEQUENCE_WAIT_MS     0xFFFE
#define SEQUENCE_END	     0xFFFF
#define IIC_DEVICE_ID	XPAR_XIICPS_0_DEVICE_ID
int sensor_init();

#endif /* SRC_OV5640_H_ */
