/*
 * 7_Seg.h
 *
 *  Created on: Sep 16, 2022
 *      Author: UWU
 */

#ifndef HALL_SEVEN_SEG_7_SEG_H_
#define HALL_SEVEN_SEG_7_SEG_H_

#include "../../STD_Types.h"

void Seven_Seg_INIT();
void Seven_Seg_1_On();
void Seven_Seg_2_On();
void Seven_Seg_1_Off();
void Seven_Seg_2_Off();
void Seven_Seg_1_Inc(uint8 i);
void Seven_Seg_2_Inc(uint8 i);
void Seven_Seg_1_Dec(uint8 i);
void Seven_Seg_2_Dec(uint8 i);
void Seven_Seg_1_Clr();
void Seven_Seg_2_Clr();
void Seven_Seg_Write_No(uint8 Number);
void Seven_Seg_Two_Dig(uint8 Number);
void Seven_Seg_Two_Dig_Inc(uint8 Number);



#endif /* HALL_SEVEN_SEG_7_SEG_H_ */
