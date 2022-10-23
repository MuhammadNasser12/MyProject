/*
 * PB.c
 *
 *  Created on: Sep 15, 2022
 *      Author: UWU
 */

#include"PB.h"
#include "../../STD_Types.h"
#include "PB_CFG.h"

void PB_INIT()
{
	DIO_SetPinDir(Port, Dir, Pin);
}


uint8 PB_ISPRESSED()
{
	uint8 Value=0;
	Value=DIO_GetPinVal(Port, Pin);
	return Value;
}
