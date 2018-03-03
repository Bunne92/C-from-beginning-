/*
 *File: main.c
 *Date: 2018-03-03
 *Author: Dennis Bunne
 *
 *Exercise 2.4 from the swedish book "C från början"
 *A program that write the lowest and highest value for an int
 *and how many decimals a float and a double can handle.
 */

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(){
  int value;
  printf("Lowest value for an int is: %d\n",value = INT_MIN);
  printf("Highest value for an int is: %d\n",value = INT_MAX);
  printf("Float can write up to: %d decimals\n",value = FLT_DIG);
  printf("Double can write up to: %d decimals\n",value = DBL_DIG);

  return 0;
}
