/***********************************************************************

CODE5.5: Program for Line Follower using IF Statement (white background black line)

***********************************************************************
COPYRIGHT(C)Technophilia Systems
Date:-26TH JAN 2012
Author:.............Technophilia R&d Team
Organization:.......Technophilia Syestems
Target system:......AVR devlopment board s/n-107010
Manufacturer:.......Technophilia Syestems
Microcontroller:....ATmega-8
Clock:..............12mhz
compiler	:WinAVR-20100110
Connection details

Left sensor-------------------------PORTC 0
Right sensor------------------------PORTC 1

Left motor +ve----------------------PORTD 7		M7
Left motor -ve----------------------PORTD 6		M6
Right motor -ve---------------------PORTD 5		M5
Right motor +ve---------------------PORTD 4		M4
***********************************************************************/

#include<avr/io.h>

int main(void)
{
  DDRC=0X00;						// Initialization of PORTC as input for sensor
  PORTC=0X00;
  
  DDRD=0XF0;						// Initailization of PORTD as output for MOTOR
  PORTD=0X00;
  
  while(1)
  {
	if((PINC & 0X01)==0X01)		//if Left Sensor comes upon the black line
	 {
		PORTD=0X10;               	// Turn LEFT
	 }
	else if((PINC & 0X02)==0X02)	// if Right Sensorcomes upon the black line
	 {
		PORTD=0x40;					// Turn RIGHT
	 }
	else
	 {
		PORTD=0X50;					// Move Forward
	 }	
  }
 }