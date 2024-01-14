/*
 * 
 *G8 ДЗ 3
 *Числа в массив
 *В файле .txt дана строка, не более 1000 символов, содержащая буквы, 
 *целые числа и иные символы. Требуется все числа, 
 *которые встречаются в строке, поместить в отдельный целочисленный массив. 
 *Например, если дана строка "data 48 call 9 read13 blank0a", 
 *то в массиве числа 48, 9, 13 и 0. Вывести массив по возрастанию в файл .txt. 
 *
 *Данные на входе:      Строка из английских букв, цифр и знаков препинания 
 *Данные на выходе:     Последовательность целых чисел отсортированная по возрастанию 
 *
 *Пример
 *Данные на входе:      data 48 call 9 read13 blank0a 
 *Данные на выходе:     0 9 13 48  
 * 
 */
 
#include <stdio.h>
#include <string.h>
#include <math.h>


int sum = 0;
    
int NumbersFromString(char string[], int* output, int sum)
{
    //printf("%s\n", string);
    int stepen = 0;
    int number = 0;
    int flag = 0;
    
    for (int i = 0;  i < strlen(string); i++)
    {
        if (string[i] >= 0x30 && string[i] <= 0x39)
        {
            stepen++;
            flag = 1;
        }
    }
    
    for (int i = 0;  i < strlen(string); i++)
    {
        if (string[i] >= 0x30 && string[i] <= 0x39)
        {
            number = number + ((int)string[i]-0x30) * pow(10, (stepen-1));
            stepen--;
        }
    }
    
    if (flag == 1)
    {
        output[sum] = number;
        sum++;
    }
    
    return sum;
}

void Sort(int* output, int sum)
{
    for (int i = 0; i < sum-1; i++)
    {
        for (int j = 0; j < sum-i-1; j++)
        {
            if (output[j] > output[j+1])
            {
                int temp = output[j];
                output[j] = output[j+1];
                output[j+1] = temp;
            }
        }
    }
}
void Print(int* arrIn, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arrIn[i]);
    }       
}

int main(void)
{    
    int output[10];
    
    signed char c;
    char string[1000];
   
    FILE *f;
    f = fopen("ex3.txt", "r+");
    
    while ( (c=fgetc(f))!= EOF ) {
        fscanf (f, "%s", string);
        sum = NumbersFromString(string, output, sum); 
        //printf("%d ", sum);
    }

    Sort(output, sum);
    Print(output, sum);
    fprintf(f, "%s\n", string);
    fclose(f);    
    
    return 0;
}
