/*
 *File: main.c
 *Date: 2018-07-30
 *Author: Dennis Bunne
 *
 *Exercise 4.2 from the swedish book "C från början"
 *
 *
 */
#include <stdio.h>

int main(){
	int value, k=1;
	double sum=0;

	printf("Enter a value: ");
	scanf("%d", &value);

	while(k <= value){
		sum += 1.0/k;
		k++;
	}

	printf("Harmonic series: %f", sum);

	return 0;
}
