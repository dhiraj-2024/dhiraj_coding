#include<iostream>
using namespace std;

class student
{
public:
int id;
char name[66];
void get_p()
{
cout<<"Enter student id:"<<endl;
cin>>id;
cout<<"Enter student name:"<<endl;
cin>>name;
}
};
class marks
{
public:
int i,sum,marks[4];
void get_m()
{
    cout<<"Enter marks of M1,M2,M3,DS,CAO :"<<endl;
    for(i=0; i<6; i++)
    {
        cin>>marks[i];
    }
    for(i=0; i<6; i++)
    {
        sum=sum+marks[i];
    }
}
};
class result: public student,public marks
{
public:
int total;
float avg;
void get_r()
{
    total=sum;
    avg=total/5;
    cout<<"student id is : "<<id<<endl<<"student name is : "<<name<<endl<<"total is : "<<total<<endl<<"average is : "<<avg<<endl;
} 
};
int main()
{
    result a;
    a.get_p();
    a.get_m();
    a.get_r();
    return 0;
}