/*
 *File: main.c
 *Date: 2018-07-28
 *Author: Dennis Bunne
 *
 *Assignment 3.1 from the swedish book "C från början"
 *
 *
 */
#include <stdio.h>

int main(){
	int min;

	printf("Enter how many minutes you call per month: ");
	scanf("%d", &min);

	if(min <= 33){
		printf("You should choose the cash option.");
	}
	else if(min <= 66){
		printf("You should choose the normal option.");
	}
	else{
		printf("Youi chould choose the plus option.");
	}


	return 0;
}