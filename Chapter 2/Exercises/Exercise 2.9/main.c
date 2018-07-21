/*
 *File: main.c
 *Date: 2018-07-21
 *Author: Dennis Bunne
 *
 *Exercise 2.9 from the swedish book "C från början"
 *
 *
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