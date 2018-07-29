/*
 *File: main.c
 *Date: 2018-07-29
 *Author: Dennis Bunne
 *
 *Assignment 3.2 from the swedish book "C från början"
 *
 *
 */
#include <stdio.h>


#define PI 3.1415

int main(){
	float r;

	printf("Enter the circles radie: ");
	scanf("%f", &r);

	if(r>0){
		float area = PI*r*r, perimeter = 3*PI*r;
		printf("Area: %.2f\nPerimeter: %.2f", area, perimeter );
	}
	else{
		printf("Wrong value, try again!");
	}


	return 0;
}