// Program to find leaf node Count in the Binary Tree
#include <bits/stdc++.h>
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
int countLeafNodes(Node* root) {
if (root == NULL)
        return 0;
if (root->left == NULL && root->right == NULL)
        return 1;
 return countLeafNodes(root->left) +
           countLeafNodes(root->right);
}

int main() {

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    cout << "Leaf Node Count: " << countLeafNodes(root);
    return 0;
}