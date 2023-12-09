#include <stdio.h>
float percentage(float obtain);

int main()
{
    float x;
    char c = '%';
    printf("enter obtained NUmeber \n");
    scanf("%f", &x);
    if (x > 15 || x < 0)
    {
        printf("enter correct number");
        return;
    }
    float a = percentage(x);
    printf("%0.2f %c", a, c);
    
}

float percentage(float obtain)
{
    float result = (obtain / 15) * 100;
    return result;
}