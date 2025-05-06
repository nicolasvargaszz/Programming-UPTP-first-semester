/*#include<iostream>
using namespace std;

int main(){
    int userNumber;

    cout << "Enter a number and i will tell you if the number is even or odd" << endl;

    cin >> userNumber;  //store the variable

    if(userNumber % 2 == 0){
        cout << "The number is even" << endl; // if the remainder when divided by 2 is 0 then the number is odd
    }
    else{
        cout << "The Number is odd" << endl;  //otherwise the number is odd.
    }
    return 0;
}*/

/*#include<iostream>
using namespace std;

int main(){
    int grade; 

    cout << "Tell me how many points did you get in Data from 0 to 100" << endl;
    cin >> grade;

    if(grade < 60){ // First condition using if
        cout << "You got a F, sorry you fail." << endl;
    }
    else if(grade >= 60 && grade <= 69){ // then we write te condition for a D
        cout << "You got a D" << endl;
    }
    else if(grade >= 70 && grade <= 79){ // then we write te condition for a C
        cout << "You got a C" << endl;
    }
    else if(grade >= 80 && grade <= 89){ // then we write te condition for a B
        cout << "You got a B" << endl;
    }
    else if(grade >= 90 && grade <= 100){  // then we write te condition for a A
        cout << "You got a A" << endl;
    }
    else{
        cout << "Not valid " << endl;
    }

    return 0;
}*/

/*#include<iostream>
using namespace std;

int main(){
    int number1, number2, number3; // declare the variables
    cout << "Provide me the first number" << endl;
    cin >> number1;
    cout << "Provide me the second number" << endl;
    cin >> number2;
    cout << "Provide me the third number" << endl;
    cin >> number3;

    if(number1 > number2 && number1 > number3){  // if the first is grater than the 2nd and 3rd then print num1
        cout << "The number " << number1 << " is the grater between them" <<endl; 
    }
    else if(number2 > number1 && number2 > number3){ // use else if and same logic for the second
        cout << "The number " << number2 << " Is the grater between them" << endl;
    }
    else{  // if non of the first two is true then 3 is the greater
        cout << "The number " << number3 << " is the bigger." << endl;
    }
    return 0;
}*/


#include<iostream>
using namespace std;

int main(){
    int a,b,c;

    cout << "Provide me the first side of the triangle" << endl;
    cin >> a;
    cout << "Provide me the second side of the triangle" << endl;
    cin >> b;
    cout << "Provide me the third side of the triangle" << endl;
    cin >> c;

    if(a == b && a == c){  // If all side are equal then it is a equilateral
        cout << "You have a Equilateral triangle" <<endl;
    }
    else if(a != b && a != c && b != c){  //if all sides are different then it is a scalene
        cout << "You have a Scalene Triangle." <<endl;
    }
    else if(a == b || b == c || c == a){ // if it has one with two equal side then is isosceles.
        cout << "You have a isosceles. " << endl;
    }
return 0;
}