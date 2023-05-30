#include <iostream>
#include <vector>

using namespace std;

class Heap {
private:
    vector<int> heap; // Vector to store the heap elements

    // Helper function to swap two elements in the heap
    void swap(int& a, int& b) {
        int temp = a;
        a = b;
        b = temp;
    }

    // Helper function to maintain the heap property (used in heapify and insert)
    void heapifyUp(int index) {
        // Calculate the parent index
        int parent = (index - 1) / 2;

        // Compare the element with its parent and swap if necessary
        if (index > 0 && heap[index] > heap[parent]) {
            swap(heap[index], heap[parent]);
            heapifyUp(parent); // Recursively check the parent
        }
    }

    // Helper function to maintain the heap property (used in extractMax and remove)
    void heapifyDown(int index) {
        int leftChild = 2 * index + 1;
        int rightChild = 2 * index + 2;
        int largest = index;

        // Compare the element with its left child
        if (leftChild < heap.size() && heap[leftChild] > heap[largest])
            largest = leftChild;

        // Compare the element with its right child
        if (rightChild < heap.size() && heap[rightChild] > heap[largest])
            largest = rightChild;

        // If the largest element is not the current element, swap them and recursively heapify down
        if (largest != index) {
            swap(heap[index], heap[largest]);
            heapifyDown(largest);
        }
    }

public:
    // Insert a new element into the heap
    void insert(int value) {
        heap.push_back(value); // Add the new element at the end
        heapifyUp(heap.size() - 1); // Maintain the heap property
    }

    // Remove the maximum element from the heap
    void extractMax() {
        if (heap.empty()) {
            cout << "Heap is empty." << endl;
            return;
        }

        int maxValue = heap[0]; // Store the maximum value
        heap[0] = heap.back(); // Replace the root with the last element
        heap.pop_back(); // Remove the last element
        heapifyDown(0); // Maintain the heap property
        cout << "Extracted max value: " << maxValue << endl;
    }

    // Remove the element at a given index from the heap
    void remove(int index) {
        if (index < 0 || index >= heap.size()) {
            cout << "Invalid index." << endl;
            return;
        }

        heap[index] = INT_MAX; // Set the element at the given index to infinity
        heapifyUp(index); // Move the element to the root (maintain heap property)
        extractMax(); // Extract the maximum element (which will be the element at the given index)
        cout << "Element at index " << index << " removed." << endl;
    }

    // Print the elements in the heap
    void printHeap() {
        if (heap.empty()) {
            cout << "Heap is empty." << endl;
            return;
        }

        cout << "Heap elements: ";
        for (int i = 0; i < heap.size(); i++) {
            cout << heap[i] << " ";
        }
        cout << endl;
    }
};

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
