#include <iostream>

// Node structure for representing individual elements in the queue
struct Node {
    int data;
    Node* next;

    // Constructor to initialize a node with given data
    Node(int value) : data(value), next(nullptr) {}
};

// Queue class implementing the queue data structure
class Queue {
private:
    Node* front;  // Pointer to the front of the queue
    Node* rear;   // Pointer to the rear of the queue

public:
    // Constructor to initialize an empty queue
    Queue() : front(nullptr), rear(nullptr) {}

    // Destructor to deallocate memory
    ~Queue() {
        // Traverse the queue and delete all nodes
        while (front != nullptr) {
            Node* temp = front;
            front = front->next;
            delete temp;
        }
    }

    // Method to check if the queue is empty
    bool isEmpty() {
        return (front == nullptr);
    }

    // Method to enqueue (add) an element to the rear of the queue
    void enqueue(int value) {
        Node* newNode = new Node(value);

        // If the queue is empty, set the new node as both front and rear
        if (isEmpty()) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }

        std::cout << value << " enqueued to the queue." << std::endl;
    }

    // Method to dequeue (remove) an element from the front of the queue
    int dequeue() {
        // If the queue is empty, return an error value (-1 in this case)
        if (isEmpty()) {
            std::cout << "Queue is empty. Cannot dequeue." << std::endl;
            return -1;
        }

        int value = front->data;
        Node* temp = front;

        // Move the front pointer to the next node
        front = front->next;
        delete temp;

        // If the front becomes nullptr (queue becomes empty), set rear to nullptr as well
        if (front == nullptr) {
            rear = nullptr;
        }

        return value;
    }

    // Method to get the element at the front of the queue without removing it
    int peek() {
        // If the queue is empty, return an error value (-1 in this case)
        if (isEmpty()) {
            std::cout << "Queue is empty. Cannot peek." << std::endl;
            return -1;
        }

        return front->data;
    }
};

int main() {
    Queue queue;

    // Enqueue elements to the queue
    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);

    // Dequeue an element from the queue
    int dequeuedElement = queue.dequeue();
    if (dequeuedElement != -1) {
        std::cout << "Dequeued element: " << dequeuedElement << std::endl;
    }

    // Peek at the front element of the queue
    int frontElement = queue.peek();
    if (frontElement != -1) {
        std::cout << "Front element: " << frontElement << std::endl;
    }

    return 0;
}
