
/************************************************* Program Title ******************

* Program to send binary data (00001010) to PORT B & Glow LED1 & LED3



***************************************************Program ***********************/

#include<avr/io.h>				//basic header file for avr microcontrollers

int main(void)
{
	
	DDRB=0b00001111;			//data direction declaration of PORTB lower pins as output.	
	PORTB=0b00001010;			//sending binary data (00001010) to PORTB
	
	while(1)
	{
		
	}
}
