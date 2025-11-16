#include<stdio.h>

int main(int argc, char const *argv[])
{
    int row,col;
    printf("Please enter the row and column : ");
    scanf("%d%d",&row,&col);

    while (row!=col)
    {
        printf("\nInvalid row and column for multiplication\n");
        printf("\nPlease enter the row and column : ");
        scanf("%d%d",&row,&col);
    }

    int matrixA[row][col],matrixB[row][col],matrixC[row][col];

    printf("\nPlease Enter the first matrix element\n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Please enter the element of first matrix : ");
            scanf("%d",&matrixA[i][j]);
        }
    }

    printf("\nPlease Enter the second matrix element\n");

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
            matrixC[i][j]=0;
            for (int k = 0; k < col; k++)
            {
                matrixC[i][j]+=matrixA[i][k]*matrixB[k][j];
            }
        }
    }
    
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
