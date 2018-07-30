/*
 *File: main.c
 *Date: 2018-07-30
 *Author: Dennis Bunne
 *
 *Assignment 4.3 from the swedish book "C från början"
 *
 *
 */
#include <stdio.h>

int main(){
	int days=0;
	double salary=0.01;
	for(; salary <= 10000000; days++){
		salary *= 2;
	}
	printf("Days to earn 10 000 000 swedish crowns: %d\n",days );
	return 0;
}