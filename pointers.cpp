/*
 * Title: Pointers (Dynamic Memory)
 * Author: Jackson Aragon
 *
 * Desc: Program takes 3 integer values
 *      from the user, stores them in
 *      separate variables, and assigns
 *      a pointer to each variable.
 */

#include <iostream>

int main() {

    // Initialize variables
    int val1, val2, val3;
    int *ptr1, *ptr2, *ptr3;

    // Prompt user for integers
    std::cout << "Enter 1st integer value: ";
    std::cin >> val1;
    std::cout << "Enter 2nd integer value: ";
    std::cin >> val2;
    std::cout << "Enter 3rd integer value: ";
    std::cin >> val3;

    // Dynamically allocate space for pointers
    ptr1 = new int;
    ptr2 = new int;
    ptr3 = new int;

    // Assign valeus to pointer addr
    *ptr1 = val1;
    *ptr2 = val2;
    *ptr3 = val3;

    // Display value and address
    std::cout << "\nValues and Memory Addresses:\n";
    std::cout << "Value 1: " << val1 << "\tAddress: " << ptr1
              << "\t\tPointer: " << *ptr1 << std::endl;
    std::cout << "Value 2: " << val2 << "\tAddress: " << ptr2
              << "\t\tPointer: " << *ptr2 << std::endl;
    std::cout << "Value 3: " << val3 << "\tAddress: " << ptr3
              << "\t\tPointer: " << *ptr3 << std::endl;

    // Garbage collection
    delete ptr1;
    delete ptr2;
    delete ptr3;

    // Assign pointers to nullptr
    ptr1 = nullptr;
    ptr2 = nullptr;
    ptr3 = nullptr;

    return 0;
}
