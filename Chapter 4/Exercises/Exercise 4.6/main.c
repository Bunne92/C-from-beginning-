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
	int sum;
	for(int x=-10; x<=10; x++){
		sum = 2*x*x-5*x+1;
		printf("Sum: %d\n",sum );
	}
	return 0;
}