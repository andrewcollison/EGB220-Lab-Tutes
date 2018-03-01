// Function source code

#include "functions.h"

void toggleLight(){
	PORTE ^= (1<<6);
}

void resetButton(){
	PORTC |= (1<<6)
}