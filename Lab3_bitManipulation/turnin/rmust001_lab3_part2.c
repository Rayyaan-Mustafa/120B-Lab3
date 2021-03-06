/*	Author: rmust001
 *  Partner(s) Name: 
 *	Lab Section:
 *	Assignment: Lab #3  Exercise #2
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
	DDRA = 0x00; PORTA = 0xFF;//input
	DDRC = 0xFF; PORTC = 0x00;//output
	
	unsigned char tmpA, tmpC = 0x00;
	
    /* Insert your solution below */
	 while (1) {
   		tmpA = PINA & 0x0F; tmpC = 0x00;
		if(tmpA > 0){ tmpC = 0x20;}
		if(tmpA > 2){ tmpC = 0x30;}
		if(tmpA > 4){ tmpC = 0x38;}
		if(tmpA > 6){ tmpC = 0x3C;}
		if(tmpA > 9){ tmpC = 0x3E;}
		if(tmpA > 12){ tmpC = 0x3F;}
		if(tmpA <= 4){ tmpC |= 0x40;}
		PORTC = tmpC;
	 }
    return 1;
}
