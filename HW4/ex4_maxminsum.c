#include <stdio.h>

int main(void)
{
    int a = 0, b = 0, c = 0, d = 0, f = 0;
    int max = 0, min = 0;
    printf("Enter 5 space-separeted numbers for seaching max min sum value:\n");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &f);
    
    max = a > b ? a : b;
    max = max > c ? max : c;
    max = max > d ? max : d;
    max = max > f ? max : f;
//    printf("%d max value\n", max);
    
    min = a < b ? a : b;    
    min = min < c ? min : b;
    min = min < d ? min : d;
    min = min < f ? min : f;
//    printf("%d min value\n", min);
    
    printf("%d sum value\n", max+min);  
        
    return 0;
}
