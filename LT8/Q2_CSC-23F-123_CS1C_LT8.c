#include<stdio.h>
#include<string.h>
int main(){
char arr[100];
printf("enter string\n");
gets(arr);

char *s1;
s1 = arr;

char a2[100];
char *s2;
s2 = a2;

int a = 0 , i;


int d = strlen(arr)-1;

for ( i =d ; i >=0; i--)
{
    s2[a] = arr[i];
   a++;
    
}
puts(s2 );
    return 0;
}