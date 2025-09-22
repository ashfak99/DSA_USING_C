#include<stdio.h>
int min(int array[], int LB, int UB)
{
    int m=LB;
    while (LB<UB)
    {
        if (array[LB]<array[m])
        {
            m=LB;
        }
        LB=LB+1; 
    }
    return m;
}

int selection_SORT(int arr[],int size)
{
    int i=0,loc=0,temp=0;
    while (i<size)
    {
        loc=min(arr,i,size);
        temp=arr[loc];
        arr[loc]=arr[i];
        arr[i]=temp;

        i++;
    }
    i=0;
    while (i<size)
    {
        printf("%d\t",arr[i]);
        i++;
    }
}

int main()
{
    int arr[]={1,9,10,23,4,2,6,11,-4};
    selection_SORT(arr,9);
}