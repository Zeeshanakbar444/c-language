#include <stdio.h>
int main()
{
    float balence = 0.0, amount;
    char a;
    while (1)
    {
        printf("enter your character for transaction w/d \n");
        scanf("%c", &a);
        if (a == 'd' || a == 'D')
        {
            printf("enter your amount ");
            scanf("%f", &amount);
            balence = balence + amount;
            printf("enter your character for transaction w/d \n");
            scanf("%c", &a);
        }
        else if (a == 'w' || a == 'W')
        {
            printf("enter your amount ");
            scanf("%f", &amount);
            balence = balence - amount;
            printf("enter your character for transaction w/d \n");
            scanf("%c", &a);
        }
        else{

            printf("please enter this character w/d \n \'w\' for widraw and \'d\' for deposit");
        }
        
        if (balence < 0)
        {
            printf("your balence is negative : %.2f", balence);
            break;
        }
    }
}