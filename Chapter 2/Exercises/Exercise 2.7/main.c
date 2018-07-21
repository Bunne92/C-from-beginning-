/*
 *File: main.c
 *Date: 2018-07-21
 *Author: Dennis Bunne
 *
 *Exercise 2.7 from the swedish book "C från början"
 *
 *This program calculates and prints out the area and
 *perimeter of a recangle.
 */

#include <stdio.h>

int main(){
	int val_1, val_2;

	printf("Enter length: ");
	scanf("%d",&val_1);
	printf("Enter width: ");
	scanf("%d",&val_2);

	printf("Area: %d\n", val_1*val_2);
	printf("Perimeter: %d",val_1*2 + val_2*2);
	return 0;
}