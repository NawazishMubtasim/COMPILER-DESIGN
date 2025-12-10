#include <iostream>
#include <string>
using namespace std;

void checkComment() {
    string input;
    cout << "Enter a line of code to check if it's a comment: ";
    cin.ignore();
    getline(cin, input);

    // Check for single-line comment
    if (input.substr(0, 2) == "//") {
        cout << "This is a single-line comment.\n";
    }
    // Check for multi-line comment
    else if (input.substr(0, 2) == "/*" && input.substr(input.length() - 2, 2) == "*/") {
        cout << "This is a multi-line comment.\n";
    } else {
        cout << "This is NOT a comment.\n";
    }

}

bool isCommentToken(string input) {
    if (input.substr(0, 2) == "//") return true;
    if (input.substr(0, 2) == "/*" && input.substr(input.size() - 2) == "*/") return true;
    return false;
}
