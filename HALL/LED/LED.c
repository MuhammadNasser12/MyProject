/*
 * LED.c
 *
 *  Created on: Sep 14, 2022
 *      Author: UWU
 */
#include "../../MCAL/DIO.h"
#include "LED.h"
#include "LED_CFG.h"


void LED_INIT()
{
	DIO_SetPinDir(Port, Dir, Pin);
}

void LED_ON()
{
	DIO_SetPinVal(Port, valh, Pin);

}
void LED_OFF()
{
	DIO_SetPinVal(Port, vall, Pin);
}
void LED_TOGGLE()
{
	DIO_TogglePin(Port, Pin);
}
/************************************************************************/

/*

void LED1_INIT()
{
	DIO_SetPinDir(Port1, Dir1, Pin1);
}

void LED1_ON()
{
	DIO_SetPinVal(Port1, val1h, Pin1);

}
void LED1_OFF()
{
	DIO_SetPinVal(Port1, val1l, Pin1);
}
void LED1_TOGGLE()
{
	DIO_TogglePin(Port1, Pin1);
}
*/
/************************************************************************/
/*
void LED2_INIT()
{
	DIO_SetPinDir(Port2, Dir2, Pin2);
}

void LED2_ON()
{
	DIO_SetPinVal(Port2, val2h, Pin2);
}
void LED2_OFF()
{
	DIO_SetPinVal(Port2, val2l, Pin2);
}
void LED2_TOGGLE()
{
	DIO_TogglePin(Port2, Pin2);
}
*/
