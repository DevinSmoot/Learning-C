/*
  Author: Devin Smoot
  Date: 2017-02-22
  Resource: C Programming for Beginners ISBN 9781516998357 Pg 53-54
  Description: Use of IF-ELSE statement
*/

#include <stdio.h>

int main()

{

  int x = 0;

  printf("Enter a number between 1 and 20: ");

  scanf ("%d", &x);

if(x < 10)

  {

    printf("x is less than 10\n");

  }

else

  {

    printf("x is equal to or greater than 10\n");

  }

return 0;

}
