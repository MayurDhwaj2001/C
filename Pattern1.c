// 1
// 23
// 456
// 78910

#include <stdio.h>

void main()
{
    int a, b, n;
    printf("Enter number of rows");
    scanf("%d", &n);
    int i = 1;
    for (a = 0; a < n; a++)
    {
        for (b = 0; b <= a; b++)
        {
            printf("%d", i);
            i++;
        }
        printf("\n");
    }
}