#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){
    map<string, int> m1; // empty map of string to int
    m1["one"] = 1; // Adds key-value pair "one":
    m1["two"] = 2; // Adds key-value pair "two": 2
    m1["three"] = 3; // Adds key-value pair "three":
    m1["four"] = 4; // Adds key-value pair "four": 4
    m1["five"] = 5; // Adds key-value pair "five": 5

    map<string, int>::iterator it = m1.begin();
    while (it != m1.end()) {
        cout << it->first << " : " << it->second << endl; // Output: one : 1, two : 2, three : 3, four : 4, five : 5
        ++it;
    }

    return 0; // Placeholder main function
}