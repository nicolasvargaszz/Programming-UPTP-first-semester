#include<iostream>
using namespace std;

int main(){
    float length, width;

    cout << "Enter the length of the rectangle: " << endl;
    cin >> length;
    cout << "Enter the width of the rectangle: " << endl;
    cin >> width;

    cout << "The area of the rectangle is: " << length * width << endl; // We use the formula of the area of a rectangle l * w
    cout << "The Perimeter of the rectangle is: " << 2 * (length + width) << endl; //we use the formula of the perimeter of a rectangle 2(l + w)
}