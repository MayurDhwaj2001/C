#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *h, *p, *p1;

void insertAtBegining()
{
    p = malloc(sizeof(struct node));
    printf("Enter the data: ");
    scanf("%d", &p->data);
    if (h == NULL)
    {
        p->next = NULL;
    }
    else
    {
        p->next = h;
    }
    h = p;
}

void insertAtEnd()
{
    p = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data: ");
    scanf("%d", &p->data);
    if (h == NULL)
    {
        p->next = NULL;
    }
    else
    {
        p1 = h;
        while (p1->next != NULL)
        {
            p1 = p1->next;
        }
        p1->next = p;
        p->next = NULL;
    }
}

void insertAfterValue()
{
    int x;
    if (h == NULL)
    {
        printf("ERROR: No Value Present\n");
    }
    else
    {
        printf("Enter the value after which data is to be inserted: ");
        scanf("%d", &x);
        p1 = h;
        while (p1 != NULL)
        {
            if (p1->data == x)
            {
                break;
            }
            p1 = p1->next;
        }
        if (p1 == NULL)
        {
            printf("ERROR: The value %d not found", x);
        }
        else
        {
            p = (struct node *)malloc(sizeof(struct node));
            p->next = p1->next;
            printf("Enter the data to be inserted: ");
            scanf("%d", &p->data);
            p1->next = p;
        }
    }
}

void insertAfterIndex()
{
    int x, y;

    if (h == NULL)
    {
        printf("ERROR: No Value Present");
    }
    else
    {
        printf("Enter the Index after which data is to be inserted: ");
        scanf("%d", &x);
        p1 = h;
        while (p1 != NULL)
        {
            if (p1->next == NULL)
            {
                break;
            }
            p1 = p1->next;
        }
        if (p1 == NULL)
        {
            printf("ERROR: The index %d not found\n", x);
        }
        else
        {
            p = (struct node *)malloc(sizeof(struct node));
            p->next = p1->next;
            printf("Enter the data to be inserted: ");
            scanf("%d", &p->data);
            p1->next = p;
        }
    }
}

void insertBeforeValue()
{
    int x;
    struct node *previous;
    if (h == NULL)
    {
        printf("ERROR: No Data present\n");
    }
    else
    {
        printf("Enter the value before which data is to be inserted: ");
        scanf("%d", &x);
        p1 = h;
        while (p1 != NULL)
        {
            if (p1->data == x)
            {
                break;
            }
            previous = p1;
            p1 = p1->next;
        }
        if (p1 == NULL)
        {
            printf("ERROR: The value %d not found\n", x);
        }
        else
        {
            p = (struct node *)malloc(sizeof(struct node));
            printf("Enter the data: ");
            scanf("%d", &p->data);
            p->next = p1;
            previous->next = p;
        }
    }
}

void insertBeforeIndex()
{
    int x, y = 1;
    struct node *previous;
    if (h == NULL)
    {
        printf("ERROR: No Data present\n");
    }
    else
    {
        printf("Enter the value before which data is to be inserted: ");
        scanf("%d", &x);
        p1 = h;
        while (p1 != NULL)
        {
            if (y == x)
            {
                break;
            }
            y++;
            previous = p1;
            p1 = p1->next;
        }
        if (p1 == NULL)
        {
            printf("ERROR: The value %d not found\n", x);
        }
        else
        {
            p = (struct node *)malloc(sizeof(struct node));
            printf("Enter the data: ");
            scanf("%d", &p->data);
            if (p1 == h)
            {
                p->next = h;
                h = p;
            }
            else
            {
                p->next = p1;
                previous->next = p;
            }
        }
    }
}

void deleteHead()
{

    if (h == NULL)
    {
        printf("ERROR: No Data Present\n");
    }
    else
    {
        p1 = h->next;
        free(h);
        h = p1;
        printf("Head Deleted\n");
    }
}

void deleteTail()
{
    struct node *p2;
    if (h == NULL)
    {
        printf("ERROR: No Data Present\n");
    }
    else if (h->next == NULL) // If Only one node is present
    {
        p1 = h;
        h = h->next;
        p1->next = NULL;
        free(p1);
        printf("Tail Deleted\n");
    }
    else
    {
        p1 = h;
        p2 = h;
        while (p2->next != NULL)
        {
            p1 = p2;
            p2 = p2->next;
        }
        p1->next = NULL;
        free(p2);
        printf("Tail Deleted\n");
    }
}

void deleteAfterValue()
{
    int x;
    if (h == NULL)
    {
        printf("ERROR: No Value Present");
    }
    else
    {
        printf("Enter the value after which node is to be deleted: ");
        scanf("%d", &x);
        p1 = h;
        while (p1 != NULL)
        {
            if (p1->data == x)
            {
                break;
            }
            p1 = p1->next;
        }
        if (p1 == NULL)
        {
            printf("ERROR: The value %d not found\n", x);
        }
        else
        {
            if (p1->next == NULL)
            {
                printf("ERROR: %d is the last Node", x);
            }
            else
            {
                struct node *p2;
                p2 = p1->next;
                p1->next = p1->next->next;
                free(p2);
                printf("Node Deleted\n");
            }
        }
    }
}

void deleteAfterIndex()
{
    int x, y = 1;
    if (h == NULL)
    {
        printf("ERROR: No Value Present");
    }
    else
    {
        printf("Enter the value after which node is to be deleted: ");
        scanf("%d", &x);
        p1 = h;
        while (p1 != NULL)
        {
            if (y == x)
            {
                break;
            }
            y++;
            p1 = p1->next;
        }
        if (p1 == NULL)
        {
            printf("ERROR: The value %d not found\n", x);
        }
        else
        {
            if (p1->next == NULL)
            {
                printf("ERROR: %d is the last Node", x);
            }
            else
            {
                struct node *p2;
                p2 = p1->next;
                p1->next = p1->next->next;
                free(p2);
                printf("Node Deleted\n");
            }
        }
    }
}

void deleteBeforeValue()
{
    int x;
    struct node *previous, *p2;
    if (h == NULL)
    {
        printf("ERROR: No Data present\n");
    }
    else
    {
        printf("Enter the value before which data is to be deleted: ");
        scanf("%d", &x);
        p1 = h;
        while (p1 != NULL)
        {
            if (p1->data == x)
            {
                break;
            }
            if (previous != NULL)
            {
                p2 = previous;
            }
            previous = p1;
            p1 = p1->next;
        }
        if (p1 == NULL)
        {
            printf("ERROR: The value %d not found\n", x);
        }
        else
        {
            if (h == p2)
            {
                h = previous;
                p2->next = p1;
                free(previous);
                printf("Node Deleted\n");
            }
            else if (h == previous)
            {
                h = p1;
                free(previous);
                printf("Node Deleted\n");
            }
            else if (h == p1)
            {
                printf("ERROR: Can't Deleted\n");
            }
            else
            {
                p2->next = p1;
                free(previous);
                printf("Node Deleted\n");
            }
        }
    }
}

void deleteBeforeIndex()
{
    int x, y = 1;
    struct node *previous, *p2;
    if (h == NULL)
    {
        printf("ERROR: No Data present\n");
    }
    else
    {
        printf("Enter the index before which data is to be deleted: ");
        scanf("%d", &x);
        p1 = h;
        while (p1 != NULL)
        {
            if (y == x)
            {
                break;
            }
            if (previous != NULL)
            {
                p2 = previous;
            }
            y++;
            previous = p1;
            p1 = p1->next;
        }
        if (p1 == NULL)
        {
            printf("ERROR: The index %d not found\n", x);
        }
        else
        {
            if (h == p2)
            {
                h = previous;
                p2->next = p1;
                free(previous);
                printf("Node Deleted\n");
            }
            else if (h == previous)
            {
                h = p1;
                free(previous);
                printf("Node Deleted\n");
            }
            else if (h == p1)
            {
                printf("ERROR: Can't Deleted\n");
            }
            else
            {
                p2->next = p1;
                free(previous);
                printf("Node Deleted\n");
            }
        }
    }
}

void printAllData()
{
    p1 = h;
    if (h == NULL)
    {
        printf("ERROR: No Data Present\n");
    }
    else
    {
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
}

void main()
{
    int c;
    while (1)
    {
        printf("\n-------------------------------------------------- PRESS ANY OPTION -----------------------------------------------------\n");
        printf("|\t1.Insert At Begining \t 2.Insert At End \t 3.Insert After Value \t\t 4.Insert After Index \t\t|\n");
        printf("|\t5.Insert Before Value \t 6.Insert Before Index \t 7.Delete Head \t\t\t 8.Delete Tail \t\t\t|\n");
        printf("|\t9.Delete After Value \t 10.Delete After Index\t 11.Delete Before Value \t 12.Delete Before Index\t\t|\n");
        printf("|\t13.Print All Data \t 0.Exit \t\t\t\t\t\t\t\t\t\t|\n");
        printf("-------------------------------------------------------------------------------------------------------------------------\n");
        printf("Your Option: ");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            insertAtBegining();
            break;

        case 2:
            insertAtEnd();
            break;

        case 3:
            insertAfterValue();
            break;

        case 4:
            insertAfterIndex();
            break;

        case 5:
            insertBeforeValue();
            break;

        case 6:
            insertBeforeIndex();
            break;

        case 7:
            deleteHead();
            break;

        case 8:
            deleteTail();
            break;

        case 9:
            deleteAfterValue();
            break;

        case 10:
            deleteAfterIndex();
            break;

        case 11:
            deleteBeforeValue();
            break;

        case 12:
            deleteBeforeIndex();
            break;

        case 13:
            printAllData();
            break;

        case 0:
            exit(0);

        default:
            printf("ERROR: Invalid Input\n");
            break;
        }
    }
}