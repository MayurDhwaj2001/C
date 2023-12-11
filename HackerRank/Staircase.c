#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int height;
    scanf("%d", &height);
    int stair = height - 1;

    for (int i = 0; i < height; ++i)
    {
        for (int j = 0; j < height; ++j)
        {
            if (j >= stair)
            {
                printf("#");
            }
            else
            {
                printf(" ");
            }
        }
        stair -= 1;
        printf("\n");
    }
    return 0;
}