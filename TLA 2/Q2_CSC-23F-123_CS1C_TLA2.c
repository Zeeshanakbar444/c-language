#include <stdio.h>
int main()
{
    int n, m, i, j;
    printf("the array one size is enter \n");
    scanf("%d", &m);

    printf("the array two size is enter \n");
    scanf("%d", &n);
 
    if(m<n){
        printf("no");
        return;
    }
   int arr1[m];
    int arr2[n];
    
printf("for first large array \n");
    for (i = 0; i < m; i++)
    {
        printf("enter the index for %d \n", i);
        scanf("%d", &arr1[i]);
    }

    printf("for first small array \n");
    for (i = 0; i < n; i++)
    {
        printf("enter the index for %d \n", i);
        scanf("%d", &arr2[i]);
    }

int a =0;
for ( i = 0; i < n; i++)
{
    for ( j = 0; j < m; j++)
    {
        if(arr2[i]==arr1[j]){
            a++;
        }
    }
    
}

if(a == n){
    printf("yes");
}else{
    printf("no");
}






    return 0;
}