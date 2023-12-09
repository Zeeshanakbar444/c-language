#include <stdio.h>
int kelvin(int centi);
int main()
{
    int x;
    printf("enter the temptrature in centigrate\n");
    scanf("%d", &x);
    int kelvinConvert = kelvin(x);
    printf("kelvin %dk", kelvinConvert);
}
int kelvin(int centi)
{
    int cetigrate = centi;
    int k = centi + 273;
    return k;
}