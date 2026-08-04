#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    double a = 13;
    double b = 0.165;
    cout << a << " * ";
    cout << fixed;
    cout.precision(6);
    cout << b << " = "; 
    cout.precision(6);
    cout << a * b;
    return 0;
}