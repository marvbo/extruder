/*
 * hmi_display.h
 *
 *  Created on: Jan 3, 2024
 *      Author:
 */

#ifndef INC_HMI_HMI_DISPLAY_H_
#define INC_HMI_HMI_DISPLAY_H_

#include "stm32f4xx_hal.h"
//#include "TSC2046.h"
#include "HMI/MY_ILI9341.h"
#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include "HMI/TSC2046.h"
#include "main.h"

void HMI_init(float Soll);

void HMI_getTouch(TS_TOUCH_DATA_Def myTS_Handle, float Soll, bool Reg_aktiv, int Blob);

#endif /* INC_HMI_HMI_DISPLAY_H_ */
