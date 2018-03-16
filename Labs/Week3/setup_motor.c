void setup_motor_2(){
	//Set Behaviour of PWM Pin
	TCCR0A |= (1<<7)|(1<<5)|(1<<1)|1;
	//Configure Timer
	TCCR0B |= (1<<2);
	//Configure motor port
	DDRB |= (1<<7);
}

void setup_motor_1(){
//COnfigure PWM pins

// Configure 16bit timer
	// This will have a different prescaler
	// Modify to run at the same overflow as motor 2

// Configure motor port


}