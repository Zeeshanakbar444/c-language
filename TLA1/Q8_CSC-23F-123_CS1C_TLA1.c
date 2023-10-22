#include<stdio.h>
int main(){
    int z  ;
    printf("enter number to print pyramid");
    scanf("%d" , &z);
    for (int i = 1; i <=z; i++)
    {
        
        for (int j = z; j >i; j--)
        {
            printf(" ");
        }
        for (int k = 1; k <=i; k++)
        {
            printf(" *");
        }
           printf("\n") ;

    }
    
}