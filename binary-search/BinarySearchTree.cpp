#include "BinarySearchTree.h"
#include <iostream>

BinarySearchTree::BinarySearchTree() {
    root = nullptr;
}

BinarySearchTree::~BinarySearchTree() {
    // TODO: Implement tree deallocation
}

Node* BinarySearchTree::createNode(int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->left = nullptr;
    newNode->right = nullptr;
    return newNode;
}

void BinarySearchTree::insert(int value) {
    root = insertNode(root, value);
}

Node* BinarySearchTree::insertNode(Node* root, int value) {
    if (root == nullptr) {
        root = createNode(value);
    } else if (value <= root->data) {
        root->left = insertNode(root->left, value);
    } else {
        root->right = insertNode(root->right, value);
    }
    return root;
}

bool BinarySearchTree::search(int value) {
    return searchNode(root, value);
}

bool BinarySearchTree::searchNode(Node* root, int value) {
    if (root == nullptr) {
        return false;
    } else if (root->data == value) {
        return true;
    } else if (value < root->data) {
        return searchNode(root->left, value);
    } else {
        return searchNode(root->right, value);
    }
}

void BinarySearchTree::remove(int value) {
    root = removeNode(root, value);
}

Node* BinarySearchTree::removeNode(Node* root, int value) {
    if (root == nullptr) {
        return nullptr;
    } else if (value < root->data) {
        root->left = removeNode(root->left, value);
    } else if (value > root->data) {
        root->right = removeNode(root->right, value);
    } else {
        // Case 1: No child or one child
        if (root->left == nullptr) {
            Node* temp = root->right;
            delete root;
            return temp;
        } else if (root->right == nullptr) {
            Node* temp = root->left;
            delete root;
            return temp;
        }
        // Case 2: Two children
        Node* minRightNode = findMinNode(root->right);
        root->data = minRightNode->data;
        root->right = removeNode(root->right,


	Node* BinarySearchTree::removeNode(Node* root, int value) {
    // ...
    } else if (root->right == nullptr) {
        Node* temp = root->left;
        delete root;
        return temp;
    }
    // Case 2: Two children
    Node* minRightNode = findMinNode(root->right);
    root->data = minRightNode->data;
    root->right = removeNode(root->right, minRightNode->data);
    }
    return root;
}

Node* BinarySearchTree::findMinNode(Node* root) {
    if (root->left == nullptr) {
        return root;
    } else {
        return findMinNode(root->left);
    }
}

void BinarySearchTree::displayInOrder() {
    displayInOrderNode(root);
    std::cout << std::endl;
}

void BinarySearchTree::displayInOrderNode(Node* root) {
    if (root != nullptr) {
        displayInOrderNode(root->left);
        std::cout << root->data << " ";
        displayInOrderNode(root->right);
    }
}

void BinarySearchTree::displayPreOrder() {
    displayPreOrderNode(root);
    std::cout << std::endl;
}

void BinarySearchTree::displayPreOrderNode(Node* root) {
    if (root != nullptr) {
        std::cout << root->data << " ";
        displayPreOrderNode(root->left);
        displayPreOrderNode(root->right);
    }
}

void BinarySearchTree::displayPostOrder() {
    displayPostOrderNode(root);
    std::cout << std::endl;
}

void BinarySearchTree::displayPostOrderNode(Node* root) {
    if (root != nullptr) {
        displayPostOrderNode(root->left);
        displayPostOrderNode(root->right);
        std::cout << root->data << " ";
    }
}
