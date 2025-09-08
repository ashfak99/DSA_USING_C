#include<stdio.h>
#define min(a,b) (a<b?a:b)
int main(int argc, char const *argv[])
{
    int n;
    printf("Please Enter The Size : ");
    scanf("%d",&n);

    int size=2*n-1;
    for (int i = 0; i < size; i++)
    {
        for (int  j = 0; j < size; j++)
        {
            int min_dist = min(min(i,j),min(size-1-i,size-1-j));
            int val = n-min_dist;
            printf("%d ",val);
        }
        printf("\n");
    }
    
    return 0;
}
