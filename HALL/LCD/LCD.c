/*
 * LCD.c
 *
 *  Created on: Sep 28, 2022
 *      Author: UWU
 */

#include "LCD.h"
static uint8 FLAG=0;

void LCD_INIT()
{
						/** CMD PORTS INIT**/
	DIO_SetPinDir(RSPORT, DIO_PIN_OUTPUT, RSPIN);//RS
	DIO_SetPinDir(RWPORT, DIO_PIN_OUTPUT, RWPIN);//RW
	DIO_SetPinDir(ENBPORT, DIO_PIN_OUTPUT, ENBPIN);//E
	_delay_ms(30);

					/** DATA PORTS INIT**/

	DIO_SetPinDir(ADATAPORT, DIO_PIN_OUTPUT, ADATAPIN);//A
	DIO_SetPinDir(BDATAPORT, DIO_PIN_OUTPUT, BDATAPIN);//B
	DIO_SetPinDir(CDATAPORT, DIO_PIN_OUTPUT, CDATAPIN);//C
	DIO_SetPinDir(DDATAPORT, DIO_PIN_OUTPUT, DDATAPIN);//D

	LCD_WEITE_CMD(0x28);
	LCD_WEITE_CMD(0x28);
	LCD_WEITE_CMD(0x80);	// 2 lines and DOT char 5*7
	_delay_ms(1);
	//DISPLAY on/off
	LCD_WEITE_CMD(0x00);
	LCD_WEITE_CMD(0xF0);	// DISplay , backlight,cursur trigger
	_delay_ms(1);

	//DIsplay clear
	LCD_WEITE_CMD(0x00);
	LCD_WEITE_CMD(0x10);
	_delay_ms(2);


	FLAG=1;
}


void LCD_WEITE_CMD(uint8 CMD)
{
	DIO_SetPinVal(RSPORT, DIO_PIN_LOW, RSPIN);//RS
	DIO_SetPinVal(RWPORT, DIO_PIN_LOW, RWPIN);//RW

	DIO_SetPinVal(ADATAPORT, GET_PIN(CMD,4), ADATAPIN);//A
	DIO_SetPinVal(BDATAPORT, GET_PIN(CMD,5), BDATAPIN);//B
	DIO_SetPinVal(CDATAPORT, GET_PIN(CMD,6), CDATAPIN);//C
	DIO_SetPinVal(DDATAPORT, GET_PIN(CMD,7), DDATAPIN);//D

	DIO_SetPinVal(ENBPORT, DIO_PIN_HIGH, ENBPIN);

	_delay_ms(1);


	DIO_SetPinVal(ENBPORT, DIO_PIN_LOW, ENBPIN);

	if (FLAG) 		//if not the flag ==1 dont go to the least seg bits
	{

	DIO_SetPinVal(ADATAPORT, GET_PIN(CMD,0), ADATAPIN);//A
	DIO_SetPinVal(BDATAPORT, GET_PIN(CMD,1), BDATAPIN);//B
	DIO_SetPinVal(CDATAPORT, GET_PIN(CMD,2), CDATAPIN);//C
	DIO_SetPinVal(DDATAPORT, GET_PIN(CMD,3), DDATAPIN);//D
	DIO_SetPinVal(ENBPORT, DIO_PIN_HIGH, ENBPIN);

	_delay_ms(1);

	DIO_SetPinVal(ENBPORT, DIO_PIN_LOW, ENBPIN);
	}

	_delay_ms(2);		// for APP layer

}


void LCD_WRITE_DATA(uint8 DATA)
{
		DIO_SetPinVal(RSPORT, DIO_PIN_HIGH, RSPIN);//RS
		DIO_SetPinVal(RWPORT, DIO_PIN_LOW, RWPIN);//RW

		DIO_SetPinVal(ADATAPORT, GET_PIN(DATA,4), ADATAPIN);//A
		DIO_SetPinVal(BDATAPORT, GET_PIN(DATA,5), BDATAPIN);//B
		DIO_SetPinVal(CDATAPORT, GET_PIN(DATA,6), CDATAPIN);//C
		DIO_SetPinVal(DDATAPORT, GET_PIN(DATA,7), DDATAPIN);//D

		DIO_SetPinVal(ENBPORT, DIO_PIN_HIGH, ENBPIN);

		_delay_ms(1);


		DIO_SetPinVal(ENBPORT, DIO_PIN_LOW, ENBPIN);


		DIO_SetPinVal(ADATAPORT, GET_PIN(DATA,0), ADATAPIN);//A
		DIO_SetPinVal(BDATAPORT, GET_PIN(DATA,1), BDATAPIN);//B
		DIO_SetPinVal(CDATAPORT, GET_PIN(DATA,2), CDATAPIN);//C
		DIO_SetPinVal(DDATAPORT, GET_PIN(DATA,3), DDATAPIN);//D
		DIO_SetPinVal(ENBPORT, DIO_PIN_HIGH, ENBPIN);

		_delay_ms(1);

		DIO_SetPinVal(ENBPORT, DIO_PIN_LOW, ENBPIN);

		_delay_ms(2);		// for APP layer
}

void LCD_WRITE_STR(uint8* str)
{
	uint8 i=0;
	while (str[i] != '\0')
	{
		LCD_WRITE_DATA(str[i]);
		i++;
	}
}

void LCD_GoTo(uint8 Row,uint8 Col)		//to set the row 0 for the 1st line
										//1 for the 2nd line
{
	uint8 loc;

	if (Row <2 && Col<16)

	{
		loc = (Row* 0x40) + Col;
		loc=SET_PIN(loc,7);			//set DDRAM bit no 7 =1
		LCD_WEITE_CMD(loc);

	}

}

void LCD_WRITE_SPECIAL_CHAR(uint8 code)
{

}
