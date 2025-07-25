#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;

struct Node {
    int data;
    Node* next; // next pointer to the next node in the list
    // Node(int value, Node* nextNode = nullptr) : data(value), next(nextNode) {} // Constructor to initialize data and next pointer
    // Node(int value) : data(value), next(nullptr) {} // Constructor to initialize data
};


void insertAtHead(Node*& head, int value) {
    Node* newNode = new Node{value, head}; // create and link, it took the head of the list
    // newNode->data = value; // Assign data to the new node
    head = newNode; // move head, cause this is the new head now.
    return;
}

void insertAtTail(Node*& head, int value) { // Node*& head is a reference to the head pointer
    Node* newNode = new Node;
    newNode->data = value; // create a new node and assign data to it
    newNode->next = nullptr; // Initialize next pointer to nullptr
    // newNode->data = value; // Assign data to the new node
    if (head == nullptr) {
        head = newNode; // If the list is empty, set head to the new node
        return;
    }

    Node* temp = head; // Start from the head

    while(temp->next) temp = temp->next; // Traverse to the end of the list
    temp->next = newNode; // Link the new node at the end
    return;
}

void deleteNode(Node*& head, int value) {
    if (!head) return; // If the list is empty, do nothing
    if (head->data == value) { // If the head node is to be deleted
                                // head->data is just shorthand for (*head).data
        Node* temp = head; // Store the head node
        head = head->next; // Move head to the next node
        delete temp; // Delete the old head node
        return;
    }

    while(true) {
        head = head->next; // Move to the next node
        if (!head) return; // If we reach the end of the list, do nothing
        if (head->data == value) { // If the current node's data matches the value to be deleted
            Node* temp = head; // Store the node to be deleted
            head->next = head->next->next; // Link the previous node to the next node
            delete temp; // Delete the node
            return;
        };
    };


}

void printLinkedList(Node* head) {
    Node* temp = head; // Start from the head
    while (temp != nullptr) { // Traverse the list until the end
        cout << temp->data << " "; // Print the data of the current node
        temp = temp->next; // Move to the next node
    }
    cout << endl;
    return;
}

void ReversePrint(struct Node* head) {
    if (head == nullptr) return; // Base case: if the list is empty, do nothing
    ReversePrint(head->next); // Recursive call to print the next node
    cout << head->data << " "; // Print the current node's data after returning from recursion
}

void reverseList(Node* head){
    Node* prev = nullptr; // Initialize previous pointer to nullptr
    Node* current = head; // Start from the head

    while(current) {
        Node* nextNode = current->next; // Store the next node
    }
}

void printListLocation(Node* head) {
    Node* current = head;
    while(current->next){
        cout << "Node data: " << current->data << ", Location: " << current << endl;;
    }
}

int main() {

    // Node* head = new Node; // Create the head node
    // head->data = 1; // Assign data to the head node
    // head->next = nullptr; // Initialize next pointer to nullptr

    Node* A = nullptr; // Initialize head to nullptr

    for (int i = 0; i < 10; i++) {
        insertAtTail(A, i); // Insert values from 0 to 9 at the tail of the list
    };

    printLinkedList(A);
    cout << endl;
    ReversePrint(A);
}