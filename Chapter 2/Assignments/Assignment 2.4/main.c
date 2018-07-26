/*
 *File: main.c
 *Date: 2018-07-26
 *Author: Dennis Bunne
 *
 *Assignment 2.4 from the swedish book "C från början"
 *
 *
 */
#include <stdio.h>
#include <math.h>

int main(){
	int x1, x2, y1, y2, sum;

	printf("Enter value for x1: ");
	scanf("%d", &x1);
	printf("Enter value for x2: " );
	scanf("%d", &x2);
	printf("Enter value for y1: ");
	scanf("%d", &y1);
	printf("Enter value for y2: ");
	scanf("%d", &y2);

	sum = sqrt(((x1-x2)*2) + ((y1-y2)*2));

	printf("Distance between the coordinates: %d", sum);


	return 0;
}