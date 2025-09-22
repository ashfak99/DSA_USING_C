#include<stdio.h>

int binary_Search(int arr[], int size, int num)
{
    int i=0,j=size,k=0;
    while (i<=j)
    {
        k=(i+j)/2;
        if (arr[k]==num)
        {
            return k;
        }
        if (arr[k]<num)
        {
            i=k+1;
        }
        else{
            j=k-1;
        }
    }
    return 0;
}
int main(int argc, char const *argv[])
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int pos=binary_Search(arr,9,6);
    printf("%d is present at %dth position",arr[pos],pos+1);
    return 0;
}
