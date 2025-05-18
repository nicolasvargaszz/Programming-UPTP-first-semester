#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()
using namespace std; // Include the std namespace

// Function to perform bubble sort in descending order
void bubbleSort(int arr[], int n) {
    bool swapped;
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) { // Change comparison for descending order
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }
        // If no two elements were swapped by inner loop, then break
        if (!swapped)
            break;
    }
}

// Function to perform insertion sort in descending order
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        // Move elements of arr[0..i-1] that are smaller than key
        // to one position ahead of their current position
        while (j >= 0 && arr[j] < key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

// Function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Main function to test the sorting algorithms
int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    // Validate input size
    if (n <= 0) {
        cout << "Array size must be a positive integer." << endl;
        return 1; // Indicate an error
    }

    // Dynamically allocate memory for the array
    int* arr = new int[n];

    // Seed the random number generator
    srand(time(0));

    // Fill the array with random numbers (e.g., 0-99)
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100;
    }

    cout << "Unsorted array: \n";
    printArray(arr, n);

    // Ask the user to choose a sorting algorithm
    int choice;
    cout << "Choose a sorting algorithm:\n";
    cout << "1. Bubble Sort\n";
    cout << "2. Insertion Sort\n";
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    if (choice == 1) {
        // Sort the array using bubble sort
        bubbleSort(arr, n);
        cout << "Sorted array (using Bubble Sort, descending order): \n";
    } else if (choice == 2) {
        // Sort the array using insertion sort
        insertionSort(arr, n);
        cout << "Sorted array (using Insertion Sort, descending order): \n";
    } else {
        cout << "Invalid choice. Exiting program." << endl;
        delete[] arr;
        return 1;
    }

    printArray(arr, n);

    // Free the dynamically allocated memory
    delete[] arr;
    arr = nullptr; // Good practice to prevent dangling pointer issues

    return 0;
}