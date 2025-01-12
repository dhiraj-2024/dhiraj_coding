#include <stdio.h>
int main()
{
int a[100],i,n,j,total=0;

printf("enter element in array:");
scanf("%d",&n);
printf("input %d numbers inside the array:",n);

for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}

for(i=0;i<n; i++)
{
    total=0;
    for(j=0; j<=0; j++)
    {
        if(i!=j)
        {
            if(a[i]==a[j])
            {
                total++;
            }
        }
    }
    if(total==0)
    {
        printf("%d",a[i]);

    }
}
// for(i=0;i<n;i++)
// {
//     for(j=i+1;j<n;j++)

//     { 
//         if(a[i]!=a[j])
//         {
//           total= a[j];
//         }
//         // printf("%d\t",total);
//     //    if(total==0)
//     //    {
//     //     printf("%d",a[j]);
//     //    }
//     }
    
    // for ( i = 0; i < n; i++)
    // {
    //     if (a[i]!=a[i+1])
    //     {
    //         total = a[i];
    //         printf("%d",total);
    //     }
    //     // printf("%d",total);
        
    // }
    
    
// }
//  for ( i = 0; i < n; i++)
//  {
//     printf("%d",total[i]);
//  }
 


    return 0;
}