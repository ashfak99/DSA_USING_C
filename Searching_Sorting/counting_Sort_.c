#include<stdio.h>
#include<stdlib.h>

#define FOR(i,j,k) for(int i=j;i<k;i++)
#define REVFOR(i,j) for(int i=j; i>=0; i--)

void countingSort(int arr[], int range, int arrSize)
{
    int crr[range],brr[arrSize];
    FOR(i,0,range)
    {
        crr[i]=0;
    }

    FOR(i,0,arrSize)
    {
        crr[arr[i]]=crr[arr[i]]+1;
    }

    FOR(i,1,range)
    {
        crr[i]=crr[i-1]+crr[i];
    }

    REVFOR(i,arrSize-1)
    {
        brr[crr[arr[i]]-1]=arr[i];
        crr[arr[i]]=crr[arr[i]]-1;
    }

    FOR(i, 0, arrSize)
    {
        arr[i] = brr[i]; 
    }
}

int maxElementCount(int arr[], int size)
{
    int maxElement=arr[0];
    FOR(i,0,size)
    {
        if (arr[i]>maxElement)
        {
            maxElement=arr[i];
        }
    }
    return maxElement;
}

void printArray(int arr[],int size)
{
    FOR(i,0,size)
       printf("%d ",arr[i]);
    printf("\n");
}

int main(int argc, char const *argv[])
{
    int arr[]={4,5,2,1,3,9};
    int size=sizeof(arr)/sizeof(arr[0]);

    int range=maxElementCount(arr,size);
    range=range+1;

    printf("Original Array : ");
    printArray(arr,size);

    printf("Array after Sorting : ");
    countingSort(arr,range,size);
    printArray(arr,size);
    return 0;
}
