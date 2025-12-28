#include<stdio.h>

int linear_Search(int arr[], int size, int k)
{
    int i=0;
    while( i < size)
    {
        if (k==arr[i])
        {
            return i;
        }
        i++;
    }
    return -1;
}

int main(int argc, char const *argv[])
{
    int n,target;
    printf("Please enter the number of element in array  : ");
    scanf("%d",&n);

    int arr[n];
    printf("\nPlease enter the elements : ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
     
    printf("\nEnter the element you want to search : ");
    scanf("%d",&target);

    int pos=linear_Search(arr,n,target);
    
    if (pos==-1)
    {
        printf("\n%d is not present..",target);
        return 0;
    }

    printf("%d at %dth position",target,pos+1);
    return 0;
}
