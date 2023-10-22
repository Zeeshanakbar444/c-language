#include <stdio.h>
int main()
{
    int first_number, second_number, third_number, average;
    printf("enter your first number \n");
    scanf("%d", &first_number);

    printf("enter your second number \n");
    scanf("%d", &second_number);

    printf("enter your third number \n");
    scanf("%d", &third_number);

    average = (first_number + second_number + third_number) / 3;
    printf("the average is %d", average);
    return 0;
}