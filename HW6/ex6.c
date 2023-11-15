/*
 * 
 *C13 Практика 
 *Вычислить cos
 *Составить функцию, которая вычисляет косинус как сумму ряда (с точностью 0.001)
 *
 *cos(x) = 1 - x2/2! + x4/4! - x6/6! + ... 
 *(x в радианах)
 *float cosinus(float x)
 *
 *Данные на входе:      Целое число от 0 до 90 
 *Данные на выходе:     Вещественное число в формате "%.3f" 
 *
 *Пример
 *Данные на входе:      60 
 *Данные на выходе:     0.500  
 * 
 */
 
#include <stdio.h>
#include <math.h>

const float PI = 3.1415926535;

double cosx(double x)
{
    double Xn = 1;
    double sum = 1.0;
    int i = 1;

    do
    {
        Xn *= -1.0 * x * x / (2 * i * (2 * i - 1));
        sum += Xn;
//        printf("%.10f %d\n", Xn, i);
        i++;
    }
    while (fabs(Xn) > 0.000001);
        return sum;
}

int main(void)
{
    printf("Enter an integer from 0 to 90 to get cosine of the number:\n");
    double x;
    scanf("%lf", &x);
    x *= PI/180.0;
    printf("%.3f", cosx(x));
    
     return 0;
}






