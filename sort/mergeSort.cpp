#include<iostream>
using namespace std;

void merge(int array[], int begin, int middle, int end)
{
    int i, j, k;
    int elementsLeft = middle - begin + 1; 
    int elementsRight = end - middle;

    int left[elementsLeft];
    int right[elementsRight];

    for (i = 0; i < elementsLeft; i++) {
        left[i] = array[begin + i];
    }
    for (j = 0; j < elementsRight; j++) {
        right[j] = array[middle + 1 + j];
    }

    i = 0;
    j = 0;
    k = begin;

    while (i < elementsLeft && j < elementsRight) {
        if (left[i] <= right[j]) {
            array[k] = left[i];
            i++;
        } else {
            array[k] = right[j];
            j++;
        }
        k++;
    }

    while (i < elementsLeft) {
        array[k] = left[i];
        i++;
        k++;
    }
    while (j < elementsRight) {
        array[k] = right[j];
        j++;
        k++;
    }
}


void printArray(int array[], int size)
{
    for(int i =0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}


void mergeSort(int array[], int begin, int end)// three steps, divide, conquere, combine, implement 1 & 2
{
    if(begin < end){
    int middle = begin + (end - begin) / 2;
    mergeSort(array, begin, middle);  //0 4
    mergeSort(array, middle+1, end); // 5-9
    merge(array, begin, middle, end);
    }

}

int main()
{

    int array[10] = {34,123,52,3123,351,12,324,65,87,65};
    int size = sizeof(array) / sizeof(array[0]);
    printArray(array, size);
    mergeSort(array,0,size-1);
    printArray(array, size);

    return 0;
}
