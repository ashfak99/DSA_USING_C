#include<stdio.h>

int main(int argc, char const *argv[])
{
    int row,col;
    printf("Please enter the number of row and column : ");
    scanf("%d %d",&row,&col);

    int matrixA[row][col],matrixTranspose[col][row];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Please enter the element : ");
            scanf("%d",&matrixA[i][j]);
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            matrixTranspose[j][i]=matrixA[i][j];
        }
    }

    printf("\nYour Matrix\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ",matrixA[i][j]);
        }
        printf("\n");
    }
    
    printf("\nTranspose Matrix\n");
    
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            printf("%d ",matrixTranspose[i][j]);
        }
        printf("\n");
    }
    
    
    return 0;
}
