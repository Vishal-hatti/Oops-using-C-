/*3)write a c++ Program to create a class car with data members brand and
speed create two objects and display the details of both cars using a members function oops using c++ */
#include<iostream>
using namespace std;

class Car
{
    string brand;
    int speed;

public:
    void getData()
    {
        cin >> brand >> speed;
    }

    void display()
    {
        cout << "Brand: " << brand << endl;
        cout << "Speed: " << speed << endl;
    }
};

int main()
{
    Car c1, c2;

    cout << "Enter details for Car 1:\n";
    c1.getData();

    cout << "Enter details for Car 2:\n";
    c2.getData();

    cout << "\nCar 1 Details:\n";
    c1.display();

    cout << "\nCar 2 Details:\n";
    c2.display();

    return 0;
}
