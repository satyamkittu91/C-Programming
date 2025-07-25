#include <iostream>
using namespace std;

int binarySearchNum(int arr[], int size, int x);

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // Example array
    int x = 8; // Element to search for

    cout << binarySearchNum(arr, sizeof(arr)/sizeof(arr[0]), x) << endl;
    return 0;
}

int binarySearchNum(int arr[], int size, int x) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = left + (right - left)/2;
        if (arr[mid] == x) return mid;
        else if (arr[mid] > x) right = mid - 1;
        else left = mid + 1;
    }
    return -1; // Element not found
}


