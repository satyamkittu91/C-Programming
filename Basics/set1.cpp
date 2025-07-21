#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s;

    //Insert
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(4); // Duplicate, will not be added

    // check if exists
    if (s.find(3) != s.end()) {
        cout << "3 is present in the set." << endl; // Output: 3 is present in the set.
    } else {
        cout << "3 is not present in the set." << endl;
    }

    // Iterate through the set
    for (int x : s) {
        cout << x << " "; // Output: 1 2 3 4 5
    }
    cout << endl;

    // Size of the set
    cout << "Size of the set: " << s.size() << endl; // Output: Size of the set: 5

    // erase an element
    s.erase(2); // Removes 2 from the set
    cout << "After erasing 2, size of the set: " << s.size() << endl; // Output: After erasing 2, size of the set: 4
    
    // Print a specific value from the set
    int value = 3;
    if (s.find(value) != s.end()) {
        cout << "Value found: " << value << endl;
    } else {
        cout << "Value not found: " << value << endl;
    }
    
    // Clear the set
    s.clear();
}