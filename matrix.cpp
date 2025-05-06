#include<iostream>

using namespace std;


int main()
{

    int matrix1[3][3] = {{1,2,3,},
                        {4,5,6},
                        {7,8,9}};

    int matrix2[3][3] = {{1,2,3,},
                        {4,5,6},
                        {7,8,9}};
    int result[3][3] = {0};

    for(int i = 0; i < 3 ; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            for(int k = 0; k <3; k++)
            {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    // Mostrar el resultado
    cout << "Matriz resultante (C = A * B):" << endl;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << result[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;

}