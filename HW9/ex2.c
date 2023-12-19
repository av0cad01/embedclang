/*
 * 
 *F5 ДЗ 3
 *Максимум в массиве
 *Написать функцию и программу, демонстрирующую работу данной функции, 
 *которая находит максимальный элемент в массиве. 
 *
 *Прототип функции:
 *int find_max_array(int size, int a[])
 *
 *Данные на входе:      Массив состоящий из целых чисел. 
 *Первый аргумент, размер массива, второй аргумент адрес нулевого элемента. 
 *Данные на выходе:     Одно целое число 
 *
 *Пример №1
 *Данные на входе:      773 307 371 548 531 765 402 27 573 591 217 
                        859 662 493 173 174 125 591 324 231 130 394 
                        573 65 570 258 343 3 586 14 785 296 140 726 
                        598 262 807 794 510 465 66 895 182 218 302 
                        34 205 252 687 660 952 737 2 32 310 680 36 
                        139 346 139 489 217 767 544 158 774 883 154 
                        802 136 569 377 867 423 224 176 118 660 513 
                        734 45 978 983 749 909 601 270 147 433 737 
                        789 304 842 769 815 503 190 399 3. 
 *Данные на выходе:     983 
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

int FindMaxArray(int size, int a[])
{

    int temp = a[0];
    
    for (int i = 0; i < size; i++)
    {
        if (temp < a[i])
            temp = a[i];
    }
    
    return temp;
}

int main(void)
{
    int length;
    
    printf("Enter the length of the array(1 number):\n");
    scanf("%d", &length);
    
    int arrIn[length];
    printf("Enter the arary:\n");
    
    InputArray(arrIn, length);
    
    printf("%d\n", FindMaxArray(length, arrIn));
    
    return 0;
}
