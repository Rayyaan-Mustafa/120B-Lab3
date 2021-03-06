/*	Author: rmust001
 *  Partner(s) Name: 
 *	Lab Section:
 *	Assignment: Lab #3  Exercise #5
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
    /* Insert DDR and PORT initializations */
	DDRD = 0x00; PORTD = 0xFF;//input
	DDRB = 0x06; PORTB = 0x01;//PB0 is input
	unsigned char tmpD, tmpB = 0x00;
	unsigned short weight = 0x0000;
    /* Insert your solution below */
	 while (1) {
		tmpD = PIND;
		tmpB = PINB & 0x01;
		weight = tmpD << 1;
		weight |= tmpB;
		if(weight  >= 0x0046){
			tmpB = 0x02;
		}
		else if((weight > 0x0005) && (weight < 0x0046)){
			tmpB = 0x04;
		}
		PORTB = tmpB;
	}
    return 1;
}
