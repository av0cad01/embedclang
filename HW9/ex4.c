/*
 * 
 *F14
 *Сумма в интервале
 *Написать функцию и программу, демонстрирующую работу данной функции, 
 *которая возвращает сумму элементов в заданном отрезке [from, to] для массива. Прототип функции
 *int sum_between_ab(int from, int to, int size, int a[]) 
 *
 *Данные на входе:      Функция принимает концы отрезка from и to, размер массива, массив целых чисел 
 *Функция возвращает сумму элементов в интервале [from, to] 
 *
 *Пример №1
 *Данные на входе:      4 6 1 2 3 4 5 6 7 8 9 10 
 *Данные на выходе:     15 
 *
 *Пример №2
 *Данные на входе:      6 4 1 2 3 4 5 6 7 8 9 10 
 *Данные на выходе:     15 
 * 
 */
 
#include <stdio.h>
#include <limits.h>

void InputArray(int* arrIn, int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arrIn[i]);
    }   
}

void Print(int* arrIn, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arrIn[i]);
    }       
}

int SumBetweenAb(int from, int to, int size, int a[])
{
    int sum = 0;
    for (int i = from; i <= to; i++)
    {
        sum += a[i];
    }
    
    return sum;
}

int main(void)
{
    int length, from, to;
    
    printf("Enter the length of the array(1 number):\n");
    scanf("%d", &length);
    
    int arrIn[length];
    printf("Enter the arary:\n");
    
    InputArray(arrIn, length);
    
    printf("Enter 2 numbers of ends of the array segment:\n");
    scanf("%d %d", &from, &to);
    
    printf("%d\n", SumBetweenAb(from, to, length, arrIn));
    
    return 0;
}
