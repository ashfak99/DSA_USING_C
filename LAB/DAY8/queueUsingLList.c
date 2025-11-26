#include<stdlib.h>
#include<stdio.h>

typedef struct node{
    int data;
    struct node *link;
}node;

node *rear=NULL;
node *front=NULL;

void enqueue(node **head)
{
    int item;
    printf("\nPlease enter the value of item : ");
    scanf("%d",&item);
    node *newNode=(node*)malloc(sizeof(node));
    newNode->data=item;
    newNode->link=NULL;

    rear=newNode;
    front=*head;

    if (*head==NULL)
    {
        *head=newNode;
    }
    else{
        node *temp=*head;
        while (temp->link!=NULL)
        {
            temp=temp->link;
        }
        temp->link=newNode;
    }
}

void deleteQueue(node **head)
{
    if (*head==NULL)
    {
        printf("\nQueue is Empty\n");
        return;
    }
    node *temp=*head;
    node *deleteNode=temp;
    front=temp->link;
    *head=temp->link;
    printf("\n%d is deleted..\n",deleteNode->data);
    free(deleteNode);
}

void printQueue(node *head)
{
    if (head==NULL)
    {
        printf("\nQueue is empty\n");
        return;
    }
    node *temp=head;
    while (temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->link;
    }
}

int main(int argc, char const *argv[])
{
    node *head=NULL;
    while (1)
    {
        int choice;
        printf("\nPlease choose anyone option.\n1.ENQUEUE\n2.DEQUEUE\n3.PRINT QUEUE\n4.EXIT  : ");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            enqueue(&head);
            break;
        case 2:
            deleteQueue(&head);
            break;
        case 3:
            printQueue(head);
            break;
        case 4:
            exit(0);
        default:
            printf("\n!!!!!INVALID CHOICE!!!!!");
            break;
        }
    }
    
    return 0;
}
