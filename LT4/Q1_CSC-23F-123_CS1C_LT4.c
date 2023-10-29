#include <stdio.h>
int main()
{
    int customer, remaining, total;
    int t_arr[8] = {1000, 500, 100, 50, 10, 5, 2, 1};
    int my_arr[8] = {0};
    total = 2535;
    printf("your total bill is %d \n please enter money for pay this bill" , total);
    scanf("%d" , &customer);

    if (customer >= total)
    {
        remaining = (customer - total) ;
    }
    else
    {
        printf("Sorry ! no enough for pay this bill");
        return 0;
    }
    for (int i = 0; i < 9; i++)
    {
        while (remaining >= t_arr[i])
        {
            my_arr[i]++;
            remaining -= t_arr[i];
        }
    }
    for (int j = 0; j < 8; j++)
    {
        printf("Rs : %d notes = %d \n", t_arr[j], my_arr[j]);
    }

    return 0;
}
