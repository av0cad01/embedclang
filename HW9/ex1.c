/*
 * 
 *F2 ДЗ 2
 *Четные в начало
 *Написать функцию и программу, демонстрирующую работу данной функции, 
 *которая ставит в начало массива все четные элементы, а в конец – все нечетные. 
 *Не нарушайте порядок следования чисел между собой. Строго согласно прототипу:
 *void sort_even_odd(int n, int a[])
 *
 *Данные на входе:      Функция принимает на вход целые числа 
 *Данные на выходе:     Отсортированный исходный массив 
 *
 *Пример №1
 *Данные на входе:      20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 
 *Данные на выходе:     20 18 16 14 12 10 8 6 4 2 19 17 15 13 11 9 7 5 3 1 
 *
 *Пример №2
 *Данные на входе:      1 0 1 0 1 
 *Данные на выходе:     0 0 1 1 1 
 * 
 */
 
#include <stdio.h>

#define N 20

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

void SortEvenOdd(int n, int a[])
{
    int array[n];
    
    static int j = 0;
    
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            array[j] = a[i];
//            printf("%d %d\n", j, array[j]);
            j++;
        }
    }
     

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
        {
            array[j] = a[i];
//            printf("%d %d\n", j, array[j]);
            j++;
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        a[i] = array[i];
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
    
    SortEvenOdd(length, arrIn);
    
    Print(arrIn, length);
//    printf("%d\n", Selection(arrIn, N));
    
    return 0;
}

