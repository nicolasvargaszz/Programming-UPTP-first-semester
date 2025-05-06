#include<iostream>
using namespace std;

int main(){
    float fahrenheit, celsius; 

    cout << "how many degree farenheits do you have: " <<endl;
    cin >> fahrenheit;
    celsius = (fahrenheit - 32) * 5.0 / 9.0;  //this is the formula for the convertion
    cout << "Then that is equal to: " << celsius <<endl; //print the result

    return 0;
}
