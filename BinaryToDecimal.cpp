#include <iostream>
using namespace std;

int BinaryToDecimal(int Binary_Number) {
    int Decimal_Number = 0, base = 1;
    while (Binary_Number > 0) {
        int last_digit = Binary_Number %10;
        Binary_Number /= 10;
        Decimal_Number += last_digit * base;
        base *= 2;
    }
    return Decimal_Number;
}

int main() {
    int Binary_Number;
    cout << "Enter a binary number: ";
    cin >> Binary_Number;
    int Decimal_Number = BinaryToDecimal(Binary_Number);
    cout << "Decimal equivalent: " << Decimal_Number << endl;
    return 0;
}
// This code converts a binary number to its decimal equivalent.