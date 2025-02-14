#include "ArrayFunctions.h"

using namespace std;

// Reads data from the file and adds each integer to the dynamic array.
// The new element is added silently (without printing a message) since verbose is false.
void readDataFromFile(const string& filename, int *&arr, int &size) {
    ifstream inputFile(filename);
    if (!inputFile) {
        cerr << "Error: Unable to open file " << filename << endl;
        arr = nullptr;
        size = 0;
        return;
    }
    // Initialize with an empty array
    arr = nullptr;
    size = 0;
    int value;
    while (inputFile >> value) {
        // Use addElement with verbose set to false to avoid printing messages during file reading
        addElement(arr, size, value, false);
    }
    inputFile.close();
}

// Searches the array for the target value.
// Returns the index of the target if found, otherwise returns -1.
int searchElement(const int *arr, int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target)
            return i;
    }
    return -1;
}

// Modifies the element at the specified index.
// Throws an out_of_range exception if the index is invalid.
// Also prints a message showing the old and new values.
void modifyElement(int *arr, int size, int index, int newValue) {
    if (index < 0 || index >= size) {
        throw out_of_range("Index is out of bounds.");
    }
    int oldValue = arr[index];
    arr[index] = newValue;
    cout << "Modified index " << index << " from " << oldValue << " to " << newValue << std::endl;
}

// Adds a new element to the end of the array.
// Allocates a new array of size (size + 1), copies the old data, appends the new element,
// deletes the old array, and updates the pointer and size.
// If verbose is true, prints a message indicating the addition.
void addElement(int *&arr, int &size, int newValue, bool verbose) {
    // Allocate a new array with one extra element
    int *newArr = new int[size + 1];
    // Copy existing elements to the new array
    for (int i = 0; i < size; i++) {
        newArr[i] = arr[i];
    }
    // Append the new value at the end
    newArr[size] = newValue;
    // Free the memory used by the old array
    delete [] arr;
    // Update the pointer and increase the size
    arr = newArr;
    size++;
    if (verbose) {
        cout << "Added " << newValue << " to the array." << std::endl;
    }
}

// Removes the element at the specified index.
// Allocates a new array with size (size - 1), copies all elements except the one to remove,
// deletes the old array, updates the pointer and size, and prints a message.
void removeElement(int *&arr, int &size, int index) {
    if (index < 0 || index >= size) {
        cerr << "Error: Index out of bounds." << std::endl;
        return;
    }
    int *newArr = (size - 1 > 0) ? new int[size - 1] : nullptr;
    // Copy all elements except the one at the given index
    for (int i = 0, j = 0; i < size; i++) {
        if (i == index)
            continue;
        newArr[j++] = arr[i];
    }
    // Free the old array and update pointer and size
    delete [] arr;
    arr = newArr;
    size--;
    cout << "Removed element at index " << index << std::endl;
}

// Prints the current state of the array.
void printArray(const int *arr, int size) {
    cout << "Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << std::endl;
}
