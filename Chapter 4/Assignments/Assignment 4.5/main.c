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
	int startYear = 2015, enteredYear, inhabitants = 26000, newBorn, pastAway;

	printf("Enter year: ");
	scanf("%d", &enteredYear);

	while(startYear <= enteredYear){
		newBorn = inhabitants * 0.07;
		pastAway = inhabitants * 0.06;
		inhabitants += newBorn + 300 - pastAway - 325;
		startYear++;
	}
	printf("The inhabitants of the city year %d are %d.", enteredYear, inhabitants);	
	return 0;
}