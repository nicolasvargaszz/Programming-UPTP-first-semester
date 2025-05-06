#include <iostream>
#include <string>
using namespace std;

// struct Person {
//     string name;
//     int age;
// };

// void haveBirthdate(Person& person) {
//     person.age += 1; // Increment age by 1
//     cout << person.name << " just had a birthday!\n";
//     cout << "New age: " << person.age << endl;
// }

// int main() {
//     Person person;

//     cout << "What's your name: ";
//     cin >> person.name;

//     cout << "What's your age: ";
//     cin >> person.age;

//     haveBirthdate(person); // Call function that increments age

//     return 0;
// }



    // struct Coordinates{
    //     int x;
    //     int y;
    // };

    // void swapCoordinates(Coordinates* a, Coordinates* b) { // swap using pointers
    //     Coordinates temp = *a;
    //     *a = *b;
    //     *b = temp;
    // }

    // int main(){
    //     //print the result
    //     Coordinates point1 = {2, 3};
    //     Coordinates point2 = {7, 8};

    //     cout << "Before swap:\n";
    //     cout << "Point1: (" << point1.x << ", " << point1.y << ")\n";
    //     cout << "Point2: (" << point2.x << ", " << point2.y << ")\n";

    //     swapCoordinates(&point1, &point2);

    //     cout << "\nAfter swap:\n";
    //     cout << "Point1: (" << point1.x << ", " << point1.y << ")\n";
    //     cout << "Point2: (" << point2.x << ", " << point2.y << ")\n";

    //     return 0;

    // }


// struct Product{ // create structure
//     string name;
//     float price;
//     int stock;
// };

// void initializeProduct(Product& product){  // pass by reference
//     product.name = "Tomates";
//     product.price = 12000;
//     product.stock = 72;

//     cout << product.name << endl;
//     cout << product.price << endl;
//     cout << product.stock << endl;

// }

// int main(){
//     Product product; // initialize the struct

//     initializeProduct(product); // pass the structure.
//     return 0;
// }

struct Invoice {
    int quantity;
    int unitPrice;
    int total;
};

int calculateTotal(Invoice* invoice) {
    invoice->total = invoice->quantity * invoice->unitPrice;
    return invoice->total;
}

int main() {
    Invoice invoice;
    
    // Input values (optional: cin if you want to input)
    invoice.quantity = 3;
    invoice.unitPrice = 3000;

    // Calculate total
    calculateTotal(&invoice);

    // Print the total
    cout << "Total: " << invoice.total << endl;

    return 0;
}