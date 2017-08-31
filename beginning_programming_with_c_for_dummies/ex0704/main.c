#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter three characters: ");
    a = getchar();
    b = getchar();
    c = getchar();
    printf("You pressed: '%c', '%c', '%c'",a,b,c);
    return 0;
}
