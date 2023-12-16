#include <stdio.h>

int main()
{
    char a;
    FILE *ptr;
    ptr = fopen("q1.txt", "r");
    int count = 0;
    while (1)
    {
        a = fgetc(ptr);
        if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
        {
            count++;
        }
        if (a == EOF)
        {
            break;
        }
    }
    printf("%d" , count);
}