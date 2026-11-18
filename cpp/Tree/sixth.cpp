// Program to find count of nodes having 1 child
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

int countOneChild(Node* root) {

    if (root == NULL)
        return 0;

    int count = 0;

    if ((root->left == NULL && root->right != NULL) ||
        (root->left != NULL && root->right == NULL)) {
        count = 1;
    }

    return count + countOneChild(root->left)
                 + countOneChild(root->right);
}

int main() {

    Node* root = new Node(1);

    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->right->right = new Node(5);

    root->left->left->left = new Node(6);

    cout << "Nodes having exactly 1 child: "
         << countOneChild(root);

    return 0;
}