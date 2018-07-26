/*
 *File: main.c
 *Date: 2018-07-26
 *Author: Dennis Bunne
 *
 *Assignment 2.3 from the swedish book "C från början"
 *
 *
 */
#include <stdio.h>


int main(){
	float milesPerGallon;

	printf("Enter miles per gallon: ");
	scanf("%f", &milesPerGallon);

	milesPerGallon = 3.875/milesPerGallon/1.609*10;
	printf("%.2f l/mil", milesPerGallon);


	return 0;
}