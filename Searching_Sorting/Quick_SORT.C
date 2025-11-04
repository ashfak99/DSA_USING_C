#include<stdio.h>

void quick_SORT(int arr[],int LB,int UB)
{
    if (LB>=UB)
    {
        return;
    }
    
    int pivot=0,next_pvt=0,left=LB,right=UB;
    pivot=arr[LB];
    while (LB<UB)
    {
        while (arr[UB]>=pivot && LB<UB)
        {
            UB=UB-1;
        }
        if (LB!=UB)
        {
            arr[LB]=arr[UB];
            LB=LB+1;
        }

        while (arr[LB]<=pivot && LB<UB)
        {
            LB=LB+1;
        }
        
        if (LB<UB)
        {
            arr[UB]=arr[LB];
            UB=UB-1;
        }
    }
        arr[LB]=pivot;

        next_pvt=LB;
       quick_SORT(arr,left,next_pvt-1);
       quick_SORT(arr,next_pvt+1,right);
    
}


int main(int argc, char const *argv[])
{
    int arr[5]={4,3,7,2,5};
    quick_SORT(arr,0,5);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
