// Classwork 5 : Classes    Alfredo Nicolas Vargas Oviedo
// Student ID: 5929578
#include<iostream>
using namespace std;

class Pizza
{
private:
    string topping;
    int diameter;
    double price;

public: 
    // Constructor with default values
    Pizza(string _topping = "Cheese", int _diameter = 12, double _price = 8.99)
    {
        topping = _topping;
        diameter = _diameter;
        price = _price;
    }

    void display()
    {
        cout << "############################   Pizza information ############################" << endl;
        cout << "The topping of your pizza is: " << topping << endl;
        cout << "The diameter of your pizza is: " << diameter << " inches" << endl;
        cout << "The total price of your pizza is: $" << price << endl;
    }

    void customize()
    {
        char answer;
        cout << "Would you like to customize your pizza? (y/n): ";
        cin >> answer;

        if(answer == 'y' || answer == 'Y')
        {
            cout << "Please insert the topping: ";
            cin >> topping;
            cout << "Please insert the diameter: ";
            cin >> diameter;
            cout << "Please insert the price: ";
            cin >> price;
        }

        display();
    }
};

int main()
{
    Pizza userPizza; // uses default values
    userPizza.customize(); // ask if user wants to change
    return 0;
}
