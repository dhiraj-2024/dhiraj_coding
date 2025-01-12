/*#include<stdio.h>
int main()
{

    int arr1[20],arr2[20];
    int i;
    
    printf("enter element in array:\n");
printf("element from 1 to 10");
    for(i=0;i<=9;i++)
    {
        
        printf("\n%d",i);
        // scanf("%d",&arr1[i]);
    
    }
    arr1[i]=arr2[i];
    printf("element copy from array 1 to array 2");
    printf("%d\n",&arr2[i]);

return 0;
}
*/


#include<stdio.h>
int main()
{
int arr1[3]={2,4,5},n=3;
int arr2[n],i;

for(i=0;i<n;i++)
{
    arr2[i]=arr1[i];

}
printf("\nelements in array 1:   ");
for(i=0;i<n;i++)
{
    printf("%d\t", arr1[i]);
}
printf("\nelements in array 2:   ");

for(i=0;i<n;i++)
{
    printf("%d\t", arr2[i]);
}

    return 0;

}