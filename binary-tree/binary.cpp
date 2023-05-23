#include <iostream>

// Node class represents individual nodes in the binary tree
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

// Binary tree class contains methods to manipulate the binary tree
class BinaryTree {
private:
    Node* root;

    // Helper method for inserting a node recursively
    Node* insertNode(Node* currentNode, int value) {
        if (currentNode == nullptr) {
            // Create a new node if the current node is null
            return new Node(value);
        } else {
            // Recursively insert the node in the left or right subtree
            if (value <= currentNode->data) {
                currentNode->left = insertNode(currentNode->left, value);
            } else {
                currentNode->right = insertNode(currentNode->right, value);
            }
            return currentNode;
        }
    }

    // Helper method for searching a value recursively
    bool searchValue(Node* currentNode, int value) {
        if (currentNode == nullptr) {
            // Reached a leaf node, value not found
            return false;
        } else if (currentNode->data == value) {
            // Found the value in the current node
            return true;
        } else if (value < currentNode->data) {
            // Recursively search in the left subtree
            return searchValue(currentNode->left, value);
        } else {
            // Recursively search in the right subtree
            return searchValue(currentNode->right, value);
        }
    }

    // Helper method for traversing the tree in pre-order recursively
    void preOrderTraversal(Node* currentNode) {
        if (currentNode != nullptr) {
            std::cout << currentNode->data << " "; // Process the node
            preOrderTraversal(currentNode->left); // Recurse on the left subtree
            preOrderTraversal(currentNode->right); // Recurse on the right subtree
        }
    }

    // Helper method for traversing the tree in in-order recursively
    void inOrderTraversal(Node* currentNode) {
        if (currentNode != nullptr) {
            inOrderTraversal(currentNode->left); // Recurse on the left subtree
            std::cout << currentNode->data << " "; // Process the node
            inOrderTraversal(currentNode->right); // Recurse on the right subtree
        }
    }

    // Helper method for traversing the tree in post-order recursively
    void postOrderTraversal(Node* currentNode) {
        if (currentNode != nullptr) {
            postOrderTraversal(currentNode->left); // Recurse on the left subtree
            postOrderTraversal(currentNode->right); // Recurse on the right subtree
            std::cout << currentNode->data << " "; // Process the node
        }
    }

public:
    BinaryTree() {
        root = nullptr;
    }

    // Method to insert a value into the binary tree
    void insert(int value) {
        root = insertNode(root, value);
    }

    // Method to search for a value in the binary tree
    bool search(int value) {
        return searchValue(root, value);
    }

    // Method to perform a pre-order traversal of the binary tree
    void preOrder() {
        std::cout << "Pre-order traversal: ";
        preOrderTraversal(root);
        std::cout << std::endl;
    }

    // Method to perform an in-order traversal of the binary tree
    void inOrder() {
                std::cout << "In-order traversal: ";
        inOrderTraversal(root);
        std::cout << std::endl;
    }

    // Method to perform a post-order traversal of the binary tree
    void postOrder() {
        std::cout << "Post-order traversal: ";
        postOrderTraversal(root);
        std::cout << std::endl;
    }
};

int main() {
    BinaryTree tree;

    // Insert values into the binary tree
    tree.insert(5);
    tree.insert(3);
    tree.insert(7);
    tree.insert(2);
    tree.insert(4);
    tree.insert(6);
    tree.insert(8);

    // Search for a value in the binary tree
    int value = 6;
    if (tree.search(value)) {
        std::cout << value << " is found in the binary tree." << std::endl;
    } else {
        std::cout << value << " is not found in the binary tree." << std::endl;
    }

    // Perform tree traversals
    tree.preOrder();
    tree.inOrder();
    tree.postOrder();

    return 0;
}
