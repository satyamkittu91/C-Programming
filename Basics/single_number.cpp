#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int>& nums) {
    int ans = 0;
    for (int val : nums) {
        ans = ans ^ val; // XOR operation
    }
    return ans; // The result is the single number
}