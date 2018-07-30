/*
 *File: main.c
 *Date: 2018-07-30
 *Author: Dennis Bunne
 *
 *Assignment 3.5 from the swedish book "C från början"
 *
 *
 */
#include <stdio.h>
#include <math.h>

#define PI 3.1415

int main(){
	double a, b, c, angle, gamma, e;
	printf("Enter the length for side a on the triangle: ");
	scanf("%lf", &a);

	printf("Enter the length for side b on the triangle: ");
	scanf("%lf", &b);

	printf("Enter the angel for a and b: ");
	scanf("%lf", &angle);

	gamma = angle*2*PI/360;
	c = sqrt(a*a + b*b - 2*a*b*cos(gamma));
	e = 1e-10;

	if(fabs(a-b) < e && fabs(a-c) < e && fabs(b-c) < e){
		printf("Equilateral.");
	}
	else if(fabs(a-b) < e || fabs(a-c) < e || fabs(b-c) < e){
		printf("Isosceles.");
	}
	else{
		printf("Unequal-sided.");
	}

	return 0;
}