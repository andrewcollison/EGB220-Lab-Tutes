// Week 3 Computer Lab 08/03/18
#include <avr/io.h>
#define F_CPU 16000000UL


int main(){
TCCR0B |= (1<<CS02)|(1<<CS00); // timer 0, Prescale 1024
TCNT0 = 0; //Init counter

DDRB |= (1<<1);

while(1){
	if(TCNT0 >= 250){
		PORTB ^= (1<<1);
		TCNT0 = 0; // Reset Counter
	}
}
return 1;
}

