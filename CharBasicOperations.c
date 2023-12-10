#include <stdio.h>
#include <stdlib.h>
#include <string.h> //To use strlen();

void main()
{
    char *p = "Mayur";
    char *n = "123";

    printf("%s\n", p); // Print Whole String

    printf("%c\n", p[0]); // Print 1st Value

    p++; // Removes 1st Digit
    printf("%s\n", p);

    printf("%s\n", n); // Prints Number as a String

    int len = strlen(p); // Length of a char #include<string.h> is required
    printf("Length = %d", len);

    printf("\nUsing Loop Print String :");
    p = "Dhwaj";
    for (int i = 0; i <= len; i++)
    {
        printf("%c", p[0]);
        p++;
    }
}