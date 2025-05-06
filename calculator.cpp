#include<iostream>
using namespace std;

int add(int num1, int num2){
    int solution = num1 + num2;  // perform the addition
    cout << solution << endl;
    return solution;
}

int substract(int num1, int num2){
    int solution = num1 - num2; // perform substraction
    cout << solution << endl;
    return solution;
}

int multiply(int num1, int num2){
    int solution = num1 * num2; // perform mult
    cout << solution << endl;
    return solution;

}
float divide(float num1, float num2){
    float solution = num1 / num2; // perform the divition
    cout << solution << endl;
    return solution;
}


int main(){
    int num1 = 10;
    int num2 = 20;
    // call the functions.
    add(num1,num2);  
    substract(num1, num2);
    multiply(num1,num2);
    divide(12.3,5.1); 
}