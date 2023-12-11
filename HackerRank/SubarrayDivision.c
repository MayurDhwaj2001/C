#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    int n;
    scanf("%d", &n);
    int *squares = malloc(sizeof(int) * n);
    for (int squares_i = 0; squares_i < n; squares_i++)
    {
        scanf("%d", &squares[squares_i]);
    }
    int d;
    int m;
    scanf("%d %d", &d, &m);
    // your code goes here
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        if (i + m <= n)
        {
            for (int j = 0; j < m; j++)
            {
                sum += squares[i + j];
            }
            if (sum == d)
            {
                count++;
            }
        }
    }
    printf("%d\n", count);
    return 0;
}