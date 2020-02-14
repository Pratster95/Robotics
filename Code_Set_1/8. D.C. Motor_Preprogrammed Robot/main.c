
/************************************************** Program Title ******************

/*Program to control  DC motor 

M4-PORTD4-motor1 Brown(+) 
M5-PORTD5-motor1 Black(-)
M6-PORTD6-motor2 Black(-)
M7-PORTD7-motor2 Brown(+) 
***************************************************Program****************************/

#include<avr/io.h>
#include<util/delay.h>

int main(void)
{
 DDRD=0xF0;     	//Setting the data direction of PORTD where motors are connected
 while(1)
  {
   PORTD=0x50;		//moving ROBOT forward
   _delay_ms(5000);
   PORTD=0xA0;      //moving ROBOT backward
   _delay_ms(5000);
   PORTD=0X10;
   _delay_ms(5000);
   PORTD=0X50;
   _delay_ms(5000);
  }
}