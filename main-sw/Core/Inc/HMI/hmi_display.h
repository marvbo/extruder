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
#include "Management/global_state_machine.h"
#include "SensorActuators/sensor.h"
#include "Regelung/pid_controller.h"


typedef struct Hmi Hmi; // Vorwärtsdeklaration

typedef struct {
	StateMachine* stateMachine;
	Sensor* sensorExtruder;
	Sensor* sensorBack;
} HmiInformation;

struct Hmi{
	HmiInformation HmiInformation;
};


Hmi HMI_init(StateMachine* stateMachine, Sensor* sensorExtruder, Sensor* sensorBack, PIDController *pidController);

void HMI_getTouch(Hmi *hmi, TS_TOUCH_DATA_Def myTS_Handle, StateMachine *state, PIDController *pidController);

void HMI_updateDisplaySensor(Sensor* sensorExtruder, Sensor* sensorBack);

#endif /* INC_HMI_HMI_DISPLAY_H_ */
