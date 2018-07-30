/*
 *File: main.c
 *Date: 2018-07-30
 *Author: Dennis Bunne
 *
 *Exercise 4.6 from the swedish book "C från början"
 *
 *
 */
#include <stdio.h>

int main(){
	for(float x=-1.0; x<=1.0; x+=0.1){
		float sum = 2*x*x-5*x+1;
		printf("Sum: %f\n",sum );
	}
	return 0;
}