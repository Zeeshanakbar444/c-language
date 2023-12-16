#include <stdio.h>
int main()
{
    char arr;
    FILE *ptr;
    ptr = fopen("q3.txt", "r");

    while (fscanf(ptr, "%c", &arr) != EOF)
    {
        int a = arr;
        if(a>=48 &&a<=58){
            arr = '$';
        }
        printf("%c" , arr);

    }
   
        
}