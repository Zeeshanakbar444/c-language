#include <stdio.h>
int main()
{
    int arr[10], i;
    float mean=0;

    for (i = 0; i < 10; i++)
    {
        printf("enter your %d number", i + 1);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 10; i++)
    {
        mean = mean + arr[i];
    }
    mean = mean / 10;
    printf("the median is %0.2f", mean);
    return 0;
}