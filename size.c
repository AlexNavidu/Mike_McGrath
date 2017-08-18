#include <stdio.h>

int main()
{
    int num = 1234567890;

    printf( "Size of int data type is %lu bytes \n", sizeof (int) );
    printf("Size of int variable is %lu bytes \n", sizeof (num) );

    printf( "Size of an int array is %lu bytes \n", sizeof (int[3]) );
    struct {int score; char grade;} result;
    printf("Size of a structure is %d bytes\n", sizeof(result) );

    return 0;
}
