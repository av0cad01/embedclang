#include <stdio.h>

int main(void)
{
    int a = 0, b = 0, c = 0;
    printf("Enter 3 space-separeted numbers for seaching max value:\n");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b)
    {
        if (a > c)
        {
            printf("%d max value", a);
        }
        else 
        {
            printf("%d max value", c);
        }
    }
    else
    {
        if (b > c)
        {
            printf("%d max value", b);
        }
        else 
        {
            printf("%d max value", c);
        }       
    }   
    return 0;
}
