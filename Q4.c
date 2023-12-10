#include <stdio.h>
#include <stdlib.h>

void print_matrix(double **A, double *B, int n)
{
    int i, j;
    printf("Augmented matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%lf ", A[i][j]);
        }
        printf("| %lf\n", B[i]);
    }
    printf("\n");
}

void gauss_elimination(double **A, double *B, int n)
{
    int i, j, k;
    double factor, pivot;
    for (i = 0; i < n - 1; i++)
    {
        pivot = A[i][i];
        if (pivot == 0.0)
        {
            printf("Error: division by zero.\n");
            return;
        }
        for (j = i + 1; j < n; j++)
        {
            factor = A[j][i] / pivot;
            for (k = i + 1; k < n; k++)
            {
                A[j][k] = A[j][k] - factor * A[i][k];
            }
            B[j] = B[j] - factor * B[i];
            A[j][i] = 0.0;
        }
        print_matrix(A, B, n);
    }
}

int main()
{
    int n = 3;
    double **A, *B;
    int i, j;
    A = (double **)malloc(n * sizeof(double *));
    for (i = 0; i < n; i++)
    {
        A[i] = (double *)malloc(n * sizeof(double));
    }
    B = (double *)malloc(n * sizeof(double));
    A[0][0] = 2.0;
    A[0][1] = 1.0;
    A[0][2] = -1.0;
    B[0] = 8.0;
    A[1][0] = -3.0;
    A[1][1] = -1.0;
    A[1][2] = 2.0;
    B[1] = -11.0;
    A[2][0] = -2.0;
    A[2][1] = 1.0;
    A[2][2] = 2.0;
    B[2] = -3.0;
    print_matrix(A, B, n);
    gauss_elimination(A, B, n);
    return 0;
}
