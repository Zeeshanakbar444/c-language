#include <stdio.h>
#include <math.h>

int main()
{
    int num1, sum_of_number = 0, square, cube, reminder_num;

    printf("enter four digit number number \n");
    scanf("%d", &num1);
    while (num1 > 0)
    {
        reminder_num = num1 % 10;
        sum_of_number = sum_of_number + reminder_num;
        num1 = num1 / 10;
    }

    square = pow(sum_of_number, 2);
    cube = pow(sum_of_number, 3);

    if (sum_of_number % 2 == 0)
    {
        printf("the number is %d and the square is %d", sum_of_number, square);
    }
    else
    {

        printf("the number is %d and the cube is %d", sum_of_number, cube);
    }

    return 0;
}
