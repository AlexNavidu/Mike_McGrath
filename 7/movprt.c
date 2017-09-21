#include "stdio.h"

int main()
{
    int i;

    int num[10] = {1,2,3,4,5,6,7,8,9,10};

    int *prt = num;
    printf("\n At Adress: %p is Value: %d \n", prt, *prt);

    prt++;

    printf("\n At Adress: %p is Value: %d \n", prt, *prt);

    prt++;

    printf("\n At Adrees: %p is Value: %d \n", prt, *prt);

    prt -=2;
    printf("\n At Adress: %p is Value: %d\n\n", prt, *prt);

    for(i=0; i < 10; i++)
    {
        printf("Element %d Contains Value: %p \n", i, prt);
        prt++;
    }

    return 0;
}
