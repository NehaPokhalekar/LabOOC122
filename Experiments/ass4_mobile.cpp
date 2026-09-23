#include <iostream>
using namespace std;

class MobileRecharge
{
    string name;
    float balance;

public:
    void getData()
    {
        cout << "Enter name: ";
        cin >> name;

        cout << "Enter initial balance: ";
        cin >> balance;
    }

    void recharge()
    {
        float amount;
        cout << "Enter recharge amount: ";
        cin >> amount;

        balance = balance + amount;
        cout << "Recharge successful." << endl;
    }

    void deductBalance()
    {
        float amount;
        cout << "Enter amount to deduct: ";
        cin >> amount;

        balance = balance - amount;
        cout << "Amount deducted." << endl;
    }

    void display()
    {
        cout << "\nAccount Details" << endl;
        cout << "Name: " << name << endl;
        cout << "Balance: Rs. " << balance << endl;
    }
};

int main()
{
    MobileRecharge m;

    m.getData();
    m.recharge();
    m.deductBalance();
    m.display();

    return 0;
}