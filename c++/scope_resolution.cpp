#include<iostream>
using namespace std;

class employee
{
    public:
    int email_id;
    char name[50];
    int salary;
    int bs,hra,da,gs;
    void calculate_gs();
    void display();

};

void employee :: calculate_gs()
{
    cout<<"Enter email id : ";
    cin>>email_id;
    cout<<"Enter employee name :";
    cin>>name;
    cout<<"Enter bs,hra,and da :";
    cin>>bs>>hra>>da;
    gs=bs+hra+da;
}
void employee :: display()
{
    cout<<"id"<<email_id;
    cout<<"name"<<name;
    cout<<"bs,hra,da"<<bs<<hra<<da;
    cout<<"gross salary"<<gs;
}
int main()
{
    employee a;
    a.calculate_gs();
    a.display ();
    return 0;
}
