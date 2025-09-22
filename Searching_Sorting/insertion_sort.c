#include<stdio.h>

void insertion(int arr[],int size)
{
    int i=1,j=0,temp=0;
    while (i<size)
    {
        temp=arr[i];
        j=i-1;
        while (j>=0)
        {
            if (arr[j]>temp)
            {
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
            j=j-1;
        }
        arr[j+1]=temp;
        i=i+1;        
    }
}

int main(int argc, char const *argv[])
{
    int arr[]={1,3,0,2,4,5,9,7,6,8,11,12};
    insertion(arr,12);
    for (int i = 0; i < 12; i++)
    {
        printf("%d\t",arr[i]);
    }
    
    return 0;
}
