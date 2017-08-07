#include <stdio.h>

// статическая глобальная переменная, доступна только для этого файла, т.к. указанал static.
static int sum = 100;

int main()
{
    // глобальная статическая переменная, мы ее объявляем, так как хотим использовать ее в функции. 
    extern int sum;
    printf("Sum in %d \n", sum);

    extern int num;
    printf("Sum in %d \n", num);

    return 0;
}