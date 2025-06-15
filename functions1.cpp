#include <iostream>
using namespace std;

int sumNumbers(int n) {
    int sum = 0;
    for (int i = 1; i < n+1; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Sum of numbers from 1 to " << n << " is: " << sumNumbers(n) << endl;
    return 0;
}