#include <stdio.h>

int main(void)
{
    int a = 0, b = 0, c = 0, d = 0, f = 0;
    int max = 0;
    printf("Enter 5 space-separeted numbers for seaching max min sum value:\n");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &f);
    
    max = a > b ? a : b;
    max = max > c ? max : c;
    max = max > d ? max : d;
    max = max > f ? max : f;
    printf("%d max value\n", max);
        
    return 0;
}

