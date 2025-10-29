#include <iostream>
#include <string>
using namespace std;

void checkNumericConstant() {
    string input;
    cout << "Enter the input to check if it's a Numeric Constant: ";
    cin >> input;

    bool isNumeric = true;
    for (int i = 0; i < input.length(); i++) {
        if (input[i] < '0' || input[i] > '9') {
            isNumeric = false;
            break;
        }
    }

    if (isNumeric) {
        cout << input << " is a Numeric Constant.\n";
    } else {
        cout << input << " is NOT a Numeric Constant.\n";
    }
}

