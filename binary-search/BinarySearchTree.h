#ifndef BINARYSEARCHTREE_H
#define BINARYSEARCHTREE_H

struct Node {
    int data;
    Node* left;
    Node* right;
};

class BinarySearchTree {
private:
    Node* root;

public:
    BinarySearchTree();
    ~BinarySearchTree();

    void insert(int value);
    bool search(int value);
    void remove(int value);
    void displayInOrder();
    void displayPreOrder();
    void displayPostOrder();

private:
    Node* createNode(int value);
    Node* insertNode(Node* root, int value);
    bool searchNode(Node* root, int value);
    Node* removeNode(Node* root, int value);
    Node* findMinNode(Node* root);
    void displayInOrderNode(Node* root);
    void displayPreOrderNode(Node* root);
    void displayPostOrderNode(Node* root);
};

#endif
