/*
 *File: main.c
 *Date: 2018-07-30
 *Author: Dennis Bunne
 *
 *Assignment 4.2 from the swedish book "C från början"
 *
 *
 */
#include <stdio.h>
#include <math.h>

int main(){
	for(int x=1; x<=12; x++){
		int square = pow(x,2);
		int cubic = pow(x,3);
		printf("1:\t%d square\t\t%d cubic\n", square, cubic );
	}
	return 0;
}