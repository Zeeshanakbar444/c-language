#include<stdio.h>
#include<string.h>
char alphabeticalOrder(char str1[100]);

int main(){
char userInput[100];
printf("enter string\n");
gets(userInput);
alphabeticalOrder(userInput);
}

char alphabeticalOrder(char str1[100]){
    int arr[256] = {0};
for (int i = 0; i < strlen(str1); i++)
{
    int a = str1[i];
    arr[a]++;
}

for (int j = 0; j < 256; j++)
{
   if(arr[j]==1){
    printf("%c" , j);
   }else if(arr[j]>1){
     printf("%c" , j);
     arr[j]--;
     j-=1;
   }

}


}