#include<stdio.h>
#include<stdlib.h>

#define SIZE 5

int circularQueue[SIZE];
int front=-1,rear=-1;

void enqueue()
{
    int item;
    printf("\nPlease enter the value of item : ");
    scanf("%d",&item);
    if (front==-1)
    {
        front=rear=0;
        circularQueue[rear]=item;
    }
    else{
        int next=(rear+1)%SIZE;
        if (next!=front)
        {
            rear=next;
            circularQueue[rear]=item;
        }
        else{
            printf("\nQueue is Full\n");
        }
    }
}

void dequeue()
{
    if (front==-1)
    {
        printf("\nQueue is empty\n");
        return;
    }
    else{
        int item=circularQueue[front];
        if (front==rear)
        {
            front=rear=-1;
        }
        else{
            front=(front%SIZE)+1;
        }
        printf("\n%d is deleted..\n",item);
    }
}

void printCircularQueue()
{
    if (front==-1)
    {
        printf("\nQueue is empty\n");
        return;
    }
    else{
        for (int i = front; i <= rear; i++)
        {
            printf("%d ",circularQueue[i]);
        }
    }
}

int main(int argc, char const *argv[])
{
    while (1)
    {
        int choice;
        printf("\nPlease choose anyone option.\n1.ENQUEUE\n2.DEQUEUE\n3.PRINT QUEUE\n4.EXIT  : ");
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
            printCircularQueue();
            break;
        case 4:
            exit(0);
        default:
            printf("\n!!!!!INVALID CHOICE!!!!!\n");
            break;
        }
    }
    return 0;
}
