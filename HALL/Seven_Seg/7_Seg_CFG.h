/*
 * 7_Seg_CFG.h
 *
 *  Created on: Sep 16, 2022
 *      Author: UWU
 */

#ifndef HALL_SEVEN_SEG_7_SEG_CFG_H_
#define HALL_SEVEN_SEG_7_SEG_CFG_H_

#include "../../MCAL/DIO.h"
		/**FOR A**/
#define APort		DIO_PORTA
#define ADir		DIO_PIN_OUTPUT
#define APin		DIO_PIN4
		/**FOR B**/

#define BPort		DIO_PORTA
#define BDir		DIO_PIN_OUTPUT
#define BPin		DIO_PIN5
		/**FOR C**/

#define CPort		DIO_PORTA
#define CDir		DIO_PIN_OUTPUT
#define CPin		DIO_PIN6
		/**FOR D**/

#define DPort		DIO_PORTA
#define DDir		DIO_PIN_OUTPUT
#define DPin		DIO_PIN7
		/**FOR En1**/

#define E1Port		DIO_PORTB
#define E1Dir		DIO_PIN_OUTPUT
#define E1Pin		DIO_PIN1
#define E1Valh		DIO_PIN_HIGH
#define E1Vall		DIO_PIN_LOW

		/**FOR En2**/

#define E2Port		DIO_PORTB
#define E2Dir		DIO_PIN_OUTPUT
#define E2Pin		DIO_PIN2
#define E2Valh		DIO_PIN_HIGH
#define E2Vall		DIO_PIN_LOW



#endif /* HALL_SEVEN_SEG_7_SEG_CFG_H_ */
