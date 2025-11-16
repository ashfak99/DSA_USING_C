#include<stdio.h>

int main(int argc, char const *argv[])
{
    int row;
    printf("Please enter the number of rows/columns of square matrix : ");
    scanf("%d",&row);

    int matrix[row][row];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            printf("Please enter the element : ");
            scanf("%d",&matrix[i][j]);
        }
    }

    int trace=0;

    for (int i = 0; i < row; i++)
    {
        trace+=matrix[i][i];
    }
    
    printf("\n Trace of matrix  : %d",trace);
    return 0;
}
