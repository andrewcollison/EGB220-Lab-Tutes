// 01:03:18 Week2 Computer Lab 

#define F_CPU 16000000UL // Set Clock Speed

#include <avr/io.h>
#include "functions.h"



int main(){
	DDRE |= (1<<6);
	DDRC &= ~(1<<6);
	PORTC |= (1<<6);

	while(1){
		if(~PINC&(1<<6)){
			toggleLight();
			resetButton();
		}
	}

return 0;
}	