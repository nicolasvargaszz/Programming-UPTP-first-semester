// Classwork 7
// Create a base class Shape with a virtual
// function area(), and derive two classes,
// Circle and Rectangle.
// ➔ Override area() in each derived class and
// call it via a base class pointer.


#include<iostream>

using namespace std;

class Shape
{
    public:
        virtual ~Shape() {}
        virtual double area() = 0; // pure virtual function
};

class Circle : public Shape
{
private:
    double radius;
public:
    Circle(double r) : radius(r) 
    {
        cout << "Circle constructor called" << endl;
    }
    double area() override 
    {
        double a = 3.141592 * radius * radius;
        cout << "The area of the circle is: " << a << endl;
        return a;
    }

};


class Rectangle : public Shape
{
private: 
    double length;
    double width;
public: 
    Rectangle(double l ,double w) : length(l), width(w)
    {
        cout << "Rectangle constructor called" << endl;
    }
    double area() override 
    {
        double a = length * width;
        cout << "The area of the rectangle is: " << a << endl;
        return a;
    }
};


int main() {
    Shape* shapes[2];
    shapes[0] = new Circle(3);
    shapes[1] = new Rectangle(0.14, 0.25);
    for (int i = 0; i < 2; i++) 
    {
        shapes[i]->area(); // Calls derived class functions
    }
 return 0;
}