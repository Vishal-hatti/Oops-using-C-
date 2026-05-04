#include <iostream>
using namespace std;

int main()
{
    int roll, age;
    string name;
    float marks;

    try
    {
        cout << "Enter Roll Number: ";
        cin >> roll;

        if(roll <= 0)
            throw roll;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Age: ";
        cin >> age;

        if(age <= 18)
            throw age;

        cout << "Enter Subject Marks: ";
        cin >> marks;

        if(marks < 0 || marks > 100)
            throw marks;

        cout << "\nValid Input Details:\n";
        cout << "Roll Number = " << roll << endl;
        cout << "Name = " << name << endl;
        cout << "Age = " << age << endl;
        cout << "Marks = " << marks << endl;
    }

    catch(int x)
    {
        if(x <= 0)
            cout << "Invalid Roll Number!" << endl;
        else
            cout << "Age must be greater than 18!" << endl;
    }

    catch(float y)
    {
        cout << "Invalid Marks! Enter between 0 and 100." << endl;
    }

    return 0;
}
