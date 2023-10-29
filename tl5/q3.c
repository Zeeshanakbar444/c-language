#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];
    int i;

    printf("enter string lower case");
    scanf("%s", str);

    for ( i = 0; i < strlen(str); i++)
    {
        str [i]=str[i]-32;

    }
    printf ("upper case is %s  \n" , str);
}