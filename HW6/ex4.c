/*
 * 
 *C9 Практ 2
 *Факториал
 *Составить функцию вычисления N!. Использовать ее при вычислении факториала
 *int factorial(int n)
 *
 *Данные на входе:      Целое положительное число не больше 20 
 *Данные на выходе:     Целое положительное число 
 *
 *Пример №1
 *Данные на входе:      5 
 *Данные на выходе:     120 
 * 
 */
 
#include <stdio.h>

int factorial(int a);

int main(void)
{
     int a = 0;
     printf("Enter 1 number:\n");
     scanf("%d", &a);
     printf("%d", factorial(a));
     
     return 0;
}

int factorial(int a)
{
    
    int result = 1;
    for(int i = 1; i <= a; i++) {
        result *= i;
    }
    
    return result;
}


