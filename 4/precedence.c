#include <stdio.h>

int main()
{
    printf("\nDefault precedence ((2*3)+4)-5 : %d\n", 2*3+4-5 ) ;

    printf("Explicit precedence 2* ((3+4)-5 ): %d\n", 2*((3+4)-5) );
}
