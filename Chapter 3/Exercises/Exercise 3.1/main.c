/*
 *File: main.c
 *Date: 2018-07-26
 *Author: Dennis Bunne
 *
 *Assignment 2.5 from the swedish book "C från början"
 *
 *
 */
#include <stdio.h>

int main(){
	float pricePerMin, calledMin, sumMonth;

	printf("Enter price per min: ");
	scanf("%f", &pricePerMin);
	printf("Enter called minutes from current month: ");
	scanf("%f", &calledMin);
	sumMonth =calledMin*pricePerMin;
	if(sumMonth >= 1000)
		printf("Total price this month: %.2f",sumMonth*0.9);
	else
		printf("Total price this month: %.2f", sumMonth);
	return 0;
}