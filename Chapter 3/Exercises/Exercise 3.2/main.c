/*
 *File: main.c
 *Date: 2018-07-28
 *Author: Dennis Bunne
 *
 *Exercise 3.2 from the swedish book "C från början"
 *
 *
 */
#include <stdio.h>

int main(){
	int priceYear, priceTicket, times, sum;	

	printf("Enter price for season ticket: ");
	scanf("%d",&priceYear);

	printf("Enter price for a ticket: ");
	scanf("%d", &priceTicket);

	printf("Enter how many times u will visit the gym: ");
	scanf("%d", &times);

	if(priceTicket*times > priceYear){
		printf("Choose season ticket.");
	}
	else{
		printf("Choose one-time tickets.");
	}

	return 0;
}