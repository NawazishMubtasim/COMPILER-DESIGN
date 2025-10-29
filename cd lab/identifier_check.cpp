#include <iostream>
#include <string>
using namespace std;

bool isAlphaOrUnderscore(char c) {
    return ( (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || c == '_' );
}

bool isAlphaNumericOrUnderscore(char c) {
    return ( (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9') || c == '_' );
}

void checkIdentifier() {
    string input;
    cout << "Enter an identifier to check: ";
    cin >> input;

    if (input.empty() || !isAlphaOrUnderscore(input[0])) {
        cout << input << " is NOT a valid identifier.\n";
        return;
    }

    for (int i = 1; i < input.length(); i++) {
        if (!isAlphaNumericOrUnderscore(input[i])) {
            cout << input << " is NOT a valid identifier.\n";
            return;
        }
    }

    cout << input << " is a valid identifier.\n";
}

