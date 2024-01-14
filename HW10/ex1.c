/*
 * 
 *G4 ДЗ 1
 *По одному разу
 *В файле .txt даны два слова не более 100 символов каждое, 
 *разделенные одним пробелом. Найдите только те символы слов, 
 *которые встречаются в обоих словах только один раз. 
 *Напечатайте их через пробел в файл .txt в лексикографическом порядке. 
 *
 *Данные на входе:      Два слова из маленьких английских букв через пробел. Длинна каждого слова не больше 100 символов. 
 *Данные на выходе:     Маленькие английские буквы через пробел. 
 *
 *Пример №1
 *Данные на входе:      hello world 
 *Данные на выходе:     o 
 *
 *Данные на входе:      aabcd bcef 
 *Данные на выходе:     b c 
 * 
 */
 
#include <stdio.h>
#include <string.h>

void strdel(char *str, char del) {
    int i, j;
    for (i = 0; str[i] != '\0'; i++) 
    {
        for (j = i + 1; str[j] != '\0'; j++) 
        {
            if (str[j] == del) 
            {
                // удаляем символ из строки
                // двигаем символы влево после удаления
                while (str[j] != '\0') 
                {
                    str[j] = str[j + 1];
                    j++;
                }
                // уменьшаем длину строки на 1
                i--;
            }
        }
    }
}

void deleteDup(char array[])
{
    for (int i = 0; i < strlen(array); i++)
    {
        for (int j = (i+1); j < strlen(array); j++)
        {
            
            if (array[i] == array[j])
            {
                strdel(array, array[i]);
                
            }
        }
    }
}

int main(void)
{
    char firstWord[100];
    char secondWord[100];
//    char result[100];
//    int count = 0;
  
    FILE *f;
    f = fopen("ex1.txt", "r+");
    fscanf (f, "%s", firstWord);
    fscanf (f, "%s", secondWord);

    
    deleteDup(firstWord);
    deleteDup(secondWord);

    
    for (int i = 0; i < strlen(firstWord); i++)
    {
        for(int j = 0; j < strlen(secondWord); j++)
        {
            if (firstWord[i] == secondWord[j])
                fprintf(f, "%c ", firstWord[i]);
                //printf("%c ", firstWord[i]);
        }
    }
//    strdel(firstWord, 'l');
//    printf("%s", firstWord);
    fclose(f);
    return 0;
}



