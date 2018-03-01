// 01:03:18 blinking an led

#define F_CPU 16000000UL // Set Clock Speed

#include <avr/io.h>


void main(){
	DDRB |= (1<<1);
	PORTB |= (1<<1);
}