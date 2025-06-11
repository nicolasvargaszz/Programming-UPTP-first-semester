#include<iostream>

using namespace std;

class Rectangle // father class Rectangle
{
private:
    double length;
    double width;
public:
void getValues(double l, double w)
{
    length = l;
    width = w;
}
void display()
{
    cout << "Length: " << length << " , width :" << width << endl;
}
double area()
{
    return length * width;
}
};

class Box : public Rectangle // child class Box
{
private:
    double height;
public:
    void getValues(double l, double w, double h)
    {
        Rectangle::getValues(l, w); // call the base class method
        height = h;
    }
    double volume() 
    {
        return area() * height; // use the area method from the base class.
    }
};


int main()
{
    Rectangle rect;
    rect.getValues(5.0, 3.0);
    rect.display();
    cout << "The area of the rectangle is: " << rect.area() << endl;

    Box box;
    box.getValues(5.0, 3.0, 4.0);
    box.display();
    cout << "The area of the rectangle in the box is: " << box.area() << endl;
    cout << "The volume of the box is: " << box.volume() << endl;

    return 0;
}

// code number 2:

// class MusicalComposition
// {
// private:
//     string title;
//     string composer;
//     int year;
// public:
//     MusicalComposition(string _title, string _composer, int _year)
//     {
//         title = _title;
//         composer = _composer;
//         year = _year;
//     }
//     void printTitle()
//     {
//         cout << title << endl;
//     }
//     void printComposer(){cout << composer << endl; }
//     void printYear(){cout << year << endl;}
// };

// class nationalAnthem : public MusicalComposition
// {
// private: 
//     string country;
// public:
//     nationalAnthem(string _title, string _composer, int _year, string _country)
//         : MusicalComposition(_title, _composer, _year), country(_country) // call the base class constructor
//     {}
//     void printCountry()
//     {
//         cout << country << endl;
//     }
//     void display()
//     {
//         cout << "Title: "; 
//         printTitle(); 
//         cout << "\n Composer: ";
//         printComposer();
//         cout << "\n Year: ";
//         printYear(); 
//         cout << "\n Country: ";
//         printCountry();
//     }
// };


// int main()
// {
//     MusicalComposition composition("Symphony No. 5", "Ludwig van Beethoven", 1808);
//     nationalAnthem anthemParaguay("Paraguayan National Anthem", "Francisco Figueroa", 1846, "Paraguay");
//     anthemParaguay.display();
//     return 0;
// }

// // code number 3:
// #include <iostream>
// using namespace std;

// class book
// {
// private:
//     string title;
//     string author;
// public:
//     void setValues(string _title, string _author)
//     {
//         title = _title;
//         author = _author;
//     }
//     void display()
//     {
//         cout << "Title: " << title << ", Author: " << author << endl;
//     }
// };


// class fictionBook : public book
// {
// private:
//     int numericGradeLevel;
// public:
//     void setValues(string _title, string _author, int _numericGradeLevel)
//     {
//         book::setValues(_title, _author); // call the base class method
//         numericGradeLevel = _numericGradeLevel;
//     }
//     void display()
//     {
//         book::display(); // call the base class display method
//         cout << "Numeric Grade Level: " << numericGradeLevel << endl;
//     }
// };

// class nonFictionBook : public book
// {
// private:
//     int numberOfPages;
// public:
//     void setValues(string _title, string _author, int _numberOfPages)
//     {
//         book::setValues(_title, _author); // call the base class method
//         numberOfPages = _numberOfPages;
//     }
//     void display()
//     {
//         book::display(); // call the base class display method
//         cout << "Number of Pages: " << numberOfPages << endl;
//     }
// };

// int main()
// {
//     fictionBook fBook;
//     fBook.setValues("The Great Gatsby", "F. Scott Fitzgerald", 10);
//     fBook.display();

//     nonFictionBook nfBook;
//     nfBook.setValues("A Brief History of Time", "Stephen Hawking", 256);
//     nfBook.display();

//     return 0;
// }


// // code number 4:
// #include <iostream>

// using namespace std;

// class Investment
// {
// private: 
//     double initialInvestment;
//     double currentValue;
//     double profit;
// public:
//     Investment(double _initialInvestment, double _currentValue)
//         : initialInvestment(_initialInvestment), currentValue(_currentValue)
//     {
//         profit = currentValue - initialInvestment;
//     }
    
//     void display()
//     {
//         cout << "Initial Investment: $" << initialInvestment << endl;
//         cout << "Current Value: $" << currentValue << endl;
//         cout << "Profit: $" << profit << endl;
//     }

//     void calculateProfit()
//     {
//         profit = currentValue - initialInvestment;
//     }

//     void percentageProfit()
//     {
//         if (initialInvestment != 0)
//         {
//             double percentage = (profit / initialInvestment) * 100;
//             cout << "Percentage Profit: " << percentage << "%" << endl;
//         }
//         else
//         {
//             cout << "Initial investment cannot be zero." << endl;
//         }
//     }

// };

// class House : public Investment
// {
// private:
//     string address;
// public:
//     House(double _initialInvestment, double _currentValue, string _address)
//         : Investment(_initialInvestment, _currentValue), address(_address) {}

//     void display()
//     {
//         Investment::display();
//         cout << "Address: " << address << endl;
//     }
//     void calculateProfit()
//     {
//         Investment::calculateProfit();
//         cout << "House profit calculated." << endl;
//     }
//     void percentageProfit()
//     {
//         Investment::percentageProfit();
//         cout << "House percentage profit calculated." << endl;
//     }
//     void displayAddress()
//     {
//         cout << "House Address: " << address << endl;
//     }
//     void displayInvestmentDetails()
//     {
//         display();
//         displayAddress();
//         calculateProfit();
//         percentageProfit();
//     }
// };

// int main()
// {
//     Investment inv(1000.0, 1500.0);
//     inv.display();
    
//     House house(200000.0, 250000.0, "cap figari 1914");
//     house.displayInvestmentDetails();
//     house.displayAddress();
//     house.calculateProfit();
//     house.percentageProfit();
//     house.display();
//     house.displayInvestmentDetails();
//     house.percentageProfit();
//     return 0;
// }