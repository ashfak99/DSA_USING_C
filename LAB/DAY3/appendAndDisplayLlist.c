#include<stdio.h>
#include<stdlib.h>

typedef struct  node
{
    int data;
    struct node *next;
} node;

void appendNode(node **head)
{
    int val;
    printf("Please enter the element : ");
    scanf("%d",&val);
    node *newNode =  (node*)malloc(sizeof(node));
    newNode->data=val;
    newNode->next=NULL;
    if (*head==NULL)
    {
        *head=newNode;
    }
    else{
        node *temp = *head;
        while (temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newNode;
    }
}

void printLinkedList(node *head)
{
    if (head==NULL)
    {
        printf("Linked list is empty ");
        return;
    }
    node *temp=head;
    while (temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}

int main(int argc, char const *argv[])
{
    node *head=NULL;
    while (1)
    {
        int choice;
        printf("\nPlease choose any one options.\n1.Append Node\n2.Display\n3.Exit : ");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            appendNode(&head);
            break;
        case 2: 
            printLinkedList(head);
            break;
        case 3:
            exit(0);
        default:
            printf("Wrong choice please choose valid options !!");
            break;
        }
    }
    return 0;
}
