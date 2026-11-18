// Given a Binary search Tree (BST), implement INSERT operation while maintaining BST properties, and display the tree using inorder traversal.
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int value){
        data=value;
        left=NULL;
        right=NULL;
    }
};
class BST{
    public:
    Node* root;
    BST(){
        root=NULL;
    }
    void insert(int value){
        root=insertNode(root,value);
    }
    Node* insertNode(Node* node,int value){
        if(node==NULL){
            return new Node(value);
        }
        if(value<node->data){
            node->left=insertNode(node->left,value);
        }
        else if(value>node->data){
            node->right=insertNode(node->right,value);
        }
        return node;
    }
    void inorderTraversal(Node* node){
        if(node==NULL){
            return;
        }
        inorderTraversal(node->left);
        cout<<node->data<<" ";
        inorderTraversal(node->right);
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

    cout << "Inorder Traversal: ";
    tree.inorderTraversal(tree.root);

    return 0;
}