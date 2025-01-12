#include <stdio.h>
int main()
{
    int num;

    printf("Enter a number:");
    scanf("%d", &num);
    if (num > 0)
    {
        printf("number is even.");
    }
    else if(num < 0)
    {
        printf("number is odd.");
    }
    else
    {
        printf("number is zero.");
    }
    return 0;
}