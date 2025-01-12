#include<stdio.h>

int main()
{
    int i,n,sum=0;

    printf("enter the number of terms:");
    scanf("%d",&n);

    for(i=0; i<=n; i++)
    {
        sum+=i;

    }
    printf("the first %d natural numbers are :\n" ,n);
    for(i=0; i<=0; i++){

    printf("%d",i);

    }
    printf("the sum of first %d natural number = %d\n",n,sum);
    return 0;

}