#include <stdio.h>
void main()
{
    int no, i, j = 0;
    printf("Enter any no");
    scanf("%d", &no);
    for (i = 2; i <= no; i++)
    {
        if (no % i == 0)
        {
            j++;
        }
    }
    if (j == 1)
    {
        printf("PRIME");
    }
    else
    {
        printf("NOT PRIME");
    }
}