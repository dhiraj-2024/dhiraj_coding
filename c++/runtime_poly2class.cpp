#include<iostream>
using namespace std;

class shape
{
    public:
    virtual void draw()
    {
        cout<<"draw..."<<endl;
    }
};
class square: public shape
{
   public:
   void draw()
   {
    cout<<"draw square"<<endl;
   }
};
class circle : public shape
{
   public:
   void draw()
   {
    cout<<"draw circle"<<endl;
   }
};
int main()
{
  shape *s;
  shape sh;
  square sq;
  circle cir;
  s=&sh;
  s->draw();
  s=&sq;
  s->draw();
  s=&cir;
  s->draw();
  return 0;
}






