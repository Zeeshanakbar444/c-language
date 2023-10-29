#include<stdio.h>
int main(){
double arr1[10] ={0} , min ,max ;
int i;
for ( i = 0; i < 10; i++)
{
    printf("enter your %d number" , i+1);
    scanf("%d" , &arr1[i]);
}
max = arr1[0];
min = arr1[0];
for ( i = 0; i < 10; i++)
{
    
    if(arr1[i] > max){
        max = arr1[i];
    }else if(arr1[i] < min){
        min = arr1[i];
    }
}
printf("maximum value is %d \n"  , max);
printf("minimum value is %d"  , min);
    return 0;
}