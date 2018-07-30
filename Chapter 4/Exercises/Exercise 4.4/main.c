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
	while(1){
		float height;
		int bounce=0;
		printf("Enter height to drop the ball from: ");
		scanf("%f", &height);
		if(height <= 0){
			break;
		}
		while(height >= 1){
			height *= 0.7;
			bounce++;
		}
		printf("The ball bounced %d times.\n", bounce);
	}
	return 0;
}