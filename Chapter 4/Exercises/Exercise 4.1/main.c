/*
 *File: main.c
 *Date: 2018-07-30
 *Author: Dennis Bunne
 *
 *Exercise 4.1 from the swedish book "C från början"
 *
 *
 */
#include <stdio.h>

int main(){
	int value, k=1, sum=0;

	printf("Enter a value: ");
	scanf("%d", &value);

	while(k <= value){
		sum += k*k;
		k++;
	}
	printf("Total sum: %d", sum);


	return 0;
}