#include <stdio.h>

int main()
{
    int arr_len;
    printf("enter ! you want to size of character array");
    scanf("%d" , &arr_len);
    char arr[100];
    int i, j, count = 0, max = 0 ;
    char a;
for ( i = 0; i < arr_len; i++)
{
    printf("enter %d index character" , i);
    scanf(" %c"  , &arr[i]);
}






    for (i = 0; i < arr_len; i++)
    {
        count = 0;
        for (j = 0; j < arr_len; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (max < count)
        {
            max = count;
            a = arr[i];
        }
    }
    max > 1 ? printf("the most occuring character is %c", a) : printf("not repeated character");
    return 0;
}