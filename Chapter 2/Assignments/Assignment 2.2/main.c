/*
 *File: main.c
 *Date: 2018-07-22
 *Author: Dennis Bunne
 *
 *Assignment 2.2 from the swedish book "C från början"
 *
 *
 */
#include <stdio.h>


int main(){
	int celsius, fahrenheit;

	printf("Enter temperatur in fahrenheit: ");
	scanf("%d", &fahrenheit);

	celsius = (fahrenheit-32)*5/9;
	printf("Temperatur in celsius: %d", celsius);
	return 0;
}