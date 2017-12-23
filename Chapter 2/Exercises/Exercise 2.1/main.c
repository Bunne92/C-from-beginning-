/*
 *File: main.c
 *Date: 2017-12-23
 *Author: Dennis Bunne
 *
 *Exercise 2.1 from the swedish book "C från början"
 *A program that adds two values and prints out the sum
 * and the difference between them.
 */

#include <stdio.h>

int main(){
  int value1, value2;
  printf("Enter the first value: ");
  scanf("%d", &value1);                           
  printf("Enter the second value: ");
  scanf("%d", &value2);

  printf("Sum: %d\n", value1+value2);
  printf("Difference: %d", value1-value2);
  return 0;
}
