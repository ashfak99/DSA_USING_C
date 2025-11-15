#include<stdio.h>

int main(int argc, char const *argv[])
{
    int array[100],size,position,element;

    printf("\nPlease enter the size of array : ");
    scanf("%d",&size);

    for (int i = 0; i < size; i++)
    {
        printf("Please enter the %d element : ",i+1);
        scanf("%d",&array[i]);
    }

    printf("Please enter the position where you insert new element : ");
    scanf("%d",&position);

    while(position<=0 || position>size)
    {
        printf("\n!!!!!Invalid Position!!!!!\n");
        printf("Please enter the valid position : ");
        scanf("%d",&position);
    }

    printf("\nPlease enter the new element : ");
    scanf("%d",&element);
    
    for (int i = size; i >= position; i--)
    {
        array[i]=array[i-1];
    }
    
    array[position]=element;
    size++;
    
    for (int i = 0; i < size; i++)
    {
        printf("%d ",array[i]);
    }
    
    return 0;
}
