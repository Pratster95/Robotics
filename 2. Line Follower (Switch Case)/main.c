/*LINE FOLLOWER ROBOT (black line with white background)
*******************************************************************************
COPYRIGHT(C)Technophilia
Date:-26TH JAN 2012
Author: Technophilia R&D Team
Organization: Technophilia
Target system-AVR devlopment board s/n-118010
manufacturer: Technophilia 
microcontroller: ATmega-8
clock: 12mhz
compiler WinAVR-20100110

Connection details

Left sensor-------------------------PORTC 0
Right sensor------------------------PORTC 1

Left motor +ve----------------------PORTD 7		M7
Left motor -ve----------------------PORTD 6		M6
Right motor -ve---------------------PORTD 5		M5
Right motor +ve---------------------PORTD 4		M4


********************************************************************************/

#include<avr/io.h>


int main()
{
DDRC=0x00;				//initialization for sensor
PORTC=0x00;
PORTD=0x00;				//initialization for motor
DDRD=0xF0;

while(1)
{
 switch(PINC & 0x03)	//Read both the sensors
  {
   case 0x00:			//if both the sensors are not upon line	
    PORTD=0x50;         //forward
	break;
   case 0x01:			//if left sensor is upon the line
    PORTD=0x10;			//left turn
	break;
   case 0x02:			//if right sensor is upon the line
    PORTD=0x40;			//right turn
	break;
   case 0x03:			//if both the sensors are upon the line
    PORTD=0x00;			//stop
	break;
  }

}
}