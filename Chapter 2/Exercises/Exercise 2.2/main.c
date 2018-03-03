/*
 *File: main.c
 *Date: 2018-03-03
 *Author: Dennis Bunne
 *
 *Exercise 2.2 from the swedish book "C från början"
 *A program that adds two values and prints out the sum
 * and the difference between them.
 */

#include <stdio.h>

int main(){
  int value1 = 6, value2 = 3;
  printf("Sum: %d\n", value1+value2);
  printf("Difference: %d", value1-value2);
  return 0;
}
