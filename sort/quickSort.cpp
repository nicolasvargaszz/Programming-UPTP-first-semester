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