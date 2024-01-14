/*
 * 
 *G9 ДЗ 4
 *Удалить повторяющиеся символы
 *В файле .txt строка из меленьких и больших английских букв, 
 *знаков препинания и пробелов. Требуется удалить из нее повторяющиеся 
 *символы и все пробелы. Результат записать в файл .txt. 
 *
 *Данные на входе:      Строка из меленьких и больших английских букв, 
 *                      знаков препинания и пробелов. Размер строки не более 1000 сивмолов. 
 *Данные на выходе:     Строка из меленьких и больших английских букв. 
 *
 *Пример
 *Данные на входе:      abc cde def 
 *Данные на выходе:     abcdef 
 * 
 */
 
#include <stdio.h>
#include <string.h>

int sum = 0;

void Print(char* arrIn, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c", arrIn[i]);
    }       
}

int main(void)
{
    signed char c;
    char string[1000];
    FILE *f;
    f = fopen("ex4.txt", "r+");
    
    while ( (c=fgetc(f))!= EOF ) {
        int flag = 0;
        
        for (int i = 0; i < sum+1; i++)
        {
            if ((string[i] == c) || (c == ' '))
                flag = 1;
        }
        
        if (flag != 1)
        {
            string[sum] = c;
            sum++;
        }
    }

    Print(string, sum);
    fprintf(f, "%s\n", string);
    fclose(f);
    return 0;
}
