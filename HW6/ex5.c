/*
 * 
 *C20 Задача со *
 *Скобки
 *Проверить строку состоящую из скобок "(" и ")" на корректность. 
 *
 *Данные на входе:      На вход подается строка состоящая из символов '(', ')' и заканчивающаяся символом '.'. Размер строки не более 1000 символов. 
 *Данные на выходе:     Необходимо напечатать слово YES если скобки расставлены верно и NO в противном случае. 
 * 
 */
 
#include <stdio.h>



int main(void)
{
    printf("Enter string with parenthesis and full stop in the end(.):\n");
    int counter = 0;
    char a;
    while((a = getchar()) != '.') {
        if (a == '(')
        {
            counter++;
//            printf("%d\n", counter);
        }
        if (a == ')')
        {
            counter--;
//            printf("%d\n", counter);
        }
    }
    
    counter == 0 ? printf("YES\n") : printf("NO\n");
    
     return 0;
}





