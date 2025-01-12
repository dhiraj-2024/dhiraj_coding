#include<iostream>
using namespace std;

class student
{
int roll_no;
char name[28];
char class_st[8];
int marks [5];
float percentage;
float calculate();
public:
void readmarks();
void displaymarks();

};
float student::calculate()
{
percentage=0;
for(int i=0; i<5;i++)
percentage+=marks[i];
percentage=(percentage/5);
return percentage;
}
void student::readmarks()
{
    cout<<"Enter roll no :";
    cin>>roll_no;
    cout<<"Enter name :";
    cin>>name;
    cout<<"Enter class studing :";
    cin>>class_st;
    cout<<"Enter the marks :"<<endl;

    for(int j=0; j<5; j++)
    {
    cout<<"Enter marks"<<j+1<<":";
    cin>>marks[j];
    }
}
void student::displaymarks()
{
    cout<<"roll no :"<<roll_no<<endl;
    cout<<"name :"<<name<<endl;
    cout<<"class :"<<class_st<<endl;
    cout<<"percentage :"<<calculate()<<endl;
}
int main()
{
student a1;
    a1.readmarks();
    a1.displaymarks();
    return 0;

}