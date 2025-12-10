#include <iostream>
using namespace std;

void concatenateNames() {
    string firstName, lastName;
    cout << "Enter your first name: ";
    cin >> firstName;
    cout << "Enter your last name: ";
    cin >> lastName;

    cout << "Full name: " << firstName + " " + lastName << endl;
}

