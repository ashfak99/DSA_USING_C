#include<stdio.h>
#include<stdlib.h>

#define SIZE 100
#define FOR(i,j,k) for(int i=j; i<k; i++)

typedef struct queue{
    int data[SIZE];
    int front;
    int rear;
}queue;

queue* queueInit()
{
    queue* q=(queue*)malloc(sizeof(queue));
    q->rear=-1;
    q->front=-1;
    return q;
};

int isEmpty(queue* q) {return (q->front==-1);}

void enQueue(queue* Q, int val){
    if (Q->rear==SIZE-1)
    {
        printf("Queue is OverFlow");
        return;
    }
    if (Q->front==-1)
    {
        Q->front=0;
    }
    Q->rear++;
    Q->data[Q->rear]=val;
}

int deQueue(queue* Q){
    if (isEmpty(Q))
    {
        printf("Queue is underflow");
        return -1;
    }
    int val=Q->data[Q->front];
    Q->front++;
    if (Q->front>Q->rear)
    {
        Q->front=-1;
        Q->rear=-1;
    }
    return val;
}

int extractDigit(int num, int position)
{
    int divisor=1;
    FOR(i,1,position)
    {
        divisor*=10;
    }
    return (num/divisor)%10;
}

int countDigit(int num)
{
    int count=0;
    if (num==0)
    {
        return 1;
    }
    while (num>0)
    {
        count++;
        num/=10;
    }
    return count;
}

void radixSort(int arr[], int n)
{
    int b=10;
    int maxElement=arr[0];
    FOR(i,1,n)
    {
        if (arr[i]>maxElement)
        {
            maxElement=arr[i];
        }
    }

    int c = countDigit(maxElement);

    queue** Q= (queue**) malloc(b*sizeof(queue*));

    FOR(i,0,b)
    {
        Q[i]=queueInit();
    }

    FOR(i,1,c+1)
    {
        FOR(j,0,n)
        {
            int x=extractDigit(arr[j],i);
            enQueue(Q[x],arr[j]);
        }
        int idx=0;
        FOR(k,0,b)
        {
            while (!isEmpty(Q[k]))
            {
                int y=deQueue(Q[k]);
                arr[idx++]=y;
            }  
        }
    }

    FOR(i,0,b)
    {
        free(Q[i]);
    }
    free(Q);
}

void printArray(int arr[], int n)
{
    FOR(i,0,n)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main()
{
    printf("===== Test Case 1 =====\n");
    int A1[] = {245, 123, 891, 456, 789};
    int n1 = sizeof(A1) / sizeof(A1[0]);
    
    printf("Original array: ");
    printArray(A1, n1);
    
    radixSort(A1, n1);
    
    printf("Sorted array:   ");
    printArray(A1, n1);
    
    return 0;
}