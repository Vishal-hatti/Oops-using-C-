#include<iostream>
using namespace std;

class Base
{
public:
    void showBase()
    {
        cout << "Base\n";
    }
};

class Derv1 : public Base
{
public:
    void showDerived()
    {
        cout << "Derv1\n";
    }

    void show()
    {
        showDerived();
    }
};

int main()
{
    Derv1 dvl;
    Base* ptr;

    ptr = &dvl;
    ptr->showBase();
    ((Derv1*)ptr)->show();

    return 0;
}
