#include<stdio.h>
int main()
{
    int C,F;
    printf("Enter tempreature in celcious: \n");
    scanf("%d",&C);
    F=(C*9/5)+32;
    printf("Tempreature in fahrenheit is %d:\n",F);


    if(C<0)
    {
    printf("Its freezing 🥶🥶🥶🥶🥶\n");

    }
    else
    printf("Its not freezing 🥲🥲🥲🥲🥲\n");
    return 0;
}