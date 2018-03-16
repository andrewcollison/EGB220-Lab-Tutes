#define F_CPU 16000000UL // Set Clock Speed

#include <avr/io.h>
#include <avr/delay.h>
#include "setup_motor.c"


// void setup(){
// 	//Set Behaviour of PWM Pin
// 	TCCR0A |= (1<<7)|(1<<5)|(1<<1)|1;
// 	//Configure Timer
// 	TCCR0B |= (1<<2);
// 	//Configure motor port
// 	DDRB |= (1<<7);
// }

void turn_on(int cv){
	OCR0A = cv;
	OCR1B = cv;
}


void main(){
	
	setup_motor_1();
	setup_motor_2();

	while(1){
		int cv;
		// Loop the values of cv
		for(cv=51; cv < 255; cv = cv+10){
			turn_on(cv);
			_delay_ms(100);
		}
		cv = 0;

	}

	
}