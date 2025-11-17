#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *link;
} LinkedListNode;

void insertAtBegging(LinkedListNode **head)
{
    int val;
    printf("\nEnter the value of element : ");
    scanf("%d",&val);

    LinkedListNode *newNode = (LinkedListNode*)malloc(sizeof(LinkedListNode));

    newNode->data=val;
    newNode->link=NULL;

    if (*head==NULL)
    {
        *head=newNode;
        return;
    }
    newNode->link=*head;
    *head=newNode;
}

void insertAtEnd(LinkedListNode **head)
{
    int val;
    printf("\nPlease enter the value of element : ");
    scanf("%d",&val);

    LinkedListNode *newNode = (LinkedListNode*)malloc(sizeof(LinkedListNode));

    newNode->data=val;
    newNode->link=NULL;

    if (*head==NULL)
    {
        *head=newNode;
        return;
    }
    LinkedListNode *temp=*head;

    while (temp->link!=NULL)
    {
        temp=temp->link;
    }
    temp->link=newNode;
}

void printLinkedList(LinkedListNode *head)
{
    if (head==NULL)
    {
        printf("\nLinked list is empty \n");
        return;
    }
    LinkedListNode *temp=head;
    while (temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->link;
    }
    printf("NULL\n");
}

void deleteAtBegging(LinkedListNode **head)
{
    if (*head==NULL)
    {
        printf("\nLinked List is Empty\n");
        return;
    }
    LinkedListNode *temp;
    int val;
    temp=*head;
    *head=temp->link;
    printf("%d is Deleted..\n",temp->data);
    free(temp);
}

void deleteAtEnd(LinkedListNode **head)
{
    if (*head==NULL)
    {
        printf("\nLinked List is Empty\n");
        return;
    }

    int val;
    LinkedListNode *deletedNode;
    LinkedListNode *temp=*head;

    if ((*head)->link==NULL)
    {
        deletedNode=*head;
        printf("\n%d is deleted...\n",deletedNode->data);
        free(deletedNode);
        *head=NULL;
        return;
    }
    

    while (temp->link->link!=NULL)
    {
        temp=temp->link;
    }
    deletedNode=temp->link;
    temp->link=NULL;
    printf("\n%d is Deleted ...\n",deletedNode->data);
    free(deletedNode);
}

void insertAtPosition(LinkedListNode **head)
{
    int val,positon;
    printf("Please enter the Position : ");
    scanf("%d",&positon);

    if (positon<=0)
    {
        printf("\n!!!!!INVALID POSITION!!!!!\n");
        return;
    }

    printf("Enter the value of element : ");
    scanf("%d",&val);

    LinkedListNode *newNode=(LinkedListNode*)malloc(sizeof(LinkedListNode));

    newNode->data=val;

    if (positon==1)
    {
        newNode->link=*head;
        *head=newNode;
        return;
    }
    
    LinkedListNode *temp=*head;
    int count=1;

    while (count<positon-1 && temp->link!=NULL)
    {
        count++;
        temp=temp->link;
    }
    
    if (temp==NULL)
    {
        printf("\n!!!!!INVALID POSITION (OUT OF BOUNDRIES) !!!!!\n");
        free(newNode);
        return;
    }
    
    newNode->link=temp->link;
    temp->link=newNode;
}

void deleteAtPosition(LinkedListNode **head)
{
    if (*head==NULL)
    {
        printf("\nLinked List is Empty\n");
        return;
    }
    int position;
    printf("\nPlease enter the position : ");
    scanf("%d",&position);

    if (position<=0)
    {
        printf("\n!!!!!INVALID POSITION!!!!!");
        return;
    }
    
    int count=1;
    LinkedListNode *temp=*head;
    LinkedListNode *nodeDelete;

    while (count<position-1 && temp->link->link!=NULL)
    {
        temp=temp->link;
        count++;
    }
    nodeDelete=temp->link;
    temp->link=temp->link->link;
    printf("\n%d is deleted..\n",nodeDelete->data);
    free(nodeDelete);
}

int main(int argc, char const *argv[])
{
    LinkedListNode *head=NULL;
    while (1)
    {
        int choice;
        printf("\nPlease choose anyone option.\n1.Insert At Begging\n2.Insert At End\n3.Print Linked List\n4.Delete At Begging\n5.Delete At End\n6.Insert At Given Position\n7.Delete At Given Position\n8.Exit : ");
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
            printLinkedList(head);
            break;
        case 4:
            deleteAtBegging(&head);
            break;
        case 5:
            deleteAtEnd(&head);
            break;
        case 6:
            insertAtPosition(&head);
            break;
        case 7:
            deleteAtPosition(&head);
            break;
        case 8:
            printf("\nExiting......\n");
            exit(0);
        default:
            printf("\n!!!!!WRONG CHOICE!!!!!\n");
            break;
        }
    }
    return 0;
}
