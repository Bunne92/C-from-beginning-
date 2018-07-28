/*
 *File: main.c
 *Date: 2018-07-28
 *Author: Dennis Bunne
 *
 *Exercise 3.3 from the swedish book "C från början"
 *
 *
 */
#include <stdio.h>

int main(){
	int points;
	printf("Enter points for a student's mathematics test: ");
	scanf("%d", &points);

	if(points < 25){
		printf("You got the grade F on the test.");
	}
	else if(points < 30){
		printf("You got the grade E on the test.");
	}
	else if(points < 35){
		printf("You got the grade D on the test.");
	}
	else if(points < 40){
		printf("You got the grade C on the test.");
	}
	else if(points < 45){
		printf("You got the grade B on the test.");
	}
	else{
		printf("You got the grade A on the test.");
	}
	return 0;
}