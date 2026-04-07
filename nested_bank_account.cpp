#include <iostream>
using namespace std;

class Bank
{
    class Account   // Nested class
    {
        int acc_no;
        float balance;

    public:
        void getData()
        {
            cout << "Enter Account Number: ";
            cin >> acc_no;
            cout << "Enter Balance: ";
            cin >> balance;
        }

        void display()
        {
            cout << "Account No: " << acc_no << endl;
            cout << "Balance: " << balance << endl;
        }
    };

public:
    Account a;  // object of nested class

    void createAccount()
    {
        a.getData();
    }

    void showAccount()
    {
        a.display();
    }
};

int main()
{
    Bank b;

    b.createAccount();
    b.showAccount();

    return 0;
}
