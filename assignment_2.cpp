//1) Write a c++ Program to create a class student with data members id,name and
// marks create an object and display the student details using member function


#include<iostream>
using namespace std;

class Student
{
    int id;
    char name[20];
    float marks;

public:
    void getData()
    {
        cout<<"Enter ID: ";
        cin>>id;
        cout<<"Enter Name: ";
        cin>>name;
        cout<<"Enter Marks: ";
        cin>>marks;
    }

    void display()
    {
        cout<<"\nStudent Details:";
        cout<<"\nID: "<<id;
        cout<<"\nName: "<<name;
        cout<<"\nMarks: "<<marks;
    }
};

int main()
{
    Student s;   // object

    s.getData(); // input
    s.display(); // output

    return 0;
}
