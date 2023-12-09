#include<stdio.h>
int voltageFind(int i , int r);

int main(){
int current , resistance;
printf("enter current");
scanf("%d" , &current);
printf("enter resistance");
scanf("%d" , &resistance);

int voltage = voltageFind(current , resistance);
printf("voltage is %d" , voltage);


}

int voltageFind(int i , int r){
    int result = i * r;
    return result;
}