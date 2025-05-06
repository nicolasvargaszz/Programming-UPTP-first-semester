#include<iostream>
#include<iomanip>
using namespace std;

void readarray(int arr[], int size) {
    for (int i = 0; i < size; i++) { // this loop is to print the result
        cout << "The element number [" << i + 1 << "] is: " << arr[i] << endl;  // the plus 1 is just to avoid the number 0 of the array
    }
}

void minNmax(int arr[], int size) {
    for (int i = 0; i < size; i++) {  // this loop will store the values of the user in a array
        cout << "Enter the element number [" << i << "] of your array: ";
        cin >> arr[i];
    }
    int min, max;
    min = max = arr[0];
    for (int i = 0; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        else if (arr[i] < min) {
            min = arr[i];
        }
    }
    cout << "----------- Min and Max ------------" << endl;
    cout << "The max element in your array is: " << max << endl;
    cout << "The min element in your array is: " << min << endl;
}

/*
The goal of this code is:
to find the index of a given number in the array. 
Example array = [1,2,2,34,6]
number goal = 6 
output must be 4, since the number 6 is in the position number 4 of the array.
*/
int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i;  // return the index when found
        }
    }
    return -1;  // return -1 if not found
}
/*
In this function i recive as parameters two matrix and the size of them
at the end this function prints the result of the sum of this two matrices.
*/
void matrixAddition(int matrix1[3][3], int matrix2[3][3],  int size){
    int result[3][3];    
    for(int i = 0; i < size ; i++){
        for(int j =0; j < size; j++){
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Print the matrix:
    cout << "\n======= Matrix Addition Result =======\n" << endl;

    cout << "+-----+-----+-----+" << endl;  // this is just a upperborder 
    for(int i = 0; i < 3 ; i++){
        cout << "|";
        for(int j =0; j < 3; j++){
            cout << " " << setw(3)  << result[i][j] << " ";  // to print the matrix in a more ordenated way i use iomanip
        }
        cout << endl;
        cout << "+-----+-----+-----+" << endl;
    }
}

void dynamicArray(){
    int size;
    cout << "enter the size of the array";
    cin  >> size; 

    if(size <= 0){
        cout << "Invalid input, size must be positive";
    }
    // this is a dynamic array
    int* array = new int[size];
    // now we fill the array with user values:
    cout << "Enter " << size << " elementes for the array" << endl;
    for(int i =0 ; i < size ; i++){
        cout << "Element [" << i << "]: ";
        cin >>array[i];
    }
    cout << "\nYou entered:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Element [" << i << "] = " << array[i] << endl;
    }
    
    delete[] array;  // this will free the memory.

}

int main() {
    dynamicArray();
    int size = 10;
    int array[size];
    int key;

    // declaration of the array we will use in function 1 and function 2
    cout << "----------- Create your Array ------------" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Enter the element number [" << i << "] of your array: ";
        cin >> array[i];
    }
    //minNmax(array,size);
    //readarray(array, size);


    // this is for the linear search, we will ask the user for the number, if it is in the array, we will print its position
    // otherwise, we will tell the user that the number is not in the array.
    cout << "Tell me what is the number you want to know its position in the array." << endl;
    cin >> key;
    int index = linearSearch(array, size, key);

    if (index != -1) { // the number is in the array in the position index
        cout << "The number: " << key << " is in the position [" << index << "] of the array." << endl;
    } else { // the number is not in the array
        cout << "The number " << key << " is not in the array." << endl;
    }
    //here we declare the 2 matrix that we will add, and then print the result.
    int matrix1[3][3] = {{1,2,3},
                      {4,5,6},
                      {7,8,9}};
    int matrix2[3][3] = {{1,2,3},
                        {4,5,6},
                        {7,8,9}};
    matrixAddition(matrix1, matrix2, size);
    return 0;
}
