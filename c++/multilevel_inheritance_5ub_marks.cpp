#include<iostream>
using namespace std;

class student
{
public:
int rollno;
char name[40];

void get_d()
{
    cout<<"Enter a roll no : "<<endl;
    cin>>rollno;
    cout<<"Enter a name : "<<endl;
    cin>>name;
}
};

class marks:public student
{
public:
int m1,m2,m3,i,sum;

void get_m()
{
    cout<<"Enter marks of m1,m2,m3 : "<<endl;
    // for(i=0; i<3; i++)
    // {
    // cin>>marks[i];
    // }
    // for(i=0; i<3; i++)
    // {
    // sum=sum+marks[i];
    // }
    cin>>m1>>m2>>m3;
    sum=m1+m2+m3;
}
};
class result: public marks
{
public:
int DS,total;
float avg;
void get_r()
{
    cout<<"enter marks of DS : "<<endl;
    cin>>DS;
    total=sum+DS;
    avg=total/4;
    cout<<"total is : "<<total<<endl<<"average is : "<<avg<<endl;
}

};
int main()
{
    result a;
    a.get_d();
    a.get_m();
    a.get_r();
    return 0;

}









