#include<stdio.h>

int main(int argc, char const *argv[])
{
    int row,col;

    printf("Please enter the number of row and column : ");
    scanf("%d %d",&row,&col);

    int matrix[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Please enter the element : ");
            scanf("%d",&matrix[i][j]);
        }
    }

    int maximum=matrix[0][0];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (matrix[i][j]>maximum)
            {
                maximum=matrix[i][j];
            }
        }
    }
    
    printf("\n Maximum element in matrix : %d",maximum);
    
    return 0;
}
