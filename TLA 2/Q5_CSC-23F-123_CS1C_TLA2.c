#include<stdio.h>
#include<string.h>
int main(){
char str1[100];
char str2[100];
printf("enter string one \n");
scanf("%s" , &str1);
printf("enter string two \n");
scanf("%s" , &str2);
int l1 = strlen(str1);
int l2 = strlen(str2);
int i,j;
int arr[256] = {0};
if(l1 != l2){
    printf("two string are not anagram");
    return 0;
}


for ( i = 0; i < l1; i++)
{
    arr[str1[i]]++;
}
for ( i = 0; i < l2; i++)
{
    arr[str2[i]]--;
}



for ( i = 0; i < 256; i++)
{
    if(arr[i]!=0){
        printf("this is not anagram");
        return 0;
    }
}
printf("this is anagram");



    return 0 ;
}




    // arr1[str1[i] ]++;



 