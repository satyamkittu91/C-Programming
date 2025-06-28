#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int KadanesAlgorithm(const vector<int>& arr) {
    int max_so_far = INT_MIN; // maximum sum found so far
    int current_max = 0; // current subarray sum
    for (int x : arr) {
        current_max += x;

        if (current_max > max_so_far) {
            max_so_far = current_max;
        }
        if (current_max < 0) {
            current_max = 0; // reset current sum if it drops below zero
        }
    }
    return max_so_far; // return the maximum sum found
}

int main() {
    vector<int> arr = {-2, -3, 4, 1, -2, 1, 5, -3};
    cout << "Maximum Sum = " << KadanesAlgorithm(arr);
    return 0;
}