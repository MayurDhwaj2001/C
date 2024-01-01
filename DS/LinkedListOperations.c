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
    p = (struct node *)malloc(sizeof(struct node));
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
    int x, y;
    if (h == NULL)
    {
        printf("No Value Present\n");
    }
    else
    {
        printf("Enter the value after which data is to be inserted\n");
        scanf("%d", &x);
        p1 = h;
        while (p1->data != x)
        {
            p1 = p1->next;
            if (p1->next == NULL)
            {
                printf("The value %d not found", x);
            }
        }
        p = (struct node *)malloc(sizeof(struct node));
        p->next = p1->next;
        printf("Enter the data to be inserted: ");
        scanf("%d", &p->data);
        p1->next = p;
    }
}

void insertAfterIndex()
{
    int x, y;

    if (h == NULL)
    {
        printf("No Value Present");
    }
    else
    {
        printf("Enter the Index after which data is to be inserted\n");
        scanf("%d", &x);
        p1 = h;
        for (int i = 1; i < x; i++)
        {
            p1 = p1->next;
            if (p1->next == NULL)
            {
                printf("The index %d not found", x);
            }
        }
        p = (struct node *)malloc(sizeof(struct node));
        p->next = p1->next;
        printf("Enter the data to be inserted: ");
        scanf("%d", &p->data);
        p1->next = p;
    }
}

void insertBeforeValue()
{
    printf("Test");
}

void insertBeforeIndex()
{
    printf("Test");
}

void deleteHead()
{
    printf("Test");
}

void deleteTail()
{
    printf("Test");
}

void deleteAfterValue()
{
    printf("Test");
}

void deleteAfterIndex()
{
    printf("Test");
}

void deleteBeforeValue()
{
    printf("Test");
}

void deleteBeforeIndex()
{
    printf("Test");
}

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
    int c;
    while (1)
    {
        printf("\nPRESS ANY OPTION\n");
        printf("1.Insert At Begining \t 2.Insert At End \t 3.Insert After Value \t 4.Insert After Index\n");
        printf("5.Insert Before Value \t 6.Insert Before Index \t 7.Delete Head \t 8.Delete Tail \n");
        printf("\t 9.Delete After Value \t 10.Delete After Index\t 11.Detele Before Value \t 12.Delete Before Index \n");
        printf("99.Print All Data \t 0.Exit\n");
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
            printf("Invalid Input\n");
            break;
        }
    }
}