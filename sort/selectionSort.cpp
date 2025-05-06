
#include<iostream>
using namespace std;

int swapCount = 0;

void swap(int array[], int element1, int element2, int &swapCount) // this function swap the elements in the array
{
    int temp  = array[element1];
    array[element1] = array[element2];
    array[element2] = temp;
    swapCount++;
}

void printArray(int array[], int size) // Print each element of the array
{
    for(int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

void selectionSort(int array[], int size) 
{
    for(int i = 0; i < size -1 ; i++)
    {
        int minIndex = i;
        for(int j = i + 1; j < size; j++)
        {
            if(array[j] < array[minIndex])
            {
                minIndex = j;
            }
        }
        if(minIndex != i)
        {
            swap(array, i, minIndex, swapCount);
        }
    }
}

int main()
{
    int array[] = {123,42,12,234,35,32,463,76,34,2};
    int size = sizeof(array) / sizeof(array[0]);

    cout << "----------------- This is the unsorted array -----------------" << endl;
    printArray(array, size);

    selectionSort(array, size);

    cout << "----------------- This is the sorted array (using Selection Sort descending order) -----------------" << endl;
    printArray(array, size);
    cout << "Swaps performed: " << swapCount << endl;

    return 0;
}
