#include <stdio.h>
#include <stdlib.h>
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

int AddInfo(struct sensor* info, uint16_t year, uint8_t month, uint8_t day, uint8_t hour, uint8_t minute, int8_t temperature);

void Print(struct sensor* info, int number);

void AverageMonthTemp(struct sensor* info, int number, int month);

void MinMonthTemp(struct sensor* info, int number, int month);

void MaxMonthTemp(struct sensor* info, int number, int month);

void AverageYearTemp(struct sensor* info, int number, int year);

void MinYearTemp(struct sensor* info, int number, int year);

void MaxYearTemp(struct sensor* info, int number, int year);

int CSVopen(char csvFileName[], struct sensor **info, int *stringNumber);

int dataCheck(uint16_t year, uint8_t month, uint8_t day, uint8_t hour, uint8_t minute);

void printDataAboutProseedStrings(int allStrings, int okStrings);