// 01:03:18 blinking an led

#define F_CPU 16000000UL // Set Clock Speed

#include <avr/io.h>
#include <avr/delay.h>

void main(){
	while(1){
		DDRB |= (1<<1)|(1<<2);
		PORTB ^= (1<<1);
		_delay_ms(500);
		PORTB ^= (1<<2);
		_delay_ms(500);
		// _delay_ms(1000);
		// PORTB &= (0<<1);
		// _delay_ms(1000);
	}
	
}