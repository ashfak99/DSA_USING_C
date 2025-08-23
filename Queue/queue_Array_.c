#include<stdio.h>

#define size 10

int queue[size];

int front=-1,rear=-1,item;

void enqueue()
{
    if (rear==size-1)
    {
        printf("Queue is Full : ");
    }
    else
    {
        printf("Please Enter The Value of Item : ");
        scanf("%d",&item);
        if(front==-1)
           front=0;
        rear++;
        queue[rear]=item;
    }
}


void dequeue()
{
    if (front == -1 || front > rear)
    {
        printf("Queue is Empty ");
    }
    else
    {
        printf("Dequeued Element : %d\n",queue[front]);
        front++;
    }
}

void display()
{
    if (front == -1 || front > rear)
    {
        printf("Queue is Empty :  ");
    }
    else{
        int i=front;
        while (i<=rear)
        {
            printf("%d\t",queue[i]);
            i++;
        }
        
    }
}

int main(int argc, char const *argv[])
{
    enqueue();
    enqueue();
    enqueue();
    enqueue();
    dequeue();
    display();
    return 0;
}
