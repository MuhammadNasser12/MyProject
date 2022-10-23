/*
 * KEYPAD_CFG.h
 *
 *  Created on: Oct 14, 2022
 *      Author: UWU
 */

#ifndef HALL_KEYPAD_KEYPAD_CFG_H_
#define HALL_KEYPAD_KEYPAD_CFG_H_

#include "../../MCAL/DIO.h"

#define KEYPAD_PORT			DIO_PORTB

#define KEYPAD_CLO0			DIO_PIN0
#define KEYPAD_CLO1			DIO_PIN1
#define KEYPAD_CLO2			DIO_PIN2
#define KEYPAD_CLO3			DIO_PIN3

#define KEYPAD_ROW0			DIO_PIN4
#define KEYPAD_ROW1			DIO_PIN5
#define KEYPAD_ROW2			DIO_PIN6
#define KEYPAD_ROW3			DIO_PIN7

#endif /* HALL_KEYPAD_KEYPAD_CFG_H_ */
