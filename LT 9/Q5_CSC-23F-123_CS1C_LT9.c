#include <Stdio.h>
float CentigradeConverter(float f );
int main()
{
    float x;
    printf("enter number tempretur in Fahrenheit \n");
    scanf("%f", &x);

    float centigrade = CentigradeConverter(x);
    printf("%.2f F" , centigrade);
}


float CentigradeConverter(float f ){
float result = 5 * (f-32)/9;
return result;
}