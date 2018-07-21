/*
 *File: main.c
 *Date: 2018-07-21
 *Author: Dennis Bunne
 *
 *Exercise 2.6 from the swedish book "C från början"
 *
 *This program calculates and prints out the area and
 *perimeter of a circle 
 */
#include <stdio.h>

#define PI 3.1415

int main(){
	int r;
	printf("Radie: ");
	scanf("%d", &r);
	float area = PI*r*r, perimeter = 3*PI*r;

	printf("Area: %.3f\nPerimeter: %.3f ", area, perimeter );

	return 0;
}