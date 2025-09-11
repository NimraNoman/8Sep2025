#include <iostream>
using namespace std;
int main () {
    int x, y;
    cout << "enter a value for x : ";
    cin >> x;
    cout << "enter a value for y : ";
    cin >> y;
    if (x > 0 && y > 0) {
        cout << "First Quadrant";
    }
    else if (x > 0 && y < 0) {
        cout << "Fourth Quadrant";
    }
    else if (x < 0 && y > 0) {
        cout << "Second Quadrant";
    }
    else {
        cout << "Third Quadrant";
    }
}
