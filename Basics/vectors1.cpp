#include <iostream>
#include <vector>
using namespace std;



int main(){

    // declaring a vector of integers
    vector<int> v; // empty vector of integers
    vector<int> v1 = {1, 2, 3}; // empty vector of integers equal to 0;

    // Vector Functions
    cout << "Size of v1: " << v1.size() << endl; // Output: 3
    cout << "Capacity of v1: " << v1.capacity() << endl; // Output: 3
    cout << "Max size of v1: " << v1.max_size() << endl; // Output: 4611686018427387903
    cout << "Is v1 empty? " << (v1.empty() ? "Yes" : "No") << endl; // Output: No
    cout << "vec[0] = " << v1[0] << endl; // Undefined behavior, as v1 is empty
 
    cout << "push_back(4) on v1" << endl;
    v1.push_back(4); // Adds 4 to the end of v1
    cout << "v1[3]" << v1[3] << endl; // Output: 4
    cout << "Size of v1: " << v1.size() << endl; // Output: 4
    cout << "Capacity of v1: " << v1.capacity() << endl; // Output: 6

    cout << "pop_back" << endl;
    v1.pop_back(); // Removes the last element (4) from v1
    cout << "size of v1: " << v1.size() << endl; // Output: 3

    return 0;
}