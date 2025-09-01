#include<stdio.h>
#include<stdlib.h>

#define SIZE 5

typedef struct queue{
    int front;
    int rear;
    int item[SIZE];
}queue;

void enqueue(queue *q)
{
    int data;
    if (q->rear==SIZE-1)
    {
        printf("Queue is Full ");
    }
    else 
    {
    if (q->front==-1 && q->rear==-1)
    {
        q->front=0;
    }
    printf("Enter The Value of Item : ");
    scanf("%d",&data);
    q->rear=q->rear+1;
    q->item[q->rear]=data;
    }
}

int dequeue(queue *q)
{
    if (q->front==-1)
    {
        printf("Queue is Empty ");
        return -1111;
    }
    else {
        int val=q->item[q->front];
        if (q->rear==q->front)
        {
            q->front=q->rear=-1;
        }
        else {
            q->front++;
        }
        return val;
    }
}

void display(queue *q)
{
    if (q->front==-1)
    {
        printf("Queue id Empty");
    }
    else{
        for (int i = q->front; i <= q->rear; i++)
        {
            printf("%d\t",q->item[i]);
        }
    }
}

int main(int argc, char const *argv[])
{
    queue *q=(queue*)malloc(sizeof(queue));
    q->rear=-1;
    q->front=-1;

    while (1)
    {
        int choice ;

        printf("\nPlease Choose Any One \n ");
        printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Exit  : ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            enqueue(q);
            break;
        case 2: 
            dequeue(q);
            break;

        case 3:
            display(q);
            break;
        case 4:
            free(q);
            exit(0);
        default:
            printf("Invalid Choice !!!!!!");
            break;
        }
    }
    return 0;
}

