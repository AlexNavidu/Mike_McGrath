#include <stdio.h>

int main()
{
    int flags = 8;  /*Двоичноепредставление1000(1х80х40х20х1)*/

    flags = flags | 2; /* 1000 | 0010 = 1010 (десятичное число 10)*/

    printf("Flag 1: %s \n", (  (flags & 1) > 0) ? "ON" : "OFF");
    printf( "Flag 2: %s\n" , ( (flags & 2) > 0) ? "ON" : "OFF") ;
    printf( "Flag 3: %s\n" , ( (flags & 4) > 0) ? "ON" : "OFF") ;
    printf( "Flag 4: %s\n\n" , ((flags & 8) > 0) ? "ON" : "OFF") ;

    char mask = 15; /*Двоичное представление 00001111*/
    flags = ~flags & mask; /*~(1010 & 111 = 1010) = 0101*/

    printf( "Flag 1: %s\n" , ( (flags & 1) > 0) ? "ON" : "OFF") ;
    printf( "Flag 2: %s\n" , ( (flags & 2) > 0) ? "ON" : "OFF") ;
    printf( "Flag 3: %s\n" , ( (flags & 4) > 0) ? "ON" : "OFF") ;
    printf( "Flag 4: %s\n\n" , ((flags & 8) > 0) ? "ON" : "OFF");

    printf( "Flags decimal value is %d\n" , flags ) ;

    flags = flags << 1; /*0101 << 1 = 1010*/

    printf( "Flags decimal value is now %d\n" , flags ) ;

    return 0;
}
