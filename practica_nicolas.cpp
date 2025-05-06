#include <iostream>
#include<string>
using namespace std; 

class Pizza{
    private:
        string topping;
        int diameter;
        double price;
    public:
        Pizza(){
            topping = "Cheese";
            diameter = 12;
            price = 8.99; 
            cout << "Topping: " << topping << endl;
            cout << "Diameter: " << diameter << endl;
            cout << "Price: " << price << endl;
        }
        void customizePizza();
        void displayPizza();
};

void Pizza::customizePizza(){
    cout << "Topping: ";
    getline(cin, topping);
    cout << "Diameter: ";
    cin >> diameter ;
    cout << "Price: $";
    cin >> price;
};

void Pizza::displayPizza(){
    cout << "Topping: " << topping << endl;
    cout << "Diameter: " << diameter << endl;
    cout << "Price: " << price << endl;
}

int main(){
    Pizza pizza1;
    pizza1.customizePizza();
    pizza1.displayPizza();
    
    return 0;
}

