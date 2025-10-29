#include <iostream>
#include <string>
using namespace std;

void checkOperator() {
    string input;
    cout << "Enter the expression to check for operators: ";
    cin >> input;

    cout << "Operators found in the expression: ";
    for (char c : input) {
        if (c == '+' || c == '-' || c == '*' || c == '/' || c == '%' || c == '=') {
            cout << c << " ";
        }
    }
    cout << endl;
}

