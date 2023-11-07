#include <stdio.h>

int main(void)
{
    int a = 0;
    int prod = 1; 
    printf("Enter 1 three-digit number:\n");
    scanf("%d", &a);
//---------------------------------
//Вычисляем произведение цифр числа
//---------------------------------
    prod *= (a%10);
    prod *= (a/10)%10;
    prod *= (a/100)%10;
//---------------------------------
//Выводим результат
//--------------------------------- 
    printf("Result of product digits:\n");
    printf("%d\n", prod);
    return 0;
}

