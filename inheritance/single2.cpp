#include<iostream>
using namespace std;
class Student
{
    private:
      int roll;
      string name;
    public:
      Student()
      {
        roll=122;
        name="Neha";
      }
      void display()
      {
        cout<<"\nStudent Name :"<<name;
        cout<<"\nStudent Roll No :"<<roll;
      }

};
class Result : protected Student
{
    private:
       int m1,m2;
    public:
       Result()
       {
          m1=49;
          m2=50;
       }
       void displayResult()
       {
          int result = m1+m2;
          cout<<"\nResult:"<<result;
       }
};
int main()
{
    Result r1;
    r1.display();
    r1.displayResult();
    return 0;
}