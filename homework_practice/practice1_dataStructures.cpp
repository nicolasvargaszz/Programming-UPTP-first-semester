// #include<iostream>
// #include<math.h>
// using namespace std;

// int main(){
//     int a,b; //we declare the variables.
//     int hypotenuse;  //declare the hypotenuse

//     cout << "Please enter the first side of the triangle: "; //ask the user for the first cateto
//     cin >> a;
    
//     cout << "Please enter the second side of the triangle: "; //ask the user for the second cateto
//     cin >> b;

//     hypotenuse = a*a + b*b;  // use pythagoras teorem
//     cout << "the hypotenuse is: " << sqrt(hypotenuse);  //show the resul
    

//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){

//     string person_name;   //declare the name as string
//     int age;               // declare the age as int
//     string person_color;     // declare the color as string
    
//     cout << "what is your name: "; //ask the name
//     cin >> person_name;              //store the name

//     cout << "How old are you: ";     //ask age
//     cin >> age;          //store age
 
//     cout << "What is your favorite color: ";     //ask color
//     cin >> person_color;     //store color

//     //show the result
//     cout << "Hello " << person_name << " You are " << age << " years old " << "And your favorite color is: " << person_color << endl;



//     return 0;
// }


#include<iostream>
using namespace std;

int main(){
    int a,b;  //declare variables

    cout << "enter the first number: ";  //ask the first number
    cin >> a;   //store the first number

    cout << "enter the second number: ";     //ask the second number
    cin >> b;            //store the number

    cout << "the addition is: " << a+b << endl;  //perform the adition

    cout << "The substraction is: " << a-b << endl; //perform the substraction

    cout << "The product is: " << a*b << endl; //perform the multiplication

    cout << "The quotinent is: " << a/b << endl;   //perform the divition



    return 0;
}