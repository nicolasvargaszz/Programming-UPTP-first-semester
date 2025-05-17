// // 1. Create a class named TestClass that holds a single private integer field and a public constructor.
// // The only statement in the constructor is one that displays the message “Constructing”. 
// // a)Write a main()function that instantiates one object of the TestClass. 
// // b) Write another main()function that instantiates an array of 10 TestClass objects. 



#include<iostream>
using namespace std;

class TestClass
{
private: 
    int id;
public:
    TestClass()
    {
        cout << "Constructing" << endl;
    }   

};

int main()
{
    //part a:
    //TestClass testclass;
    //part b
    TestClass arr[10];
    return 0;
}

// Write the class definition for a Date class that contains three integer data members: month, day, and
// year. Include a default constructor that assigns the date 1/1/2000 to any new object that does not
// receive arguments. Also include a function that displays the Date object. Write a main()function in
// which you instantiate two Date objects—one that you create using the default constructor values, and
// one that you create using three arguments—and display its values. 

// #include<iostream>

// using namespace std;

// class Date
// {
// private:
//     int month, day, year; // the variables that the class will hold.
// public:
//     Date() // this is the default constructor
//     {
//         month = 1;
//         day = 1;
//         year = 2000;
//     }
    
//     Date(int _month, int _day, int _year) // this is the constructor with parameters.
//     {
//         month = _month;
//         day = _day;
//         year = _year;
//     }

//     void displayDate()
//     {
//         cout << "Today's date is: " << year << '/' << month << "/" << day << endl;
//     }
// };

// int main()
// {
//     Date defaultDate; // this is using the dafault constructor.
//     Date date(10,18,2025); // this is using the parametized constructor.
//     cout << "---------------- Default Date ----------------" << endl;
//     defaultDate.displayDate();// this will print the default date
//     cout << "---------------- Date ----------------" << endl;
//     date.displayDate();
//     return 0;
// }


// Create a Person class that includes fields for last name, first name, and zip code. Include a default
// constructor that initializes last name, first name, and zip code to “X” if no arguments are supplied. Also
// include a display function. Write a main()function that instantiates and displays two Person objects:
// one that uses the default values, and one for which you supply your own values. 


// #include<iostream>
// #include<string>


// // using namespace std; 

// class Person // definition of the class.
// {
// private: // the variables must be in private due to abstraction
//     string name, lastname;
//     int zipcode;
// public: 
//     Person() //default constructor
//     {
//         zipcode=0;
//         name = "Juan";
//         lastname = "Perez";
//     }
//     Person(string _name,string _lastname, int _zipcode) // parametized constructor
//     {
//         name = _name;
//         lastname = _lastname;
//         zipcode = _zipcode;
//     }

//     void displayInformation()
//     {
//         cout << "The Name of the person is: " << name << " " << lastname << endl;
//         cout << "The zip code of the person is: " << zipcode << endl;
//     }
// };


// int main()
// {
//     Person defaultPerson; // define a default person
//     Person NicolasVargas("Nicolas", "Vargas", 1231); // define a specific person with parameters.

//     defaultPerson.displayInformation();
//     NicolasVargas.displayInformation();
//     return 0;
// }

//4. Create a class named Car. The Car class contains a static integer field named count. Create a constructor that adds 1 to the count and displays the count each time a Car is created. Create a destructor that subtracts 1 from the count and displays the count each time a Car goes out of scope. Write a main()function that declares an array of five Car objects. Output consists of five constructor messages and five destructor messages, each displaying the current count

// #include<iostream>
// #include<string>

// using namespace std; 

// class Car
// {
// private:
//     static int count;

// public:
//     Car()
//     {
//         cout << "Constructing" << endl;
//         count++;
//         cout << "The count value is: " << count << endl; 
//     }
//     ~Car()
//     {
//         cout << "Destructing" << endl;
//         count--;
//         cout << "The count value is: " << count << endl; 
//     };


// };

// int Car::count = 0;

// int main()
// {
//     Car arr[5];
//     return 0;
// }

//Create a class named MagazineSubscription. Include fields for the subscriber (use the Person class you created in Exercise 3) and the subscription’s start and expiration dates (use the Date class you created in Exercise 2). Include a constructor that takes three arguments—a Person and two Dates. Also include a display function that displays MagazineSubscription fields by calling the Person and Date display functions. Write a main()function in which you instantiate a Person object and two Date objects. Use these as arguments to the constructor that instantiates a MagazineSubscription object. Display the MagazineSubscription object .

// #include<iostream>
// #include<string>

// using namespace std; 

// class MagazineSubscription
// {
// private: 
//     Person person;
//     Date startDate;
//     Date expirationDate;
// public:
//     MagazineSubscription(Person _person, Date _startDate, Date _expirationDate)
//     {
//         person = _person;
//         startDate = _startDate;
//         expirationDate = _expirationDate;
//     }

//     void DisplayInformation()
//     {
//         cout << "The name of the client is: " << endl;
//         person.displayInformation();
//         cout << "The start day of the subscription is: " << endl;
//         startDate.displayDate();
//         cout << "The end day of the subscription is: " << endl;
//         expirationDate.displayDate();

//     }
// };

// int main()
// {
//     Person Nicolas("Alfredo", "Vargas", 1234);
//     Date startDate(5,7,2025);
//     Date expirationDate(5,7,2027);
//     MagazineSubscription firstClient(Nicolas,startDate, expirationDate);
//     firstClient.DisplayInformation();
//     return 0;
// }

//Create a class named RealtorCommission. Fields include the sale price of a house, the sales commission rate, and the commission. Create two constructors. Each constructor requires the sales price (expressed as a double) and the commission rate. One construc- tor requires the commission rate to be a double, such as .06. The other requires the sale price and the commission rate expressed as a whole number, such as 6. Each constructor calculates the commission value based on the price of the house multiplied by the com- mission rate. The difference is that the constructor that accepts the whole number must convert it to a percentage by dividing by 100. Also include a display function for the fields contained in the RealtorCommission class. Write a main()function that instantiates at least two RealtorCommission objects—one that uses a decimal and one that uses a whole number as the commission rate. Display the RealtorCommission object values. 
// #include<iostream>
// using namespace std;

// class RealtorCommission
// {
// private:
//     double salePrice;
//     double commissionRate;
//     double commission;

// public:
//     // Constructor for decimal rate (e.g., 0.06)
//     RealtorCommission(double price, double rate)
//     {
//         salePrice = price;
//         commissionRate = rate;
//         commission = salePrice * commissionRate;
//     }

//     // Constructor for whole number rate (e.g., 6%)
//     RealtorCommission(double price, int rate)
//     {
//         salePrice = price;
//         commissionRate = static_cast<double>(rate) / 100; // convert to decimal
//         commission = salePrice * commissionRate;
//     }

//     // Display function
//     void display()
//     {
//         cout << "Sale Price: $" << salePrice << endl;
//         cout << "Commission Rate: " << commissionRate * 100 << "%" << endl;
//         cout << "Commission Earned: $" << commission << endl;
//     }
// };

// int main()
// {
//     // Using decimal rate
//     RealtorCommission realtor1(250000.0, 0.06);

//     // Using whole number rate
//     RealtorCommission realtor2(300000.0, 5);

//     // Displaying results
//     cout << "Realtor 1 details:" << endl;
//     realtor1.display();
//     cout << endl;

//     cout << "Realtor 2 details:" << endl;
//     realtor2.display();

//     return 0;
// }
