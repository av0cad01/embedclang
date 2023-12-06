/*
 * 
 *E16 Д3 6
 *Чаще других
 *Дан массив из 10 элементов. Определить, какое число в массиве встречается чаще всего. Гарантируется, что такое число ровно 1. 
 *
 *Данные на входе:      10 целых числе через пробел 
 *Данные на выходе:     Одно число, которое встречается чаще других. 
 *
 *Пример
 *Данные на входе:      4 1 2 1 11 2 34 11 0 11 
 *Данные на выходе:     11 
 * 
 */
 
#include <stdio.h>

#define N 10

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

int Selection(int* arrIn, int n)
{
    static int count, maxCount, element;
    for (int i = 0; i < n - 1; i++)
    {
        count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arrIn[i] == arrIn[j])
                count++;
            if (count > maxCount)
            {
                maxCount = count;
                element = arrIn[i];
//                printf("%d %d\n", arrIn[i], maxCount);
            }
        }
    }
    
    if (maxCount < 2)
        return 0;
    else
        return element;
}

int main(void)
{
    int arrIn[N];
    
    printf("Enter 10 numbers:\n");
    
    InputArray(arrIn, N);
    
    printf("%d\n", Selection(arrIn, N));
    
    return 0;
}
