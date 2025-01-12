/*Write a program in C to read n number of values in an array and display them in reverse order.
Test Data :
Input the number of elements to store in the array :3
Input 3 number of elements in the array :
element - 0 : 2
element - 1 : 5
element - 2 : 7
Expected Output :
The values store into the array are :
2 5 7
The values store into the array in reverse are :
7 5 2
*/
//

#include <stdio.h>
int main()
{

    int arr[34], i;

    printf("the array elements are:\n");
    for (i = 0; i <= 4; i++)
    {
        printf("\nelement- %d=",i+1);
        scanf("%d", &arr[i]);
    }
     printf("above elements in reverse order are:\n ");

    for (i = 4; i >= 0; i--)
    {
       
        printf("\nelements" "=%d",arr[i] );
    }
    
    return 0;
}