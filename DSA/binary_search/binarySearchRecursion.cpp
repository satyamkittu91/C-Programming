#include <iostream>
using namespace std;

int binarySearchNum(int arr[], int left, int right, int x);

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // Example array
    int x = 8; // Element to search for

    cout << binarySearchNum(arr, 0, (sizeof(arr)/sizeof(arr[0])) - 1, x) << endl;
    return 0;
}

int binarySearchNum(int arr[], int left, int right, int x) {
    if (left>right) return -1; // Element not found

    int mid = left + (right - left)/2;

    if (arr[mid] == x) return mid;
    else if (arr[mid] > x) return binarySearchNum(arr, left, mid - 1, x);
    else return binarySearchNum(arr, mid + 1, right, x);

}