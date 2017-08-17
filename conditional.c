#include <stdio.h>

int main()
{
    int num = 7;

    (num % 2 != 0) ? printf("%d - Нечетно \n", num) : printf("%d  - Четно \n", num);

    printf("There %s ", (num ==1 ) ? " is" : " are");
    printf("%d %s \n", num, (num == 1) ? "apple" : "apples");

    num = 1;
    printf("There %s ", (num == 1) ? " is" : " are");
    printf("%d %s", num, (num == 1) ? " apple" : " apples");

    return 0;
}
