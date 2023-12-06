/*
 * 
 *E10 ДЗ 3
 *Циклический сдвиг массива вправо на 4
 *Считать массив из 12 элементов и выполнить циклический сдвиг ВПРАВО на 4 элемента. 
 *
 *Данные на входе:      12 целых чисел через пробел 
 *Данные на выходе:     12 целых чисел через пробел 
 *
 *Пример №1
 *Данные на входе:      4 -5 3 10 -4 -6 8 -10 1 0 5 7 
 *Данные на выходе:     1 0 5 7 4 -5 3 10 -4 -6 8 -10 
 *
 *Пример №2
 *Данные на входе:      1 2 3 4 5 6 7 8 9 10 11 12 
 *Данные на выходе:     9 10 11 12 1 2 3 4 5 6 7 8 
 * 
 */
 
#include <stdio.h>

#define N 12

void InputArray(int* arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }   
}

void ShiftArray(int* arr, int n)
{
    int temp = arr[n - 1];
    
    for (int i = n - 1; i > 0; i--)
    {
        arr[i] = arr[i-1];
    }
    
    arr[0] = temp;
}

void ShiftArrayNTimes(int* arr, int n, int times)
{
    for (int i = 0; i < times; i++)
    {
        ShiftArray(arr, n);
    }
}

void Print(int* arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }       
}

int main(void)
{
    int arr[N];
    
    printf("Enter 12 numbers:\n");
    
    InputArray(arr, N);
    
    ShiftArrayNTimes(arr, N, 4);
    
    Print(arr, N);
    
    return 0;
}


