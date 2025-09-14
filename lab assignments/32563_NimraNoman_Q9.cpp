#include <iostream>
using namespace std;
int main () {
    double balance, deposit, withdrawl;
    int value;
    cout << "enter your current account balance : ";
    cin >> balance;
    cout << "what operation do you wish to perform?" << endl;
    cout << "in order to deposit money, enter 1" << endl;
    cout << "in order to withdraw money, enter 2" << endl;
    cout << "in order to check your current balance, enter 3" << endl;
    cin >> value;
    if (value == 1) {
        cout << "enter the amount you are depositing : ";
        cin >> deposit;
        balance = balance + deposit;
        cout << "operation conducted successfully!" << endl;
        cout << "your current balance is : " << balance;
    }
    else if (value == 2) {
        cout << "enter the amount you are withdrawing : ";
        cin >> withdrawl;
        balance = balance - withdrawl;
        cout << "operation conducted successfully!" << endl;
        cout << "your current balance is : " << balance;
    }
    else if (value == 3) {
        cout << "your current balance is : " << balance;
    }
    else {
        cout << "value entered is out of range hence invalid";
    }
}
