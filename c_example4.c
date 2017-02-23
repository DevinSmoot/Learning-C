/*
  Author: Devin Smoot
  Date: 2017-02-22
  Resource: C Programming for Beginners ISBN 9781516998357 Pg 41
  Description: Use of gets and puts functions
*/

#include <stdio.h>

int main()

{

char phras1[100];

printf("Enter a short phrase: ");

gets(phras1);

printf("\nYou typed the following phrase: ");

puts(phras1);

return 0;

}
