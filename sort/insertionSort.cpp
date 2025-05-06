#include<iostream>
using namespace std;
//array[] = {5, 3, 4, 1, 2}
void insertionSort(int array[], int n)
{
    for(int i = 1; i < n; i++)
    {
        int key = array[i];
        int j = i - 1;
        while(j >= 0 && array[j] > key)
        {
            array[j + 1] = array[j];
            j = j -1;
        }
        array[j + 1] = key;
    }
}

void printArray(int array[], int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}



int main()
{
    int array[] = {1,2,34,6,12,9,23,0,2,16,19};
    int size = sizeof(array) / sizeof(array[0]);

    cout << "Original array, before sorting: " << endl;
    printArray(array, size);

    cout << "Array after sorting: " << endl;
    insertionSort(array, size);
    printArray(array,size);

    return 0;
}