#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *a[2][2];
    int *b[2][2];
    int sum[2][2];
    a[2][2] = (int *)malloc(sizeof(int));
    b[2][2] = (int *)malloc(sizeof(int));

    printf("Enter 3 no for matrix A:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter 3 no for matrix B:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum[i][j] = *a[i][j] + *b[i][j];
        }
    }

    printf("\n");
    printf("Output:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
}