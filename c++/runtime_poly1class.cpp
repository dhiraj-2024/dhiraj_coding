#include<iostream>
using namespace std;

class animal
{
    public:
    void eat()
    {
        cout<<"Eating";
    }
};
class cat: public animal
{
    public:
    void eat()
{
    cout<<"Eating bread...";

}
};
int main()
{
cat a;
a.eat();
return 0;
}