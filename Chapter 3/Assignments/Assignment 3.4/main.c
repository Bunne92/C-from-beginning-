/*
 *File: main.c
 *Date: 2018-07-29
 *Author: Dennis Bunne
 *
 *Assignment 3.3 from the swedish book "C från början"
 *
 *
 */
#include <stdio.h>

int main(){
	
	int sex; 
	long long int personNR;

	printf("Enter '0' if you are a male and '1' if you are a woman: ");
	scanf("%d", &sex);

	printf("Enter your personal code number: ");
	scanf("%lld", &personNR);

	if((personNR/10)%2 == 0){
		printf("You are a woman.");
	}
	else{
		printf("You are a man.");
	}
	
	return 0;
}