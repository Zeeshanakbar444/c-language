#include <stdio.h>
#include <string.h>
int main()
{
    char z[100] ;
    char a[100];
    int c = 1, length;
    printf("enter your str1 string ");
    scanf("%s", &z);
    printf("enter your str2 string ");
    scanf("%s", &a);

    for (int i = 0; i < strlen(a); i++)
    {
        if (z[i] != a[i])
        {
            c = 0;
            break;
        }
    }
    if (c == 1)
    {
        printf(" two string are equal \n");
    }
    else
    {
        printf("two string are not equal \n");
    }

    length = strlen(z);

    for (int j = 0; j < strlen(a) + strlen(z); j++)
    {
        z[length] = a[j];
        length++;
    }
    printf("the two string concadination are \' %s\' \n" , z);



int d=0;
while (d <strlen(z))
{
    z[d] = '\0';
d++;
}

for (int  f = 0; f < strlen(a); f++)
{
    z[f] = a[f];
}
printf("copy first string  is another string \' %s \'" , a);

}