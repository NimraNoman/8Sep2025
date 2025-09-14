#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int x, y, z;
    cout << "enter a value for x : ";
    cin >> x;
    cout << "enter a value for y : ";
    cin >> y;
    cout << "enter a value for z : ";
    cin >> z;
    double x1 = pow(x,2);
    double y2 = pow(y,2);
    double z3 = pow(z,2);
    int distance = sqrt(x1+y2+z3);
    cout << "your distance from origin is : " << distance;
}
