#include <stdio.h>

int main(void)
{
    int monthNumber;
    printf("Enter 1 number from 1 up to 12 (month number):\n");
    scanf("%d", &monthNumber);
    
    switch(monthNumber)
    {
    case 1   :
    case 2   :
    case 12  :
        printf("Winter\n");
        break;
    case 3   :
    case 4   :
    case 5   :
        printf("Spring\n");
        break;
    case 6   :
    case 7   :
    case 8   :
        printf("Summer\n");
        break;
    case 9   :
    case 10  :
    case 11  :
        printf("Autumn\n");
        break;        
    default  :
        break;
    }

    return 0;
}
