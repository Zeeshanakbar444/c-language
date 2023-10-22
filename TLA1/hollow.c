#include<stdio.h>
int main(){
    int z  ;
    printf("enter number to print pyramid");
    scanf("%d" , &z);
    for (int i = 1; i <=z; i++)
    {
        
        for (int j = i; j <z; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <=2*i-1; k++)
        {
            if (k==1||k==2*i-1||i==z)
            {
                printf("*");
            }
            else{

                printf(" ");
            }
            
        }
        
printf("\n");
    }
    
}