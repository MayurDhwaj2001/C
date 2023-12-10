#include <stdio.h>

void main()
{

    int arr1[3][3], i, j, k;
    int arr2[3][3];
    int sum[3][3];
    int pro[3][3];
    // Scan Array 1
    printf("Enter 9 numbers of Array 1 \n");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("Print Array 1: \n");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            printf("%d \t", arr1[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("Enter 9 numbers of Array 2 \n");
    // Scan Array 2
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }

    printf("Print Array 2: \n");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            printf("%d \t", arr2[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("Sum of arrays:\n");

    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            sum[i][j] = arr1[i][j] + arr2[i][j];
            printf("%d \t", sum[i][j]);
        }
        printf("\n");
    }
}