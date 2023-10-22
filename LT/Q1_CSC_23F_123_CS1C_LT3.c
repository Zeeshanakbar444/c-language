#include <stdio.h>
int main()
{
    float distance, hour  ,speed;

    printf("enter distance in KM \n");
    scanf("%f", &distance);

    printf("enter time in Hour \n");
    scanf("%f", &hour);
distance = distance  * 1000;
hour= hour* 3600;
    speed = distance / hour;
    printf("the speed is %0.2f m/s"  , speed);


    return 0;
}