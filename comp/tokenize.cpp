#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// use your helper functions
bool isNumericConstant(string);
bool isOperatorToken(string);
bool isIdentifierToken(string);
bool isCommentToken(string);

bool isSeparator(char c) {
    string sep = "();{}[],";
    return sep.find(c) != string::npos;
}

void tokenizeFile() {
    ifstream file("token.txt");

    if (!file.is_open()) {
        cout << "Error: Could not open token.txt\n";
        return;
    }

    cout << "\n=== Tokenization Output ===\n";

    string line;
    while (getline(file, line)) {
        string token = "";

        for (char c : line) {

            if (c == ' ' || c == '\t') {
                if (!token.empty()) {
                    if (isCommentToken(token)) cout << token << " --> Comment\n";
                    else if (isNumericConstant(token)) cout << token << " --> Numeric Constant\n";
                    else if (isIdentifierToken(token)) cout << token << " --> Identifier\n";
                    else cout << token << " --> Unknown\n";
                    token = "";
                }
            }
            else if (isOperatorToken(string(1, c)) || isSeparator(c)) {

                if (!token.empty()) {
                    if (isNumericConstant(token)) cout << token << " --> Numeric Constant\n";
                    else if (isIdentifierToken(token)) cout << token << " --> Identifier\n";
                    else cout << token << " --> Unknown\n";
                    token = "";
                }

                if (isOperatorToken(string(1, c)))
                    cout << c << " --> Operator\n";
                else
                    cout << c << " --> Separator\n";
            }
            else {
                token += c;
            }
        }

        if (!token.empty()) {
            if (isNumericConstant(token)) cout << token << " --> Numeric Constant\n";
            else if (isIdentifierToken(token)) cout << token << " --> Identifier\n";
            else cout << token << " --> Unknown\n";
        }
    }

    file.close();
}
