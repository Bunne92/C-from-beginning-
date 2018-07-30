/*
 *File: main.c
 *Date: 2018-07-30
 *Author: Dennis Bunne
 *
 *Assignment 4.1 from the swedish book "C från början"
 *
 *
 */
#include <stdio.h>
#include <limits.h>

int main(){
	int number, min = INT_MAX, max = INT_MIN;
	while(1){
		printf("Enter some numbers then press EOF: ");
		if(scanf("%d", &number)!=1){
			break;
		}
		if(number < min){
			min = number;
		}
		if(number > max){
			max = number;
		}
	}
	printf("Lowest value: %d\nHighest value: %d", min, max);
	return 0;
}