#include <iostream>
using namespace std;
int main () {
    int a, b, c;
    cout << "enter a value for a : ";
    cin >> a;
    cout << "enter a value for b : ";
    cin >> b;
    cout << "enter a value for c : ";
    cin >> c;
    if ((a > b) && (a > c)) {
        cout << "the largest value is : " << a;
    }
    else if ((b > a) && (b > c)) {
        cout << "the largest value is : " << b;
    }
    else {
        cout << "the largest value is : " << c;
    }
}