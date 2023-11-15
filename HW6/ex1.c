/*
 * 
 *C3 Практ 1
 *Среднее арифметическое чисел
 *Написать функцию, которая возвращает среднее арифметическое двух переданных ей аргументов (параметров).
 *int middle(int a, int b)
 *Данные на входе:      Два целых не отрицательных числа 
 *Данные на выходе:     Одно целое число 
 *
 *Пример №1
 *Данные на входе:      5 7 
 *Данные на выходе:     6 
 *
 *Пример №2
 *Данные на входе:      10 20 
 *Данные на выходе:     15  
 * 
 */

#include <stdio.h>

int middle(int a, int b);

int main(void)
{
    int a = 0, b = 0;
    
    printf("Enter 2 non-negative numbers:\n");
    scanf("%d%d", &a, &b);
    
    if ((a < 0) || (b < 0))
    {
        printf("Numbers must be positive\n");
        return 0;
    }
    
    printf("%d\n", middle(a, b));
    
    return 0;
}

int middle(int a, int b)
{
    return (a + b) / 2;
}
