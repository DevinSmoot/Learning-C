/*
  Author: Devin Smoot
  Date: 2017-02-22
  Resource: C Programming for Beginners ISBN 9781516998357 Pg 40
  Description: Use of print and scan functions with formatting
               with user input
*/

#include <stdio.h>

int main()

{

  int x;

  printf("Enter whole number: ");

  scanf("%d", &x);

  printf("This is the entered number: %d\n", x);

  return 0;

}
