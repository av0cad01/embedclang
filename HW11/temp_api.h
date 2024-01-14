#include <stdio.h>
#include <inttypes.h>

struct sensor {
    uint16_t year;
    uint8_t month;
    uint8_t day;
    uint8_t hour;
    uint8_t minute;
    int8_t temperature;
};

void AddRecod(struct sensor info[], int number, uint16_t year, uint8_t month, uint8_t day, uint8_t hour, uint8_t minute, int8_t temperature);

int AddInfo(struct sensor* info);

void Print(struct sensor* info, int number);

void AverageMonthTemp(struct sensor* info, int number);

void MinMonthTemp(struct sensor* info, int number);

void MaxMonthTemp(struct sensor* info, int number);

void AverageYearTemp(struct sensor* info, int number);

void MinYearTemp(struct sensor* info, int number);

void MaxYearTemp(struct sensor* info, int number);
