#include <iostream>
#include <vector>
#include <climits>
using namespace std;

vector<int> best_sum(vector<int> arr, int k);

int main() {
    vector<int> arr = {2, 1, 5, 1, 3, 2};
    int k = 3;

    vector<int> result = best_sum(arr, k);
    cout << "Best sum subarray of size " << k << ": ";
    for (int num : result) {
        cout << num << " ";
    }
    

    return 0;
}

vector<int> best_sum(vector<int> arr, int k) {
    vector<int> result;
    if (k>arr.size()) return result;
    int total = 0; // Initialize total to 0
    for (int i = 0; i < k; i++){
        total += arr[i]; // Calculate the sum of the first k elements  
    }
    int max_sum = total;
    int start_index = 0; // Start index of the best sum subarray
    for (int i = k; i < arr.size(); i++) {
        total += arr[i] - arr[i-k]; // Slide the window by adding the next element and removing the first element of the previous window
        if (total > max_sum) {
            max_sum = total;
            start_index = i - (k - 1); // Update the start index of the best sum subarray 
        } 
    }

    for (int i = start_index; i < start_index + k; i++) {
        result.push_back(arr[i]); // Fill the result vector with the best sum subarray
    }
    return result; // Return the vector containing the best sum subarray of size k   
}