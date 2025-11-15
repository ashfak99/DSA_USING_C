#include<stdio.h>

int main(int argc, char const *argv[])
{
    int row , col;
    printf("Please enter the number of  row and column : ");
    scanf("%d %d",&row,&col);

    int matrixA[row][col],matrixB[row][col],matrixC[row][col];

    printf("\n\nEnter element of first matrix\n\n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Please enter the element of first matrix : ");
            scanf("%d",&matrixA[i][j]);
        }
    }

    printf("\n\nEnter element of second Matrix\n\n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Please enter the element of second matrix : ");
            scanf("%d",&matrixB[i][j]);
        }
    }
    
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            matrixC[i][j]=matrixA[i][j]+matrixB[i][j];
        }
    }

    printf("\n\nOUTPUT\n");
    
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ",matrixC[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
