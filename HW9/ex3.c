/*
 * 
 *F9
 *Поменять местами
 *Написать функцию и программу, демонстрирующую работу данной функции,
 *которая в массиве находит максимальный из отрицательных элементов и 
 *меняет его местами с последним элементом массива. Гарантируется, что 
 *в массиве только один такой элемент или же такой элемент отсутствует. 
 *Если отрицательных элементов нет - массив не менять.
 *
 *Прототип функции:
 *void swap_negmax_last(int size, int a[])
 *
 *Данные на входе:      Функция принимает на вход размер массива и 
 * указатель на начало массива. Массив состоит из целых чисел. 
 *
 *Пример
 *Данные на входе:      1 -2 -3 -4 5 6 7 8 9 10 
 *Данные на выходе:     1 10 -3 -4 5 6 7 8 9 -2 
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

void SwapNegMaxLast(int size, int a[])
{
    int temp = INT_MIN;
    int position = 0;

    for (int i = 0; i < size; i++)
    {
        if (a[i] < 0 && a[i] > temp)
        {
            temp = a[i];
            position = i;
        }
    }
    
    if (temp != INT_MIN)
    {
        a[position] = a[size-1];
        a[size-1] = temp;
    }
    
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
}

int main(void)
{
    int length;
    
    printf("Enter the length of the array(1 number):\n");
    scanf("%d", &length);
    
    int arrIn[length];
    printf("Enter the arary:\n");
    
    InputArray(arrIn, length);
    
    SwapNegMaxLast(length, arrIn);
    
    return 0;
}

