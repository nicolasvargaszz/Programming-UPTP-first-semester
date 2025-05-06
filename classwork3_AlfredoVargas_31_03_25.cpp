// #include<iostream>
// using namespace std; 

// int maxnumber(int array[], int size){
//     int max = array[0];  // initialize a empty variable
//     for(int i = 0 ; i < size; i++){
//         if(array[i] > max){  // is the element is bigger than the initialized then we redefine the value of it
//             max = array[i]; 
//         }
//     }
//     return max; //return and print it in the main function.
// }


// void reverseArray(int array[], int size){
//     for(int i = size - 1; i >= 0; --i){
//         cout << array[i] << endl;
//     }
// }

// float average(int array[], float size){
//     float sum=0;
//     for(int i = 0; i < size; i++){
//         sum += array[i];
//     }
//     float average = sum / size;
//     return average;
// }



// int main(){
//     int array[1000];
//     int size;
//     float avg;
//     int max;

//     cout << "Please provide the size of your array: ";
//     cin >> size;
//     for (int i = 0 ; i < size ; i++){
//         cout << "Enter the element number [" << i <<"] of your array: ";
//         cin >> array[i]; 
//     }

//     max = maxnumber(array, size);
//     cout << "the biggest element in the array is : " << max << endl;
//     reverseArray(array, size);
//     avg = average(array,size);
//     cout << "The avg is: " << avg << endl;
//     return 0;
// }



// Second task 2D arrays.

#include<iostream>
#include<iomanip>

using namespace std;
void printMatrix(int matrix[3][3]){
    // Print the matrix:
    cout << "\n======= Matrix =======\n" << endl;

    cout << "+-----+-----+-----+" << endl;  // this is just a upperborder 
    for(int i = 0; i < 3 ; i++){
        cout << "|";
        for(int j =0; j < 3; j++){
            cout << " " << setw(3)  << matrix[i][j] << " ";  // to print the matrix in a more ordenated way i use iomanip
        }
        cout << endl;
        cout << "+-----+-----+-----+" << endl;
    }
    
}


void printTransposedMatrix(int matrix[3][3]) {
    cout << "\n==== Transposed Matrix ====\n" << endl;

    cout << "+-----+-----+-----+" << endl;
    for(int i = 0; i < 3 ; i++){
        cout << "|";
        for(int j = 0; j < 3; j++){
            cout << " " << setw(3) << matrix[j][i] << " ";  // Notice: swapped indices
        }
        cout << endl;
        cout << "+-----+-----+-----+" << endl;
    }
}




int sumofMatrix(int matrix[3][3]){
    int sum = 0;
    
    for(int i = 0; i < 3 ; i++){
        for(int j = 0; j < 3; j++){
            sum += matrix[i][j];
        }
    }
    
    return sum;
}


int main(){
    int matrix[3][3];
    int sum = 0;

    for(int i = 0; i < 3 ; i++){
        cout << "Enter the elements for the row number [" << i + 1 << "] " << endl;
        for(int j = 0; j < 3; j++){
            cout << "Enter the element [" << j + 1 << "]: " << endl;
            cin >> matrix[i][j];
        }
    }

    sum = sumofMatrix(matrix);
    cout << "################## Sum of elements ################## " << endl;
    cout << "The sum of all elements in this matrix is: " << sum << endl;
    printMatrix(matrix);
    printTransposedMatrix(matrix);
    
    return 0;
}
