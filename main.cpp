//Yaseen Allan
//CS-303 Assignment 1
//02/07/2025
//This program dynamically manages an array by reading integers from "input.txt" and allowing the user to interactively search, modify, add, and remove elements with exception handling, while displaying the updated array after each operation.

#include "ArrayFunctions.h"
#include <iostream>
using namespace std;

int main() {
    int *arr = nullptr; // Pointer to the dynamic array
    int size = 0;       // Current number of elements in the array

    // Read data from the fixed input file "input.txt" into the dynamic array.
    readDataFromFile("input.txt", arr, size);
    if (size == 0) {
        cout << "No data loaded from input.txt. Exiting program." << endl;
        return 1;
    }

    int choice = 0; // Variable to store the user's menu choice

    // Main interactive menu loop
    while (choice != 6) {
        cout << "\nMenu Options:" << endl;
        cout << "1. Display Array" << endl;
        cout << "2. Check Element" << endl;
        cout << "3. Modify Element" << endl;
        cout << "4. Add Element" << endl;
        cout << "5. Remove Element" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                // Display the current array
                printArray(arr, size);
                break;
            }
            case 2: {
                // Search for a number in the array
                int target;
                cout << "Enter number to find: ";
                cin >> target;
                int index = searchElement(arr, size, target);
                if (index != -1)
                    cout << "Number " << target << " found at index " << index << "." << endl;
                else
                    cout << "Number " << target << " not found in the array." << endl;
                break;
            }
            case 3: {
                // Modify an element at a specified index
                int index, newValue;
                cout << "Enter index to modify: ";
                cin >> index;
                cout << "Enter new value: ";
                cin >> newValue;
                try {
                    // Attempt to modify the element; if the index is invalid, an exception is thrown.
                    modifyElement(arr, size, index, newValue);
                } catch (const std::exception &e) {
                    // Catch any exceptions and display an error message.
                    cerr << "Error: " << e.what() << endl;
                }
                // Display the updated array
                printArray(arr, size);
                break;
            }
            case 4: {
                // Add a new element to the end of the array
                int newValue;
                cout << "Enter new integer to add: ";
                cin >> newValue;
                try {
                    // Attempt to add the new element.
                    addElement(arr, size, newValue); 
                } catch (const std::exception &e) {
                    // Catch any exceptions and display an error message.
                    cerr << "Error while adding element: " << e.what() << endl;
                }
                // Display the updated array
                printArray(arr, size);
                break;
            }
            case 5: {
                // Remove an element from the array by index.
                int index;
                cout << "Enter index to remove: ";
                cin >> index;
                removeElement(arr, size, index);
                // Display the updated array
                printArray(arr, size);
                break;
            }
            case 6:
                // Exit the program
                cout << "Exiting program." << endl;
                break;
            default:
                // Handle invalid menu choices.
                cout << "Invalid option. Please try again." << endl;
        }
    }

    // Free the dynamically allocated memory before exiting.
    delete [] arr;
    return 0;
}
