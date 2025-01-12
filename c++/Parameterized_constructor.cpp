#include<iostream>
using namespace std;

class employee
{
public:
int id;
string name;
float salary;
employee(int i, string n, float s)
{
    id = i;
    name = n;
    salary = s;
}
int display()
{
    cout<<id<<" "<<name<<" "<<salary<<endl;
}
};
int main()
{
    employee a1 = employee(123 , "dhiraj" , 12000);
    employee a2 = employee(124 , "karan" , 13000);
    a1.display();
    a2.display();
    return 0;
}

//program 2nd

/*#include <iostream>
using namespace std;

class A
{
private:
    int length;
    int breadth;

public:
    // Parameterized constructor
    A(int len, int bre)
    {
        length = len;
        breadth = bre;
    }

    // Member function to calculate area
    int calculate()
    {
        return length * breadth;
    }
};

int main()
{
    // Create objects of class A
    A a1(5, 6);
    A a2(4, 9);

    // Display areas
    cout << "Area of square A1: " << a1.calculate() << endl;
    cout << "Area of square A2: " << a2.calculate() << endl;

    return 0;
}
*/