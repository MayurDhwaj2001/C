#include <stdio.h>
#include <stdlib.h>

int f = -1, r = -1, a[5];

void insert()
{
    if (f == -1 && r == -1)
    {
        f++;
        r++;
        printf("Enter Data to be inserted\n");
        scanf("%d", &a[r]);
    }

    else if (r < 4)
    {
        r++;
        printf("Enter Data to be inserted\n");
        scanf("%d", &a[r]);
    }
    else
    {
        printf("Queue is full.\n");
    }
}

void del()
{
    if ((f == -1 && r == -1) || (f > r))
    {
        printf("Queue is empty.\n");
    }

    else
    {
        printf("Data is %d", f);
        f++;
    }
}

void display()
{
    if ((f == -1 && r == -1) || (f > r))
    {
        printf("Queue is empty.\n");
    }
    else
    {
        for (int i = 0; i <= r; i++)
        {
            printf("%d ", a[i]);
        }
    }
}

void main()
{
    int c;
    while (1)
    {
        printf("\nPRESS ANY OPTION\n");
        printf("1.Insert \t 2.Delete \t 3.Display \t 4.Exit\n");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            insert();
            break;

        case 2:
            del();
            break;

        case 3:
            display();
            break;

        case 4:
            exit(0);
            break;

        default:
            printf("Invalid Input\n");
            break;
        }
    }
}