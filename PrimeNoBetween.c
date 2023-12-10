#include <stdio.h>
void main()
{
    int no, i = 0, k = 0, j;
    printf("100 Prime no are\n");
    for (i = 2; i <= 100; i++)
    {
        j = 0;
        for (k = 2; k < i; k++)
        {
            if (i % k == 0)
            {
                j++;
            }
        }
        if (j == 0)
        {
            printf("%d ", i);
        }
    }
}