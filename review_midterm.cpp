//Exercise 1: Implement the fibonacci sequence, print all the elements that the user inserts.
// Fibonacci Formula: n + 1 = n + n - 1
//  i need one array, and travel it untill n, the first element must be 0 and the second element must be 1.
/*#include<iostream>
using namespace std;

const int MAX = 1000;

int main()
{
    int array[MAX];
    int n;
    
    cout << "How many digits do you need from the Fibonacci sequence: ";
    cin >> n;
    
    if (n <= 0) {
        cout << "Please enter a number greater than 0." << endl;
        return 1;
    }
    else if(n > MAX){
        cout << "Please enter a smaller number, less than 1000" << endl;
        return 1;
    }

    array[0] = 0;
    if (n > 1) array[1] = 1;

    for(int i = 2; i < n; i++){
        array[i] = array[i - 1] + array[i - 2];
    }

    for(int j = 0; j < n; j++){
        cout << array[j] << " ";
    }
    cout << endl;
    
    return 0;
}*/



//Task 2: Multiply a 3by3 matrix

// #include<iostream>
// using namespace std;


// void createMatrix(int array[][3], int size)
// {
//     for (int i = 0; i < size; ++i) {
//         cout << "\n--- Enter elements for row " << i + 1 << " ---\n";
//         for (int j = 0; j < size; ++j) {
//             cout << "Element at [" << i + 1 << "][" << j + 1 << "]: ";
//             cin >> array[i][j];
//         }
//     }
// }

// void printMatrix(int array[][3], int size)
// {
//     cout << "\n--- Matrix ---\n";
//     for (int i = 0; i < size; ++i) {
//         for (int j = 0; j < size; ++j) {
//             cout << array[i][j] << "\t";  // tab for cleaner column spacing
//         }
//         cout << endl;
//     }
// }


// void multiplyMatrix(int array1[][3],int array2[][3], int result[][3], int size)
// {
//     for(int i = 0; i < size ; i++){
//         for(int j = 0; j < size ; j++){
//             result[i][j] =0;
//             for(int k = 0 ; k < size ; k++){
//                 result[i][j] += array1[i][k] * array2[k][j];
//             }
//         }

//     }
// }

// void transposeMatrix(int result[][3], int size)
// {
//     for (int i = 0; i < size; ++i) {
//         for (int j = i + 1; j < size; ++j) {
//             int temp = result[i][j];
//             result[i][j] = result[j][i];
//             result[j][i] = temp;
//         }
//     }
// }


// int main()
// {
//     int array1[3][3], array2[3][3], result[3][3];
//     cout << "\n--- Matrix Number 1 ---\n";
//     createMatrix(array1, 3);
//     cout << "\n--- Matrix Number 2 ---\n";
//     createMatrix(array2, 3);
//     multiplyMatrix(array1,array2,result,3);
//     cout << "\n--- Result of Matrix Multiplication ---\n";
//     printMatrix(result,3);
//     cout << "\n--- Transpose Matrix Result ---\n";
//     transposeMatrix(result,3);
//     printMatrix(result,3);

//     return 0;
// };



//sort array

// #include<iostream>
// using namespace std;

// void sortArray(int arr[], int size) {
//     for (int i = 0; i < size - 1; ++i) {
//         for (int j = 0; j < size - i - 1; ++j) {
//             if (arr[j] > arr[j + 1]) {
//                 // Swap elements
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
// }


// int main(){
//     int array[100] = {34,523,122,54,21,12,123,132,123,1234,435,165,456,234,967,12465,754,342,634,324,2635,235,4263,535,4,3,2,3,4,6,7,8,9,9,1,1,1,1,1,12,12,3,123,12,3,12,3,345,234523,52,52,45,32,24,23};
//     int size = sizeof(array) / sizeof(array[0]);
//     sortArray(array, size);

//     for(int i = 0; i < size ; i++)
//     {
//         cout << array[i]  << " ";
//     }
//     cout << endl;
// }


// This code is to insert an element in a certain position of an array.
// #include <iostream>
// using namespace std;

// int insertAtpossition(int array[], int positionToInsert, int numberToInsert, int maxCapacity, int& size)
// {
//     if(size > maxCapacity)  // if the size of the array is greater than the Max, we end the function.
//     {
//         cout << "array already full, cannot insert anything" << endl;
//         return 1;
//     }   
    
//     for(int i = size - 1; i >= positionToInsert; i--) // we check untill the target position and we change the elements 
//     {
//         array[i + 1] = array[i];
//     }
//     array[positionToInsert] = numberToInsert;
//     ++size;
//     return size;
   
// }

// void printArray(int array[], int size)
// {
//     for(int i =0; i < size; i++)
//     {
//         cout << array[i] << " ";
//     }
//     cout << endl;
// }

// int main(){
//     const int MAX = 1000; // max capacity
//     int array[MAX] = {1,2,3,4,5}; //array
//     int size = 5; // size of the array
//     int positionToInsert = 5;  
//     int numberToInsert = 99;

//     int newSize = insertAtpossition(array, positionToInsert, numberToInsert, MAX, size);
//     printArray(array, newSize);
//     return 0;
// }

// THIS CODE WILL DELETE AN ELEMENT FROM THE ARRAY AT ANY POSITION.

// #include<iostream>
// using namespace std; 

// int deleteElementFromArray(int array[], int positionToDelete, int size){
//     if (positionToDelete < 0 || positionToDelete >= size) {
//         cout << "Invalid position to delete.\n";
//         return size;
//     }

//     for (int i = positionToDelete; i < size - 1; i++) {
//         array[i] = array[i + 1];
//     }

//     size--;
//     return size;
// }

// void printArray(int array[], int size)
// {
//     for(int i =0; i < size; i++)
//     {
//         cout << array[i] << " ";
//     }
//     cout << endl;
// }

// int main()
// {
//     const int MAX = 1000;
//     int array[MAX] = {1,2,3,4,5};
//     int positionToDelete = 2;
//     int size = 5;
//     int newSize = deleteElementFromArray(array,positionToDelete, size);
//     printArray(array, newSize);
//     return 0;
// }


#include<iostream>
using namespace std;

void insertElementAtTheEndOfArray(int array[], int &size, int elementToInsert)
{
	array[size] = elementToInsert;
	size++;
}

void insertElement(int array[], int &size, int positionToInsert, int elementToInsert)
{
	for(int i = size; i >= positionToInsert; i--)
	{
		array[i] = array[i - 1];
	}
	array[positionToInsert] = elementToInsert;
	size++;
}

void deleteElement(int array[], int &size, int positionTodelete)
{
    for(int i = positionTodelete; i < size - 1; ++i)
    {
        array[i] = array[i + 1];
    }
    --size;
}


void printArray(int array[], int size)
{
	for(int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;
}


int main()
{
	int array[] = {1,2,3,4,5,6,7};
	int size = sizeof(array) / sizeof(array[0]);
	int elementToInsert, positionToInsert,elementoTodelete;
	cout << "------------ This is the original Array ------------" << endl;
	printArray(array, size);
	cout << "Which element you want to insert in the array" << endl; 
	cin >> elementToInsert;
    cout << "Where do you want to insert it? " << endl;
	cin >> positionToInsert;
	insertElement(array, size, positionToInsert, elementToInsert);
	cout << "------------ This is the resulting after insertion Array ------------" << endl;
    printArray(array, size);


    cout << "what position of the array do you like to delete ? " << endl;
    cin >> elementoTodelete;

    cout << "------------ This is the resulting after deleting Array ------------" << endl;
    deleteElement(array, size, elementoTodelete);
    printArray(array, size);
	

	return 0;
}