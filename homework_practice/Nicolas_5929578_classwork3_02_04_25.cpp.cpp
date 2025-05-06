#include <iostream>
using namespace std;

// Function to insert an element at a specific index
int insertElement(int array[], int size, int capacity, int element, int indexToAdd) {
    if (size >= capacity) {
        cout << "Error: Array is already full!" << endl;
        return size;
    }
    if (indexToAdd < 0 || indexToAdd > size) {
        cout << "Error: Invalid index!" << endl;
        return size;
    }

    // Shift elements right to make room for the new element
    for (int i = size; i > indexToAdd; i--) {
        array[i] = array[i - 1];
    }

    array[indexToAdd] = element;
    size++;

    // Print updated array
    cout << "Array after insertion: ";
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    return size;
}

// Function to delete an element at a specific index
int deletion(int array[], int size, int indexToDelete) {
    if (indexToDelete < 0 || indexToDelete >= size) {
        cout << "Error: Invalid index!" << endl;
        return size;
    }

    // Shift elements left to overwrite the one to delete
    for (int i = indexToDelete; i < size - 1; i++) {
        array[i] = array[i + 1];
    }

    size--;

    // Print updated array
    cout << "Array after deletion: ";
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    return size;
}

int main() {
    const int MAX = 1000;
    int size = 5;
    int array[MAX] = {1, 2, 3, 4, 5};
    int element;
    int insertIndex = 2;
    int deleteIndex = 4;

    // Get the element to insert
    cout << "Enter the value you want to insert to the array: ";
    cin >> element;

    // Insert and update size
    size = insertElement(array, size, MAX, element, insertIndex);
    cout << "Now the array has " << size << " elements." << endl;

    // Delete an element and update size
    size = deletion(array, size, deleteIndex);
    cout << "Now the array has " << size << " elements." << endl;

    return 0;
}
