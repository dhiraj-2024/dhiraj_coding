#include<stdio.h>
int main()
{
printf("3. Write a program in C to display n terms of natural numbers and their sum.\n");

int i,n,sum=0;
printf("enter the terms of numbers that you want to print :");
scanf("%d",&n);
for(i=0;i<=n;i++)
{   
    printf("%d\n",i); 
}
for(i=0;i<=n;i++)
{
    sum+=i;
}
printf("sum of above number is = %d",sum);
    return 0;
}