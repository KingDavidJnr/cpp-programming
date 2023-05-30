# Heap Data Structure

This repository contains a C++ implementation of a heap data structure. The heap is a binary tree-based data structure that satisfies the heap property. In this implementation, we assume a max heap, where the maximum element is at the root.

## Contents

- [Introduction](#introduction)
- [Usage](#usage)
- [Methods](#methods)
- [Example](#example)
- [Contributing](#contributing)
- [License](#license)

## Introduction

The heap data structure is commonly used in various algorithms and applications, such as priority queues and sorting algorithms. It allows efficient insertion, deletion, and retrieval of the maximum (or minimum) element.

This C++ implementation provides the basic functionality of a heap, including inserting elements, extracting the maximum element, removing an element at a specific index, and printing the heap elements.

## Usage

To use the heap data structure in your C++ code, follow these steps:

1. Copy the `heap.cpp` and `heap.h` files to your project directory.
2. Include the `heap.h` header file in your C++ code: `#include "heap.h"`.
3. Create an instance of the `Heap` class: `Heap myHeap;`.
4. Use the available methods to perform operations on the heap.

## Methods

The `Heap` class provides the following methods:

- `void insert(int value)`: Inserts a new element into the heap.
- `void extractMax()`: Removes and returns the maximum element from the heap.
- `void remove(int index)`: Removes the element at the given index from the heap.
- `void printHeap()`: Prints the elements in the heap.

## Example

Here's an example demonstrating the usage of the heap data structure:

```cpp
#include <iostream>
#include "heap.h"

int main() {
    Heap myHeap;
    myHeap.insert(10);
    myHeap.insert(15);
    myHeap.insert(30);
    myHeap.insert(20);
    myHeap.printHeap(); // Output: Heap elements: 30 20 10 15

    myHeap.extractMax(); // Output: Extracted max value: 30
    myHeap.printHeap(); // Output: Heap elements: 20 15 10

    myHeap.remove(1); // Output: Extracted max value: 15\nElement at index 1 removed.
    myHeap.printHeap(); // Output: Heap elements: 20 10

    myHeap.insert(25);
    myHeap.printHeap(); // Output: Heap elements: 25 20 10

    return 0;
}
```

In this example, we create a heap object, insert elements into it, extract the maximum element, remove an element at a specific index, and print the heap elements.

## Contributing

Contributions to this repository are welcome! If you find any issues or want to add new features, please submit a pull request.

## License

This code is licensed under the [MIT License](LICENSE). Feel free to use and modify it according to your needs.

---