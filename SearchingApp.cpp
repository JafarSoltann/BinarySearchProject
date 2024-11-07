#include <iostream>
#include "Searching.cpp"

int main() {
    std::vector<int> vec = { 10, 20, 30, 30, 30, 40, 50, 60, 70, 70 }; // Already sorted
    std::array<int, 10> arr = { 10, 20, 30, 30, 30, 40, 50, 60, 70, 70 };

    int target;
    char continueSearch = 'y';

    // Loop to keep asking for new targets until the user decides to stop
    while (continueSearch == 'y' || continueSearch == 'Y') {
        std::cout << "Enter the value of target: ";
        std::cin >> target;

        // Perform Binary Search (vector)
        int index = binarySearch(vec, target);
        if (index != -1) {
            std::cout << "Binary search. Element found at index: " << index << std::endl;
        }
        else {
            std::cout << "Binary search. Element not found in the vector." << std::endl;
        }

        // Perform Binary Search for the first occurrence (vector)
        index = binarySearchFirst(vec, target);
        if (index != -1) {
            std::cout << "Binary search (first). Element found at index: " << index << std::endl;
        }
        else {
            std::cout << "Binary search (first). Element not found in the vector." << std::endl;
        }

        // Perform Linear Search (vector)
        index = linearSearch(vec, target);
        if (index != -1) {
            std::cout << "Linear search. Element found at index: " << index << std::endl;
        }
        else {
            std::cout << "Linear search. Element not found in the vector." << std::endl;
        }

        // Perform Binary Search (array)
        index = binarySearch(arr, target);
        if (index != -1) {
            std::cout << "Binary search. Element found at index: " << index << std::endl;
        }
        else {
            std::cout << "Binary search. Element not found in the array." << std::endl;
        }

        // Perform Binary Search for the first occurrence (array)
        index = binarySearchFirst(arr, target);
        if (index != -1) {
            std::cout << "Binary search (first). Element found at index: " << index << std::endl;
        }
        else {
            std::cout << "Binary search (first). Element not found in the array." << std::endl;
        }

        // Perform Linear Search (array)
        index = linearSearch(arr, target);
        if (index != -1) {
            std::cout << "Linear search. Element found at index: " << index << std::endl;
        }
        else {
            std::cout << "Linear search. Element not found in the array." << std::endl;
        }

        // Ask the user if they want to continue
        std::cout << "Do you want to enter another target value? (y/n): ";
        std::cin >> continueSearch;
    }

    std::cout << "Thank you for using the search program. Goodbye!" << std::endl;

    return 0;
}
