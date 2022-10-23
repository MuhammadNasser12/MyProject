/*
 * 7_Seg.c
 *
 *  Created on: Sep 16, 2022
 *      Author: UWU
 */
#include "7_Seg.h"
#include "7_Seg_CFG.h"
#include "../../STD_Types.h"
#include "../../Macros.h"
#include <avr/delay.h>

void Seven_Seg_INIT()
{


	DIO_SetPinDir(APort, ADir, APin); //A
	DIO_SetPinDir(BPort, BDir, BPin); //B
	DIO_SetPinDir(CPort, CDir, CPin); //C
	DIO_SetPinDir(DPort, DDir, DPin); //D

	DIO_SetPinDir(E1Port, E1Dir, E1Pin); //En1
	DIO_SetPinDir(E2Port, E2Dir, E2Pin); //En2


}

void Seven_Seg_1_On()
{
	DIO_SetPinVal(E1Port, E1Valh, E1Pin);
}

void Seven_Seg_2_On()
{
	DIO_SetPinVal(E2Port, E2Valh, E2Pin);

}

void Seven_Seg_1_Off()
{
	DIO_SetPinVal(E1Port, E1Vall, E1Pin);

}

void Seven_Seg_2_Off()
{
	DIO_SetPinVal(E2Port, E2Vall, E2Pin);

}

void Seven_Seg_1_Inc(uint8 i)
{

	for (i;i<10;i++)
	{
		Seven_Seg_Write_No(i);
		_delay_ms(1000);

	}
}

void Seven_Seg_2_Inc(uint8 i)
{

	for (i;i<10;i++)
	{
		Seven_Seg_Write_No(i);
		_delay_ms(1000);

	}
}

void Seven_Seg_1_Dec(uint8 i)
{
	for (i<10;i;i--)
		{
			Seven_Seg_Write_No(i);
			_delay_ms(1000);
		}
}

void Seven_Seg_2_Dec(uint8 i)
{
	for (i<10;i;i--)
			{
				Seven_Seg_Write_No(i);
				_delay_ms(1000);
			}
}

void Seven_Seg_1_Clr()
{
	Seven_Seg_Write_No(0);
	_delay_ms(1000);
}

void Seven_Seg_2_Clr()
{
	Seven_Seg_Write_No(0);
	_delay_ms(1000);
}

void Seven_Seg_Write_No(uint8 Number)
{
	if (Number<10)
	{
		//xxxx DCBA
		//0000 0101
		DIO_SetPinVal(APort, GET_PIN(Number,0), APin); //A
		DIO_SetPinVal(APort, GET_PIN(Number,1), BPin); //B
		DIO_SetPinVal(APort, GET_PIN(Number,2), CPin); //C
		DIO_SetPinVal(APort, GET_PIN(Number,3), DPin); //D
	}
}

void Seven_Seg_Two_Dig (uint8 Number)
{

	uint8 Ones =Number%10 ;
	uint8 Tens =Number/10 ;

	while (1)
	{
		Seven_Seg_1_Off();
		Seven_Seg_2_Off();

		Seven_Seg_1_On();
		Seven_Seg_Write_No(Ones);
		_delay_ms(10);
		Seven_Seg_1_Off();

		Seven_Seg_2_On();
		Seven_Seg_Write_No(Tens);
		_delay_ms(10);
		Seven_Seg_2_Off();

	}
}

void Seven_Seg_Two_Dig_Inc(uint8 Number)
{
		uint8 Ones =Number%10 ;
		uint8 Tens =Number/10 ;

		while(1)
		{
			for(Number;Number<100;Number++)
							{

								Seven_Seg_1_Off();
								Seven_Seg_2_Off();

								Seven_Seg_1_On();
								Seven_Seg_Write_No(Ones);
								_delay_ms(10);
								Seven_Seg_1_Off();

								Seven_Seg_2_On();
								Seven_Seg_Write_No(Tens);
								_delay_ms(10);
								Seven_Seg_2_Off();

								_delay_ms(1000);
							}

		}

}
