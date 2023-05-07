#include <iostream>
#include <stack>

using namespace std;

int main() {
    // Initializing the stack
    stack<int> myStack;

    // Pushing elements onto the stack
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    // Displaying the top element of the stack
    cout << "The top element is: " << myStack.top() << endl;

    // Popping an element from the stack
    myStack.pop();

    // Displaying the top element of the stack after popping
    cout << "The top element after popping is: " << myStack.top() << endl;

    return 0;
}
