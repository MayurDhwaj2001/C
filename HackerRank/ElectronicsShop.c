#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int drives_count = 2;
int keyboards_count = 3;

int getMoneySpent(int *keyboards, int *drives, int b)
{
    int greatest = -1;
    int sum = 0;
    for (int i = 0; i < drives_count; i++)
    {
        for (int j = 0; j < keyboards_count; j++)
        {
            sum = keyboards[j] + drives[i];
            if (sum > greatest && sum <= b)
            {
                greatest = sum;
            }
        }
    }
    if (greatest == 0)
    {
        greatest = -1;
    }
    return greatest;
}

void main()
{
    int b = 10;
    int keyboards[] = {3, 1};
    int drives[] = {5, 2, 8};
    getMoneySpent(keyboards, drives, b);
}