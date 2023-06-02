# Binary Search Tree (BST) Implementation

This is a C++ implementation of a Binary Search Tree (BST) data structure. A BST is a binary tree where each node's left child has a value less than the node's value, and the right child has a value greater than or equal to the node's value. The implementation provides methods for inserting elements, searching for elements, removing elements, and displaying the tree in different traversal orders.

## Usage

To use the Binary Search Tree implementation in your C++ program, follow these steps:

1. Include the `BinarySearchTree.h` header file in your C++ program:

   ```cpp
   #include "BinarySearchTree.h"
   ```

2. Create an instance of the `BinarySearchTree` class:

   ```cpp
   BinarySearchTree bst;
   ```

3. Perform operations on the BST using the available methods:

   - Insert elements:

     ```cpp
     bst.insert(10);
     bst.insert(5);
     bst.insert(15);
     ```

   - Search for elements:

     ```cpp
     bool found = bst.search(10);
     ```

   - Remove elements:

     ```cpp
     bst.remove(5);
     ```

   - Display the tree in different traversal orders:

     ```cpp
     bst.displayInOrder();
     bst.displayPreOrder();
     bst.displayPostOrder();
     ```

4. Remember to handle the deallocation of the tree when you're done using it:

   ```cpp
   // Call the destructor explicitly if necessary
   bst.~BinarySearchTree();
   ```

## File Structure

The implementation is divided into two files:

- `BinarySearchTree.h`: This is the header file that contains the class definition and method declarations for the `BinarySearchTree` class.

- `BinarySearchTree.cpp`: This file contains the method implementations for the `BinarySearchTree` class.

## Method Overview

The `BinarySearchTree` class provides the following methods:

- `BinarySearchTree()`: Constructor for creating an empty binary search tree.

- `~BinarySearchTree()`: Destructor for deallocating the binary search tree.

- `void insert(int value)`: Inserts an element with the specified value into the binary search tree.

- `bool search(int value)`: Searches for an element with the specified value in the binary search tree and returns `true` if found, otherwise `false`.

- `void remove(int value)`: Removes the element with the specified value from the binary search tree, if present.

- `void displayInOrder()`: Displays the elements of the binary search tree in the in-order traversal order.

- `void displayPreOrder()`: Displays the elements of the binary search tree in the pre-order traversal order.

- `void displayPostOrder()`: Displays the elements of the binary search tree in the post-order traversal order.

## Contribution

Contributions to this Binary Search Tree implementation are welcome! If you find any bugs, have suggestions for improvements, or want to add new features, feel free to open an issue or submit a pull request.

## License

This Binary Search Tree implementation is licensed under the [MIT License](https://opensource.org/licenses/MIT). You can freely use, modify, and distribute the code in accordance with the terms of the license.

---