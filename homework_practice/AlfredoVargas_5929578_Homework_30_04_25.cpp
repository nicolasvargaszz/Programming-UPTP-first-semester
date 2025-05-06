// // Part A:
// // Exercise 1: Bubble sort implementation

// #include<iostream>
// using namespace std;

// int swaps= 0;  // this will be our global variable, this count the number of swaps used to sort the array.


// void swap(int array[], int element1, int element2, int &swaps) // This function swap one element with other, it change their position
// {
//     int temp = array[element1]; 
//     array[element1] = array[element2];
//     array[element2] = temp;
//     swaps++; // add 1 to the numbers of swap each time this function is called.
// }


// void bubbleSort(int array[], int &size) // this is the bubble sort algorithm
// {
//     for(int i = 0; i < size - 1; i++) // we create one loop that travel the entiry array.
//     {
//         for(int j = 0; j < size - i - 1; j++) // this is one element behind the first loop
//         {
//             if(array[j] > array[j + 1]) // compare, if the left element is bigger than the element at the rigth, change them.
//             {
//                 swap(array, j, j +1, swaps); // call the swap function.
//             }
//         }
//     }
// }


// void printArray(int array[], int &size) // this function just print the array/
// {
//     for(int i =0; i < size; i++)
//     {
//         cout << array[i] << " ";  // traverse the array, cout each element of it.
//     }
//     cout << endl;
// }


 
// int main()
// {
//     int array[] = {23,12,32,56,13,70,14,123,90,4};  //unsorted array
//     int size = sizeof(array) / sizeof(array[0]);  // size of the array

//     cout << "----------------- This is the unsorted array -----------------" << endl;
//     printArray(array, size); // call the print array
//     bubbleSort(array,size); // call the sorting function

//     cout << "----------------- This is the sorted array (using Bubble Sort) -----------------" << endl;
//     printArray(array, size); // show the results.
//     cout << "Swaps performed: " << swaps << endl;
//     return 0;
// }


// Exercise 2: Selection Sort in descending Order

// #include<iostream>
// using namespace std;

// int swapCount = 0;

// void swap(int array[], int element1, int element2, int &swapCount) // this function swap the elements in the array
// {
//     int temp  = array[element1];
//     array[element1] = array[element2];
//     array[element2] = temp;
//     swapCount++;
// }

// void printArray(int array[], int size) // Print each element of the array
// {
//     for(int i = 0; i < size; i++)
//     {
//         cout << array[i] << " ";
//     }
//     cout << endl;
// }

// void selectionSort(int array[], int size) 
// {
//     for(int i = 0; i < size - 1 ; i++) // this loop will travel all the array and set the max index as the iteration 
//     {
//         int maxIndex = i; // this will set the max index
//         for(int j = i + 1 ; j < size; j++) // we will travel all elements
//         {
//             if(array[j] > array[maxIndex]) // and compare with maxIndex, if maxIndex is less than that element
//             {
//                 maxIndex = j; // we chang the value of maxIndex
//             }
//         }
//         if(maxIndex != i) // and then we swap it.
//         {
//             swap(array, i, maxIndex, swapCount);
//             printArray(array, size);  // Only print after a swap
//         }
//     }
// }

// int main()
// {
//     int array[] = {123,42,12,234,35,32,463,76,34,2};
//     int size = sizeof(array) / sizeof(array[0]);

//     cout << "----------------- This is the unsorted array -----------------" << endl;
//     printArray(array, size);

//     selectionSort(array, size);

//     cout << "----------------- This is the sorted array (using Selection Sort descending order) -----------------" << endl;
//     printArray(array, size);
//     cout << "Swaps performed: " << swapCount << endl;

//     return 0;
// }


//part 3: insertion sort

// #include<iostream>

// using namespace std;

// int shift = 0 ;
// void insertion(int array[], int size)
// {
//     for(int i = 1; i < size; i++) // here we will travel the array from the 2nd element
//     {
//         int key = array[i]; // we put key equals to array[i] because we will insert an element in its position and need to save it
//         int j = i - 1;  // j = 0 at the begging

//         while(j >=0 && array[j] > key) // j greater or equal to 0 and the array in position j bigger than our key
//         {
//             array[j + 1] = array[j]; // insert the element in the position j + 1
//             j = j -1; 
//         }
//         array[j + 1] = key; // put back the element that was in the position where we insert the last element.
//     }
// }


// void printArray(int array[], int size)  // this is the same function that prints the array.
// {
//     for (int i = 0; i < size ; i++)
//     {
//         cout << array[i] << " ";
//     }
//     cout << endl;
// }

// int main()
// {
//     int array[] = {123,42,12,234,35,32,463,76,34,2}; // create the array
//     int size = sizeof(array) / sizeof(array[0]); // size of the array

//     cout << "----------------- This is the unsorted array -----------------" << endl;
//     printArray(array, size); // print unsorted

//     insertion(array, size); // sort
//     cout << "----------------- This is the sorted array (using insetion Sort) -----------------" << endl;
//     printArray(array, size); // print sorted array/

//     return 0;
// }


// part 4 merge sort:
// #include<iostream>
// using namespace std;

// void merge(int array[], int begin, int middle, int end)
// {
//     int i, j, k;
//     int elementsLeft = middle - begin + 1; 
//     int elementsRight = end - middle;

//     int left[elementsLeft];
//     int right[elementsRight];

//     for (i = 0; i < elementsLeft; i++) {
//         left[i] = array[begin + i];
//     }
//     for (j = 0; j < elementsRight; j++) {
//         right[j] = array[middle + 1 + j];
//     }

//     i = 0;
//     j = 0;
//     k = begin;

//     while (i < elementsLeft && j < elementsRight) {
//         if (left[i] <= right[j]) {
//             array[k] = left[i];
//             i++;
//         } else {
//             array[k] = right[j];
//             j++;
//         }
//         k++;
//     }

//     while (i < elementsLeft) {
//         array[k] = left[i];
//         i++;
//         k++;
//     }
//     while (j < elementsRight) {
//         array[k] = right[j];
//         j++;
//         k++;
//     }
// }


// void printArray(int array[], int size)
// {
//     for(int i =0; i < size; i++)
//     {
//         cout << array[i] << " ";
//     }
//     cout << endl;
// }


// void mergeSort(int array[], int begin, int end)// three steps, divide, conquere, combine, implement 1 & 2
// {
//     if(begin < end){
//     int middle = begin + (end - begin) / 2;
//     mergeSort(array, begin, middle);  //0 4
//     mergeSort(array, middle+1, end); // 5-9
//     merge(array, begin, middle, end);
//     }

// }

// int main()
// {

//     int array[10] = {34,123,52,3123,351,12,324,65,87,65};
//     int size = sizeof(array) / sizeof(array[0]);
//     printArray(array, size);
//     mergeSort(array,0,size-1);
//     printArray(array, size);

//     return 0;
// }



//part 5 quick sort:

#include<iostream>

using namespace std;

void printArray(int array[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << array[i] <<" " ;
    }
    cout << endl;
}


void swap(int array[],int position, int leftwall)
{
  int temp = array[position];
  array[position] = array[leftwall];
  array[leftwall] = temp;
}



int partition(int array[], int low, int high)// first it will be 0 to 9, then 0 to 3, then 0 to 2, then
{
    int pivot = array[high]; // pivot is the last element of the array
    int i = low - 1; //starts with value of -1

    for (int j = low; j < high; j++)  // j = 0 , high = 9, j = 0 , high = 3
    {
        if (array[j] <= pivot)
        {
            i++;
            cout << "************************ The value of i now is: [" << i << "] ********************************" << endl;
        
            swap(array, i, j);
            cout << "############### Array in the iteation number : [" << j << "]" << "###############"<<endl;
            printArray(array,10);
        }
    }
    cout <<"End of iteration"<< endl;
    swap(array, i + 1, high);  //second call will be: i+1 = 3, high = 3
    printArray(array,10);
    cout << "holi: " << i << endl;
    return i + 1;
}


void quickSort(int array[], int low, int high)   // array , 0 , 9.
{
    if(low < high)
    {
        int pivot_location = partition(array,low,high);
        quickSort(array,low,pivot_location -1); // in this call low still 0 , pivot_location = 4.
        quickSort(array,pivot_location + 1,high);  //first it will cover from 1 to 2 then        from 5 to 9.
    }
}




int main()
{
    int array[10] = {34,123,52,3123,351,12,324,65,87,65};
    int size = sizeof(array) / sizeof(array[0]);
    cout << "Original array: " << endl;
    printArray(array, size);
    quickSort(array, 0, size -1);
    cout << "######### Sorted Array #########" << endl;
    printArray(array, size);
    return 0;
}