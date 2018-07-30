/*
 *File: main.c
 *Date: 2018-07-30
 *Author: Dennis Bunne
 *
 *Assignment 4.6 from the swedish book "C från början"
 *
 *
 */
#include <stdio.h>

int main(){
	int i = 1;
	double sum = 0.0;
	while(1){
		if(1.0/i < 0.00001){
			break;
		}
		if(i%2==1){
			sum -= 1.0/i++;
		}
		else{
			sum += 1.0/i++;
		}
	}
	printf("Sum: %f",sum );
	return 0;
}