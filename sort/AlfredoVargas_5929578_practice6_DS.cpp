#include<iostream>
using namespace std; 

void createArray(int array[], int size)
{
    cout << "Please create your own array: " << endl;
    for(int i = 0; i < size ; i++)
    {
        cout << "Please enter the element [" << i << "]: " << endl;
        cin >> array[i];
    }   
}

int insertElement(int array[], int size, int positionToInsert, int elementToInsert)
{
    for(int i = size; i > positionToInsert; --i)
    {
        array[i] = array[i - 1];
    }
    array[positionToInsert] = elementToInsert;
    ++size;
    return size;
}

int deleteElement(int array[], int size, int positionToDelete)
{
    if (positionToDelete >= 0 && positionToDelete < size) {
        // Shift elements to the left from the pos
        for (int i = positionToDelete; i < size - 1; ++i) {
            array[i] = array[i + 1];
        }
        --size;

        cout << "Element deleted.\n";
    } else {
        cout << "Invalid position.\n";
    }
    return size;
}

void printArray(int array[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}


void linearSearch(int array[],int size, int target)
{
    cout << "The element we are looking for is: " << target << " ..." << endl;
    bool found = 0;
    for(int i =0; i < size; i++)
    {
        if(array[i] == target)
        {
            cout << "Element found in position number: [" << i << "]" << endl;
            found = 1;
        }
    }
    if(found)
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not found xD" << endl;
    }

}

int main()
{   
    int array[10];
    int size = 6;
    int positionToInsert = 2;
    int elementToInsert = 99;
    int target; 
    int positionToDelete = 2;
    
    cout << "Enter the element you want to find in your array: " << endl;
    cin >> target;


    createArray(array, size);
    printArray(array, size);
    int newSize = insertElement(array,size,positionToInsert, elementToInsert);
    printArray(array,newSize);
    newSize = deleteElement(array, newSize,positionToDelete);
    printArray(array,newSize);
    linearSearch(array,newSize,target);


    return 0;
}