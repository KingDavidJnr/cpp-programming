#include <iostream>
#include <vector>

int main() {
    // create a vector to use as an example dynamic array
    std::vector<int> arr = {1, 2, 3, 4, 5};

    // print the original array
    std::cout << "Original array: ";
    for (int i = 0; i < arr.size(); i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // push a new element onto the end of the array
    arr.push_back(6);
    std::cout << "After push_back: ";
    for (int i = 0; i < arr.size(); i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // remove the last element from the array
    arr.pop_back();
    std::cout << "After pop_back: ";
    for (int i = 0; i < arr.size(); i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // insert a new element at a specific position in the array
    arr.insert(arr.begin() + 2, 7);
    std::cout << "After insert: ";
    for (int i = 0; i < arr.size(); i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // remove a range of elements from the array
    arr.erase(arr.begin() + 1, arr.begin() + 3);
    std::cout << "After erase: ";
    for (int i = 0; i < arr.size(); i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // get the first element of the array
    int first = arr.front();
    std::cout << "First element: " << first << std::endl;

    // get the last element of the array
    int last = arr.back();
    std::cout << "Last element: " << last << std::endl;

    // get the element at a specific position in the array
    int pos = 2;
    int val = arr.at(pos);
    std::cout << "Element at position " << pos << ": " << val << std::endl;

    // get the size of the array
    int size = arr.size();
    std::cout << "Array size: " << size << std::endl;

    // clear the array
    arr.clear();
    std::cout << "After clear: ";
    for (int i = 0; i < arr.size(); i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
