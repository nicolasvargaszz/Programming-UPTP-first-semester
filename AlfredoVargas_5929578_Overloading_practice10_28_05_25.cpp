#include<iostream>
#include <iomanip> // For std::setw and std::setfill

using namespace std;

class Complex {
private:
    double real;
    double imag;
public:
    Complex(double r = 0.0, double i = 0.0)
    {
        real = r;
        imag = i;
    }
    // Friend declaration for operator+
    friend Complex operator+(const Complex& c1, const Complex& c2);
     
    // Friend declaration for operator<<
    friend ostream& operator<<(std::ostream& os, const Complex& c);
};
    // Overloading the + operator for Complex numbers
    Complex operator+(const Complex& c1, const Complex& c2) // Changed parameters to c1 and c2 for clarity
    {
        return Complex(c1.real + c2.real, c1.imag + c2.imag);
    }
    // Overloading the << operator for Complex numbers
    ostream& operator<<(std::ostream& os, const Complex& c) 
    {
        os << c.real << " + " << c.imag << "i";
        return os;
    }

// Class Point representing a point in 2D space
class Point {
private:
    int x; // The x-coordinate of the point on a 2D plane.
    int y; // The y-coordinate of the point on a 2D plane.

public:
    // Constructor to initialize points
    Point(int _x = 0, int _y = 0) : x(_x), y(_y) {}

    // Overload the - operator to subtract two points (coordinate-wise)
    Point operator-(const Point& other) const {
        return Point(x - other.x, y - other.y);
    }

    // Friend function to overload the << operator to print the attributes of a point
    friend ostream& operator<<(ostream& os, const Point& p);
};

// Definition of the overloaded << operator for Point
ostream& operator<<(ostream& os, const Point& p) {
    os << "(" << p.x << ", " << p.y << ")";
    return os;
}

//vector class

class Vector3D
{  
private:
    double x; // The x-component of the vector.
    double y; // The y-component of the vector.
    double z; // The z-component of the vector.
public:
    Vector3D(double _x = 0.0, double _y = 0.0, double _z = 0.0) 
        : x(_x), y(_y), z(_z) {}
    // Overload the + operator to add two vectors
    Vector3D operator+(const Vector3D& other) const {
        return Vector3D(x + other.x, y + other.y, z + other.z);
    }
    // Overload the << operator to print the vector components
    friend ostream& operator<<(ostream& os, const Vector3D& v) {
        os << "(" << v.x << ", " << v.y << ", " << v.z << ")";
        return os;
    }
    // Overload the - operator to subtract two vectors
    Vector3D operator-(const Vector3D& other) const {
        return Vector3D(x - other.x, y - other.y, z - other.z);
    }
    // Overload the >> operator to read vector components
    friend istream& operator>>(istream& is, Vector3D& v) { 
        cout << "Enter x component: ";
        is >> v.x;
        cout << "Enter y component: ";
        is >> v.y;
        cout << "Enter z component: ";
        is >> v.z;
        return is;
    }
};

// Class Time to represent a time duration
class Time {
private:
    int hours;
    int minutes;
    int seconds;

    // Helper function to normalize the time
    void normalize() {
        if (seconds >= 60) {
            minutes += seconds / 60;
            seconds %= 60;
        } else if (seconds < 0) { // Handle negative seconds for subtraction
            int borrowedMinutes = (-seconds + 59) / 60;
            minutes -= borrowedMinutes;
            seconds += borrowedMinutes * 60;
        }

        if (minutes >= 60) {
            hours += minutes / 60;
            minutes %= 60;
        } else if (minutes < 0) { // Handle negative minutes for subtraction
            int borrowedHours = (-minutes + 59) / 60;
            hours -= borrowedHours;
            minutes += borrowedHours * 60;
        }
        // Assuming hours can be negative for subtraction results if needed,
        // or add constraints if hours must be positive.
    }

public:
    // Default constructor
    Time(int h = 0, int m = 0, int s = 0) : hours(h), minutes(m), seconds(s) {
        normalize(); // Normalize upon construction
    }

    // Overload + operator
    Time operator+(const Time& other) const {
        Time result;
        result.seconds = seconds + other.seconds;
        result.minutes = minutes + other.minutes;
        result.hours = hours + other.hours;
        result.normalize();
        return result;
    }

    // Overload - operator
    Time operator-(const Time& other) const {
        Time result;
        // Convert everything to seconds for easier subtraction
        long totalSeconds1 = hours * 3600L + minutes * 60L + seconds;
        long totalSeconds2 = other.hours * 3600L + other.minutes * 60L + other.seconds;
        long diffSeconds = totalSeconds1 - totalSeconds2;

        if (diffSeconds < 0) {
            // As per instruction "Assume the first operand is always greater or equal to the second."
            // If this assumption can be violated, you might return 0:0:0 or throw an error.
            // For now, let's return 0:0:0 if the result is negative.
            // Or, if negative times are allowed, this part needs adjustment.
             cout << "Warning: Subtraction resulted in negative time. Assuming 0:0:0." << endl;
             return Time(0,0,0);
        }
        
        result.hours = diffSeconds / 3600;
        diffSeconds %= 3600;
        result.minutes = diffSeconds / 60;
        result.seconds = diffSeconds % 60;
        // No need to call normalize() here as conversion from total seconds handles it.
        return result;
    }

    // Friend function for << operator
    friend ostream& operator<<(ostream& os, const Time& t);

    // Friend function for >> operator
    friend istream& operator>>(istream& is, Time& t);
};

// Definition of overloaded << operator for Time
ostream& operator<<(ostream& os, const Time& t) {
    os << setfill('0') << setw(2) << t.hours << ":"
       << setfill('0') << setw(2) << t.minutes << ":"
       << setfill('0') << setw(2) << t.seconds;
    return os;
}

// Definition of overloaded >> operator for Time
istream& operator>>(istream& is, Time& t) {
    cout << "Enter time (hh mm ss): ";
    is >> t.hours >> t.minutes >> t.seconds;
    t.normalize(); // Normalize after input
    return is;
}


int main()
{
    // --- Complex Number Demonstration ---
    cout << "--- Complex Number Operations ---" << endl;
    Complex c1(3.0, 4.0); 
    Complex c2(1.0, 5.0); 
    Complex c3 = c1 + c2; 
    cout << "c1: " << c1 << endl;
    cout << "c2: " << c2 << endl;
    cout << "c1 + c2 = " << c3 << endl; 

    cout << "\n--- Point Operations ---" << endl;
    Point p1(5, 10);      
    Point p2(2, 3);       
    Point p3 = p1 - p2;   
    cout << "Point p1: " << p1 << endl; 
    cout << "Point p2: " << p2 << endl; 
    cout << "p1 - p2 = " << p3 << endl; 
    
    // --- Vector3D Operations ---
    cout << "\n--- Vector3D Operations ---" << endl;
    Vector3D vL;
    Vector3D v1(1.0, 2.0, 3.0); 
    Vector3D v2(4.0, 5.0, 6.0); 
    Vector3D v3 = v1 + v2; 
    Vector3D v4 = v1 - v2; 
    cout << "Vector v1: " << v1 << endl; 
    cout << "Vector v2: " << v2 << endl; 
    cout << "v1 + v2 = " << v3 << endl;
    cout << "v1 - v2 = " << v4 << endl;
    
    cout << "\nEnter components for vector vL:" << endl;
    cin >> vL; 
    cout << "You entered vL: " << vL << endl; 

    // --- Time Operations ---
    cout << "\n--- Time Operations ---" << endl;
    Time t1(1, 70, 80); // 1 hour, 70 mins, 80 secs -> normalized to 2:11:20
    Time t2(0, 30, 45);
    cout << "Time t1: " << t1 << endl;
    cout << "Time t2: " << t2 << endl;

    Time t_sum = t1 + t2;
    cout << "t1 + t2 = " << t_sum << endl;

    Time t_diff = t1 - t2;
    cout << "t1 - t2 = " << t_diff << endl;
    
    Time t_diff_invalid = t2 - t1; // Testing subtraction where first operand is smaller
    cout << "t2 - t1 = " << t_diff_invalid << endl;


    Time t_input;
    cout << "\nEnter a time duration:" << endl;
    cin >> t_input;
    cout << "You entered: " << t_input << endl;

    return 0;
}