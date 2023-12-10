#include <stdio.h>
int pageCount(int n, int p)
{
    int turn;
    if (n >= 1 && n <= 10000 && p >= 1 && p <= n)
    {
        int first = p / 2;
        int last = (n - p) / 2;

        if (first < last)
        {
            printf("If");
            turn = first;
        }
        else
        {
            printf("Else");

            turn = last;
        }
    }
    return turn;
}
void main()
{
    pageCount(6, 4);
}