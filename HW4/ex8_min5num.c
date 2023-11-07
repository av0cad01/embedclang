#include <stdio.h>

int main(void)
{
    int a = 0, b = 0, c = 0, d = 0, f = 0;
    int min = 0;
    printf("Enter 5 space-separeted numbers for seaching max min sum value:\n");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &f);
    
    min = a < b ? a : b;    
    min = min < c ? min : b;
    min = min < d ? min : d;
    min = min < f ? min : f;
    printf("%d min value\n", min);
        
    return 0;
}

