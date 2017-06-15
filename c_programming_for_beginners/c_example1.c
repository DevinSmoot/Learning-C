/*
  Author: Devin Smoot
  Date: 2017-02-22
  Resource: C Programming for Beginners ISBN 9781516998357 Pg 31-32
  Description: Basic program structure, input, and output
*/

#include <stdio.h>

int main()
{

int x1, x2;

printf("Enter two seperate whole numbers: ");

scanf("%d %d",&x1,&x2);

printf("You entered %d and %d\n", x1, x2); 

return 0;

}
