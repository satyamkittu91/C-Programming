#include <iostream>
#include <vector>
using namespace std;

vector<int> pair_sum(const vector<int>& nums, int target) {
    vector<int> ans;
    int n = nums.size();

    int i = 0, j = n - 1;

    while(i<j){
        int pairSum = nums[i] + nums[j];
        if(pairSum > target) {
            j--; // Decrease
        
        }
        else if(pairSum < target) {
            i++; // Increase
        }
        else {
            ans.push_back(nums[i]);
            ans.push_back(nums[j]);
            return ans;
        }
    }
    return ans; // Return empty vector if no pair found
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6}; // Example array
    int target = 10; // Example target sum
    vector<int> result = pair_sum(nums, target);
    if (result.empty()) {
        cout << "No pairs found." << endl;
    } else {
        cout << "Pairs found: ";
        for (int i = 0; i < result.size(); i += 2) {
            cout << "(" << result[i] << ", " << result[i + 1] << ") ";
        }
        cout << endl;
    }
}