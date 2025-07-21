#include <iostream>
#include <stack>
using namespace std;

void printStackElements(stack<int> s) {
    while (!s.empty()) {
        cout << s.top() << " "; // Print the top element
        s.pop(); // Remove the top element
    }
}

int main() {    // declaring a stack of integers
    stack<int> s; // Create a stack of integers
    // empty, size, push, pop, top, and swap functions
    cout << "Is stack empty? " << (s.empty() ? "Yes" : "No") << endl; // Output: Yes
    cout << "Size of stack: " << s.size() << endl; // Output: 0
    s.push(1); // Push 1 onto the stack
    s.push(2); // Push 2 onto the stack
    s.push(3); // Push 3 onto the stack
    cout << "Size of stack after pushing 3 elements: " << s.size() << endl; // Output: 3
    cout << "Top element of stack: " << s.top() << endl; // Output: 3
    s.pop(); // Pop the top element (3) from the stack
    cout << "Top element after pop: " << s.top() << endl; // Output: 2
    cout << "Size of stack after pop: " << s.size() << endl; // Output: 2

    // Swapping two stacks
    stack<int> s2; // Create another stack
    s2.push(4); // Push 4 onto the second stack
    s2.push(5); // Push 5 onto the second stack
    cout << "Size of second stack: " << s2.size() << endl; // Output: 2
    s.swap(s2); // Swap the contents of the two stacks
    cout << "Size of first stack after swap: " << s.size() << endl; // Output: 2
    cout << "Top element of first stack after swap: " << s.top() << endl; // Output: 5
    cout << "Size of second stack after swap: " << s2.size() << endl; // Output: 3
    cout << "Top element of second stack after swap: " << s2.top() << endl; // Output: 3

    return 0;
}