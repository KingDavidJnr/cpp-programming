#ifndef HEAP_H
#define HEAP_H

#include <iostream>
#include <vector>

class Heap {
private:
    std::vector<int> heap; // Vector to store the heap elements

    // Helper function to swap two elements in the heap
    void swap(int& a, int& b);

    // Helper function to maintain the heap property (used in heapify and insert)
    void heapifyUp(int index);

    // Helper function to maintain the heap property (used in extractMax and remove)
    void heapifyDown(int index);

public:
    /**
     * @brief Inserts a new element into the heap.
     * 
     * @param value The value to be inserted.
     */
    void insert(int value);

    /**
     * @brief Removes and returns the maximum element from the heap.
     */
    void extractMax();

    /**
     * @brief Removes the element at the given index from the heap.
     * 
     * @param index The index of the element to be removed.
     */
    void remove(int index);

    /**
     * @brief Prints the elements in the heap.
     */
    void printHeap();
};

#endif  // HEAP_H
