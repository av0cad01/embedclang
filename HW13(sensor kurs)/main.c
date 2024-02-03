/*
 * 
 *Создание многомодульного консольного приложения:
 *Создать массив из структурного типа данных для хранения температуры.
 *Структура типа:  dddd - год 4 цифры mm - месяц 2 символа  dd - день 2 цифры hh - часы 2 цифры mm - минуты 2 цифры temperature - целое число от -99 до 99
 *Создать прототипы (заглушки) функций вывода статистики по каждому месяцу:  
 *• среднемесячная температура, 
 *• минимальная температура в текущем месяце, 
 *• максимальная температура в текущем месяце, 
 *вывода статистику за год:
 *• среднегодовая температура 
 *• минимальная температура 
 *• максимальная температура
 *Все прототипы функций используемые в приложении должны быть вынесены в отдельный файл temp_api.h
 *Тексты функций - в файл temp_api.c.
 *Приложение должно собираться при помощи утилиты make
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "temp_api.h"

//#define SIZE    365*24*60

int main(int argc, char *argv[])
{
    if (argc == 1)
        printf("Use the -h argument to open help window.\n");
    
    
    int number = 0;
    int rez = 0;
    int inputData = 0;

    

    struct sensor *info;
    int allStrings = 0;
    int okStrings = 0;

    while ( (rez = getopt(argc, argv, "hf:m:y:a")) != -1){
        switch(rez){
            case 'h': 
                        printf( "-h                    print this help.\n"
                                "-f <filename>         open csv file and get all statistic.\n"
                                "-m <month number>     get temp statistics for a specified month.\n"
                                "-y <year number>      get temp statistics for a specified year.\n"
                                "-a                    get all temp data of file.\n"); 
            break;
            case 'f': 
                        okStrings = CSVopen(optarg, &info, &allStrings);                        
            break;
            case 'm': 
                        printf("==============================\n");
                        printf("Temp statistic of month #%s.\n", optarg);
                        inputData = atoi(optarg);
                        AverageMonthTemp(info, okStrings, inputData);
                        MinMonthTemp(info, okStrings, inputData);
                        MaxMonthTemp(info, okStrings, inputData);
                        printf("==============================\n");
                        printDataAboutProseedStrings(allStrings, okStrings);
                        printf("==============================\n");
            break;
            case 'y': 
                        printf("==============================\n");
                        printf("Temp statistic of year #%s.\n", optarg);
                        inputData = atoi(optarg);
                        AverageYearTemp(info, okStrings, inputData);
                        MinYearTemp(info, okStrings, inputData);
                        MaxYearTemp(info, okStrings, inputData);
                        printf("==============================\n");
                        printDataAboutProseedStrings(allStrings, okStrings);
                        printf("==============================\n"); 
            break; 
            case 'a':
                        printf("==============================\n");
                        printf("Print all statistics.\n");
                        printf("==============================\n");
                        Print(info, okStrings);
                        printf("==============================\n");
                        printDataAboutProseedStrings(allStrings, okStrings);
                        printf("==============================\n");

            break;          
            case '?': 
                        printf("Error found!\n"); 
            break;
        }
    }

    
    

    free(info);

    return 0;
}


