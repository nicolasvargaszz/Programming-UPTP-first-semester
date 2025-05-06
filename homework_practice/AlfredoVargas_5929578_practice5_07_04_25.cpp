#include<iostream>
#include<iomanip>
using namespace std;

int matrix_multiplication(int A[3][3], int B[3][3], int C[3][3], int rowsA, int colsA, int rowsB, int colsB){
    // Check if matrices can be multiplied
    if (colsA != rowsB) {
        cout << "\nERROR: Cannot multiply matrices. Columns of A must equal rows of B.\n";
        return 1;
    }

    // Initialize result matrix to 0
    for (int i = 0; i < rowsA; ++i)
        for (int j = 0; j < colsB; ++j)
            C[i][j] = 0;

    // Perform multiplication
    for (int i = 0; i < rowsA; ++i) {
        for (int j = 0; j < colsB; ++j) {
            for (int k = 0; k < colsA; ++k) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Print the result
    cout << "\n======= Matrix Multiplication Result =======\n\n";
    for (int i = 0; i < rowsA; ++i) {
        cout << "+";
        for (int j = 0; j < colsB; ++j) cout << "-----+";
        cout << "\n|";
        for (int j = 0; j < colsB; ++j)
            cout << " " << setw(3) << C[i][j] << " |";
        cout << "\n";
    }
    cout << "+";
    for (int j = 0; j < colsB; ++j) cout << "-----+";
    cout << endl;

    return 0;
}

int matrix_addition(int A[3][3], int B[3][3], int C[3][3], int rowsA, int colsA, int rowsB, int colsB){
    if (colsA != colsB || rowsA != rowsB) {
        cout << "\nERROR: Cannot add this matrices. Columns and rows of A must equal to columns and rows of B.\n";
        return 1;
    }

    // Initialize result matrix to 0
    for (int i = 0; i < rowsA; ++i)
        for (int j = 0; j < colsB; ++j)
            C[i][j] = 0;

     // Perform addition
     for (int i = 0; i < rowsA; ++i) {
        for (int j = 0; j < colsB; ++j) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    cout << "\n======= Matrix Addition Result =======\n\n";
    for (int i = 0; i < rowsA; ++i) {
        for (int j = 0; j < colsA; ++j) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}

void transpose(int A[3][3], int rowsA, int colsA){
    cout << "\n======= Transpose of the Matrix =======\n\n";
    for (int i = 0; i < colsA; ++i) {
        for (int j = 0; j < rowsA; ++j) {
            cout << A[j][i] << " ";
        }
        cout << endl;
    }
}


int main(){
    int matrix[3][3], matrix2[3][3], result[3][3];
    int rowsA, colsA, rowsB, colsB;

    cout << "Enter the number of rows in Matrix A (max 3): ";
    cin >> rowsA;
    cout << "Enter the number of columns in Matrix A (max 3): ";
    cin >> colsA;

    cout << "Enter the number of rows in Matrix B (max 3): ";
    cin >> rowsB;
    cout << "Enter the number of columns in Matrix B (max 3): ";
    cin >> colsB;

    // Input for matrix A
    cout << "\n############## CREATE MATRIX A ##############\n";
    for(int i = 0; i < rowsA; i++) {
        for(int j = 0; j < colsA; j++) {
            cout << "A[" << i << "][" << j << "] = ";
            cin >> matrix[i][j];
        }
    }

    // Input for matrix B
    cout << "\n############## CREATE MATRIX B ##############\n";
    for(int i = 0; i < rowsB; i++) {
        for(int j = 0; j < colsB; j++) {
            cout << "B[" << i << "][" << j << "] = ";
            cin >> matrix2[i][j];
        }
    }

    matrix_multiplication(matrix, matrix2, result, rowsA, colsA, rowsB, colsB);
    matrix_addition(matrix, matrix2, result, rowsA, colsA, rowsB, colsB);
    transpose(matrix, rowsA, colsA);
    return 0;

}
