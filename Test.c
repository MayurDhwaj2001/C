#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *h, *p, *p1, *a, *b, *c, *d, *e;

void printAllData()
{
    p1 = h;
    if (h == NULL)
    {
        printf("No Data Present\n");
    }

    while (p1 != NULL)
    {
        printf("%d ", p1->data);
        p1 = p1->next;
        if (p1 == NULL)
        {
            break;
        }
    }
}

void main()
{
    int x;
    a = (struct node *)malloc(sizeof(struct node));
    b = (struct node *)malloc(sizeof(struct node));
    c = (struct node *)malloc(sizeof(struct node));
    d = (struct node *)malloc(sizeof(struct node));
    e = (struct node *)malloc(sizeof(struct node));

    h = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = NULL;

    a->data = 1;
    b->data = 2;
    c->data = 3;
    d->data = 4;
    e->data = 5;

    printf("%d\n", a->data);
    printf("%d\n", a);
    printf("%d\n", a->next);
    printf("%d\n", a->next->data);

    while (1)
    {
        printf("\t1.Print all\n");
        scanf("%d", &x);
        switch (x)
        {

        case 1:
            printAllData();
            break;
        }
    }
}