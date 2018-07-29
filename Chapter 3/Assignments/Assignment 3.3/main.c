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
	int zip;

	printf("Enter zip-code: ");
	scanf("%d", &zip);
	zip /= 1000;
	if(zip >=80){
		printf("This zip-code belongs to Norrland.");
	}
	else if(zip >= 20 && zip <= 62 || zip == 65 || zip == 66){
		printf("This zip-code belongs to Gotaland.");
	}
	else{
		printf("This zip-code belongs to Svealand");
	}


	return 0;
}
