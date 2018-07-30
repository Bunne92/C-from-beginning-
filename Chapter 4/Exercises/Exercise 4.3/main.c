/*
 *File: main.c
 *Date: 2018-07-30
 *Author: Dennis Bunne
 *
 *Exercise 4.3 from the swedish book "C från början"
 *
 *
 */
#include <stdio.h>

int main(){
	float height;
	int bounce=0;

	printf("Enter height to drop the ball from: ");
	scanf("%f", &height);

	while(height >= 1){
		height *= 0.7;
		bounce++;
	}
	printf("The ball bounced %d times.", bounce);

	return 0;
}