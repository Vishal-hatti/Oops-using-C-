#include <iostream>
using namespace std;

class Student
{
private:
    int marks;   // hidden data

public:
    void setMarks(int m)
    {
        marks = m;   // set value
    }

    void getMarks()
    {
        cout << "Marks: " << marks;
    }
};

int main()
{
    Student s;

    s.setMarks(90);   // setting value
    s.getMarks();     // accessing value

    return 0;
}
