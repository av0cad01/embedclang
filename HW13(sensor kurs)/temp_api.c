#include <stdio.h>
#include <stdlib.h>
#include "temp_api.h"

#define N   6

FILE *file;

void AddRecord(struct sensor info[], int number, uint16_t year, uint8_t month, uint8_t day, uint8_t hour, uint8_t minute, int8_t temperature)
{
    info[number].year = year;
    info[number].month = month;
    info[number].day = day;
    info[number].hour = hour;
    info[number].minute = minute;
    info[number].temperature = temperature;
}

int AddInfo(struct sensor* info, uint16_t year, uint8_t month, uint8_t day, uint8_t hour, uint8_t minute, int8_t temperature)
{
    static int counter = 0;
    AddRecord(info, counter++, year, month, day, hour, minute, temperature);
    // AddRecord(info, counter++, 2021, 3, 12, 23, 38, -5);
    // AddRecord(info, counter++, 2021, 3, 15, 1, 55, -3);
    // AddRecord(info, counter++, 2021, 3, 19, 55, 38, -7);
    // AddRecord(info, counter++, 2021, 5, 9, 23, 5, 12);
    return counter;
}

void Print(struct sensor *info, int number)
{
    printf("==============================\n");
    for(int i = 0; i < number; i++)
    {
        printf("%04d-%02d-%02d-%02d-%02d temperature=%02d\n",
            info[i].year,
            info[i].month,
            info[i].day,
            info[i].hour,
            info[i].minute,
            info[i].temperature
        );
    }
}

void AverageMonthTemp(struct sensor* info, int number, int month)
{
    int size = 0;
    int temp = 0;

    for (int i = 0; i < number; i++)
    {
        if (info[i].month == month)
        {
            temp += info[i].temperature;
            size++;
        }
    }
    printf("==============================\n");
    printf("Average month temp is %d °C\n", temp/size);
}

void MinMonthTemp(struct sensor* info, int number, int month)
{
    int minTemp;
    int flag = 0;

    for (int i = 0; i < number; i++)
    {
        if (info[i].month == month && flag == 0)
        {
            flag = 1;
            minTemp = info[i].temperature;
        }

        if (info[i].month == month)
        {
            if (minTemp > info[i].temperature)
                minTemp = info[i].temperature;
        }
    }
    printf("==============================\n");
    printf("Min temp during %d month is %d °C\n", month, minTemp);
}

void MaxMonthTemp(struct sensor* info, int number, int month)
{
    int maxTemp;
    int flag = 0;

    for (int i = 0; i < number; i++)
    {
        if (info[i].month == month && flag == 0)
        {
            flag = 1;
            maxTemp = info[i].temperature;
        }

        if (info[i].month == month)
        {
            if (maxTemp < info[i].temperature)
                maxTemp = info[i].temperature;
        }
    }
    printf("==============================\n");
    printf("Max temp during %d month is %d °C\n", month, maxTemp);
}

void AverageYearTemp(struct sensor* info, int number, int year)
{
    int size = 0;
    int temp = 0;

    for (int i = 0; i < number; i++)
    {
        if (info[i].year == year)
        {
            temp += info[i].temperature;
            size++;
        }
    }
    printf("==============================\n");
    printf("Average year temp is %d °C\n", temp/size);
}

void MinYearTemp(struct sensor* info, int number, int year)
{
    int minTemp;
    int flag = 0;

    for (int i = 0; i < number; i++)
    {
        if (info[i].year == year && flag == 0)
        {
            flag = 1;
            minTemp = info[i].temperature;
        }

        if (info[i].year == year)
        {
            if (minTemp > info[i].temperature)
                minTemp = info[i].temperature;
        }
    }
    printf("==============================\n");
    printf("Min temp during %d year is %d °C\n", year, minTemp);
}

void MaxYearTemp(struct sensor* info, int number, int year)
{
    int maxTemp;
    int flag = 0;

    for (int i = 0; i < number; i++)
    {
        if (info[i].year == year && flag == 0)
        {
            flag = 1;
            maxTemp = info[i].temperature;
        }

        if (info[i].year == year)
        {
            if (maxTemp < info[i].temperature)
                maxTemp = info[i].temperature;
        }
    }
    printf("==============================\n");
    printf("Max temp during %d year is %d °C\n", year, maxTemp);
} 

int CSVopen(char csvFileName[], struct sensor **info, int *allStrings)
{
    file = fopen(csvFileName, "r");

    if(file==NULL)
        return 1;

    int Y,M,D,H,Min,temp;
    int r;
    int number;

    int stringCounter;

    while((r = fscanf(file, "%d;%d;%d;%d;%d;%d",&Y,&M,&D,&H,&Min,&temp))>0)
    {
        if(r < N)
        {
            char s[20];
            r = fscanf(file, "%[^\n]", s);
            stringCounter++;
        }
        else
            stringCounter++;
    }

    *allStrings = stringCounter;
    
    printf("%d\n", *allStrings);

    *info = malloc(*allStrings * sizeof(*info));

    fseek(file, 0, SEEK_SET);

    while((r = fscanf(file, "%d;%d;%d;%d;%d;%d",&Y,&M,&D,&H,&Min,&temp))>0)
    {
        if(r < N)
        {
            char s[20];
            r = fscanf(file, "%[^\n]", s);            
        }
        else
            if (dataCheck(Y, M, D, H, Min))
            {
                number = AddInfo(*info, Y, M, D, H, Min, temp);   
            }
            else
            {
                char s[20];
                r = fscanf(file, "%[^\n]", s); 
            }      
    }

    fclose(file);

    return number;
}

int dataCheck(uint16_t year, uint8_t month, uint8_t day, uint8_t hour, uint8_t minute)
{
    int noError = 1;

    if ((year < 1900) || (year > 9999)  || (month > 12)     || (month <= 0)
        		      || (day > 31)     || (day <= 0) 
                      || (hour > 24)    || (hour <= 0) 
                      || (minute > 60)  || (minute <= 0))
    {
        noError = 0;
    }

    return noError;
}

void printDataAboutProseedStrings(int allStrings, int okStrings)
{
    int errorStrings = allStrings - okStrings;
    printf("Data rows are processed: %d\n", allStrings);
    printf("Data rows are OK: %d\n", okStrings);
    printf("Data rows are ERROR: %d\n", errorStrings);
}