/*
 * 
 *E1 ДЗ 1
 *Среднее арифметическое чисел
 *Ввести c клавиатуры массив из 5 элементов, найти среднее арифметическое всех элементов массива. 
 *
 *Данные на входе:      5 целых ненулевых чисел через пробел 
 *Данные на выходе:     Одно число в формате "%.3f" 
 *
 *Пример №1
 *Данные на входе:      4 15 3 10 14 
 *Данные на выходе:     9.200 
 *
 *Пример №2
 *Данные на входе:      1 2 3 4 5 
 *Данные на выходе:     3.000 
 * 
 */
 
#include <stdio.h>

#define N 5

void InputArray(int* arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }   
}

float AverageCalc(int* arr, int n)
{
    float sum = 0;
    
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    
    return sum / n; 
}

int main(void)
{
    int arr[N];
    
    printf("Enter 5 numbers:\n");
    
    InputArray(arr, N);
    
    printf("%.3f", AverageCalc(arr, N));
    
    return 0;
}
