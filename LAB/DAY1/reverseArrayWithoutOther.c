#include<stdio.h>

int main(int argc, char const *argv[])
{
    int arr[100];
    int size;
    printf("\nPlease enter the size of array : ");
    scanf("%d",&size);

    for (int i = 0; i < size; i++)
    {
        printf("Please enter the %d element : ",i+1);
        scanf("%d",&arr[i]);
    }

    for (int i = 0; i < size/2; i++)
    {
        arr[i]=arr[i]+arr[size-i-1]-(arr[size-i-1]=arr[i]);
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}
