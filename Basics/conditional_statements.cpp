#include <iostream>
using namespace std;

// int main() {
//     int number;
//     // conditional statements
//     cout << "Enter a number: ";
//     cin >> number;

//     if (number > 0) {
//         cout << "The number is positive." << endl;
//     } else if (number < 0) {
//         cout << "The number is negative." << endl;
//     } else {
//         cout << "The number is zero." << endl;
//     }
// }


int main() {
    char ch;
    cout <<"Enter a character: ";
    cin >> ch;

    if (ch >= 'a' && ch <= 'z') {
        cout << "The character is lowercase." << endl;
    } else if (ch >= 'A' && ch <= 'Z') {
        cout << "The character is uppercase." << endl;
    } else if (ch >= '0' && ch <= '9') {
        cout << "The character is a digit." << endl;
    } else {
        cout << "The character is a special character." << endl;
    }

    // C++ also supports ternary operator for conditional expressions
    // C++ also supports switch-case statements for multiple conditions
}