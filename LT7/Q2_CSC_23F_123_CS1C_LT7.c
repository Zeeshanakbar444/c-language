#include <stdio.h>

void array_multiply();
void array_addition();

int main()
{
    int user_input;
    printf("For Array Multiplication Enter [1] \n");
    printf("For Array Addition Enter [2] \n");
    printf("please enter");
    scanf("%d", &user_input);

    switch (user_input)
    {
    case 1:
        array_multiply();
        break;
    case 2:
        array_addition();
        break;
    default:
        printf("enter correct input");
        break;
    }
}

void array_multiply()
{
    int row, column, n, m;
    printf("enter you want to row in matrix");
    scanf("%d", &row);
    printf("enter you want to column in matrix");
    scanf("%d", &column);

    int arr1[row][column];

    int arr2[row][column];

    int arr3[row][column];

    if (row != column)
    {
        printf("please enter equal rows and column");
        return;
    }

    printf("for first matrix \n");
    for (n = 0; n < row; n++)
    {
        for (m = 0; m < row; m++)
        {
            printf("enter matrix element row %d and column %d \n", n, m);
            scanf("%d", &arr1[n][m]);
        }
    }
    printf("for second matrix \n");

    for (n = 0; n < row; n++)
    {
        for (m = 0; m < row; m++)
        {
            printf("enter matrix element row %d and column %d \n", n, m);
            scanf("%d", &arr2[n][m]);
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            arr3[i][j] = 0;
            for (int k = 0; k < row; k++)
            {
                arr3[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
    for (int b = 0; b < row; b++)
    {
        for (int c = 0; c < row; c++)
        {
            printf("%d \t", arr3[b][c]);
        }
        printf("\n");
    }
}

void array_addition()
{
    int num_cloumb, num_row, i, j;
    int arr1[10][10];

    int arr2[10][10];
    int result[10][10];

    printf("enter the number of row\n");
    scanf("%d", &num_row);
    printf("enter the number of column\n");
    scanf("%d", &num_cloumb);

    if (num_row != num_cloumb)
    {
        printf("please enter same number of row and column");
        return;
    }

    for (i = 0; i < num_row; i++)
    {
        for (j = 0; j < num_row; j++)
        {
            printf("enter number for first array %d", i + j);
            scanf("%d", &arr1[i][j]);
        }
    }
    for (i = 0; i < num_row; i++)
    {
        for (j = 0; j < num_row; j++)
        {
            printf("enter number for second array %d", i + j);
            scanf("%d", &arr2[i][j]);
        }
    }

    for (i = 0; i < num_row; i++)
    {
        for (j = 0; j < num_row; j++)
        {
            result[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    printf("the sum of array is \n");
    for (i = 0; i < num_row; i++)
    {
        for (j = 0; j < num_row; j++)
        {
            printf("%d \t", result[i][j]);
        }
        printf("\n");
    }
}