#include <stdio.h>


int main()
{
    int yes = 0, no = 1 num = 2;
    printf("AND (no&&no): %d \n", no && no);
    printf("AND (yes&&yes): %d \n", yes && yes);
    printf( "OR (no||no): %d \n" , no || no ) ;
    printf( "OR (yes||no): %d \n" , yes || no ) ;
    printf( "OR (yes||yes): %d \n" , yes || yes ) ;

    (7 % 2 != 0) ? printf ("Нечетное число") : printf("Четное число");
}
