#include <stdio.h>

int swap(num1, num2)
{
    printf("num1 after swapping %d\n" , num1);
    printf("num2 after swapping %d \n" , num2);
}

int main()
{
    int num1, num2;
    printf("enter num1 \n");
    scanf("%d", &num1);
    printf("enter num2 \n");
    scanf("%d", &num2);
    printf("num1 before swapping %d \n", num1);
    printf("num2 before swapping %d \n", num2);
    swap(num2, num1);
    return 0;
}