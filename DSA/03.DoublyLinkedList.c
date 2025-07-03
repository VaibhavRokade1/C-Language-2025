#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next, *pre;
} Node;

void append(Node **r, int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
}

int main()
{
    Node *head = NULL;
    int pos, ch, data;

    while (1)
    {
        printf("1. Append\n2.Display\n3.Exit\n");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("Enter Data :\n");
            scanf("%d", &data);
            append(&head, data);
            break;

        default:
            printf("Invalid Choise !!!");
            break;
        }
    }

    return 0;
}
