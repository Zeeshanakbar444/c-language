#include <stdio.h>
int main()
{

    int row, column;
    printf("enter number of row and column");
    scanf("%d", &row);
    printf("enter number of column and column");
    scanf("%d", &column);

    if (row != column)
    {
        printf("enter equal row and column");
        return;
    }
    int arr[10][10];
    int arr1[10] = {0};
    int i, j, a = 0;

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < row; j++)
        {
            printf("enter row %d and column %d", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n\n matrix is printed \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < row; j++)
        {
            printf("%d \t", arr[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < row; j++)
        {
            arr1[i] += arr[j][i];
        }
    }

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < row; j++)
        {
            if (arr1[i] != arr1[j])
            {
                a = 1;
            }
        }
    }

    if (a == 0)
    {
        printf("megiacal array");
    }
    else
    {
        printf(" not megiacal array");
    }
}