#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

using namespace std;

// // Function to print an array
// void printArray(int arr[], int size) {
//     for (int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// // Function to perform selection sort
// void selectionSort(int arr[], int size) {
//     int i, j, minIndex, temp;
//     for (i = 0; i < size - 1; i++) {
//         minIndex = i; // Assume the current element is the minimum
//         for (j = i + 1; j < size; j++) {
//             if (arr[j] < arr[minIndex]) {
//                 minIndex = j; // Found a new minimum
//             }
//         }
//         // Swap the found minimum element with the first element
//         if (minIndex != i) {
//             temp = arr[i];
//             arr[i] = arr[minIndex];
//             arr[minIndex] = temp;
//         }
//     }
// }

// int main() {
//     int size;

//     // Prompt user for the size of the array
//     cout << "Enter the size of the array: ";
//     cin >> size;

//     if (size <= 0) {
//         cout << "Array size must be positive." << endl;
//         return 1;
//     }

//     // Create a dynamic array of the specified size
//     int* arr = new int[size];

//     // Seed the random number generator
//     srand(time(0));

//     // Fill the array with random numbers (e.g., between 0 and 99)
//     for (int i = 0; i < size; i++) {
//         arr[i] = rand() % 100;
//     }

//     // Print the unsorted array
//     cout << "Unsorted array: ";
//     printArray(arr, size);

//     // Sort the array using selection sort
//     selectionSort(arr, size);

//     // Print the sorted array
//     cout << "Sorted array:   ";
//     printArray(arr, size);

//     // Deallocate the dynamic array
//     delete[] arr;

//     return 0;
// }


// Code number 5

class my_Array {
    private:
        int* arr;
        int length;
    public:
        // Default constructor (creates an array of size 5)
        my_Array() {
            length = 5;
            arr = new int[length];
            cout << "Array created with size: " << length << endl;
            for (int i = 0; i < length; i++) {
                arr[i] = 0;
            }
        }
    
        // Constructor for a 5-element array
        my_Array(int e1, int e2, int e3, int e4, int e5) {
            length = 5;
            arr = new int[length];
            arr[0] = e1;
            arr[1] = e2;
            arr[2] = e3;
            arr[3] = e4;
            arr[4] = e5;
        }
    
        // Destructor to free dynamically allocated memory
        ~my_Array() {
            delete[] arr;
        }
    
        void setElementAtAnyPosition(int position, int value) {
            if (position >= 0 && position < length) {
                arr[position] = value;
            } else {
                cout << "Invalid position" << endl;
            }
        }
    
        void displayArray() {
            cout << "Array elements: ";
            for (int i = 0; i < length; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    
        void bubbleSort() {
            for (int i = 0; i < length - 1; i++) {
                for (int j = 0; j < length - i - 1; j++) {
                    if (arr[j] > arr[j + 1]) {
                        swap(arr[j], arr[j + 1]);
                    }
                }
            }
        }
    
        void insertionSort() {
            for (int i = 1; i < length; i++) {
                int key = arr[i];
                int j = i - 1;
                while (j >= 0 && arr[j] > key) {
                    arr[j + 1] = arr[j];
                    j--;
                }
                arr[j + 1] = key;
            }
        }
    
        void selectionSort() {
            for (int i = 0; i < length - 1; i++) {
                int minIndex = i;
                for (int j = i + 1; j < length; j++) {
                    if (arr[j] < arr[minIndex]) {
                        minIndex = j;
                    }
                }
                swap(arr[i], arr[minIndex]);
            }
        }
    };
    
    int main() {
        my_Array array1;
        my_Array array2(1, 2, 3, 4, 5);
    
        array1.setElementAtAnyPosition(0, 10);
        array2.setElementAtAnyPosition(1, 20);
    
        array1.displayArray();
        array2.displayArray();
    
        array1.bubbleSort();
        array2.insertionSort();
    
        array1.displayArray();
        array2.displayArray();
    
        array1.selectionSort();
        array2.selectionSort();
    
        array1.displayArray();
        array2.displayArray();
    
        return 0;
    }