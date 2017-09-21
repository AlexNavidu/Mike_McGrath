#include <stdio.h>

// объявляем два прототипа пользоватесльких функций
void twice(int *ptr);
void thrice(int *ptr);

int main()
{
    int num = 5;
    int *ptr = &num;

    printf("ptr store adress: %p\n", ptr);
    printf("*ptr derefences value: %d \n\n", *ptr);
    printf("The num vlaue is %d\n", num);

    twice(ptr);
    printf("The num value is now %d\n", num);

    thrice(ptr);
    printf("And now the num value is %d\n", num);

    return 0;
}

void twice(int *number)
{
    *number = (*number *2);
}

void thrice(int *number)
{
    *number = (*number *3);
}
