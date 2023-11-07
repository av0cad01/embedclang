#include <stdio.h>

int main(void)
{
    int a = 0, b = 0;
    printf("Enter 2 space-separeted numbers for seaching max value:\n");
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        printf("%d %d", a, b);
    }
    else
    {
        printf("%d %d", b, a);
    }
    return 0;
}
