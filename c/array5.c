#include <stdio.h>
int main()
{

    int a[100], count = 0, j;
    int n, i;

    printf("enter elements in array\n");
    scanf("%d", &n);
    printf("input %d elements in an array :", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                count++;
                break;
            }
        }
    }

    printf("duplicate elements in array is %d", count);
    return 0;
}