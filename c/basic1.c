#include<stdio.h>
int main()
{
int date,month,year;
long double Mo_No;
char name;

 printf("Name:");
 scanf("%s",&name);
 printf("date");
 scanf("%d",&date);
 printf("month");
 scanf("%d",&month);
 printf("year");
 scanf("%d",&year);
 printf("Mobile No");
 scanf("%Lf",&Mo_No);

 printf("hii my name is %s ,my date of birth is %d/%d/%d and my mobile number is : %Lf.Thank you!!",name,date,month,year,Mo_No);



    return 0;

}