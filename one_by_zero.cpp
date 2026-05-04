#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 0;

    try {
        if (b == 0)
            throw "Denominator cannot be zero!";
        cout << a / b;
    }
    catch (const char* msg) {
        cout << "Error: " << msg;
    }

    return 0;
}
