#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int countingValleys(int steps, char *path)
{
    int len = strlen(path); // Length of a char #include<string.h> is required
    int i, count = 0;
    int vcount = 0;
    for (i = 0; i <= len; i++)
    {
        if (path[i] == 'U')
        {
            count++;
        }
        else
        {
            count--;
        }

        if (count == 0 && path[i] == 'U')
        {
            vcount++;
        }
    }

    return vcount;
}

void main()
{
    int steps = 8;
    char *path = "UDDDUDUU";
    countingValleys(steps, path);
}
