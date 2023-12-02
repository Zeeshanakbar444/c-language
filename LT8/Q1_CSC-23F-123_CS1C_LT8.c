#include <stdio.h>
int main()
{
    int a ;
    int b ;
    printf("for first number ");
    scanf("%d" , &a );
    printf("for second number ");
    scanf("%d" , &b );

    int *c = &a;
    int *d = &b;
    int result = *c + *d;
    printf("%d", result);
   

    return 0;
}