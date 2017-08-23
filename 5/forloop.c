#include <stdio.h>

int main()
{
    int i,j;

    for(i=1; i<4; i++)
    {
        printf("Outer loop iteration %d \n", i);

        for (j=1; j<4; j++)
        {
            printf("\t Inner loop iteration %d \n", j);
        }
    }

    return 0;
}
