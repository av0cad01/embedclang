#include <stdio.h>

int main(void)
{
    int a = 0, b = 0, c = 0;
    printf("Enter 3 space-separeted numbers for seaching max value:\n");
    scanf("%d %d %d", &a, &b, &c);
    
    if (a < b)
    {
        if (b < c)
        {
        printf("YES\n");
        }
    }
    else
    {
        printf("NO\n");
    }
    
    return 0;
}


