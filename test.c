//
//  test.c
//  
//
//  Created by александр on 22.07.17.
//
//

#include "test.h"

int main()
{
    char letter;
    
    int num1, num2;
    
    printf("Введите любой символ с клавиатуры: ");

    //    %c - модификатор одного строкого символа
    scanf("%c", &letter);
    
    printf("Введите два целых числа разделяя их пробелами: ");
    scanf("%d %d", &num1, &num2);
    
    printf("Enter: %d and %d \n", num1, num2);
    
    printf("Letter input: %c \n", letter);
    
    printf("Stored at %p", &letter);
    
    return 0;
}



