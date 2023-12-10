#include <stdio.h>
#include <math.h>

double f(double x, double y)
{
    return x * x + y * y; // the function f(x, y) in the ODE dy/dx = f(x, y)
}

void runge_kutta(double x0, double y0, double h, double xn)
{
    double x = x0, y = y0, k1, k2;
    int i = 0;
    printf("i\t x\t\t y\n");
    printf("%d\t %lf\t %lf\n", i, x, y);

    while (x < xn)
    {
        k1 = h * f(x, y);
        k2 = h * f(x + h / 2, y + k1 / 2);
        y = y + k2;
        x = x + h;
        i++;
        printf("%d\t %lf\t %lf\n", i, x, y);
    }
}

int main()
{
    double x0 = 0.0, y0 = 0.0, h = 0.1, xn = 1.0;
    runge_kutta(x0, y0, h, xn);
    return 0;
}
