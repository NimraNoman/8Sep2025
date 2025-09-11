#include <iostream>
using namespace std;
int main () {
    int a, b;
    cout << "enter an integer value for a : ";
    cin >> a;
    cout << "enter an integer value for b : ";
    cin >> b;
    int sum = (a+b);
    cout << "the sum of your two integer values is : " << sum << endl;
    int product = (a*b);
    cout << "the product of your two integer values is : " << product << endl;
    if (sum % product == 0) {
        cout << "It is divisible";
    }
    else {
        cout << "It is NOT divisible";
    }
}
