#include <stdio.h>
#include <stdlib.h>
struct s
{
    int i;
    struct s *next;
};
struct s *h, *p, *p1;

// creating the node
void createNode()
{
    h = NULL;
    int n, start = 0;
    printf("Enter the size of the LinkedList you want to make.");
    scanf("%d", &n);
    while (start < n)
    {
        if (h == NULL)
        {
            p = malloc(sizeof(struct s));
            printf("Enter the value %d :- ", start + 1);
            scanf("%d", &p->i);
            h = p;
            p->next = NULL;
        }
        else
        {
            printf("Enter the value %d :- ", start + 1);
            scanf("%d", &p->i);
            p1 = malloc(sizeof(struct s));
            p->next = p1;
            p1->next = NULL;
            p = p1;
        }
        start++;
    }
    printf("The linkedList of %d nodes has been created.\n", n);
}

// inserting the node in the staring
void insertAtStart()
{
    p = malloc(sizeof(struct s));
    printf("enter the data u want to insert :- ");
    scanf("%d", &p->i);
    if (h == NULL)
    {
        p->next = NULL;
        h = p;
    }
    else
    {
        p->next = h;
        h = p;
    }
    printf("%d has been inserted at the begenning.\n", p->i);
}

// inserting at the end
void insertAtEnd()
{
    p = malloc(sizeof(struct s));
    p1 = malloc(sizeof(struct s));
    printf("enter the data u want to insert :- ");
    scanf("%d", &p->i);
    if (h == NULL)
    {
        p->next = NULL;
        h = p;
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
    printf("%d has been inserted at the begenning.\n", p->i);
}

// insering after the value
void insertAfter()
{
    int n;
    p = malloc(sizeof(struct s));
    p1 = malloc(sizeof(struct s));
    printf("enter the data u want to insert :- ");
    scanf("%d", &p->i);
    printf("Provide the value after which u want to add :- ");
    scanf("%d", &n);
    p1 = h;
    while (p1 != NULL)
    {
        if (p1->i == n)
        {
            break;
        }
        p1 = p1->next;
    }
    if (p1 == NULL)
    {
        printf("no such data found please enter the valid data that is present in the list.\n");
    }
    else
    {
        p->next = p1->next;
        p1->next = p;
    }
    printf("%d has been inserted after %d.\n", p->i, n);
}

// insering before the value
void insertBefore()
{
    int n;
    struct s *q;
    p = malloc(sizeof(struct s));
    p1 = malloc(sizeof(struct s));
    q = malloc(sizeof(struct s));
    printf("enter the data u want to insert :- ");
    scanf("%d", &p->i);
    printf("Provide the value after which u want to add :- ");
    scanf("%d", &n);
    p1 = h;
    while (p1 != NULL)
    {
        if (p1->i == n)
        {
            break;
        }
        q = p1;
        p1 = p1->next;
    }
    if (p1 == NULL)
    {
        printf("no such data found please enter the valid data that is present in the list.\n");
    }
    else if (p1 == h)
    {
        p->next = p1;
        h = p;
    }
    else
    {
        q->next = p;
        p->next = p1;
    }
    printf("%d has been inserted before %d.\n", p->i, n);
}

// deleting the node from the starting
void deletefromStart()
{
    p = malloc(sizeof(struct s));
    if (h == NULL)
    {
        printf("No data found that is to be deleted.\n");
    }
    else
    {
        p = h;
        h = h->next;
        free(p);
        printf("The data has been deleted from the starting.\n");
    }
}

// printing the nodes
void printList()
{
    struct s *p = h;
    if (h == NULL)
    {
        printf("no data to print \n");
    }
    while (p != NULL)
    {
        printf("%d ", p->i);
        p = p->next;
    }
    printf("\n");
}

int main()
{
    int choice;
    do
    {
        printf("Select the operation u want to perform.\n");
        printf("--------------------------------------------------------------------------------------------------\n");
        printf("|    1.Create the node \t        2.Insert a node at begining\t   3.Insert the node at end.\n");
        printf("|    4.Insert after the value \t5.Insert before the value\t   6.Delete the node from start.\n");
        printf("|    7.Delete from end \t        8.Delete before the value\t   9.Delete after the value.\n");
        printf("|    10.View the LinkedList \n");
        printf("----------------------------------------------------------------------------------------------------\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            createNode();
            break;
        case 2:
            insertAtStart();
            break;
        case 3:
            insertAtEnd();
            break;
        case 4:
            insertAfter();
            break;
        case 5:
            insertBefore();
            break;
        case 6:
            deletefromStart();
            break;
        case 10:
            printList();
            break;
        case 0:
            printf("Exiting program.\n");
            break;
        default:
            printf("Invalid choice. Please enter a valid option.\n");
            break;
        }
    } while (choice != 0);

    return 0;
}