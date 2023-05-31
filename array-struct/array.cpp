#include <iostream>

class Array {
private:
    int* data;       // Pointer to dynamically allocated array
    int size;        // Current size of the array
    int capacity;    // Maximum capacity of the array

public:
    // Constructor
    Array(int capacity) {
        this->size = 0;
        this->capacity = capacity;
        this->data = new int[capacity];
    }

    // Destructor
    ~Array() {
        delete[] data;  // Deallocate memory
    }

    // Add an element at the end of the array
    void pushBack(int element) {
        if (size >= capacity) {
            std::cout << "Array is full. Cannot add more elements.\n";
            return;
        }

        data[size] = element;
        size++;
    }

    // Get the element at a specific index
    int get(int index) {
        if (index < 0 || index >= size) {
            std::cout << "Invalid index.\n";
            return -1;
        }

        return data[index];
    }

    // Set the value of an element at a specific index
    void set(int index, int value) {
        if (index < 0 || index >= size) {
            std::cout << "Invalid index.\n";
            return;
        }

        data[index] = value;
    }

    // Remove the element at a specific index
    void remove(int index) {
        if (index < 0 || index >= size) {
            std::cout << "Invalid index.\n";
            return;
        }

        for (int i = index; i < size - 1; i++) {
            data[i] = data[i + 1];
        }

        size--;
    }

    // Get the current size of the array
    int getSize() {
        return size;
    }

    // Get the maximum capacity of the array
    int getCapacity() {
        return capacity;
    }
};

int main() {
    Array arr(5);

    arr.pushBack(10);
    arr.pushBack(20);
    arr.pushBack(30);
    arr.pushBack(40);
    arr.pushBack(50);

    std::cout << "Size: " << arr.getSize() << std::endl;
    std::cout << "Capacity: " << arr.getCapacity() << std::endl;

    arr.remove(2);

    std::cout << "Size: " << arr.getSize() << std::endl;
    std::cout << "Element at index 2: " << arr.get(2) << std::endl;

    arr.set(1, 100);

    std::cout << "Element at index 1: " << arr.get(1) << std::endl;

    return 0;
}
