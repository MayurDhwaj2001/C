#include <stdio.h>

void main()
{
    int n, s = 0, r;
    scanf("%d", &n);

    for (int temp = n; n > 0; n = n / 10)
    {
        r = n % 10;
        s = s + r;
    }
    printf("%d", s);
}