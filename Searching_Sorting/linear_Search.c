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
    int arr[]={1,2,3,4,5,6,7,8,9};
    int pos=linear_Search(arr,9,5);
    printf("%d at %dth position",arr[pos],pos+1);
    return 0;
}
