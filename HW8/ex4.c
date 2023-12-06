/*
 * 
 *E11 ДЗ 4
 *Отсортировать по последней цифре
 *Считать массив из 10 элементов и отсортировать его по последней цифре. 
 *
 *Данные на входе:      10 целых чисел через пробел 
 *Этот же массив отсортированный по последней цифре 
 *
 *Пример №1
 *Данные на входе:      14 25 13 30 76 58 32 11 41 97 
 *Данные на выходе:     30 11 41 32 13 14 25 76 97 58 
 *
 *Пример №2
 *Данные на входе:      109 118 100 51 62 73 1007 16 4 555 
 *Данные на выходе:     100 51 62 73 4 555 16 1007 118 109 
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

int LastDigit(int a)
{
    return a % 10;
}

void Print(int* arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }       
}

void LastDigitSort(int* arr, int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        int noSwap = 1;
        
        for (int j = 0; j < i; j++)
        {
            if (LastDigit(arr[j]) > LastDigit(arr[j + 1]))
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                noSwap = 0;
            }
        }
        if (noSwap == 1)
            break;
    }
}

int main(void)
{
    int arr[N];
    
    printf("Enter 10 numbers:\n");
    
    InputArray(arr, N);
    
    LastDigitSort(arr, N);
    
    Print(arr, N);
    
    return 0;
}

