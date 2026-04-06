//1) Write a c++ program to create a class rectangle with data members length and width create an object and
// calculate the area of the rectangle using a member function

#include <iostream>
using namespace std;

class Rectangle
{
public:
    int length, width;

    int area()
    {
        return length * width;
    }
};

int main()
{
    Rectangle r;

    cout << "Enter length: ";
    cin >> r.length;

    cout << "Enter width: ";
    cin >> r.width;

    cout << "Area of rectangle = " << r.area();

    return 0;
}
