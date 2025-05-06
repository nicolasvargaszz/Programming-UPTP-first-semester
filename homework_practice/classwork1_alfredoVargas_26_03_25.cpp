// #include<iostream>
// using namespace std;

// int main(){
//     int array[15];
//     for(int i=0; i<15; i++){
//         cout << "please enter the element "<< i << " of the array: ";
//         cin >> array[i];
//     }
//     for(int i=0; i<15; i++){
//         cout << array[i] << endl;
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;


// void printArray(int arr[], int size){
//     for(int i = 0; i < size; i++){
//         cout << "the element [" << i << "] of the array is: " << arr[i] << endl ;
//     }

// }


// int main(){
//     int arr[] = {1,2,3,4,5,6,7,8,9};
//     printArray(arr, 9);
//     return 0;

// }

// #include<iostream>
// using namespace std;

// int findMax(int arr[],int size){
//     int max = arr[0];
//     for(int i =0 ; i < size; i++){
//          if(arr[i] > max){
//             max = arr[i];   // we use a external variable, if any other element is greater we change the value
//          }
//     }
//     cout << max << endl;
//     return max;
// }


// int main(){
//     int arr[] = {1,1234,12,123,1231,4,3,12,3};
//     findMax(arr, 9);
//     return 0;
// }