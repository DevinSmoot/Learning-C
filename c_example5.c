/*
  Author: Devin Smoot
  Date: 2017-02-22
  Resource: C Programming for Beginners ISBN 9781516998357 Pg 42-43
  Description: Use of getchar and putchar functions
*/

#include <stdio.h>

int main()

{

int chval1;

printf("Enter a letter: ");

chval1 = getchar();

printf("\nYou entered the letter: ");

putchar(chval1);

return 0;

}
