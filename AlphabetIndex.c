#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main()
{
    int ascii = 0;
    char *character = "aba";
    int len = strlen(character);
    int index[len];
    for (int i = 0; i < len; i++)
    {
        char c = character[0];
        ++character;
        ascii = c - 97;
        index[i] = ascii;
        printf("%d ", index[i]);
    }
}