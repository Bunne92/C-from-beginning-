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
	for(int i=1; i<=6; i++){
		for(int j=1; j<=i; j++ ){
			int sum = i*j;
			printf("%d\t",sum );
		}
		printf("\n");
	}
	return 0;
}