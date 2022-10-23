/*
 * Buzzer.c
 *
 *  Created on: Sep 16, 2022
 *      Author: UWU
 */
#include "Buzzer.h"
#include "Buzzer_CFG.h"

void Buzzer_INIT()
{
	DIO_SetPinDir(Port, Dir, Pin);
}


void Buzzer_On()
{
	DIO_SetPinVal(Port, Valh, Pin);
}

void Buzzer_Off()
{
	DIO_SetPinVal(Port, Vall, Pin);

}
