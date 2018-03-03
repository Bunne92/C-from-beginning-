/*
 *File: main.c
 *Date: 2018-03-03
 *Author: Dennis Bunne
 *
 *Exercise 2.3 from the swedish book "C från början"
 *A program that write how many bytes the arithmetic types
 *have.
 */

#include <stdio.h>

int main(){
  int bytes;
  printf("Char \t\t= %d bytes\n",bytes=sizeof(char));
  printf("Short int \t= %d bytes\n",bytes=sizeof(short int));
  printf("Int \t\t= %d bytes\n",bytes=sizeof(int));
  printf("Long int \t= %d bytes\n",bytes=sizeof(long int));
  printf("Long long int \t= %d bytes\n",bytes=sizeof(long long int));
  printf("Float \t\t= %d bytes\n",bytes=sizeof(float));
  printf("Double \t\t= %d bytes\n",bytes=sizeof(double));
  printf("Long double \t= %d bytes\n",bytes=sizeof(long double));
  return 0;
}
