#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int solveMeFirst(int a, int b)
{
    // Hint: Type return a+b; below
    int x = a;
    int y = b;
    int sum = x + y;
    return sum;
    ;
}

int main()
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    int sum;
    sum = solveMeFirst(num1, num2);
    printf("%d", sum);
    return 0;
}
