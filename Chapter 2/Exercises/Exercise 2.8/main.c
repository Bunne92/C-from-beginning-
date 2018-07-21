/*
 *File: main.c
 *Date: 2018-07-21
 *Author: Dennis Bunne
 *
 *Exercise 2.8 from the swedish book "C från början"
 *
 *This program calculates the price excluding VAT 
 *and the sum of VAT.
 */

#include <stdio.h>

int main(){
	int vat;
	float price;

	printf("Enter price: ");
	scanf("%f",&price);
	printf("Enter VAT: ");
	scanf("%d",&vat);

	printf("Price excluding VAT: %.2f\n", price*((100.0-vat)/100.0));
	printf("VAT: %.2f",price*(vat/100.0));
	return 0;
}