#include <stdio.h>
#include <conio.h>

void main()
{
    int a[5], b;
    // int len=sizeof(a);
    for (int i = 0; i < 5; i++)
    {
        printf("enter the %d no. ", i + 1);
        scanf("%d", &a[i]);
    }
    // for printing the array
    printf("printing the array ");
    printf("[ ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    printf("]\n");

    // sorting
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                b = a[j];
                a[j] = a[j + 1];
                a[j + 1] = b;
            }
        }
    }
    // printing the sorted array
    printf("printing the sorted array ");
    printf("[ ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    printf("]\n");
}