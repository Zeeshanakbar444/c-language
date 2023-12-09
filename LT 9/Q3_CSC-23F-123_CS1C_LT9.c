#include <stdio.h>
int sumOfDigits(int number);
int main()
{
    int x;
    printf("enter two digits number");
    scanf("%d", &x);
    if (x <10||x>100 )
    {
        printf("please enter two digits number");
        return 0;
    }
    int result = sumOfDigits(x);
    printf("%d", result);
}
int sumOfDigits(int number)
{
    int num1 = number % 10;
    int num2 = number / 10;

    return num1 + num2;
}