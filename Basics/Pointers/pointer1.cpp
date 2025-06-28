#include <iostream>
#include <stdlib.h>
using namespace std;

int Add(int* a, int* b) { // called function
    // This function takes two pointers to integers and returns their sum.
    cout << "Address of a in Add = " << &a << endl;
    cout << "Value in a of Add = " << a << endl;
    cout << "Value at address stored in a of Add = " << *a << endl;
    int c = *a + *b;
    return c;
}

int main(){
    int a = 2, b = 4;
    cout << "Address of a in main = " << &a << endl;
    //call by reference
    int c = Add(&a, &b); // passing addresses of a and b
    cout << "Sum = " << c << endl;
}