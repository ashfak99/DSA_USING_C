#include<stdio.h>
#include<stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} node;

void insertAtBegging(node **head)
{
    int val;
    printf("Please enter the value of element : ");
    scanf("%d",&val);

    node *newNode=(node*)malloc(sizeof(node));

    newNode->data=val;
    if (*head==NULL)
    {
        newNode->next=NULL;
        *head=newNode;
    }
    else{
        newNode->next=*head;
        *head=newNode;
    }
}

void insertAtEnd(node **head)
{
    int val;
    printf("Please enter the value of element : ");
    scanf("%d",&val);

    node *newNode = (node*)malloc(sizeof(node));

    newNode->data=val;
    newNode->next=NULL;

    node *temp=*head;
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newNode;
}

void insertAtPosition(node **head)
{
    int val,position;
    printf("Please enter the value of element : ");
    scanf("%d",&val);

    printf("Please enter the positon : ");
    scanf("%d",&position);

    if (position<=0)
    {
        printf("\n!!!!!Invalid Position!!!!!\n");
        return;
    }

    node *newNode = (node*)malloc(sizeof(node));

    newNode->data=val;

    if (position==1)
    {
        newNode->next=*head;
        *head=newNode;
        printf("\nElement insert successfully\n");
        return;
    }

    int count=1;

    node *temp=*head;
    while (count<position-1 && temp->next!=NULL)
    {
        count++;
        temp=temp->next;
    }
    if (temp==NULL)
    {
        printf("\n!!!!!Invalid Position!!!!! (Position is out of bound)\n");
        free(newNode);
        return;
    }
    newNode->next=temp->next;
    temp->next=newNode;
    printf("\nElement insert successfully\n");
}

void insertBeforePosition(node **head)
{
    int val,postion;
    printf("Please enter the value of element : ");
    scanf("%d",&val);

    printf("Please enter the position : ");
    scanf("%d",&postion);

    if (postion<=0)
    {
        printf("\n!!!!!Invalid Position!!!!!\n");
        return;
    }

    node *newNode=(node*)malloc(sizeof(node));
    newNode->data=val;

    if (postion==1)
    {
        newNode->next=*head;
        *head=newNode;
        return;
    }
    

    int count=1;
    node *temp=*head;
    while (count<postion-2 && temp->next!=NULL)
    {
        count++;
        temp=temp->next;
    }
    
    newNode->next=temp->next;
    temp->next=newNode;
}

void insertAfterPosition(node **head)
{
    int val,position;
    printf("Please enter the value of element : ");
    scanf("%d",&val);

    printf("Please enter the position : ");
    scanf("%d",&position);

    if (position<0)
    {
        printf("\n!!!!!Invalid Positon!!!!!\n");
        return;
    }
    
    node *newNode=(node*)malloc(sizeof(node));
    newNode->data=val;
    newNode->next=NULL;

    if (position==0)
    {
        newNode->next=*head;
        *head=newNode;
        return;
    }

    int count=1;
    node *temp=*head;

    while (count<position && temp->next!=NULL)
    {
        count++;
        temp=temp->next;
    }
    newNode->next=temp->next;
    temp->next=newNode;
    
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
        printf("\nPlease choose any one option.\n1.Insert At Begging\n2.Insert At End\n3.Insert At Given Position\n4.Insert Before Position\n5.Insert After Position\n6.Display\n7.Exit : ");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            insertAtBegging(&head);
            break;
        case 2:
            insertAtEnd(&head);
            break;
        case 3:
            insertAtPosition(&head);
            break;
        case 4: 
            insertBeforePosition(&head);
            break;
        case 5:
            insertAfterPosition(&head);
            break;
        case 6:
            printLinkedList(head);
            break;
        case 7:
            exit(0);
            break;
        default:
            printf("\n\n!!!!!WRONG CHOICE!!!!!\n\n");
            break;
        }
    }
    return 0;
}
