// Write a C++ Program to create Objects with help of default,parametrized and constructors..
#include <iostream>
using namespace std;

class Student
{
    int id;
    string name;

public:

    // Default Constructor
    Student()
    {
        id = 0;
        name = "Default";
    }

    // Parameterized Constructor
    Student(int i, string n)
    {
        id = i;
        name = n;
    }

    // Copy Constructor
    Student(Student &s)
    {
        id = s.id;
        name = s.name;
    }

    void display()
    {
        cout << "ID: " << id << " Name: " << name << endl;
    }
};

int main()
{
    Student s1;                 // Default
    Student s2(101, "Vishal"); // Parameterized
    Student s3 = s2;           // Copy

    s1.display();
    s2.display();
    s3.display();

    return 0;
}
