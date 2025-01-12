#include<stdio.h>
int main()
{
float si,p,t,r;
printf("Enter total amount :");
scanf("%f",&p);
printf("Enter timr period:");
scanf("%f",&t);
printf("Enter annual intrest rate :");
scanf("%f",&r);

si=(p*t*r)/100;
printf("Total intrest amount is :%f",si);

return 0;




}