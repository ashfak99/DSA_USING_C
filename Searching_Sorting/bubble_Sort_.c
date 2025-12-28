#include<stdio.h>

void bubble_SORT(int arr[], int size)
{
    int i=size,j=0,temp=0;
    while (i>1)
    {
        j=0;
        while (j<i-1)
        {
            if (arr[j]>arr[j+1])
            {
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
            j=j+1;
        }
        i=i-1;
    }
}

int main(int argc, char const *argv[])
{
    int n;
    printf("Please enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("\nPlease enter the element of array : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    bubble_SORT(arr,n);
    printf("\nSORTED ARRAY:  ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}
