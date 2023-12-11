#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    int x1;
    int v1;
    int x2;
    int v2;
    int flag = 0;

    scanf("%d %d %d %d", &x1, &v1, &x2, &v2);
    int d1 = x1, d2 = x2;

    if (d1 == d2)
    {
        flag = 1;
    }

    for (int i = 0; flag == 0 && d1 <= d2; i++)
    {
        d1 += v1;
        d2 += v2;

        if (d1 == d2)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}