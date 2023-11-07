#include <stdio.h>

int main(void)
{
    int a = 0, b = 0, c = 0;
    int maxSide = 0, sumOfSides = 0;
    printf("Enter 3 space-separeted numbers (triangle side values):\n");
    scanf("%d %d %d", &a, &b, &c);
    
    if ((a > b) && (a > c))
    {
        maxSide = a;
        sumOfSides = b + c;
    }
    else if ((b > a) && (b > c))
    {
        maxSide = b;
        sumOfSides = a + c;
    }
    else
    {
        maxSide = c;
        sumOfSides = a + b;
    }
    
    if (sumOfSides > maxSide)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");     
    }
    return 0;
}
