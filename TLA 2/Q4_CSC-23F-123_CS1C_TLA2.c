#include <stdio.h>

int main()
{
    int map[5][5] = {
        {34, 11, 32, 45, 55},
        {11, 34, 42, 51, 25},
        {21, 43, 35, 52, 14},
        {15, 31, 24, 44, 53},
        {12, 22, 41, 54, 33}};

    int row, column;

    for (row = 0;row  < 5; row++)
    {
        for (column = 0; column < 5; column++)
        {
            printf("the visited cell is (%d , %d)\n", row + 1, column + 1);
            int arr = map[row][column];
            if (arr / 10 == row + 1 && arr % 10 == column + 1)
            {
                printf("\ntreasure found(%d , %d) \n", row + 1, column + 1);
                return ;
            }
        
        if (row == 5)
        {
            printf("no treasure found\n");
            break;
        }
    }

    }
}