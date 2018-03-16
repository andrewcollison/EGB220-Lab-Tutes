// 01:03:18 blinking an led

#define F_CPU 16000000UL // Set Clock Speed

#include <avr/io.h>
#include <avr/delay.h>

// SW1:PortC bit 7, set to output
// LED3: PortB bit 2, set to output
void main(){
	DDRB |= (1<<2);  // Set DDRB to output
	DDRC &= ~(1<<6); // Set PC7 to input
	PORTC |= (1<<7); // Set PC7 to high

	if(~PINC&|(1<<7)){
		PORTB = (1<<2); 
	}
}