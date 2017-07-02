#include <stdio.h>

#define VALUE 3
#define ANOTHERVALUE 1

int main()
{
    printf("The value is %d\n",VALUE);
    printf("And %d is the value\n",VALUE);
    printf("It's not %d\n",VALUE+ANOTHERVALUE);
    printf("And it's not %d\n",VALUE-ANOTHERVALUE);
    printf("No, the value is %d\n",VALUE);
    return 0;
}
