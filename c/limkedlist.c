#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;

node *createnode(int data)
{
    node *newnode = (node *)malloc(sizeof(node));
    if (!newnode)
    {
        printf("memory error\n");
        exit(1);
    }
    newnode->data = data;
    newnode->next = NULL;
    return newnode;
}

void traverselist(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main()
{
    node *head = createnode(10);
    head->next = createnode(20);
    head->next->next = createnode(30);
    printf("linked list\n");
    traverselist(head);
    return 0;
}