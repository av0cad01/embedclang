#include <stdio.h>

int main(void)
{
    int a = 0, b = 0, c = 0; 
    printf("Enter 3 space-separated numbers:\n");
    scanf("%d %d %d", &a, &b, &c);
    printf("Result of arithmetic average:\n");
    printf("%.2f\n", (float)(a+b+c)/3);       
    return 0;
}
