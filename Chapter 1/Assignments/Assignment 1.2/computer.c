/*
 *File: computer.c
 *Date: 2017-12-23
 *Author: Dennis Bunne
 *
 *Assignment 1.2 from the swedish book "C från början"
 *A program who prints out your computer name with help from the function
 *"getenv".
 */

#include <stdio.h>
#include <stdlib.h>

int main (){
  printf("Running on ");             //Prints "Running on"
  printf(getenv("COMPUTERNAME"));    //Prints your computer name.
  return 0;
}
