#include <stdio.h>

int main()
{
    int a = 4, b = 8, c = 1, d = 1;

    printf("Addi %d tion \n", a + b);
    printf("Subctraction %d \n", b - a);
    printf("Multiplication: %d \n", a * b);
    printf( "Division: %d \n" , b / a );
    printf("Modulus: %d\n",a%b);
    printf( "Postfix increment: %d \n" , c++ );
    printf( "Postfix now: %d \n" , c );
    printf( "Prefix increment: %d \n" , ++d );
    printf( "Prefix now: %d \n" , d );

    return 0;
}