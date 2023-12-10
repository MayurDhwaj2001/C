#include <stdio.h>
int main()
{
    int n, r, sum = 0, temp;
    printf("enter no");
    scanf("%d", &n);
    for (temp = n; n > 0; n = n / 10)
    {
        r = n % 10;
        sum = sum + r * r * r;
    }
    if (temp == sum)
    {
        printf("no is armstrong");
    }
    else
    {

        printf("not armstrong");
    }
}