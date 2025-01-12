#include<stdio.h>
int main()
{
    int arr[10];
    int i,sum;

    printf("enter element in array\n");
    for(i=0;i<=5;i++)
    {
        printf("\nelement -%d\t",i);
        scanf("%d",&arr[i]);

    }
    for(i=0;i<=5;i++)
    {
       sum=sum+arr[i];
      
       
    }
     printf("\nthe sum of all array element is :%d \n",sum);
    
    return 0;
}