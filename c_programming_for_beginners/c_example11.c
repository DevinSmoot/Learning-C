/*
  Author: Devin Smoot
  Date: 2017-02-22
  Resource: C Programming for Beginners ISBN 9781516998357 Pg 55-56
  Description: Use of IF-ELSE statement
*/

#include <stdio.h>

int main()

{

char option1 = 'A';

switch(option1)

  {

    case 'A':
    printf("Good choice!\n");
    break;

    case 'B':

    case 'C':
    printf("Okay\n");
    break;

    case 'D':
    printf("Sorry to hear that\n");
    break;

    default:
    printf("That's not an option\n");

    }

return 0;

}
