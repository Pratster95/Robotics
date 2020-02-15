/***********************************************************************
Program for Obstacle Avoider Robot using IF Statement 
***********************************************************************
COPYRIGHT(C)Technophilia Systems
Date:-26TH JAN 2012
Author:.............Technophilia R&d Team
Organization:.......Technophilia Syestems
Target Board:......AVR devlopment board s/n-118010
Manufacturer:.......Technophilia Syestems
Microcontroller:....ATmega-8
Clock:..............12mhz
compiler: WinAVR-20100110
Connection details

Front Sensor-------------------------PORTC 0

Left motor +ve----------------------PORTD 7		M7
Left motor -ve----------------------PORTD 6		M6
Right motor -ve---------------------PORTD 5		M5
Right motor +ve---------------------PORTD 4		M4
***********************************************************************/
#include<avr/io.h>					// This is the header for AVR Microcontroller
#include<util/delay.h>
void main()
{
  DDRC=0X00;						// Initialization of PORTC as input for sensor
  DDRD=0XF0;						// Initailization of PORTD as output for MOTOR

  while(1)
  {
    PORTD=0X50;						// Go Forward
	if((PINC & 0X01)==0X00)			// If the obstacle comes infront of the Sensor
	 {
		PORTD=0xA0;					// Move back
		_delay_ms(500);				// DELAY OF 500 MILLI SECONDS
		PORTD=0x10;					// Take a left turn
		_delay_ms(300);				// DELAY OF 300 MILLI SECONDS
	 }
  }
 }
