#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node
struct Node
{
    int data;
    struct Node *next;
    struct Node *down;
};
void printList(struct Node *head)
{
    while (head != NULL)
    {
        struct Node *currentRow = head;

        // Print the current row
        while (currentRow != NULL)
        {
            printf("%d ", currentRow->data);
            currentRow = currentRow->next;
        }

        // Move to the next row
        head = head->down;

        printf("\n");
    }
}

int main()
{
    // Creating nodes
    struct Node *node1 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *node2 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *node3 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *node4 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *node5 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *node6 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *node7 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *node8 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *node9 = (struct Node *)malloc(sizeof(struct Node));

    // Building the linked list
    printf("Enter 1 Data: ");
    scanf("%d", &node1->data);
    node1->next = node2;
    node1->down = node4;

    printf("Enter 2 Data: ");
    scanf("%d", &node2->data);
    node2->next = node3;
    node2->down = node5;

    printf("Enter 3 Data: ");
    scanf("%d", &node3->data);
    node3->next = NULL;
    node3->down = node6;

    printf("Enter 4 Data: ");
    scanf("%d", &node4->data);
    node4->next = node5;
    node4->down = node7;

    printf("Enter 5 Data: ");
    scanf("%d", &node5->data);
    node5->next = node6;
    node5->down = node8;

    printf("Enter 6 Data: ");
    scanf("%d", &node6->data);
    node6->next = NULL;
    node6->down = node9;

    printf("Enter 7 Data: ");
    scanf("%d", &node7->data);
    node7->next = node8;
    node7->down = NULL;

    printf("Enter 8 Data: ");
    scanf("%d", &node8->data);
    node8->next = node9;
    node8->down = NULL;

    printf("Enter 9 Data: ");
    scanf("%d", &node9->data);
    node9->next = NULL;
    node9->down = NULL;

    // Printing the linked list
    printList(node1);

    return 0;
}
