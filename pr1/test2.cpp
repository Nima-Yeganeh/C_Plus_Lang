#include <iostream>

// Function to calculate the factorial of a number recursively
int factorial(int n) {
    if (n <= 1) {
        return 1; // Base case: factorial of 0 and 1 is 1
    } else {
        return n * factorial(n - 1); // Recursive case
    }
}

int main() {
    int number;
    std::cout << "Enter a non-negative integer: ";
    std::cin >> number;

    if (number < 0) {
        std::cout << "Please enter a non-negative integer." << std::endl;
    } else {
        int result = factorial(number);
        std::cout << "The factorial of " << number << " is " << result << std::endl;
    }

    return 0;
}
