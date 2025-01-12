

#include<iostream>
using namespace std;

//simple program for displaying student details.....


class student
{

public:
string name;
int roll_no;
string branch;
int year;
string clg_name;

void put_details();
void get_details();

};

void student::get_details()
{
    cout<<"Enter name of student :"<<endl;
    cin>>name;
    cout<<"Enter student roll no :"<<endl;
    cin>>roll_no;
    cout<<"Enter branch name :"<<endl;
    cin>>branch;
    cout<<"Enter current year :"<<endl;
    cin>>year;
    cout<<"Enter name of college :"<<endl;
    cin>>clg_name;

};

void student :: put_details()
{
cout<<"Student name : "<<ends<<name<<endl;
cout<<"Student roll no : "<<ends<<roll_no<<endl;
cout<<"Branch : "<<ends<<branch<<endl;
cout<<"Year : "<<ends<<year<<endl;
cout<<"College name : "<<ends<<clg_name<<endl;

};

int main()
{
    student s1;
    s1. get_details();
    s1. put_details();
    return 0;
}







#include <iostream>
using namespace std;


//write simple program of parameterized constructor.......
class A
{
private:
    int length;
    int breadth;

public:
    A(int len, int bre)

    {
        length = len;
        breadth = bre;
    }

        int calculate()
        {
            return length * breadth;
        }
    };

    int main()
    {
        A a1(5 , 6);
        A a2(4 , 9);

        cout << "Area of square A1 : " << a1.calculate()<< endl;
        cout << "Area of square A2 : " << a1.calculate()<< endl;
        return 0;
    }



