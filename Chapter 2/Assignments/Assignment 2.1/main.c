/*
 *File: main.c
 *Date: 2018-07-22
 *Author: Dennis Bunne
 *
 *Assignment 2.1 from the swedish book "C från början"
 *
 *
 */
#include <stdio.h>

#define PI 3.1415

int main(){
	int r, area, volume;

	printf("Enter radie of the sphere: ");
	scanf("%d", &r);

	volume = 4*PI*r*r*r/3; 
	area = 4*PI*r*r;

	printf("Volume of the sphere: %d\n", volume);
	printf("Area of the sphere: %d\n", area);
	return 0;

}