#include<iostream>
using namespace std;

int main()
{
    int salary,gs,hra,da;
    cout<<"enter the basic salary of employee :";
    cin>>salary;
    if(salary>=10000)
    {
        da=salary*20/100;
        hra=salary*80/100;
        gs=salary+da+hra;
        cout<<"The gross salary of employee is :"<<gs<<endl;

    }
    if(salary<=20000)
    {
        da=salary*25/100;
        hra=salary*90/100;
        gs=salary+da+hra;
        cout<<"The gross salary of employee is :"<<gs<<endl;

    }
    else if(salary>20000)
    {
        da=salary*30/100;
        hra=salary*95/100;
        gs=salary+da+hra;
        cout<<"The gross salary of employee is :"<<gs<<endl;
    }
    else
    {
        cout<<"You have no salary "<<endl;
    }
}