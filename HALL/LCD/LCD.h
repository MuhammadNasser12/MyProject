/*
 * LCD.h
 *
 *  Created on: Sep 28, 2022
 *      Author: UWU
 */

#ifndef HALL_LCD_LCD_H_
#define HALL_LCD_LCD_H_

#include "../../Macros.h"
#include "../../STD_Types.h"
#include "../../MCAL/DIO.h"
#include "LCD_CFG.h"
#include <util/delay.h>


void LCD_INIT();
void LCD_WEITE_CMD(uint8 CMD);
void LCD_WRITE_DATA(uint8 DATA);
void LCD_WRITE_STR(uint8* str);
void LCD_GoTo(uint8 Row,uint8 Col);
void LCD_WRITE_SPECIAL_CHAR(uint8 code);
#endif /* HALL_LCD_LCD_H_ */
