#include<iostream>
using namespace std;
class A
{
    public:
      virtual void show()
      {
        cout<<"\nShow method of class A";
      }
};
class B : public A
{
    public:
      void show() override 
      {
        cout<<"\nShow Method of class B";
      }
};
int main()
{
    A* ptr;
    B b;
    ptr=&b;
    ptr->show();
    
    return 0;
    
}