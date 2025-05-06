//Write a program to insert an element in the middle of an array.

#include<iostream>
using namespace std;

void enterMiddle(int arr[],int &n,int element){
    int middle = (n % 2 == 0) ? (n / 2) : ((n / 2) + 1);

    for (int i = n; i > middle; i--) {
        arr[i] = arr[i - 1];
    }

    arr[middle] = element;

    n++;

}

int main(){

    int n, element;
    int arr[100];  //fixed size array
    cout << "Enter the numbers of elements of the array: ";
    cin >> n;
    cout << "Enter the " << n << " elements of your array: " << endl;

    for(int i=0; i < n; i++){
        cin >> arr[i];
    }

    cout << "Enter the number you want to insert in the middle: ";
    cin >> element;

    enterMiddle(arr,n,element);

    for(int i=0;i < n;i++){
        cout << arr[i] <<" " << endl;
    }
    return 0;

}