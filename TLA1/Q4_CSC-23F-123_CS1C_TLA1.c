#include <stdio.h>
int main()
{
    int number, reminder, reverse = 0;
    printf("enter a number ");
    scanf("%d", &number);
    if (number < 10)
    {
        printf("enter a number atleast two characte");
    }
    else
    {
        while (number != 0)
        {
            reminder = number % 10;
            reverse = reverse * 10 + reminder;
            number = number / 10;
            
        }
        
        printf("%d", reverse);
    }

    return 0;
}