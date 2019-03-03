/*
 * GccDA2AT2.c
 *
 * Created: 2/18/2019 10:01:25 PM
 * Author : Home
 */ 

#include <avr/io.h>
#include <avr/delay.h>

int main(void)
{
	DDRC = 0x00;	//set DDRC to read input
	DDRB = 0xFF;	//set DDRB to output
	
	while(1)
	{
		if((PINC & 0b00000001) == 0b00000001)	//check if the button was pressed
		{
			PORTB |= 0b00000010;	//set PORTB 1 to output
			_delay_ms(250);			//delay 250ms
		}
		else
		PORTB &= 0b11111101;	//toggle PORTB output
	}
}
