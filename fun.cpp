/* write a c++ program using function to add two */
#include<iostream>
using namespace std;

int add(int a,int b);

int main()
{
    int x,y,result;

    cout<<"Enter two numbers: "<<endl;
    cin>>x>>y;

    result = add(x,y);

    cout<<"Sum = "<<result;

    return 0;
}

int add(int a,int b)
{
    return a+b;
}
