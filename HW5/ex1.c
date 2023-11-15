/*
 * 
 *B3 Урок 5 ДЗ 1
 *Сумма квадратов маленьких чисел
 *Ввести два целых числа a и b (a ≤ b) и вывести сумму квадратов всех чисел от a до b. 
 *
 *Данные на входе:      Два целых числа по модулю не больше 100 
 *Данные на выходе: Сумма квадратов от первого введенного числа до второго 
 *
 *Пример №1
 *Данные на входе:      4 10 
 *Данные на выходе: 371 
 *
 *Пример №2
 *Данные на входе:      1 5 
 *Данные на выходе: 55 
 * 
 */


#include <stdio.h>

int main(void)
{
    int a = 0, b =0;
    printf("Enter 2 numbers (1st number lower than 2nd)\n");
    scanf("%d%d", &a, &b);
    if (b > a)
    {
        int i;
        int sum = 0;
        for(i = a; i <= b; i++) {
            sum += i*i;
        }
        printf("%d\n", sum);
    }
    else
    {
        printf("1st number must be lower than 2nd!\n");
        printf("Try once more.\n");
    }
    return 0;
}

