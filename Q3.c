#include <stdio.h>
#include <math.h>

double f(double x)
{
    return x * x * x - 2 * x - 5; // the function whose root is to be found
}

double df(double x)
{
    return 3 * x * x - 2; // the derivative of the function
}

void newton_raphson(double x0, double tol)
{
    double x = x0, fx, dfx;
    int i = 0;
    printf("i\t x\t\t f(x)\n");
    printf("%d\t %lf\t %lf\n", i, x, f(x));

    while (fabs(f(x)) > tol)
    {
        fx = f(x);
        dfx = df(x);
        if (dfx == 0.0)
        {
            printf("Error: division by zero.\n");
            return;
        }
        x = x - fx / dfx;
        i++;
        printf("%d\t %lf\t %lf\n", i, x, f(x));
    }

    printf("Root found at x = %lf with %d iterations.\n", x, i);
}

int main()
{
    double x0 = 2.0, tol = 0.0001;
    newton_raphson(x0, tol);
    return 0;
}
