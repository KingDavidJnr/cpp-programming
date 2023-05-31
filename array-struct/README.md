# Array Data Structure

The Array data structure is a fundamental concept in computer science and programming. It represents a fixed-size collection of elements of the same type, where each element can be accessed using an index. This repository provides a simple implementation of the Array data structure in C++, along with various methods to manipulate and access the elements.

## Features

The Array data structure implementation includes the following methods:

- `pushBack(element)`: Adds an element to the end of the array.
- `get(index)`: Retrieves the element at a specific index.
- `set(index, value)`: Sets the value of an element at a specific index.
- `remove(index)`: Removes the element at a specific index.
- `getSize()`: Returns the current size of the array.
- `getCapacity()`: Returns the maximum capacity of the array.

## Getting Started

To use the Array data structure, follow these steps:

1. Clone the repository or copy the `array.cpp` file to your project directory.

```shell
git clone https://github.com/your-username/array-data-structure.git
```

2. Include the `array.cpp` file in your C++ project.

```cpp
#include "array.cpp"
```

3. Create an instance of the `Array` class with the desired capacity.

```cpp
Array arr(5); // Creates an array with a capacity of 5
```

4. Use the available methods to manipulate and access the elements of the array.

```cpp
arr.pushBack(10);   // Adds 10 to the end of the array
int value = arr.get(0);  // Retrieves the element at index 0
arr.set(1, 20);     // Sets the value of element at index 1 to 20
arr.remove(2);      // Removes the element at index 2
int size = arr.getSize();     // Retrieves the current size of the array
int capacity = arr.getCapacity(); // Retrieves the maximum capacity of the array
```

## Limitations

- The Array data structure implemented in this code has a fixed capacity. Once the capacity is reached, additional elements cannot be added.
- The implementation does not include methods for dynamically resizing the array. If resizing is required, a new array with a larger capacity needs to be created, and the elements from the old array need to be copied to the new array manually.

## Contributing

Contributions to this repository are welcome. If you find any issues or want to add new features, please submit a pull request with your changes.

## License

This project is licensed under the [MIT License](LICENSE).

## Acknowledgements

The implementation of the Array data structure in this repository is for educational purposes and is inspired by various programming resources and tutorials available online.

---