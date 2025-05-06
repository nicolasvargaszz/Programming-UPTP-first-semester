#include<iostream>

using namespace std;

int insertElementEndOfArray(int arr[], int size, int valueToInsert)
{
    arr[size] = valueToInsert;
    ++size;
    return size;
}


int insertElementSpecificPosition(int arr[], int size, int valueToInsert, int positionToInsert)
{
    for(int i = size; i >= positionToInsert ; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[positionToInsert - 1] = valueToInsert;
    ++size;
    return size;
}

void printArray(int array[], int size)
{
    for(int i = 0 ; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}


int main()
{
    int array[] = {1,2,3,4,5,6};
    int size = sizeof(array) / sizeof(array[0]);
    int valueToInsert = 99;
    int positionToInsert = 2;
    //size = insertElementEndOfArray(array, size, valueToInsert);
    printArray(array, size);

    size = insertElementSpecificPosition(array,size,valueToInsert,positionToInsert);
    printArray(array, size);

    return 0;
}