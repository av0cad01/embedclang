#include <stdio.h>

int main(void)
{
    int a = 0, b = 0, c = 0; 
    printf("Enter 3 space-separated numbers:\n");
    scanf("%d %d %d", &a, &b, &c);
    printf("Result:\n");
    printf("%d + %d + %d = %d\n", a, b, c, a+b+c);     
    return 0;
}
