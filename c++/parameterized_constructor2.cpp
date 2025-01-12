#include<iostream>
using namespace std;

class circle
{
public:
int r;
float area;
circle(int radius)
{
    r=radius;
    area=3.14*r*r;

}
void display()
{
    cout<<area<<endl;
}
};
int main()
{
    circle c1 = circle(4);
    circle c2 = circle(5);
    c1.display();
    c2.display();
    return 0;
}