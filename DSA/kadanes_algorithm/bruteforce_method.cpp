#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main() {
    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};

    for (int st=0; st <n; st++){
        for (int end=st; end<n; end++){
            for (int i=st; i<=end; i++){
                cout << arr[i];
            }
            cout << " ";
        }
    cout << endl;
    }

    cout << "\nmaximum sum (unoptimized)";
    int maxSum = 0;
    for (int st=0; st <n; st++){
        for (int end=st; end<n; end++){
            int sum = 0;
            for (int i=st; i<=end; i++){
                sum += arr[i];
            }
            if (sum > maxSum) {
                maxSum = sum;
            }
        }
    }
    cout << maxSum << endl;

    cout << "\nmaximum sum (optimized)";
    int currentSum = 0;

    return 0;
}