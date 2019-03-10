/*
 * GccDA2BT1.c
 *
 * Created: 3/4/2019 4:13:14 PM
 * Author : Home
 */ 

#define F_CPU 16000000UL
#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>

int main () {
	DDRB = 1<<5;		//output PB5
	PORTD = 1<<2;		//pull-up activated
	EICRA = 0x2;		//make INT0 falling edge triggered
	EIMSK = (1<<INT0);	//turn on external interrupt 0
	sei ();				//turn on interrupts
	while (1);			//wait here
}
ISR (INT0_vect){
	
	PORTB ^= (1<<5);	//toggle PORTB.5
	_delay_ms(1250);
	PORTB ^= (1<<5);	//toggle PORTB.5
}

