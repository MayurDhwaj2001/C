#include <stdio.h>
#include <stdlib.h>

void main()
{
    int *p, i, sum = 0;
    p = (int *)malloc(sizeof(int));
    printf("Enter any no.");
    scanf("%d", p);
    for (i = *p; i != 0; i = i / 10)
    {
        sum = sum + (i % 10);
    }
    printf("%d", sum);
}