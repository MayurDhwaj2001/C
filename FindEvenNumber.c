#include <stdio.h>
#include <conio.h>

void fun(int i)
{
    for (int j = 1; j <= i; j++)
    {
        if (j % 2 == 0)
        {
            printf("%d ", j);
        }
    }
    getch();
}

void main()
{
    int n;
    printf("Enter Any Number");
    scanf("%d", &n);
    fun(n);
}