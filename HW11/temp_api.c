#include <stdio.h>
#include <inttypes.h>
#include "temp_api.h"

void AddRecord(struct sensor info[], int number, uint16_t year, uint8_t month, uint8_t day, uint8_t hour, uint8_t minute, int8_t temperature)
{
    info[number].year = year;
    info[number].month = month;
    info[number].day = day;
    info[number].hour = hour;
    info[number].minute = minute;
    info[number].temperature = temperature;
}

int AddInfo(struct sensor* info)
{
    int counter = 0;
    AddRecord(info, counter++, 2021, 3, 12, 23, 38, -5);
    
    return counter;
}

void Print(struct sensor* info, int number)
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

void AverageMonthTemp(struct sensor* info, int number)
{
    
}

void MinMonthTemp(struct sensor* info, int number)
{
    
}

void MaxMonthTemp(struct sensor* info, int number)
{
    
}

void AverageYearTemp(struct sensor* info, int number)
{
    
}

void MinYearTemp(struct sensor* info, int number)
{
    
}

void MaxYearTemp(struct sensor* info, int number)
{
    
} 
