#include <iostream>
using namespace std;

void swap(string &x, string &y);
    

int main() {
    string a = "Hello";
    string b = "World";

    cout << "Before swap: a = " << a << ", b = " << b << endl;

    swap(a, b);

    cout << "After swap: a = " << a << ", b = " << b << endl;

    return 0;
}

void swap(string &x, string &y){
    string temp = x;
    x = y;
    y = temp;
} // passing by reference allows us to modify the original variables directly
// without needing to return them, thus avoiding unnecessary copies.
// passing by value creates a copy of the variable, so changes won't affect the original variable.
