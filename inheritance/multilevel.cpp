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
      protected:
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
          display();
          int result = m1+m2;
          cout<<"\nResult:"<<result;
       }
};
class Sports : public Result
{
    public:
      void show()
      {
        //display();error
        cout<<"\nStudent Play Football";
      }
};
int main()
{
    Sports r1;
    //r1.display();error
    r1.displayResult();
    r1.show();
    return 0;
}