#include <stdio.h>
int main()
{
    char str[1];
    int find_val = 0;
    printf("enter your gmial");
    scanf("%s", &str);

    for (int i = 0; i < 50; i++)
    {

        if (str[i] == '@')
        {
            find_val = 1;
            break;
        }
    }
    
  find_val != 0 ? printf("character \' @ \' is present") : printf("character \' @ \' is not present");

    return 0;
}