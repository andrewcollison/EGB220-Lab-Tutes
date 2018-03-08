#define F_CPU 16000000UL // Set Clock Speed

#include <avr/io.h>
#include <avr/delay.h>


void setup(){
	//Set Behaviour of PWM Pin
	TCCR0A |= (1<<7)|(1<<5)|(1<<1)|1;

	//Configure Timer
	TCCR0B |= (1<<2);

	//COnfigure motor port
	DDRB |= (1<<7);
}

void turn_on(int cv){
	OCR0A = cv;

}


void main(){
	
	setup();
	while(1){
		int cv = 51;
		for(cv=51; cv < 255; cv++){
			turn_on(cv);
			_delay_ms(100);
		}

	}

	
}