#include <stdio.h>
int main()
{
    int i, a = 0, b = 1, c, input;
    printf("enter your number ");
    scanf("%d", &input);

    for (i = 0; i <= input; i++)
    {
        printf("%d," , a); 
        c= a+b;
        a = b; 
        b= c; 
        

      
    }
}