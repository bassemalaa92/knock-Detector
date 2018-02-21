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
#define Make_Pin_Ip(port)  DDR##port &=~(1<<pin)           //where x is the port (a , b , c or D)
#define Read_Pin(port)     PIN##port &(1<<pin)
#define pin          2                                // Do is the pin for the digital output from MQ2 sensor
void Knock_Dect_Init(void);

unsigned char Knock_Dect_read(void);


#endif /* KNOCK_DETECTOR_H_ */
