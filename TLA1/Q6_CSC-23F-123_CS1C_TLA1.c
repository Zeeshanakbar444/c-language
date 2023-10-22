#include <stdio.h>

int binaryConversion()
{
    int rem, user_input, arr[10], i, orignal_input;
    printf("enter your decimal number ");
    scanf("%d", &user_input);
    orignal_input = user_input;
    i = 0;

    while (user_input)
    {
        rem = user_input % 2;
        user_input = user_input / 2;
        arr[i] = rem;
        i++;
    }

    printf("the decimal is %d the binary is ", orignal_input);
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", arr[j]);
    }
}

int hexaConversion()
{
    char a[50];
    int input, i = 0, reminder_hexa, origional_hexa_inp, hexa_val;
    printf("enter your number ");
    scanf("%d", &input);
    origional_hexa_inp = input;

    while (input > 0)
    {
        reminder_hexa = input % 16;
        if (reminder_hexa < 10)
        {
            hexa_val = reminder_hexa + 48;
            a[i] = hexa_val;
            i++;
        }
        else
        {
            hexa_val = reminder_hexa + 55;
            a[i] = hexa_val;
            i++;
        }
        input = input / 16;
    }
    printf("decimal is %d base 16 and hexadecimal is ", origional_hexa_inp);

    for (int j = i - 1; j >= 0; j--)
    {
        printf("%c", a[j]);
    }
}

int octaConversion()
{
    int reminder_octal, i = 0, j, arr[10], input_octal, original_octal;
    printf("enter your number ");
    scanf("%d", &input_octal);
    original_octal = input_octal;

    while (input_octal > 0)
    {
        reminder_octal = input_octal % 8;
        arr[i] = reminder_octal;
        input_octal = input_octal / 8;
        i++;
    }
    printf("the decimal is %d base is 8 the octal is ", original_octal);
    for (j = i - 1; j >= 0; j--)
    {
        printf("%d", arr[j]);
    }
}

int main()
{
    char conversion;
    printf("To convert Binary Enter \' B \' \n");
    printf("To convert Hexadecimal Enter \' H \' \n");
    printf("To convert Octal Enter \' O \' \n ");
    printf("To Exit Enter \' E \' \n");
    scanf("%c", &conversion);

    if (conversion == 'b' || conversion == 'B')
    {
        binaryConversion();
    }
    else if (conversion == 'H' || conversion == 'h')
    {
        hexaConversion() ;
    }
    else if (conversion == 'O' || conversion == 'o')
    {
        octaConversion();
    }
    else if (conversion == 'e' || conversion == 'E')
    {
        printf("exit \n");
        return 0;
    }
    else
    {
        printf("enter correct alphebet \n");
    }

    return 0;
}