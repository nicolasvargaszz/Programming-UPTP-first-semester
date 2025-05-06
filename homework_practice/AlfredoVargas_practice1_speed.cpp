

#include <iostream>
using namespace std;

int main() {
    double distance, time, speed;

    cout << "Enter the distance in meters: "; //ask the user for distance
    cin >> distance;        //store the value

    cout << "Enter the time in seconds: ";
    cin >> time;

    // Calculate speed
    speed = distance / time;  //speed formual is distance over time

    // Display the result
    cout << "Speed = " << speed << " m/s" << endl; 

    return 0;
}
