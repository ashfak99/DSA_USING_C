#include<stdio.h>
#include<stdlib.h>

#define SIZE 5

typedef struct circular_queue{
    int front;
    int rear;
    int item[SIZE];
}circular_queue;

void enqueue(circular_queue *cq)
{
    int data;
    if (cq->front==-1)
    {
        cq->front=cq->rear=0;
        printf("Enter The Value of Item : ");
        scanf("%d",&data);
        cq->item[cq->rear]=data;
    }
    else{
        int pos=(cq->rear+1)%SIZE;
        if (pos==cq->front)
        {
            printf("Queue is OverFlow");
        }
        else {
            cq->rear=pos;
            printf("Enter The Value of Item : ");
            scanf("%d",&data);
            cq->item[cq->rear]=data;
        }
    }
}

int dequeue(circular_queue *cq)
{
    if (cq->front==-1)
    {
        printf("Queue is FULL ");
        return -1111;
    }
    else
    {
        int val=cq->item[cq->front];
        if (cq->front==cq->rear)
        {
            cq->front=cq->rear=-1;
        }
        else
        {
            cq->front=(cq->front+1)%SIZE;
        }
        return val;
    }
}

void display(circular_queue *cq)
{
    if (cq->front==-1)
    {
        printf("Queue is Empty");
    }
    else
    {
        int i=cq->front;
        while (i!=cq->rear)
        {
            printf("%d ",cq->item[i]);
            i=(i+1)%SIZE;
        }
        printf("%d ",cq->item[i]);
    }
}

int main(int argc, char const *argv[])
{
    circular_queue *cq=(circular_queue*)malloc(sizeof(circular_queue));
    cq->front=-1;
    cq->rear=-1;
    while (1)
    {
        int choice;
        printf("\nPlease Choose Any One \n ");
        printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Exit    : ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            enqueue(cq);
            break;
        case 2:
            dequeue(cq);
            break;
        case 3:
            display(cq);
            break;
        case 4:
            free(cq);
            exit(0);
        default:
            break;
        }
    }
    
    return 0;
}
