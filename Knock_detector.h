/*
 * Knock_detector.h
 * there are 2 pins :
 * GND : (in) 0 v
 * DO  :  (out) 0 or 5 v  (this is what i'm getting the output from)
 *  Created on: 21/2/2018
 *
 *      Author: Bassem Alaa
 */

#ifndef KNOCK_DETECTORS_H_
#define KNOCK_DETECTORS_H_

#include <avr/io.h>
#define Make_Pin_Ip(Knock_Port,Knock_Pin)  DDR##Knock_Port &=~(1<<Knock_Pin)           //where x is the port (a , b , c or D)
#define Read_Pin(Knock_Port,Knock_Pin)     PIN##Knock_Port &(1<<Knock_Pin)

void Knock_Dect_Init(void);

unsigned char Knock_Dect_read(void);


#endif /* KNOCK_DETECTOR_H_ */
