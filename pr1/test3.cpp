#include <iostream>

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    if (n <= 0) {
        std::cerr << "Please enter a valid number of elements." << std::endl;
        return 1;
    }

    int max = INT_MIN; // Initialize max to the smallest possible integer

    for (int i = 0; i < n; i++) {
        int num;
        std::cout << "Enter number " << i + 1 << ": ";
        std::cin >> num;

        if (num > max) {
            max = num; // Update max if the current number is larger
        }
    }

    std::cout << "The maximum number is: " << max << std::endl;

    return 0;
}
