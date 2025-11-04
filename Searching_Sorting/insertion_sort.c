#include<stdio.h>
#include<stdbool.h>

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void insertion(int arr[],int size)
{
    int i=1,j=0,temp=0;
    while (i<size)
    {
        temp=arr[i];
        j=i-1;
        while (j>=0 && arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=temp;
        printArray(arr,size);
        i=i+1;        
    }
}

void insertionSortUsingForLoop(int arr[], int size)
{
    int i,j,k,temp;
    for (i = 1; i < size; i++)
    {
        temp = arr[i];
        j=i-1;
        bool shifted = false;
        while (j>=0 && arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j=j-1;
            shifted=true;
            printArray(arr,size);
        }
        if (shifted)
        {
            arr[j+1]=temp;
            printArray(arr,size);
        }
        else{
            arr[j+1]=temp;
        }
    }
}


int main(int argc, char const *argv[])
{
    int arr[]={1 ,4, 3, 5 ,6 ,2};
    insertion(arr,6);
    //insertionSortUsingForLoop(arr,6);
    printf("\n\n\n");
    for (int i = 0; i < 6; i++)
    {
        printf("%d\t",arr[i]);
    }
    
    return 0;
}
