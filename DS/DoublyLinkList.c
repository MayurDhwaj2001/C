#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node *pre;
    int data;
    struct node *next;
};

struct node *h, *t, *p, *p1, *p2;

void insertAtBegining()
{
    p = (struct node *)malloc(sizeof(struct node));
    printf("Enter Data: ");
    scanf("%d", &p->data);
    p->pre = NULL;

    if (h == NULL && t == NULL)
    {
        p->next = NULL;
        h = p;
        t = p;
    }
    else
    {
        p->next = h;
        h = p;
    }
}

void insertAtEnd()
{
    p = (struct node *)malloc(sizeof(struct node));
    printf("Enter Data: ");
    scanf("%d", &p->data);
    p->pre = NULL;

    if (h == NULL && t == NULL)
    {
        p->next = NULL;
        h = p;
        t = p;
    }
    else
    {
        p1 = h;
        while (p1 != NULL)
        {
            p1 = p1->next;
        }
        t->next = p;
        p->pre = t;
        t = p;
        t->next = NULL;
    }
}

void insertAfterValue()
{
    int value;
    if (h == NULL && t == NULL)
    {
        printf("Link List Present\n");
    }
    else
    {
        printf("Enter Value to Insert After: ");
        scanf("%d", &value);
        p1 = h;
        while (p1 != NULL)
        {
            if (p1->data == value)
            {
                break;
            }
            p1 = p1->next;
        }
        if (p1 == NULL)
        {
            printf("The value %d not found\n", value);
        }
        else
        {
            p = (struct node *)malloc(sizeof(struct node));
            p->next = p2;
            printf("Enter the data to be inserted: ");
            scanf("%d", &p->data);
            if (p1->next == NULL)
            {
                p->next = NULL;
                t = p;
            }
            else
            {
                p2 = p1->next;
                p2->pre = p;
            }
            p1->next = p;
            p->pre = p1;
        }
    }
}

void insertAfterIndex()
{
    printf("Test");
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

void checkForHeadTail()
{
    if (h == NULL && t == NULL)
    {
        printf("No Data\n");
    }
    else
    {
        if (h->pre == NULL)
        {
            printf("OK Head\n");
        }
        else
        {
            printf("ERROR: Head\n");
        }
        if (t->next == NULL)
        {
            printf("OK Tail\n");
        }
        else
        {
            printf("ERROR: Head\n");
        }
    }
}

void printAllData()
{
    p1 = h;
    if (h == NULL)
    {
        printf("No Data Present\n");
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
        printf("|\t13.Print All Data \t 14.Check Head & Tail \t 0.Exit \t\t\t\t\t\t\t|\n");
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

        case 14:
            checkForHeadTail();
            break;

        case 0:
            exit(0);

        default:
            printf("Invalid Input\n");
            break;
        }
    }
}