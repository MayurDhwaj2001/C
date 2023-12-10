#include <stdio.h>
#include <conio.h>

void fun(int x, int y, int z)
{
    if (x > y && x > z)
    {
        printf("Greatest no is %d", x);
    }
    else if (y > x && y > z)
    {
        printf("Greatest no is %d", y);
    }
    else if (z > x && z > y)
    {
        printf("Greatest no is %d", z);
    }
    else
    {
        printf("All are equal");
    }
}

void main()
{
    int n, m, o;
    // clrscr();
    printf("Enter 3 Numbers");
    scanf("%d%d%d", &n, &m, &o);
    fun(n, m, o);
}