#include <stdio.h>
#include <stdlib.h>

struct d
{
    struct d *pre;
    int k;
    struct d *next;
    struct d *down;
};

void traverse(struct d *head)
{
    struct d *currentRow = head;
    struct d *current;

    while (currentRow != NULL)
    {
        current = currentRow;

        while (current != NULL)
        {
            printf("%d - ", current->k);
            current = current->next;
        }

        printf("\n");
        currentRow = currentRow->down;
        // Reset current to the head of the current row
        if (currentRow != NULL)
            current = currentRow;
    }
}

int main()
{
    struct d *head = NULL;
    struct d *current = NULL;
    int rows, cols;
    int i, j;

    // Input the dimensions of the grid
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Input elements and create linked list
    for (i = 0; i < rows; i++)
    {
        struct d *rowHead = NULL;
        struct d *rowCurrent = NULL;

        for (j = 0; j < cols; j++)
        {
            struct d *newNode = (struct d *)malloc(sizeof(struct d));
            printf("Enter element at index %d%d: ", i, j);
            scanf("%d", &newNode->k);

            newNode->pre = NULL;
            newNode->next = NULL;
            newNode->down = NULL;

            if (rowHead == NULL)
            {
                rowHead = newNode;
                rowCurrent = newNode;
            }
            else
            {
                rowCurrent->next = newNode;
                newNode->pre = rowCurrent;
                rowCurrent = newNode;
            }

            if (i > 0)
            {
                struct d *prevRowNode = head;
                for (int k = 0; k < j; k++)
                {
                    prevRowNode = prevRowNode->next;
                }

                newNode->down = prevRowNode->down;
                prevRowNode->down = newNode;
            }
        }

        if (head == NULL)
        {
            head = rowHead;
            current = rowCurrent;
        }
        else
        {
            current->down = rowHead;
            rowHead->pre = current;
            current = rowCurrent;
        }
    }

    // Traversal
    traverse(head);

    return 0;
}
