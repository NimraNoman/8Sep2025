#include <iostream>
#include <ctime>
#include <algorithm>
using namespace std;
int main() {
    double a, b, c, d, e;
    srand(time(0));
    a = (double)rand()/RAND_MAX;
    b = (double)rand()/RAND_MAX;
    c = (double)rand()/RAND_MAX;
    d = (double)rand()/RAND_MAX;
    e = (double)rand()/RAND_MAX;

    cout << " a = " << a << endl;
    cout << " b = " << b << endl;
    cout << " c = " << c << endl;
    cout << " d = " << d << endl;
    cout << " e = " << e << endl;

    double sum = a + b + c + d + e;
    double average = (sum/5);
    cout << "average is : " << average << endl;
    double largest = max(a,max(b,max(c,max(d,e))));
    double smallest = min(a,min(b,min(c,min(d,e))));
    cout << "max value is : " << largest << endl;
    cout << "min value is : " << smallest << endl;
}