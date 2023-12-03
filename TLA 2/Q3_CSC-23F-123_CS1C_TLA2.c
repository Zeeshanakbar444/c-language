#include <stdio.h>
int main()
{

    int a[6][6] = {{'\0', 1, 2, 3, 4, 5},
                   {1, 1, 0, 1, 0, 0},
                   {2, 0, 1, 0, 1, 1},
                   {3, 0, 1, 1, 0, 1},
                   {4, 0, 1, 0, 1, 1},
                   {5, 1, 1, 1, 1, 1}};

    int i, j;
    int arr[6] = {0};
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {

            printf("%d \t", a[i][j]);
        }
        printf("\n");
    }

    for (i = 1; i < 6; i++)
    {
        for (j = 1; j < 6; j++)
        {

            arr[i - 1] += a[i][j];
        }
    }

    printf("\n-------------------------------------------------------------\n");
    printf("vertex \t");
    for (i = 0; i < 5; i++)
    {
        printf("%d \t ", i + 1);
    }
    printf("\n");
    printf("degree \t");
    for (i = 0; i < 5; i++)
    {
        printf("%d \t ", arr[i]);
    }
    printf("\n-------------------------------------------------------------\n");
    int max = arr[0];
    int k;
    for (i = 1; i < 6; i++)
    {

        if (max < arr[i - 1])
        {
            max = arr[i - 1];
            k = i;
        }
    }
    printf("highest degree of vertex \n");
    printf("vertex is %d \n degree is %d\n", k, max);

    printf("\n-------------------------------------------------------------\n");
    int find = 1;
    for (i = 1; i < 6; i++)
    {
        for (j = 1; j < 6; j++)
        {
            if (a[i][j] != 0)
            {
                find = 0;
                break;
            }
        }
    }
    if (find == 0)
    {

        printf("the graph is not isolated");
    }
    else
    {
        printf("the graph is isolated");
    }

    printf("\n-------------------------------------------------------------\n");
    int newArr[6] = {0};
    for (i = 1; i < 6; i++)
    {
        for (j = 1; j < 6; j++)
        {

            newArr[i - 1] += a[i][j];
        }
    }
    
    int newArrCount = 1;
    int newArrIndex = 0;
    for ( i = 0; i < 5; i++)
    {
        
        if (newArr[i]==5)
        {
           newArrCount = 0;
           newArrIndex = i+1;
        }
        
    }
    
    if(newArrCount==1){
        printf("all vertices are not directly connected all other vertices \n");
    }else{
        printf("this vertex \" %d \" all vertices are directly connected  \n" , newArrIndex);
    }
    
    
}
