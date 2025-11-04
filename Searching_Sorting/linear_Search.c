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
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    int arr[10];
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    int pos=linear_Search(arr,10,5);
    printf("%d at %dth position",arr[pos],pos+1);
    return 0;
}
