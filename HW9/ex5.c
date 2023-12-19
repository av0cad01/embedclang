/*
 * 
 *F15
 *Больше по модулю
 *Написать функцию и программу, демонстрирующую работу данной функции, 
 *которая определяет в массиве, состоящем из положительных и 
 *отрицательных чисел, сколько элементов превосходят по модулю 
 *максимальный элемент. Прототип функции
 *int count_bigger_abs(int n, int a[]);
 *
 *Данные на входе:      Функция получает размер массива и массив целых чисел 
 *Данные на выходе:     Функция возвращает целое число раное количеству элементов превосходящих по модулю максимальный элемент. 
 *
 *Пример
 *Данные на входе:      1 -20 3 4 -50 6 7 8 9 10 
 *Данные на выходе:     2 
 * 
 */
 
#include <stdio.h>

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

int CountBiggerAbs(int size, int a[])
{
    int max = a[0], temp = 0, counter = 0;
    
    //находим максимум
    for (int i = 0; i < size; i++)
    {
        if (a[i] > max)
            max = a[i];
    }
    
    //берем модуль от отрицателных чисел и сравниваем с максимумом
    for (int i = 0; i < size; i++)
    {
        if (a[i] < 0)
        {
            temp = -a[i];
            if (temp > max)
                counter++;
        }
    }
    
    return counter;
}

int main(void)
{
    int length;
    
    printf("Enter the length of the array(1 number):\n");
    scanf("%d", &length);
    
    int arrIn[length];
    printf("Enter the arary:\n");
    InputArray(arrIn, length);
    
    printf("%d\n", CountBiggerAbs(length, arrIn));
    
    return 0;
}

