#include <stdio.h>
void main()
{
    int no, i, j = 0;
    printf("Enter any no");
    scanf("%d", &no);
    i = 2;
    while (i <= no)
    {
        if (no % i == 0)
        {
            j++;
        }
        i++;
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