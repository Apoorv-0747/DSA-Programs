// Given a Binary search Tree (BST), implement SEARCH operation while maintaining BST properties.

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

class BST {
private:
    Node* root;

    bool search(Node* temp, int key) {
        if (temp == NULL)
            return false;

        if (temp->data == key)
            return true;

        if (key < temp->data)
            return search(temp->left, key);
        else
            return search(temp->right, key);
    }

public:
    BST() {
        root = NULL;
    }

    void insert(int value) {
        Node* newNode = new Node(value);

        if (root == NULL) {
            root = newNode;
            return;
        }

        Node* temp = root;

        while (true) {
            if (value < temp->data) {
                if (temp->left == NULL) {
                    temp->left = newNode;
                    return;
                }
                temp = temp->left;
            }
            else if (value > temp->data) {
                if (temp->right == NULL) {
                    temp->right = newNode;
                    return;
                }
                temp = temp->right;
            }
            else {
                delete newNode;
                return;
            }
        }
    }

    bool search(int key) {
        return search(root, key);
    }
};

int main() {
    BST tree;

    tree.insert(50);
    tree.insert(30);
    tree.insert(70);
    tree.insert(20);
    tree.insert(40);
    tree.insert(60);
    tree.insert(80);

    int key;
    cout << "Enter element to search: ";
    cin >> key;

    if (tree.search(key))
        cout << "Element Found";
    else
        cout << "Element Not Found";

    return 0;
}
