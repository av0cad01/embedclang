#include <stdio.h>

int main(void)
{
    int a = 0, b = 0; 
    printf("Enter 2 space-separated numbers:\n");
    scanf("%d %d", &a, &b);
    printf("Result of difference:\n");
    printf("%d\n", a-b);   
    return 0;
}
