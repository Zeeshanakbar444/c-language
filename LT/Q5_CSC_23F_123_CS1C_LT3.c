#include <stdio.h>
int main()
{
    float obtaied_marks, percentage;
    int total_marks = 5;
    char sign = '%';
    printf("enter your obtaied marks (out of 5)");
    scanf("%f", &obtaied_marks);
    if (obtaied_marks > 5 || obtaied_marks < 0)
    {
        printf("invalid number please enter a valid number");
    }
    else
    {
        percentage = (obtaied_marks / total_marks) * 100;
        printf("your percentage is %0.2f %c", percentage, sign);
    }
    return 0;
}