/*//code number 1 and 2

#include<iostream>
using namespace std;

int main(){
    int num1, num2;
    int *p;
    
    cout << "enter de value of number 1 \n";  //first enter the two numbers and store it
    cin >> num1;
    
    
    cout << "enter de value of number 2 \n";
    cin >> num2;


    cout << "The number you entered was " << num1 << " and " << num2 <<endl; //print both numbers
    p = &num1;  // create the pointer
    cout << "The pointer p value is " << *p << endl;  //prints pointer value
    cout << "The memory addres of p is " << p << endl;   // prints pointer memory addres

    *p = 100;  // change pointer value

    cout << "The new value of num1 is " << num1 << endl;
    cout << "The memory addres of num1 is " << &num1 << endl;

    p = &num2;
    *p = 300;  // change the value of num2

    cout << "The new value of num2 is " << num2 << endl;
    cout << "The memory addres of num2 is " << &num2 << endl;

    cout << "The pointer p value is " << *p << endl;  //prints pointer value
    cout << "The memory addres of p is " << p << endl;   // prints pointer memory addres

    *p *= 2;
    cout << "The new value of num2 is " << num2 << endl;

    
    return 0;
}*/

/*#include<iostream>
using namespace std;

int main(){
    int foo[10];

    for(int i=1; i<=10; i++){
        foo[i] = i;  // we store each elements of i and i starts at 1 and ends at 10
    }
    for(int i=1; i<=10; i++){
        cout << foo[i]<< endl; // print the array.
    }
    return 0;
}*/


/*#include<iostream>
using namespace std;

int main(){
    float foo[5];
    float sum=0;
    float avg;

    for(int i =0; i < 5; i++){
        cout << "Enter the element number" << i << " : ";  // use a for loop to store all the elements in the array
        cin >> foo[i];
    }

    for(int i =0; i < 5; i++){ // create the sum.
        sum += foo[i];
    }
    cout << "The sum is: " << sum << endl; 

    avg = sum / 5;  // calculate the avg

    cout << "the average is: " << avg << endl;


    return 0;
}*/

/*#include <iostream>
using namespace std;

int main() {
    int foo[] = { 16, 2, 77, 40, 121 };  // declare the array in the code
    for (int n = 4; n >= 0; --n) // logic to print backward/
        cout << foo[n] << endl;

    return 0;
}*/


// #include<iostream>
// using namespace std; 

// int main(){
//     int foo[8]  ={1,2,3,4,5,6,7,8}; // declare the array
//     int foo2[8];
//     for(int i=0; i<8; i++){
//         foo2[i] = foo[i]*2; // Store the new values in the new array
//     }
//     for(int i =0; i<8;i++){
//         cout << foo2[i] << endl;  //print the array.
//     }

//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main(){
//     int foo[3] = {1,2,3};
//     int foo2[3] = {4,5,6};
//     int foo3[6];

//     for(int i =0; i <3;i++ ){ // store the first 3 elements
//         foo3[i] = foo[i];
//     }
//     for(int i =0; i < 3; i++){ // store the last 3 elements
//         foo3[i+3] = foo2[i];
//     }

//     for(int i =0; i < 6 ;i++){ // [print the array]
//         cout << foo3[i] << endl;
//     }


//     return 0; 
// }