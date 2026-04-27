#include<iostream>
using namespace std;

class sample
{
    int a,b;
public:
    void input (int a,int b){
        this->a = a+b;
        this->b = a-b;
    }

    void output (){
        cout<<"a = "<<a;
        cout<<"\nb = "<<b;
    }
};

int main()
{
    sample obl;
    obl.input(10,5);
    obl.output();

    return 0;
}
