#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *down;
};

int size;
struct node *h, *p, *p1;
void main()
{
    int row = 0;
    printf("Enter size of Grid (eg.3) : ");
    scanf("%d" size);

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            p = (struct node *)malloc(sizeof(struct node));
            printf("Enter value for (%  %)", i, j);
            scanf("%d", &p->data);
            if (i == 0 && j == 0)
            {
                h = p;
                p1 = h;
            }
            else if (j == n - 1)
            {
                        }
            else
            {
                p1->next = p;
                p1 = p;
            }
        }
    }
}