#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main()
{
    int ascii = 0;
    char *word = "aba";
    int h[] = {1, 3, 1, 3, 1, 4, 1, 3, 2, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 7};
    int len = strlen(word);
    int index[len];
    int highest = h[0];
    int highlight = 0;
    for (int i = 0; i < len; i++)
    {
        char c = word[0];
        ++word;
        ascii = c - 97;
        index[i] = ascii;
    }
    for (int i = 0; i < len; i++)
    {
        int temp = index[i];

        if (highest < h[temp])
        {
            highest = h[temp];
        }
    }
    highlight = highest * len;
    printf("%d", highlight);
}