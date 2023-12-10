#include <stdio.h>
#include <stdlib.h>

void main()
{
    int *p, a;
    p = &a;

    printf("Enter any no \n");

    scanf("%d", &a);
    // or
    scanf("%d", p);

    printf("%d", a);
    // or
    printf("%d", p);
}