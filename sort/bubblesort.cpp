// Part A:
// Exercise 1: Bubble sort implementation

#include<iostream>
using namespace std;

int swaps= 0;  // this will be our global variable, this count the number of swaps used to sort the array.


void swap(int array[], int element1, int element2, int &swaps) // This function swap one element with other, it change their position
{
    int temp = array[element1]; 
    array[element1] = array[element2];
    array[element2] = temp;
    swaps++; // add 1 to the numbers of swap each time this function is called.
}


void bubbleSort(int array[], int &size) // this is the bubble sort algorithm
{
    for(int i = 0; i < size - 1 ; i++)
    {
        for(int j = 0 ; j < size - 1 - i; j++)
        {
            if(array[j] > array[j + 1])
            {
                swap(array, array[j], array[j + 1], swaps);
            }
        }
    }
}


void printArray(int array[], int &size) // this function just print the array/
{
    for(int i =0; i < size; i++)
    {
        cout << array[i] << " ";  // traverse the array, cout each element of it.
    }
    cout << endl;
}


 
int main()
{
    int array[] = {23,12,32,56,13,70,14,123,90,4};  //unsorted array
    int size = sizeof(array) / sizeof(array[0]);  // size of the array

    cout << "----------------- This is the unsorted array -----------------" << endl;
    printArray(array, size); // call the print array
    bubbleSort(array,size); // call the sorting function

    cout << "----------------- This is the sorted array (using Bubble Sort) -----------------" << endl;
    printArray(array, size); // show the results.
    cout << "Swaps performed: " << swaps << endl;
    return 0;
}