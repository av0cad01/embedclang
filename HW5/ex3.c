/*
 * 
 *B9 Урок 5 ДЗ 3
 *Все цифры четные
 *Ввести целое число и определить, верно ли, что все его цифры четные. 
 *Данные на входе:      Одно целое число 
 *Данные на выходе: YES или NO 
 *
 *Пример №1
 *Данные на входе:      2684 
 *Данные на выходе: YES 
 *
 *Пример №2
 *Данные на входе:      2994 
 *Данные на выходе: NO 
 * 
 */


#include <stdio.h>

int main(void)
{
    int a = 0;
    printf("Enter 1 number\n");
    scanf("%d", &a);
    while (a > 0) {
        if((a % 2) != 0)
        {
            printf("NO\n");
            return 0;
        }
        else
        {
            a /= 10;
        }
    }
    printf("YES\n");

    return 0;
}


