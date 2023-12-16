#include <stdio.h>
int sumOfNum(int num);
int main()
{
    int userNum;
    FILE *ptr1;
    FILE *ptr2;
    ptr1 = fopen("q1in.txt", "r");
    ptr2 = fopen("out.txt", "w");

    if (ptr1 == NULL)
    {
        printf("error");
        return;
    }

    fscanf(ptr1, "%d", &userNum);
    int sum = sumOfNum(userNum);
    fprintf(ptr2 ,"%d" , sum);
}

int sumOfNum(int num)
{
    int sum = 0, rem;
    while (num != 0)
    {
        rem = num % 10;
        sum = sum + rem;
        num = num / 10;
    }
    return sum;
}