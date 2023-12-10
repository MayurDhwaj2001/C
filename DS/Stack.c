#include <stdio.h>
#include <stdlib.h>

int stack[5];
int pointer = -1;

void push()
{
    if (pointer < 4)
    {
        pointer++;
        printf("Enter number to push: ");
        scanf("%d", &stack[pointer]);
    }
    else
    {
        printf("Overflow\n");
    }
}

void pop()
{
    if (pointer == -1)
    {
        printf("No Element to Pop\n");
    }
    else
    {
        printf("%d", stack[pointer]);
        pointer--;
    }
}

void display()
{
    if (pointer == -1)
    {
        printf("No Element to Print\n");
    }
    else
    {
        for (int i = pointer; i >= 0; i--)
        {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

void main()
{
    int c;
    while (1)
    {
        printf("1:Push \t 2:Pop \t 3:Display \t 4:Exit\n");
        printf("Enter option\n");
        scanf("%d", &c);

        switch (c)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;

        default:
            printf("Not Valid Input");
            break;
        }
    }
}