/*
  Author: Devin Smoot
  Date: 2017-02-22
  Resource: C Programming for Beginners ISBN 9781516998357 Pg 48-49
  Description: Using DO-WHILE loop
*/

#include <stdio.h>

int main()

{

int x = 10;

do {

  printf("x is equal to: %d\n", x);

  x++;

} while(x < 20);

return 0;

}
