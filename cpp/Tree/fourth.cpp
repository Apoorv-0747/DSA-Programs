// Program to find Node Count in the Binary Tree
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = NULL;
        right = NULL;
    }
};

int countNodes(Node* root) {
   
    if (root == NULL)
        return 0;

   
    int leftCount = countNodes(root->left);
    int rightCount = countNodes(root->right);

    return 1 + leftCount + rightCount;
}

int main() {
    Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    root->right->left = new Node(6);
    root->right->right = new Node(7);

    cout << "Total Nodes: " << countNodes(root);

    return 0;
}