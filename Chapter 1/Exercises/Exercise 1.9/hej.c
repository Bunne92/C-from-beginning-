/*
 *File: hej.c
 *Date: 2017-12-23
 *Author: Dennis Bunne
 *
 *Exercise 1.9 from the swedish book "C från början"
 *A program who prints "hallå" and "jag larmar!" on a new line
 *it will even make a sound.
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
  system("chcp 1252");             //To get swedish letters.
  printf("Hallå!\n"                //prints "hallå".
         "Jag larmar!\a");         //prints "jag larmar!" and makes a sound.
  return 0;
}
