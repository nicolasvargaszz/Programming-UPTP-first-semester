#include<iostream>

using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
    // Constructor to initialize a new node
    Node(int value): data(value), left(nullptr), right(nullptr) {} 
};

// Function to insert a new node in the binary search tree
Node* insert(Node* root, int value)
{
    if(root == nullptr)
    {
        return new Node(value);
    }
    if(value < root->data)
    {
        root->left = insert(root->left, value);
    }
    else if(value > root->data)
    {
        root->right = insert(root->right, value);
    }
    // Add this line to properly return the updated root node
    return root;
}
// Function to display the tree.

void display(Node* root)
{
    if(root == nullptr)
        return;
    // In-order traversal to display the tree
    display(root->left);
    cout << root->data << " ";
    display(root->right);
}

int main()
{
    Node* root = nullptr; // Start with an empty tree
    // Insert some values into the tree
    root = insert(root, 5);
    root = insert(root, 3);
    root = insert(root, 7);
    root = insert(root, 2);
    root = insert(root, 4);
    //display the tree
    cout << "In-order traversal of the binary search tree: ";
    display(root);
    cout << endl;
    return 0;
}