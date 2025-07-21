#include <iostream>
#include <algorithm>
using namespace std;

int binarySearchNum(int arr[], int size, int x){

    int counter = 0;
    int ind = size/2;
    while (ind >= 1 && counter != 2) {
        if (counter == 1) ind--; // Ensure we don't go below index 0
        if (arr[ind] == x) return ind;
        else if (arr[ind] < x) ind += ind/2;
        else if (ind > (size-1)) counter = 2; // If index exceeds size, element not found
        else if (ind <= 1) counter++;
        else ind -= ind/2;
    }
    cout << "Element not found in the array.\n";
    return -1; // Element not found

}

int main(){

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // Example array`
    //int arr[] = {1, 3, 5, 7, 9, 11, 13};
    int x = 1; // Element to search for
    int result = binarySearchNum(arr, sizeof(arr)/sizeof(arr[0]), x);
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else NULL;

    return 0;
}