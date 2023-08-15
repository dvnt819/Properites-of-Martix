#include <stdio.h>
int null(int count3, int row, int column)
{
    if (count3 == row * column)
    {
        return printf("\nNull matrix : Yes");
    }
    else
    {
        return printf("\nNull matrix : No");
    }
}
int main()
{
    int i, j, row, column, count1 = 0, count2 = 0, count3 = 0;
    
    printf("how many rows you want in matrix : ");
    scanf("%d", &row);
    printf("how many columns you want in matrix : ");
    scanf("%d", &column);

   if (row<=0 || column<=0)
   {
     printf("\nInvalid Input!\nNOTE: your input should be positive integers\n\n");
     return 0;
   }
   
    int matrix[row][column];

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("Enter the a%d%d elemnent : ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\nMatrix :-\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\nProperites of matrix :-");
    if (row == column)
    {
        printf("\nSquare matrix : Yes\nRectangle matrix : No");
        for (i = 0; i < row; i++)
        {
            for (j = 0; j < column; j++)
            {
                if (i != j && matrix[i][j] == 0)
                {
                    count1 = 1 + count1;
                }
                else if (i == j && matrix[i][j] == 1)
                {
                    count2 = 1 + count2;
                }
                if (matrix[i][j] == 0)
                {
                    count3 = 1 + count3;
                }
            }
        }
        if (count2 == row && count1 == (row * row) - row)
        {
            printf("\nIdentity matrix : Yes");
        }
        else
        {
            printf("\nIdentity matrix : No");
        }
        null(count3, row, column);
    }
    else
    {
        printf("\nSquare matrix : No\nRectangle matrix : Yes\nIdentity matrix : No (don't exists in rectangle matrix)");
        for (i = 0; i < row; i++)
        {
            for (j = 0; j < column; j++)
            {
                if (matrix[i][j] == 0)
                {
                    count3 = 1 + count3;
                }
            }
        }
        null(count3, row, column);
    }
    return 0;
}
