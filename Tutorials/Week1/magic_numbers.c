//Week 1 Computer Lab 22/02/18

#include <stdio.h>


void magic_numbers(){
	float in1;
	float in2;
	float output;
	printf("Input first variable: ");
	scanf("%f", &in1);
	printf("Input second variable: ");
	scanf("%f", &in2);
	
	output = (in1*in2*(20-3))/20;
	printf("The resulting value is %f \n", output);		
}

void decide(){
	float in1;
	printf("Pick a number:");
	scanf("%f", &in1);
	printf("you picked %f \n" , in1 );
	if(in1 > 10) printf("Value is greater than 10")	;	
	else if(in1 < 5) printf("Less than 5") ;
	else printf("Value is between 5 and 10");	
}

void print_num(){
	int x = 0;
	
	for(int i = 10; i >= 0; i--){
		printf("%d \n", i);		
	}
	printf("\n");
	while(x <= 10){
		printf("%d \n", x);
		x +=2;
	}
}


double main(void){
	int uf;
	printf("Press 1 for: magic numbers \nPress 2: decide \nPress 3: Print Numbers \n" );
	scanf("%d", &uf);
	
	if(uf ==1) magic_numbers();
	else if(uf ==2) decide();
	else if(uf ==3) print_num();
}






