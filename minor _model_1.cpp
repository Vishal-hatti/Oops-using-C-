// dispalying name usn department native
#include<iostream>
using namespace std;
class Student
{
    string name,usn,department,native;
public:
    void input()
    {

        cout<<"Enter student name: ";
        cin>>name;
        cout<<"Enter usn: ";
        cin>>usn;
        cout<<"Enter Department : ";
        cin>>department;
        cout<<"Enter native: ";
        cin>>native;
    }
    void display(){
    cout<<"\nStudent name: "<<name<<endl;
    cout<<"Students usn: "<<usn<<endl;
    cout<< "Students department: "<<department<<endl;
    cout<<"Students native: "<<native<<endl;
    }
};
    int main()
    {
        Student s;
        s.input();
        s.display();
        return 0;
    }
//Default AREA


