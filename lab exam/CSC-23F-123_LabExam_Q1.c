#include<stdio.h>
int main(){
    char fileName[100];
    printf("enter your file name \n");
    gets(fileName);
    FILE *ptr;
    ptr = fopen(fileName , "w");
    if(ptr == NULL){
        printf("file not exists\n");
        return;
    }else{
         printf("file open\n");
    }
    fclose(ptr);
}