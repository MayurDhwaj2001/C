#include <stdio.h>
#include <stdlib.h>

void main()
{
    int *p, i, j = 0;
    printf("Enter any number:");
    p = (int *)malloc(sizeof(int));
    scanf("%d", p);
    for (i = *p; i != 0; i = i / 10)
    {
        j = (j * 10) + (i % 10);
    }
    printf("%d", j);
}