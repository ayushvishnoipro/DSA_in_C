#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

// traversal of a linkedlist
void linkedlistTraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

// insertion of an element at the end
struct node *insertAtEnd(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    struct node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}

// insertion of an element at the head node
struct node *insertAtFirst(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}

// insertion of an element at any index
struct node *insertAtIndex(struct node *head, int data, int index)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
}

// insertion of an element at any node with a value 
struct node *insertAfterNode(struct node *head, struct node *prevNode, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = prevNode->next;
    prevNode->next = ptr;
    return head;
}

int main()
{

    struct node *head;
    struct node *second;
    struct node *third;
    struct node *forth;

    // Allocate memory for nodes in the linked list in heap
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    forth = (struct node *)malloc(sizeof(struct node));

    // link first and second notes
    head->data = 7;
    head->next = second;

    // link second and third notes
    second->data = 11;
    second->next = third;

    // link third and fourth nodes
    third->data = 41;
    third->next = forth;

    // termination of node
    forth->data = 66;
    forth->next = NULL;

    printf("linked list before insertion \n");
    linkedlistTraversal(head);
    // head = insertAtFirst(head,56);
    // head = insertAtIndex(head,56,1);
    // insertAtEnd(head, 56);
    head = insertAfterNode(head, second, 56);
    printf("linked list after insertion \n");
    linkedlistTraversal(head);

    return 0;
}
