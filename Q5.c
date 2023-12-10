#include <stdio.h>
#include <math.h>

double f(double t, double y)
{
    return t + y;
}

int main()
{
    double t0 = 0.0, y0 = 1.0;
    double h = 0.1;
    double t, y;
    int i, n = 10;
    for (i = 0; i < n; i++)
    {
        y = y0 + h * f(t0, y0);
        t = t0 + h;
        printf("t = %lf, y = %lf\n", t, y);
        y0 = y;
        t0 = t;
    }
    return 0;
}
