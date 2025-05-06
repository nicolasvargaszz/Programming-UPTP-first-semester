// #include<iostream>
// #include<string>
// using namespace std; 

// // Function to get the number of drawers from the user
// int numberDrawers(){
//     int numDrawers;
//     cout << "How many Drawers do you have: ";
//     cin >> numDrawers;
//     return numDrawers; // Returns the entered number
// }

// // Function to convert the input character to the wood type string
// string typeOfWood(char woodType){
//     switch (woodType) {
//         case 'm':
//             return "Mahogany";
//         case 'o':
//             return "Oak";
//         case 'p':
//             return "Pine";
//         default:
//             return "Unknown"; // Handles invalid input
//     }
// }

// // Function to calculate the total cost of the desk
// int costOfDesk(int drawers, string woodType ){
//     int cost;
//     cost = (30 * drawers); // Base cost from number of drawers

//     // Add extra cost depending on the type of wood
//     if(woodType == "Mahogany"){
//         cost += 100;
//     }
//     else if(woodType == "Oak"){
//         cost += 140;
//     }
//     else if(woodType == "Pine"){
//         cost += 180;
//     }
//     else{
//         cost += 180; // Extra charge for unknown wood type
//     }

//     return cost; 
// }

// int main(){
//     int drawers; 
//     int cost;
//     char woodInput;
//     string woodType;
    
//     // Get number of drawers from user
//     drawers = numberDrawers();

//     // Ask user for wood type and read input
//     cout << "Enter the wood type (m for mahogany, o for oak, p for pine): ";
//     cin >> woodInput;

//     // Convert the character input to full wood name
//     woodType = typeOfWood(woodInput);

//     // Calculate the total cost of the desk
//     cost = costOfDesk(drawers, woodType);

//     // Print the final price
//     cout << "The final price of your desk is: " << cost << endl;

//     return 0;
// }


// code number 2

// #include<iostream>
// #include<string>
// using namespace std;

// // Define a struct named Carpet to store dimensions
// struct Carpet
// {
//     int lengthInFeet; // Carpet length
//     int widthInFeet;  // Carpet width
// };

// // Function to calculate and display the area of a rectangle (carpet)
// void displayArea(const Carpet& carpet){
//     int area = carpet.lengthInFeet * carpet.widthInFeet; // formula w*l
//     cout << "The area is: " << area << endl;
// }

// int main(){
//     Carpet carpet; // Create a Carpet object

//     // Initialize length and width values
//     int length = 10;
//     int width = 20;

//     // Set the struct fields with these values
//     carpet.lengthInFeet = length;
//     carpet.widthInFeet = width;

//     // Call function to display the area using struct values
//     displayArea(carpet);
// }


//code number 3

// #include<iostream>
// #include<string>
// using namespace std;

// // Struct to represent a Shirt
// struct Shirt {
//     float collarSize;      // in inches
//     float sleeveLength;    // in inches
// };

// // Struct to represent a pair of Pants
// struct Pants {
//     double waistSize;  // in inches
//     double inseam;     // in inches
// };

// // Function to display shirt info
// void displayClothingFacts(float collarSize, float sleeveLength){
//     cout << "####### T-Shirt Information ########" << endl;
//     cout << "Collar Size: " << collarSize << " inches" << endl;
//     cout << "Sleeve Length: " << sleeveLength << " inches" << endl << endl;
// }

// // Overloaded function to display pants info
// void displayClothingFacts(double waistSize, double inseam){
//     cout << "####### Pants Information ########" << endl;
//     cout << "Waist Size: " << waistSize << " inches" << endl;
//     cout << "Inseam Length: " << inseam << " inches" << endl << endl;
// }

// int main() {
//     // Create Shirt and Pants objects
//     Shirt shirt;
//     Pants pants;

//     // Assign measurements to the shirt
//     shirt.collarSize = 10.6;
//     shirt.sleeveLength = 20.1;

//     // Assign measurements to the pants
//     pants.waistSize = 32;
//     pants.inseam = 34;

//     // Display the clothing measurements
//     displayClothingFacts(shirt.collarSize, shirt.sleeveLength);
//     displayClothingFacts(pants.waistSize, pants.inseam);

//     return 0;
// }


// code 4

// #include <iostream>
// #include <string>
// using namespace std;

// // Structure for Dog with a name field
// struct Dog {
//     string name;
// };

// // Structure for Cat with a name field
// struct Cat {
//     string name;
// };

// // Overloaded function for Dog
// void speak(const Dog& dog) {
//     cout << dog.name << " says woof!" << endl;
// }

// // Overloaded function for Cat
// void speak(const Cat& cat) {
//     cout << cat.name << " says meow!" << endl;
// }

// int main() {
//     // Declare and assign a Dog
//     Dog myDog;
//     myDog.name = "Beily";

//     // Declare and assign a Cat
//     Cat myCat;
//     myCat.name = "sushi";

//     // Call the overloaded speak functions
//     speak(myDog);  // Outputs: beily says woof!
//     speak(myCat);  // Outputs: sushi says meow!

//     return 0;
// }


//code number 5:

#include<iostream>
#include<string>
using namespace std;

struct Employee{
    string name;
    int hoursWorked;
    double hourlyRate;
};

int calculateSalary(const Employee& employee){
    int salary = 0;
    int extra_hours = 0;
    if(employee.hoursWorked < 40)
    {
    salary = employee.hourlyRate * employee.hoursWorked;
    }
    else if(employee.hoursWorked > 40){
        extra_hours = (employee.hoursWorked - 40) * 1.5 * employee.hourlyRate;
        salary = employee.hourlyRate * 40;
        salary += extra_hours;
    }
    return salary;
}


int main(){
    Employee employee;
    int salary;

    employee.name = "Nicolás";
    employee.hourlyRate = 50;
    employee.hoursWorked = 41;
    
    salary  = calculateSalary(employee);

    cout << "The salary of " << employee.name << " is " << salary << " USD " << endl;
    cout << "He worked a total amount of: " << employee.hoursWorked << "hours " <<endl;
    return 0;
}