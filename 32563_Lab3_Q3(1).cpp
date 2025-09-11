#include <iostream>
using namespace std;
int main () {
    int score;
    cout << "enter your score : ";
    cin >> score;
    if (score <= 100 && score >= 90) {
        cout << "your grade is A!";
    }
    else if (score <= 89 && score >= 80) {
        cout << "your grade is B!";
    }
    else if (score <= 79 && score >= 70) {
        cout << "your grade is C!";
    }
    else if (score <= 69 && score >= 60) {
        cout << "your grade is D!";
    }
    else {
        cout << "your grade is F!";
    }
}
