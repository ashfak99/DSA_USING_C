#include<stdio.h>
#include<stdlib.h>

typedef struct queue{
    int data;
    struct queue *next;
}Queue;

Queue *front=NULL;
Queue *rear=NULL;

void enqueue()
{
    Queue *ptr, *temp=(Queue *)malloc(sizeof(Queue));
    int data;
    printf("Please Enter The Value of Data : ");
    scanf("%d",&data);
    temp->data=data;
    temp->next=NULL;

    if (front==NULL && rear==NULL)
    {
        front=rear=temp;
    }
    else{
        rear->next=temp;
        rear=temp;
    }
}

void dequeue()
{
    if (front==NULL)
    {
        printf("Queue is Empty\n");
    }
    else{
        Queue *temp=front;
        printf("Dequeued Element: %d\n", temp->data);
        front=front->next;
        if (front==NULL)
        {
            rear=NULL;
        }
        
        free(temp);
    }
}

void display()
{
    Queue *ptr=front;
    if (ptr==NULL)
    {
        printf("Queue is Empty\n");
    }
    else{
        while (ptr!=NULL)
        {
            printf("%d-->",ptr->data);
            ptr=ptr->next;
        }
        printf("NULL\n");
    }
}

int main(int argc, char const *argv[])
{
    int choice;
    do
    {
        printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
        printf("Please Enter Your Choice : ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("Invalid Choice\n");
            break;
        }
    } while (1);
    
    return 0;
}
