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
class B 
{
    public:
      virtual void show() 
      {
        cout<<"\nShow Method of class B";
      }
};
class C : public A,B
{
    public:
      void show()  override
      {
        cout<<"\nShow Method of class C";
      }
};
int main()
{
    A* ptr;
    B* bptr;
    A a;
    B b;
    C c;
    ptr=&a;
    ptr->show();
    bptr=&b;
    bptr->show();
    ptr=&c;
    ptr->show();
   
    return 0;
    
}