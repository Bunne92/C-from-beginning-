/*
 *File: main.c
 *Date: 2018-07-28
 *Author: Dennis Bunne
 *
 *Exercise 3.4 from the swedish book "C från början"
 *
 *
 */
#include <stdio.h>
 


 int main(){
 	int length, width, thickness;

 	printf("Enter the letters length: ");
 	scanf("%d", &length);

 	printf("Enter the letters width: ");
 	scanf("%d", &width);

 	printf("Enter the letters thickness: ");
 	scanf("%d", &thickness);

 	if(length <= 600 && thickness <= 100 && width+length+thickness <= 900 && length >= 140 && width >= 90){
 		printf("OK");
 	}
 	else{
 		printf("Incorrect dimensions.");
 	}

 	return 0;
 }