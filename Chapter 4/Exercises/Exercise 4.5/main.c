/*
 *File: main.c
 *Date: 2018-07-30
 *Author: Dennis Bunne
 *
 *Exercise 4.4 from the swedish book "C från början"
 *
 *
 */
#include <stdio.h>

int main(){
	int n, sum, k=1;
	printf("Enter value: ");
	scanf("%d", &n);

	for(; k<=n; k++){
		sum += k;
	}
	printf("Total sum: %d", sum );

	return 0;
}