#include <stdio.h>
int migratoryBirds(int arr_count, int *arr)
{
    int maxCount = 0, mode = -1;

    for (int i = 0; i < arr_count; i++)
    {
        int count = 0;

        for (int j = i; j < arr_count; j++)
        {
            if (arr[j] == arr[i])
                count++;
        }

        if (count > maxCount)
        {
            maxCount = count;
            mode = arr[i];
        }
    }
    return mode;
}

void main()
{
    int arr_count;
    scanf("%d", &arr_count);
    int arr[arr_count];
    for (int i = 0; i < arr_count; i++)
    {
        scanf("%d", &arr[i]);
    }
    migratoryBirds(arr_count, arr);
}