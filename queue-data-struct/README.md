# Queue Data Structure Implementation in C++

This is a C++ implementation of a queue data structure using a linked list. It provides basic operations to enqueue, dequeue, and peek elements in a First-In-First-Out (FIFO) manner.

## Table of Contents

- [Features](#features)
- [Prerequisites](#prerequisites)
- [Installation](#installation)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)

## Features

- Enqueue: Adds an element to the rear of the queue.
- Dequeue: Removes and returns the element from the front of the queue.
- Peek: Retrieves the element at the front of the queue without removing it.
- Check if the queue is empty.

## Prerequisites

- C++ compiler (supporting C++11 or higher)
- Standard Library

## Installation

1. Clone the repository or download the `queue.cpp` file.
2. Compile the `queue.cpp` file using a C++ compiler of your choice.

   Example: `g++ -std=c++11 queue.cpp -o queue`

## Usage

1. Include the `queue.cpp` file in your C++ project.

   ```cpp
   #include "queue.cpp"
   ```

2. Create an instance of the `Queue` class.

   ```cpp
   Queue queue;
   ```

3. Enqueue elements to the queue using the `enqueue()` method.

   ```cpp
   queue.enqueue(10);
   queue.enqueue(20);
   queue.enqueue(30);
   ```

4. Dequeue an element from the queue using the `dequeue()` method.

   ```cpp
   int dequeuedElement = queue.dequeue();
   ```

5. Peek at the front element of the queue without removing it using the `peek()` method.

   ```cpp
   int frontElement = queue.peek();
   ```

6. Check if the queue is empty using the `isEmpty()` method.

   ```cpp
   if (queue.isEmpty()) {
       // Handle empty queue scenario
   }
   ```

## Contributing

Contributions are welcome! If you find any issues or have suggestions for improvements, please feel free to open an issue or submit a pull request.

## License

This project is licensed under the [MIT License](LICENSE).

---