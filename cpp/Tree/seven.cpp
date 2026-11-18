// Program to find count of nodes having 2 child
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

int countTwoChildren(Node* root) {

    if (root == NULL)
        return 0;

    int count = 0;

    // Check if both children exist
    if (root->left != NULL && root->right != NULL) {
        count = 1;
    }

    return count + countTwoChildren(root->left)
                 + countTwoChildren(root->right);
}

int main() {

    Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    root->right->left = new Node(6);
    root->right->right = new Node(7);

    cout << "Nodes having 2 children: "
         << countTwoChildren(root);

    return 0;
}