/*
 *File: main.c
 *Date: 2018-07-21
 *Author: Dennis Bunne
 *
 *Exercise 2.5 from the swedish book "C från början"
 *
 *This program calculates and prints out the area and
 *perimeter of a circle 
 */
#include <stdio.h>

#define PI 3.1415
#define RADIE 4

int main(){
	float area = PI*RADIE*RADIE, perimeter = 3*PI*RADIE;

	printf("Area: %.3f\nPerimeter: %.3f ", area, perimeter );



	return 0;
}