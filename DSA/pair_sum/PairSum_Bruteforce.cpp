#include <iostream>
#include <vector>
using namespace std;


vector<int> pair_sum(const vector<int>& nums, int target) {
    vector<int> pairs;
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) { // Start j from i + 1 to avoid duplicates
            if (nums[i] + nums[j] == target) {
                pairs.push_back(i);
                pairs.push_back(j);
            }
        }
    }
    return pairs;
}

int main() {
    int target = 10; // Example target sum
    vector<int> nums = {1, 2, 3, 4, 5, 6}; // Example array

    vector<int> result = pair_sum(nums, target);
    if (result.empty()) {
        cout << "No pairs found." << endl;
    } else {
        cout << "Pairs found at indices: ";
        for (int i = 0; i < result.size(); i += 2) {
            cout << "(" << result[i] << ", " << result[i + 1] << ") ";
        }
        cout << endl;
    }
    return 0;

}