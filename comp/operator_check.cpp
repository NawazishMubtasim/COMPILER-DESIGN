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

bool isOperatorToken(string input) {
    string ops = "+-*/=%";
    return (input.length() == 1 && ops.find(input[0]) != string::npos);
}
