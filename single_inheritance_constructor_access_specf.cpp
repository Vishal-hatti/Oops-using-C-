#include <iostream>
using namespace std;

class Base
{
private:
    int a;

protected:
    int b;

public:
    int c;

    // Constructor of Base
    Base()
    {
        a = 10;
        b = 20;
        c = 30;
        cout << "Base constructor called" << endl;
    }

    void showBase()
    {
        cout << "Private a = " << a << endl;
        cout << "Protected b = " << b << endl;
        cout << "Public c = " << c << endl;
    }
};

class Derived : public Base
{
public:
    // Constructor of Derived
    Derived()
    {
        cout << "Derived constructor called" << endl;
    }

    void showDerived()
    {
        // cout << a; ❌ not accessible
        cout << "Protected b (in derived) = " << b << endl;
        cout << "Public c (in derived) = " << c << endl;
    }
};

int main()
{
    Derived d;

    cout << "\nFrom Base class:" << endl;
    d.showBase();

    cout << "\nFrom Derived class:" << endl;
    d.showDerived();

    return 0;
}
