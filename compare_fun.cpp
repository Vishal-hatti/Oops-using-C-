#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str1 = "apple";
    string str2 ="banana";

    int result = str1.compare(str2);
    if(result == 0) {
       cout << "Strings are equal." <<endl;
    }else if (result <0 ) {
        cout << strl << "come before "<<str2<<"
}
