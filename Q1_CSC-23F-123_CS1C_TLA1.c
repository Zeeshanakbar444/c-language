#include <stdio.h>
#include <math.h>
int main()
{
    int num1, num2, num3, input, sum_arm = 0, reminder_arm, reminder_cube, original_input_value;
    printf("enter your three Digits number \n");
    scanf("%d", &input);
    original_input_value = input;

    num1 = input / 100;
    num2 = (input / 10) % 10;
    num3 = input % 10;

    if (input >= 100 && input < 1000)
    {

        while (input > 0)
        {
            reminder_arm = input % 10;
            sum_arm = sum_arm + (reminder_arm * reminder_arm * reminder_arm);
            input = input / 10;
        }
        if (original_input_value == sum_arm)
        {
            printf("%d\n %d\n %d\n ", num1, num2, num3);
            printf("This is ArmStrong Number");
        }
        else
        {

            printf("This is not ArmStrong Number");
        }
    }
    else
    {
        printf("error");
    }
}

