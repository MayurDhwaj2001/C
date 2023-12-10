#include <stdio.h>
#include <stdlib.h>

char *dayOfProgrammer(int year)
{

    char *date = (char *)malloc(20);
    if ((year > 1700 && year % 4 == 0) || (year < 2700 && year % 4 == 0))
    {
        sprintf(date, "12.09.%d", year);
    }
    else
    {
        sprintf(date, "13.09.%d", year);
    }

    return date;
}

void main()
{
    int year;
    scanf("%d", &year);
    dayOfProgrammer(year);
}