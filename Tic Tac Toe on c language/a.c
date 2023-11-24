//  0  | `1|2
// ___|___|___
//  3  |4   |5           123 ||456 || 789 || 047 ||246 ||036||147||258
// ___|___|__
//   6 | 7  |8
//    |   |

#include <stdio.h>
int main()
{
    char arr[] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
    int arr2[]={0};
    int a , e;
    int i = 0, z;

    while (1)
    {
        if (i % 2 == 0)
        {
            printf("************* Hamza (X) ************");
        }
        else
        {
            printf("************* Qari Sahab (o) ************");
        }

        scanf("%d", &a);
        printf("\n\n");
        arr[a] = (i % 2 == 0) ? 'x' : 'o';
        printf("_%c_|", arr[0]);
        printf("_%c_|", arr[1]);
        printf("_%c_ \n", arr[2]);
        printf("_%c_|", arr[3]);
        printf("_%c_|", arr[4]);
        printf("_%c_\n", arr[5]);
        printf(" %c |", arr[6]);
        printf(" %c |", arr[7]);
        printf(" %c ", arr[8]);
        printf(" %c ", arr[9]);
        printf("\n\n\n");
        i++;

        if (arr[0] == 'x' && arr[1] == 'x' && arr[2] == 'x' || arr[3] == 'x' && arr[4] == 'x' && arr[5] == 'x' || arr[6] == 'x' && arr[7] == 'x' && arr[8] == 'x')
        {
            printf("hamza won this match X");
            break;
        }
        else if (arr[0] == 'x' && arr[4] == 'x' && arr[7] == 'x' || arr[2] == 'x' && arr[4] == 'x' && arr[6] == 'x' || arr[0] == 'x' && arr[3] == 'x' && arr[6] == 'x')
        {
            printf("hamza won this match X");
            break;
        }
        else if (arr[1] == 'x' && arr[4] == 'x' && arr[7] == 'x' || arr[2] == 'x' && arr[5] == 'x' && arr[8] == 'x')
        {
            printf("hamza won this match X");
            break;
        }
        else if (arr[0] == 'o' && arr[1] == 'o' && arr[2] == 'o' || arr[3] == 'o' && arr[4] == 'o' && arr[5] == 'o' || arr[6] == 'o' && arr[7] == 'o' && arr[8] == 'o')
        {
            printf("Qari sahab won this match X");
            break;
        }
        else if (arr[0] == 'o' && arr[4] == 'o' && arr[7] == 'o' || arr[2] == 'o' && arr[4] == 'o' && arr[6] == 'o' || arr[0] == 'o' && arr[3] == 'o' && arr[6] == 'o')
        {
            printf("Qari sahab won this match X");
            break;
        }
        else if (arr[1] == 'o' && arr[4] == 'o' && arr[7] == 'o' || arr[2] == 'o' && arr[5] == 'o' && arr[8] == 'o')
        {
            printf("Qari sahab won this match 0");
            break;
        }else{
            // printf("draw the match");
            // break;
        }
    }
}