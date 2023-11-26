/*
 * 
 *B11 ДЗ 4
 *Перевернуть число
 *Ввести целое число и «перевернуть» его, так чтобы первая цифра стала последней и т.д. 
 *
 *Данные на входе:      Целое неотрицательное число 
 *Данные на выходе: Целое не отрицательное число наоборот 
 *
 *Пример №1
 *Данные на входе:      1234 
 *Данные на выходе: 4321 
 *
 *Пример №2
 *Данные на входе:      782 
 *Данные на выходе: 287 
 * 
 */


#include <stdio.h>

int main(void)
{
    int a = 0, b = 0, result = 0;
    printf("Enter 1 number\n");
    scanf("%d", &a);
    while(a > 0) {
        b = (a % 10);
        a /= 10;
        result *= 10;
        result += b;
    }
    
    printf("%d", result);
    
    return 0;
}