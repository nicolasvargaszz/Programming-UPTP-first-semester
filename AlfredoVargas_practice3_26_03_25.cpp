#include <iostream>
#include <string>
using namespace std;

// Renamed your original "Student" to "StudentRecord" to avoid a name conflict.
struct StudentRecord {
    int creditHours;
    double gpa;
};

/*
  The Car structure has:
    - modelYear (int)
    - mpg (double)
*/
struct Car {
    int modelYear;
    double mpg;
};

struct Apartment {
    int numberBedrooms;
    int numberBath;
    int rent;
};

struct employee {
    int salary;
    int id;
    string name;
};


struct Student {
    string name;
    int idNumber;
    float marks;
};

struct Product{
    string productName;
    float price;
    int quantity;

};

void handleStudentRecordData() {
    StudentRecord oneSophomore;
    
    // Prompt the user for StudentRecord fields
    cout << "Enter the student's credit hours: ";
    cin >> oneSophomore.creditHours;
    
    cout << "Enter the student's GPA: ";
    cin >> oneSophomore.gpa;
    
    // Display what was entered
    cout << "\n--- Student Info ---" << endl;
    cout << "Credit Hours: " << oneSophomore.creditHours << endl;
    cout << "GPA: " << oneSophomore.gpa << endl << endl;
}

/*
  handleCarData:
    1) Declares a Car.
    2) Assigns values for modelYear and mpg.
    3) Displays these values.
*/
void handleCarData() {
    Car myCar;
    
    // Here we directly assign values.
    myCar.modelYear = 2023;
    myCar.mpg = 33.5;
    
    // Display the assigned values
    cout << "--- Car Info ---" << endl;
    cout << "Model Year: " << myCar.modelYear << endl;
    cout << "Miles per Gallon: " << myCar.mpg << endl << endl;
}

/*
  handleApartmentData:
    1) Declares an Apartment.
    2) Prompts the user for numberBedrooms and numberBath.
    3) Looks up appropriate rent based on your table.
    4) Displays the details, or shows an error if not available / invalid.
*/
void handleApartmentData() {
    Apartment myApartment;

    cout << "How many bedrooms do you want? ";
    cin >> myApartment.numberBedrooms;
    cout << "How many Baths do you need? ";
    cin >> myApartment.numberBath;
    bool validData = true;

    switch (myApartment.numberBedrooms) {
        case 1:
            if (myApartment.numberBath == 1) {
                myApartment.rent = 650;
            } else if (myApartment.numberBath == 2) {
                myApartment.rent = 0;  // Not available
            } else {
                validData = false;
            }
            break;
        case 2:
            if (myApartment.numberBath == 1) {
                myApartment.rent = 829;
            } else if (myApartment.numberBath == 2) {
                myApartment.rent = 925;
            } else {
                validData = false;
            }
            break;
        case 3:
            if (myApartment.numberBath == 1) {
                myApartment.rent = 0;  // Not available
            } else if (myApartment.numberBath == 2) {
                myApartment.rent = 1075;
            } else {
                validData = false;
            }
            break;
        default:
            validData = false;
    }
    // If anything was invalid, we set the rent to 0
    if (!validData) {
        myApartment.rent = 0;
    }

    // Display all data
    cout << "\n--- Apartment Details ---\n";
    cout << "Bedrooms:     " << myApartment.numberBedrooms << endl;
    cout << "Baths:        " << myApartment.numberBath << endl;
    cout << "Monthly Rent: $" << myApartment.rent << endl;

    // If invalid data was entered or the requested apartment is not available
    if (!validData || myApartment.rent == 0) {
        cout << "Error: Invalid data entered or the requested "
             << "apartment type is not available.\n";
    }
}

/*
  handleEmployeeData:
    - Uses an array of 5 employees
    - Prompts user for each employee's name, ID, and salary
    - Then displays all 5
*/
void handleEmployeeData() {
    employee myEmployee[5];
    for(int i = 0; i < 5; i++ ){
        cout << "Enter the name of employee number " << i+1 << ": ";
        cin >> myEmployee[i].name; 
        cout << "Enter the ID of employee number " << i+1 << ": ";
        cin >> myEmployee[i].id;
        cout << "Enter the Salary of employee number " << i+1 << ": ";
        cin >> myEmployee[i].salary;
        cout << endl;
    }

    for(int i = 0; i < 5; i++){
        cout << "----- Employee " << (i+1) << " -----\n";
        cout << "Name:   " << myEmployee[i].name << endl;
        cout << "ID:     " << myEmployee[i].id << endl;
        cout << "Salary: " << myEmployee[i].salary << endl << endl; 
    }
}


void handleNewStudentData() {
    // We'll store 3 students
    Student students[3];

    // Read in the data for each of the 3 students
    for(int i = 0; i < 3; i++) {
        cout << "Enter the name for student #" << (i+1) << ": ";
        cin >> students[i].name;
        
        cout << "Enter the ID number for student #" << (i+1) << ": ";
        cin >> students[i].idNumber;
        
        cout << "Enter the marks for student #" << (i+1) << ": ";
        cin >> students[i].marks;
        
        cout << endl;
    }

    // Prompt for an ID number to search
    int searchID;
    cout << "Enter an ID number to search for: ";
    cin >> searchID;

    // Use a while loop to search
    int index = 0;
    bool found = false;
    
    while (index < 3) {
        if (students[index].idNumber == searchID) {
            found = true;
            break;
        }
        index++;
    }

    // If found, display the details
    if (found) {
        cout << "\n--- Student Found ---" << endl;
        cout << "Name:   " << students[index].name << endl;
        cout << "ID:     " << students[index].idNumber << endl;
        cout << "Marks:  " << students[index].marks << endl;
    } else {
        cout << "Student not found.\n";
    }
}


void handleProductData() {
    Product myProduct[3];

    for (int i = 0; i < 3; i++) {
        cout << "Enter the product name #" << i + 1 << ": ";
        cin >> myProduct[i].productName;
        cout << "Enter the product price #" << i + 1 << ": ";
        cin >> myProduct[i].price;
        cout << "Enter the product quantity #" << i + 1 << ": ";
        cin >> myProduct[i].quantity;
        cout << endl;  // Blank line for readability
    }

    float totalCost = 0.0f;
    int index = 0;

    do {
        float cost = myProduct[index].price * myProduct[index].quantity;
        totalCost += cost;
        index++;
    } while (index < 3);

    // Display the total cost of all products
    cout << "The total cost of all products is: $" << totalCost << endl;
}


int main() {
    
    //handleStudentRecordData(); 
    //handleCarData();
    //handleApartmentData();
    //handleEmployeeData();
    
    // Test the new "Student" struct function:
    //handleNewStudentData();
    handleProductData();

    return 0;
}
