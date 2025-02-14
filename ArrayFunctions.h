#ifndef ARRAYFUNCTIONS_H
#define ARRAYFUNCTIONS_H

#include <iostream>
#include <fstream>
#include <stdexcept>
#include <string>

// Reads integers from the given file ("input.txt") into a dynamic array.
// The dynamic array is reallocated to grow by one element each time a new value is read.
// Parameters:
//   filename - name of the input file.
//   arr      - reference to the pointer that will store the dynamic array.
//   size     - reference to the current size of the array.
void readDataFromFile(const std::string& filename, int *&arr, int &size);

// Searches the array for the target element.
// Parameters:
//   arr    - pointer to the array.
//   size   - number of elements in the array.
//   target - the number to search for.
// Returns the index of the target if found; otherwise returns -1.
int searchElement(const int *arr, int size, int target);

// Modifies the element at the given index to the new value.
// Throws an exception if the index is out of bounds.
// Parameters:
//   arr      - pointer to the array.
//   size     - number of elements in the array.
//   index    - the index of the element to modify.
//   newValue - the new value to assign.
void modifyElement(int *arr, int size, int index, int newValue);

// Adds a new element to the end of the dynamic array.
// The array is reallocated to have one additional element, and the new element is added.
// The optional parameter 'verbose' controls whether a message is printed.
// Parameters:
//   arr      - reference to the pointer to the dynamic array.
//   size     - reference to the current size of the array.
//   newValue - the new element to add.
//   verbose  - flag to print a message (default is true).
void addElement(int *&arr, int &size, int newValue, bool verbose = true);

// Removes the element at the specified index from the dynamic array.
// The array is reallocated to have one fewer element.
// Parameters:
//   arr   - reference to the pointer to the dynamic array.
//   size  - reference to the current size of the array.
//   index - the index of the element to remove.
void removeElement(int *&arr, int &size, int index);

// Displays the elements of the array.
// Parameters:
//   arr  - pointer to the array.
//   size - number of elements in the array.
void printArray(const int *arr, int size);

#endif // ARRAYFUNCTIONS_H
