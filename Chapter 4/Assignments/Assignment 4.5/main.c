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
	int startYear = 2015, enteredYear, citizens = 26000, newBorn, pastAway, movedIn = 300 , movedOut = 325;

	printf("Enter year: ");
	scanf("%d", &enteredYear);

	while(startYear <= enteredYear){
		newBorn = citizens * 0.07;
		pastAway = citizens * 0.06;
		citizens += newBorn + movedIn - pastAway - movedOut;
		startYear++;
	}
	printf("Citizens in the city year %d are %d.", enteredYear, citizens);	
	return 0;
}