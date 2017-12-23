/*
 *File: larm.c
 *Date: 2017-12-23
 *Author: Dennis Bunne
 *
 *Exercise 1.8 from the swedish book "C från början"
 *A program who prints "hej" and "jag larmar!" on a new line
 *it will even make a sound.
 */

#include <stdio.h>

int main(){
  printf("Hej!\n"                //prints "hej".
         "Jag larmar!\a");       //prints "jag larmar!" and makes a sound.
  return 0;
}
