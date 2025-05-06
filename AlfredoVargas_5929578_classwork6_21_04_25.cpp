#include<iostream>
using namespace std;

class Product
{
private:
    int id;
    double price;


public:
    Product(int id, double price)//constructor
    {
        this->id = id;
        this->price = price;
    }

    void applyDiscount()
    {
        this->price *= 0.95;
    }


    void setId(int id)
    {
        this ->id = id; //resolves ambiguity
    }

    void show()
    {
        cout << "Product Price" << this->price << endl;
        cout << "Product ID: " << this->id << endl;
    }
};


int main() {
    Product p1(101, 200.0);  // Create product with id and price
    cout << "Before discount:" << endl;
    p1.show();

    p1.applyDiscount();  // Apply 5% discount

    cout << "\nAfter discount:" << endl;
    p1.show();

    return 0;
}


//we use the this pointer implicity when we use return