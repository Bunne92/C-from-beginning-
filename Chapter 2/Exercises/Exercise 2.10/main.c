/*
 *File: main.c
 *Date: 2018-07-21
 *Author: Dennis Bunne
 *
 *Exercise 2.10 from the swedish book "C från början"
 *
 *
 */


#include <stdio.h>


int main(){
	int high_temp = -100000, day[7];
		
	printf("Temp Monday: ");
	scanf("%d",&day[0]);
	printf("Temp Tuesday: ");
	scanf("%d",&day[1]);
	printf("Temp Wednesday: ");
	scanf("%d",&day[2]);
	printf("Temp Thursday: ");
	scanf("%d",&day[3]);
	printf("Temp Friday: ");
	scanf("%d",&day[4]);
	printf("Temp Saturday: ");
	scanf("%d",&day[5]);
	printf("Temp Sunday: ");
	scanf("%d",&day[7]);
	for(int i=0; i<8; i++){
		if(day[i] > high_temp){
			high_temp = day[i];
		}
	}			
	printf("Highest temperatur of the week: %d ", high_temp );

}