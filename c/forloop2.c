#include <stdio.h>
int main()
{
    int i, sum;
    printf("2. Write a C program to compute the sum of the first 10 natural numbers.");
    for (i = 0; i <= 10; i++)
    {
        printf("%d\n", i);
    }
    for (i = 0; i <= 10; i++)
    {
        sum = sum + i;
    }

    printf("sum of all above elements is = %d", sum);

    return 0;
}