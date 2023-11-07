#include <stdio.h>

int main(void)
{
    int a = 0; 
    printf("Enter 1 three-digit number:\n");
    scanf("%d", &a);

//    prod *= (a%10);
//    prod *= (a/10)%10;
//    prod *= (a/100)%10;
    
    
    if ((a%10) > (a/10)%10)
    {
        if ((a%10) > (a/100)%10)
        {
            printf("%d max value", (a%10));
        }
        else 
        {
            printf("%d max value", (a/100)%10);
        }
    }
    else
    {
        if ((a/10)%10 > (a/100)%10)
        {
            printf("%d max value", (a/10)%10);
        }
        else 
        {
            printf("%d max value", (a/100)%10);
        }       
    }   
    return 0;
}
