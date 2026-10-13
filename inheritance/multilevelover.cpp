#include<iostream>
using namespace std;
class A
{
    public:
      void show()
      {
        cout<<"\nShow method of class A";
      }
};
class B : public A
{
    public:
      void show() 
      {
        cout<<"\nShow Method of class B";
      }
};
class C : public B
{
    public:
      void show()  
      {
        cout<<"\nShow Method of class C";
      }
};
int main()
{
    A* ptr;
    A a;
    B b;
    C c;
    ptr=&a;
    ptr->show();
    ptr=&b;
    ptr->show();
    ptr=&c;
    ptr->show();
   
    return 0;
    
}