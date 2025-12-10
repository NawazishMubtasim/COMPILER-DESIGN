#include <iostream>
#include <string>
#include "numeric_constant.cpp"
#include "operator_check.cpp"
#include "comment_check.cpp"
#include "identifier_check.cpp"
#include "array_operations.cpp"
#include "string_concatenate.cpp"
#include "tokenize.cpp"

using namespace std;

int main() {
    int choice;

    while (true) {
        cout << "Select the operation you want to perform: \n";
        cout << "1. Check if input is Numeric Constant\n";
        cout << "2. Check for Operators\n";
        cout << "3. Check if input is a Comment\n";
        cout << "4. Check if input is a Valid Identifier\n";
        cout << "5. Find Average of Array Elements\n";
        cout << "6. Find Minimum and Maximum of Array Elements\n";
        cout << "7. Concatenate First and Last Name\n";
        cout << "8. Tokenize token.txt\n";   // <-- ADDED

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: checkNumericConstant(); break;
            case 2: checkOperator(); break;
            case 3: checkComment(); break;
            case 4: checkIdentifier(); break;
            case 5: findAverage(); break;
            case 6: findMinMax(); break;
            case 7: concatenateNames(); break;
            case 8: tokenizeFile(); break;    // <-- ADDED
            default: cout << "Invalid choice. Try again.\n";
        }
    }

    return 0;
}
