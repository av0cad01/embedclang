/*
 * 
 *D11 ДЗ 3
 *Количество 1
 *Дано натуральное число N. Посчитать количество «1» в двоичной записи числа. 
 *Данные на входе:      Натуральное число 
 *Данные на выходе:     Целое число - количество единиц в двоичной записи числа. 
 *
 *Пример №1
 *Данные на входе:      5 
 *Данные на выходе:     2 
 *
 *Пример №2
 *Данные на входе:      255 
 *Данные на выходе:     8 
 * 
 */
 
#include <stdio.h>

int sumOfOne(int num)
{
    static int counter = 0;
    
    if (num > 0)
    {
        if (num % 2)
            counter++;
        sumOfOne(num / 2);
    }
    
    return counter;
}

int main(void)
{
    int a = 0;
    
    printf("Enter 1 number:\n");
    scanf("%d", &a);
    
    printf("%d\n", sumOfOne(a));
    
    return 0;
}
