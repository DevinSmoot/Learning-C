/*
  Author: Devin Smoot
  Date: 2017-02-22
  Resource: C Programming for Beginners ISBN 9781516998357 Pg 39
  Description: Use of print and scan functions with formatting
*/

#include <stdio.h>

int main()

{

  char nm1[20], nm2[20];

  printf("Enter first name: ");

  scanf("%s", nm1);

  printf("Enter second name: ");

  scanf("%s", nm2);

  printf("You entered a first name of: %s\n", nm1);

  printf("You entered a second name of: %s\n", nm2);

  return (0);

}
