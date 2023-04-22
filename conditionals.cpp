#include <iostream>

int main() {
    int x = 42;

    // Check if x is even
    if (x % 2 == 0) {
        std::cout << "x is even" << std::endl;
    }
    // If x is not even, it must be odd
    else {
        std::cout << "x is odd" << std::endl;
    }

    // Check if x is positive, negative or zero
    if (x > 0) {
        std::cout << "x is positive" << std::endl;
    }
    else if (x < 0) {
        std::cout << "x is negative" << std::endl;
    }
    else {
        std::cout << "x is zero" << std::endl;
    }

    // Check if x is within a range
    if (x >= 0 && x <= 10) {
        std::cout << "x is within the range [0, 10]" << std::endl;
    }
    else if (x >= 11 && x <= 20) {
        std::cout << "x is within the range [11, 20]" << std::endl;
    }
    else {
        std::cout << "x is outside of the range [0, 20]" << std::endl;
    }

    return 0;
}
