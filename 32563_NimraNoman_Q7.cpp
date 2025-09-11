#include <iostream>
using namespace std;
int main () {
    int sub1, sub2, sub3, sub4, sub5;
    cout << "enter marks for subject 1 : ";
    cin >> sub1;
    cout << "enter marks for subject 2 : ";
    cin >> sub2;
    cout << "enter marks for subject 3 : ";
    cin >> sub3;
    cout << "enter marks for subject 4 : ";
    cin >> sub4;
    cout << "enter marks for subject 5 : ";
    cin >> sub5;
    float average = (sub1 + sub2 + sub3 + sub4 + sub5)/5.0;
    if (average >= 90) {
        cout << "your grade is 'A' ";
    }
    else if ((average >= 80) && (average <= 89)) {
        cout << "your grade is 'B' ";
    }
    else if ((average >= 70) && (average <= 79)) {
        cout << "your grade is 'C' ";
    }
    else {
        cout << "your grade is 'F' ";
    }
}
