#include <iostream>
using namespace std;

// Base class
class Bank
{
protected:
    string name;

public:
    void getBank()
    {
        cout << "Enter Bank Name: ";
        cin >> name;
    }

    void showBank()
    {
        cout << "Bank Name: " << name << endl;
    }
};

// Derived class
class Loan : public Bank
{
    // Nested class inside derived class
    class Details
    {
        int loan_id;
        float amount;

    public:
        void getDetails()
        {
            cout << "Enter Loan ID: ";
            cin >> loan_id;
            cout << "Enter Loan Amount: ";
            cin >> amount;
        }

        void showDetails()
        {
            cout << "Loan ID: " << loan_id << endl;
            cout << "Loan Amount: " << amount << endl;
        }
    };

public:
    Details d; // object of nested class

    void getLoan()
    {
        d.getDetails();
    }

    void showLoan()
    {
        d.showDetails();
    }
};

int main()
{
    Loan l;

    l.getBank();   // base class
    l.getLoan();   // nested class inside derived

    l.showBank();
    l.showLoan();

    return 0;
}
