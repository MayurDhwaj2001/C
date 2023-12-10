#include <stdio.h>
#include <stdlib.h>

void main()
{
    int *p, j, i, arr[5];
    printf("Enter 5 Number:\n");
    for (i = 0; i <= 4; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\n");
    printf("Normal Array:");
    for (i = 0; i <= 4; i++)
    {
        printf("%d ", arr[i]);
    }

    // Bubble Sorting
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3 - x; y++)
        {
            if (arr[y] > arr[y + 1])
            {
                j = arr[y];
                arr[y] = arr[y + 1];
                arr[y + 1] = j;
            }
        }
    }
    printf("\n");
    printf("Sorted:\n");
    for (int x = 0; x <= 4; x++)
    {
        printf("%d ", arr[x]);
    }
}