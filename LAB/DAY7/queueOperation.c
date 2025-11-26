#include<stdio.h>
#include<stdlib.h>

#define SIZE 5

int queue[SIZE];
int front=-1,rear=-1;

void enqueue()
{
    if (rear==SIZE)
    {
        printf("\nQueue is FULL\n");
        return;
    }
    else{
        if (rear==-1 && front==-1)
        {
            front=0;
        }
        rear++;
        int item;
        printf("\nPlease Enter the value of item : ");
        scanf("%d",&item);
        queue[rear]=item;
    }
}

void dequeue()
{
    if (front==-1)
    {
        printf("\nQueue is Empty\n");
        return;
    }
    else{
        int item=queue[front];
        front++;
        if (front>rear)
        {
            front=rear=-1;
        }
        printf("\n%d is deleted..\n",item);
    }
}

void printQueue()
{
    if (front==-1)
    {
        printf("\nQueue is empty\n");
        return;
    }
    else{
        for (int i = front; i <= rear; i++)
        {
            printf("%d  ",queue[i]);
        }
    }
}

int main(int argc, char const *argv[])
{
    while (1)
    {
        int choice;
        printf("\nPlease choose any one option.\n1.ENQUEUE\n2.DEQUEUE\n3.PRINT QUEUE\n4.EXIT :  ");
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
            printQueue();
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
