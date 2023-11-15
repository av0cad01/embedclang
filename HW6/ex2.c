/*
 * 
 *C5 ДЗ 
 *Сумма от 1 до N
 *Составить функцию, которая определяет сумму всех чисел от 1 до N и привести пример ее использования. 
 *
 *Пример №1
 *Данные на входе:      Одно целое положительное число N 
 *Данные на выходе:     Целое число - сумма чисел от 1 до N 
 *
 *Пример №2
 *Данные на входе:      100 
 *Данные на выходе:     5050 
 * 
 */
 
#include <stdio.h>

int sumFunc(int a);

int main(void)
{
     int a = 0;
     printf("Enter 1 number:\n");
     scanf("%d", &a);
     printf("%d", sumFunc(a));
     
     return 0;
}

int sumFunc(int a)
{
    int sum = 0;
    for(int i = 1; i <= a; i++) {
        sum += i;
    }
    
    return sum;
}
