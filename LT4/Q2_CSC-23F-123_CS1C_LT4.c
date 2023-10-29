#include <stdio.h>

int main()
{
    float calories = 3.9;
    int i;

    for (i = 10; i <= 20; i = i + 5)
    {
        calories *= i;
        printf("after %d mintes you burn %.1f calories \n", i, calories);
        calories = 3.9;
    }

    return 0;
}