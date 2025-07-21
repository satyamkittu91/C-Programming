#include <iostream>
#include <queue>
using namespace std;

void printQueueElements(queue<int> q) {
    while (!q.empty()) {
        cout << q.front() << " "; // Print the front element
        q.pop(); // Remove the front element
    }
}

int main(){
    queue<int> q; // Create a queue of integers
    q.push(1); // Push 1 onto the queue
    q.push(2); // Push 2 onto the queue
    q.push(3); // Push 3 onto the queue

    cout << "Size of queue: " << q.size() << endl; // Output: 3
    cout << "Front element of queue: " << q.front() << endl; // Output
    cout << "Last element of queue: " << q.back() << endl; // Output: 3

    q.pop(); // Pop the front element (1) from the queue
    cout << "Front element after pop: " << q.front() << endl; // Output

    printQueueElements(q); // Print remaining elements in the queue: 2 3

    return 0;
}