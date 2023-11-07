#include <stdio.h>

int main(void)
{
    int x1 = 0, y1 = 0, x2 = 0, y2 = 0;
    float k = 0, b = 0;
    printf("Enter 4 space-separeted numbers:\n");
    printf("(X1 and Y1 for the first point and X2 and Y2 for the second point)\n");
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    
    // y1 = x1 * k + b;
    // y2 = x2 * k + b;
    //
    // b = y2 - x2 * k;
    //
    //y1 = x1 * k + y2 - x2 * k;
    //
    //k = (y1 - y2)/(x1 - x2);
    //
    
    k = (float)(y1 - y2)/(x1 - x2);
    b = (float)(y2 - x2 * k);
    
    printf("K = %.2f B = %.2f \n", k, b);
        
    return 0;
}


