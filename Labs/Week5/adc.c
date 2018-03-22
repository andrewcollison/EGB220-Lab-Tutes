// week 5 Computer Lab: ADC: 22/03/18
// Andrew Collison

#include <avr/io.h>


void setup(){
	ADMUX |= (1<<REFS1)|(1<<REFS0)|(1<<ADLAR);
	ADCSRA |= (1<<ADEN)|(1<<ADATE)|(1<<ADPS2)|(1<<ADPS1)|(1<<ADPS0);
	ADCSRA |= (1<<ADSC);
	ADCSRB = 0;
	DDRB |= (1<<1)|(1<<2); // set LED directory

}

void use_adc(){	
	
	
	while(ADCSRA & (1<<ADSC)){
		uint8_t sensor_high = ADCH;

	if(sensor_high > 128){
			PORTB |= (1<<1);
	}
	else
		PORTB &=(0<<1);
	}



	

	
}

void main(){
	setup();
	while(1){
		use_adc();
		}

}



