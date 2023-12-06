/*
 * 
 *E5
 *Сумма положительных элементов
 *Считать массив из 10 элементов и подсчитать сумму положительных элементов массива. 
 *
 *Данные на входе:      10 целых чисел через пробел 
 *Данные на выходе:     Одно целое число - сумма положительных элементов массива 
 *
 *Пример №1
 *Данные на входе:      4 -5 3 10 -4 -6 8 -10 1 0 
 *Данные на выходе:     26 
 *
 *Пример №2
 *Данные на входе:      1 -2 3 -4 5 -6 7 -8 9 0 
 *Данные на выходе:     25 
 * 
 */
 
#include <stdio.h>

#define N 10

void InputArray(int* arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }   
}

int PositiveCalc(int* arr, int n)
{
    float sum = 0;
    
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
            sum += arr[i];
    }
    
    return sum; 
}

int main(void)
{
    int arr[N];
    
    printf("Enter 10 numbers:\n");
    
    InputArray(arr, N);
    
    printf("%d", PositiveCalc(arr, N));
    
    return 0;
}

