/*
 * LCD_CFG.h
 *
 *  Created on: Sep 28, 2022
 *      Author: UWU
 */

#ifndef HALL_LCD_LCD_CFG_H_
#define HALL_LCD_LCD_CFG_H_

#include "../../MCAL/DIO.h"

			/**CMD**/
//RS
#define RSPORT		DIO_PORTB
#define RSPIN		DIO_PIN1
//RW
#define RWPORT		DIO_PORTB
#define RWPIN		DIO_PIN2
//ENB
#define ENBPORT 	DIO_PORTB
#define ENBPIN		DIO_PIN3
			/**Data**/
//A
#define ADATAPORT		DIO_PORTA
#define ADATAPIN		DIO_PIN4
//B
#define BDATAPORT		DIO_PORTA
#define BDATAPIN		DIO_PIN5
//C
#define CDATAPORT		DIO_PORTA
#define CDATAPIN		DIO_PIN6
//D
#define DDATAPORT		DIO_PORTA
#define DDATAPIN		DIO_PIN7

#endif /* HALL_LCD_LCD_CFG_H_ */
