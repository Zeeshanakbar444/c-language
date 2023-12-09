#include <stdio.h>
int msd(int number);
int main()
{
    int x;
    printf("enter number ");
    scanf("%d", &x);
    if (x < 100 || x > 999)
    {
        printf("enter three digits number");
        return 0;
    }
    int result = msd(x);
    printf("most significant digit \n%d", result);
}

int msd(int number)
{
    int res = number / 100;
    return res;
}