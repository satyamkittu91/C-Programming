#include <iostream>
#include <stdlib.h>
#include <vector>
#include <queue>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int value) : data(value), left(nullptr), right(nullptr) {} // Constructor to initialize data and pointers
};


static int idx = -1;
Node* buildTree(vector <int>& preorder);
void preOrder(Node* root);
void inOrder(Node* root);
void postOrder(Node* root);
void levelOrder(Node* root);


int main(){
    vector <int> preorder = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1}; // Example preorder traversal with -1 as null
    Node* root = buildTree(preorder); // Build the tree from the preorder array
    preOrder(root); // Print the preorder traversal of the tree
    cout << endl;
    levelOrder(root);

    return 0;
}

Node* buildTree(vector <int>& preorder) {
    idx++;
    if (preorder[idx] == -1) return nullptr; // Base case: if the current node is -1, return

    Node* newNode = new Node(preorder[idx]); // Create a new node with the current value
    newNode->left = buildTree(preorder); // Recursively build the left subtree
    newNode->right = buildTree(preorder); // Recursively build the right subtree
    return newNode; // Return the newly created node
}

void preOrder(Node* root) {
    if (root == NULL) return;
    cout << root->data << " ";
    preOrder(root->left); // Traverse left subtree
    preOrder(root->right); // Traverse right subtree
}

void inOrder(Node* root){
    if (root == NULL) return;
    inOrder(root->left); // Traverse left subtree
    cout << root->data << " "; // Visit the node
    inOrder(root->right); // Traverse right subtree
}

void postOrder(Node* root){
    if (root == NULL) return;
    postOrder(root->left); // Traverse left subtree
    postOrder(root->right); // Traverse right subtree
    cout << root->data << " "; // Visit the node
}

void levelOrder(Node* root) {
    if (root == NULL) return; // If the tree is empty, return
    queue<Node*> q;
    q.push(root);
    q.push(NULL); //Level Marker

    while(!q.empty()){
        Node* curr = q.front(); // Get the front node
        q.pop(); // Remove it from the queue
        if (curr==NULL){ 
            if (!q.empty()) {
                cout << endl; // Print a new line if we reach the end of a level
                q.push(NULL);
                continue; // Continue to the next iteration
            }
        }else {
            cout << curr->data << " "; // Print the current node's data

            if(curr->left) q.push(curr->left);
            if(curr->right) q.push(curr->right);
        }
    } 
    cout << endl; 

}