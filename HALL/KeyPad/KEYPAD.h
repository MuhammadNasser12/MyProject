/*
 * KEYPAD.h
 *
 *  Created on: Oct 14, 2022
 *      Author: UWU
 */

#ifndef HALL_KEYPAD_KEYPAD_H_
#define HALL_KEYPAD_KEYPAD_H_

#include "../../Macros.h"
#include "../../STD_Types.h"
#include "../../MCAL/DIO.h"
#include "../../MCAL/REGESTERS_ADDRESEES.h"
#include "KEYPAD_CFG.h"

void KEYPAD_INIT();
uint8 KEYPAD_GET_VAL();



#endif /* HALL_KEYPAD_KEYPAD_H_ */
