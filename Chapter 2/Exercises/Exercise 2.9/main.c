/*
 *File: main.c
 *Date: 2018-07-21
 *Author: Dennis Bunne
 *
 *Exercise 2.8 from the swedish book "C från början"
 *
 *This program calculates the price excluding VAT 
 *and the sum of VAT.
 */
#include <stdio.h>

int main(){
	int h, m, s, temp;

	printf("Enter time in seconds: ");
	scanf("%d",&s);

	h = s/3600;
	temp = s%3600;
	m = temp/60;
	temp %= 60;
	s = temp;

	printf("Time: %dh %dm %ds\n",h,m,s );


	return 0;


}