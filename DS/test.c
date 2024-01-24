#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *head, *newnode, *temp;
    head = NULL;
    int choice = 1, count = 0;
    while (choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));

        printf("Enter data");
        scanf("%d", &newnode->data);

        newnode->next = NULL;
        if (head == NULL)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }

        // after displaying

        printf("Do yo want to continue");
        scanf("%d", &choice);
    } // for while loop

    temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
        count++;
    }
    getch();
    return 0;
}