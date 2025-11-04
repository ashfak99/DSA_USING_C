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
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    bubble_SORT(arr,10);
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t",arr[i]);
    }
    
    return 0;
}
