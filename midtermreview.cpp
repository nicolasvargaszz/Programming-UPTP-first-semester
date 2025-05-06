// #include<iostream>
// #include<string>

// using namespace std;

// int main()
// {
//     const int MAX = 1000;
//     int a,b,size;
//     a = 0;
//     b = 1;
    
//     long array[MAX];
//     array[a] = a;
//     array[b] = b;

//     cout << "How many digits do you want for the fibonacci sequence" << endl;
//     cin >> size;

//     if(size > MAX)
//     {
//         cout << "Pick a smaller number. " <<endl;
//         return 1;
//     }

//     for(int i = 1 ; i < size ; i++)
//     {
//         array[i + 1] = array[i] + array[i - 1];
//     }

//     for(int i = 0 ; i < size ; i++)
//     {
//         cout << array[i] << " ";
//     }
//     cout << endl; 
    

//     return 0;
// }


//Another problem in the practices exam may be the inserting an element in the middle of an array: 

// #include<iostream>
// #include<string>

// using namespace std; 

// void InsertElementArray(int array[], int &size, int positionToInsert, int elementToInsert)
// {
//     for(int i = size; i > positionToInsert ; --i)
//     {
//         array[i] = array[i - 1];
//     }
//     array[positionToInsert] = elementToInsert;
//     ++size;
// }

// void printArray(int array[], int size)
// {
//     for(int i = 0; i < size ; i++)
//     {
//         cout << array[i] << " ";
//     }
//     cout << endl;
// }


// int main()
// {
//     int array[] = {1,3,3,4,2};
//     int size = sizeof(array) / sizeof(array[0]);
//     int elementToInsert = 99;
//     int positionToInsert = 2;

//     InsertElementArray(array, size, positionToInsert, elementToInsert);
//     printArray(array, size); 
//     return 0;
// }



#include<iostream>

using namespace std;

// void printReverseArray(int array[], int size)
// {
//     for(int i = size; i > )
//     {

//     }
// }

int main()
{
    int x =1;
    while(x <= 3)
    {
        cout << x++ << endl;
    }
    return 0;
}