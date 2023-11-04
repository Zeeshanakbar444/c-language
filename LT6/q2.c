#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, desc, r1, r2;
    printf("enter value of a ");
    scanf("%f", &a);
    printf("enter value of b ");
    scanf("%f", &b);
    printf("enter value of c ");
    scanf("%f", &c);

    desc = b * b - 4 * a * c;
    if (desc == 0)
    {
        printf("the roots are equal \n");
        r1 = -b / (2 * a);
        r2 = -b / (2 * a);
        printf("Root one is %0.2f \n Root two is %0.2f", r1, r2);
    }
    else if (desc > 0)
    {
        printf("Roots are real and different \n");
        r1 = (-b + sqrt(desc)) / 2 * a;
        r2 = (-b - sqrt(desc)) / 2 * a;
        printf("Root one is %0.2f \n Root two is %0.2f  ", r1, r2);
    }
    else if (desc < 0)
    {
       printf("roots are imaginary");
    }
}