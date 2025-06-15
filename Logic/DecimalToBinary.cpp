
#include <iostream>
using namespace std;

int DecimalToBinary(int Decimal_Number) {
    int Binary_Number = 0, base = 1;
    while (Decimal_Number > 0) {
        int last_digit = Decimal_Number % 2;
        Decimal_Number /= 2;
        Binary_Number += last_digit * base;
        base *= 10;
    }
    return Binary_Number;
}

int main() {
    int Decimal_Number;
    cout << "Enter a decimal number: ";
    cin >> Decimal_Number;
    int Binary_Number = DecimalToBinary(Decimal_Number);
    cout << "Binary equivalent: " << Binary_Number << endl;
    return 0;
}

