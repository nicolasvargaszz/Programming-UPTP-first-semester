#include<iostream>
using namespace std;

int main(){
    int a, b;

    cout << "Input the first number: " << endl;
    cin >> a;
    cout << "Input the second number: " << endl;
    cin >> b;
//this is simpler to see if you provide some values to a and b, let a =1 b =2
    a = a + b;  // now a = 3
    b = a - b; // now b = 1
    a = a - b; // now a = 2

    cout<< "now the first digit is: " << a << " and the second is: " << b << endl; //print the result

    return 0;
}