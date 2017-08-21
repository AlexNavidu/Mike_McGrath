#include <stdio.h>

int main()
{
    int x = 10, y = 5;
    printf("\n x = %d y = %d \n", x,y);

    x  = x ^ y;
    y = x ^ y;
    x = x ^ y;

    printf("\n x = %d y = %d \n", x, y);
}
