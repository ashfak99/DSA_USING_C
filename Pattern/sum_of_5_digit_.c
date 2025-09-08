#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a=54321,sum=0;
    while(a>0)
    {
        int r=a%10;
        printf("%d\n",r);
        sum=sum+r;
        a=a/10;
    }
    printf("Sum of 5 digit number is %d\n",sum);
    return 0;
}
