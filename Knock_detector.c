/*
 * Knock_detector.c
 *
 *  Created on: 21/2/2018
 *
 *      Author: Bassem ALaa
 */

#include "Knock_detector.h"


void Knock_Dect_Init(void)
{
	Make_Pin_Ip(A);        //make PORTA pin Do  input
}

unsigned char Knock_Dect_read(void)
{
	if(Read_Pin(D))     // when the sensor detect a gas or smoke its output will be 1
	{
     return 1;
	}
	else                 // the sensor give (0) as a digital output in the normal conditions (when there is no gas or smoke detected )
	{
		return 0;
	}
}
