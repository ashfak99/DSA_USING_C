#include<stdio.h>

void countingSort(int a*, int k, int size)
{
    int c[k+1],b[size+1];
    for (int i = 0; i <= k; i++)
    {
        c[i]=0;
    }
    
    for (int i = 1; i <= size; i++)
    {
        c[a[i]]=c[a[i]]+1;
    }
    
    for (int i = 1; i <= k; i++)
    {
        c[i]=c[i-1]+c[i];
    }

    for (int i = size; i >= 1; i--)
    {
        b[c[a[i]]]=a[i];
        c[a[i]]=c[a[i]]-1;
    }

    for (int i = 0; i <= size; i++)
    {
        a[i]=b[i];
    }
}

int main(int argc, char const *argv[])
{
    int arr={5,4,2,3,1};
    return 0;
}
