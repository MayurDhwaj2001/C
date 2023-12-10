#include <stdio.h>
#include <math.h>

double f(double x)
{
    return x * x * x - 4 * x - 9; // the function whose root is to be found
}

void bisection(double a, double b, double tol)
{
    if (f(a) * f(b) >= 0)
    {
        printf("Error: f(a) and f(b) have the same sign.\n");
        return;
    }

    double c;
    int i = 0;
    while ((b - a) / 2.0 > tol)
    {
        c = (a + b) / 2.0;
        if (f(c) == 0.0)
        {
            printf("Root found at x = %lf.\n", c);
            return;
        }
        else if (f(c) * f(a) < 0)
        {
            b = c;
        }
        else
        {
            a = c;
        }
        i++;
    }

    printf("Root found at x = %lf with %d iterations.\n", c, i);
}

int main()
{
    double a = 1.0, b = 3.0, tol = 0.0001;
    bisection(a, b, tol);
    return 0;
}
