#include <iostream>
using namespace std;

int main() {
    // Hollow Diamond Pattern
    int n = 5;

    // top part
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-1-i; j++) {
            cout << " ";
        }

        cout << "*";
        if (i != 0) {
            for (int k = 0; k < 2*i - 1; k++) {
                cout << " ";
            }
        
            cout << "*";
        }

        cout << endl;
    }
    // bottom part
    for (int i=0; i < n-1; i++) {
        for (int j = 0; j < i+1; j++) {
            cout << " ";
        }

        cout << "*";
        if (i != n-2) {
            for (int k = 0; k < 2*(n-2-i)-1; k++) {
                cout << " ";
            }
        
            cout << "*";
        }

        cout << endl;
    }

}