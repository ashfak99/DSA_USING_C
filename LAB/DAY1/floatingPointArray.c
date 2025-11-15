#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    printf("Please enter the size of floating point array : ");
    scanf("%d",&n);
    float array[n];
    printf("\nPlease enter the value in floating point array \n");
    for (int i = 0; i < n; i++)
    {
        printf("Please enter %d element : ",i+1);
        scanf("%f",&array[i]);
    }
    printf("\n\nOUTPUT\n\n");
    for (int i = 0; i < n; i++)
    {
        printf("%0.2f ",array[i]);
    }
    printf("\n");
    
    return 0;
}
