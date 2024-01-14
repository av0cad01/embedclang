/*
 * 
 *G5 ДЗ 2
 *Заменить a на b
 *В файле .txt дана символьная строка не более 1000 символов. 
 *Необходимо заменить все буквы "а" на буквы "b" и наоборот, 
 *как заглавные, так и строчные. Результат записать в .txt. 
 *
 *Данные на входе:      Строка из маленьких и больших английских букв, знаков препинания и пробелов. 
 *Данные на выходе:     Строка из маленьких и больших английских букв, знаков препинания и пробелов. 
 *
 *Пример
 *Данные на входе:      aabbccddABCD 
 *Данные на выходе:     bbaaccddBACD  
 * 
 */
 
#include <stdio.h>
#include <string.h>

void letterChanger(char string[])
{
    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] == 'a')
            string[i] = 'b';
        else if (string[i] == 'b')
            string[i] = 'a';
        else if (string[i] == 'A')
            string[i] = 'B';
        else if (string[i] == 'B')
            string[i] = 'A';
    }
}

int main(void)
{
    char string[1000];
   
    FILE *f;
    f = fopen("ex2.txt", "r+");
    fscanf (f, "%s", string);  
 
    printf("%s\n", string);
    
    letterChanger(string);
    
    printf("%s", string);
    
    fprintf(f, "%s\n", string);
    fclose(f);
    return 0;
}
