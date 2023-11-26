/*
 * 
 *D20 ДЗ
 *Возвести в степень
 *Написать рекурсивную функцию возведения целого числа n в степень p.
 *int recurs_power(int n, int p)
 *Используя данную функцию, решить задачу.
 *
 *Данные на входе:      Два целых числа -100 >= n >= 100 и 0 >= p >= 100
 *Данные на выходе:     Одно целое число n в степени p
 *
 *Пример №1
 *Данные на входе:      2 3
 *Данные на выходе:     8
 *
 *Пример №2
 *Данные на входе:      3 4
 *Данные на выходе:     81
 * 
 */
 
#include <stdio.h>

int recurs_power(int n, int p)
{
    if (p == 0)
        return 1;
        
    if (p == 1)

        return n;
    
    return n * recurs_power(n, (p-1));
}

int main(void)
{
    int n = 0, p = 0;
    
    printf("Enter 2 numbers (base n and exponent p) for calculation:\n");
    scanf("%d %d", &n, &p);
    if ((n > 100) || (n < -100))
    {
        printf("n must be between -100 and 100");
        return 0;
    }
    if ((p > 100) || (p < 0))
    {
        printf("p must be between 0 and 100");
        return 0;
    }
    
    printf("%d\n",recurs_power(n, p));
    return 0;
}

