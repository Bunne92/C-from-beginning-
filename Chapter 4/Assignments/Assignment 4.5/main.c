/*
 *File: main.c
 *Date: 2018-07-30
 *Author: Dennis Bunne
 *
 *Assignment 4.5 from the swedish book "C från början"
 *
 *
 */
#include <stdio.h>

int main(){
	int startYear = 2015, enteredYear, citizens = 26000, newBorn, pastAway;

	printf("Enter year: ");
	scanf("%d", &enteredYear);

	while(startYear <= enteredYear){
		newBorn = citizens * 0.07;
		pastAway = citizens * 0.06;
		citizens += newBorn + 300 - pastAway - 325;
		startYear++;
	}
	printf("The inhabitants of the city this year %d are %d.", enteredYear, citizens);	
	return 0;
}