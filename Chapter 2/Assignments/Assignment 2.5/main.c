/*
 *File: main.c
 *Date: 2018-07-26
 *Author: Dennis Bunne
 *
 *Assignment 2.5 from the swedish book "C från början"
 *
 *
 */
#include <stdio.h>
#include <math.h>


int main(){
	int t;
	double lambda = log(2.0)/5730;
	double sum;
	printf("Enter years: ");
	scanf("%d", &t);
	sum = 100 * exp(-lambda*t);

	printf("Procent left: %.2f",sum );



	return 0;
}