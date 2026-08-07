#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b,c;
    cin >> a >> b >> c;
    int total = a + b + c;
    double average = (double)total /3;
    cout << total << "\n" << average << "\n" << total - average;
    return 0;
}