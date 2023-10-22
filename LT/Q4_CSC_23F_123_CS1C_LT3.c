#include <stdio.h>
#include <math.h>

int main()
{
    float radius, sphere_volume, radius_cube;
    float PI = 3.142;
    printf("enter radius ");
    scanf("%f", &radius);
    radius_cube = pow(radius , 3);
    sphere_volume = (4 / 3) * PI * radius_cube;
    printf("the volume of sphere is %0.2f", sphere_volume);
    return 0;
}