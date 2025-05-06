#include<iostream>
using namespace std;

int main(){
    int seconds, hour, minutes;

    cout << "how many seconds do you have? ";
    cin >> seconds;
    hour = seconds / 3600;   // #3600 seconds are 1 hour
    minutes = seconds/60 - hour*60; // we substrac the hours and then we get the seconds
    cout << "the amount of hour(s) is: " << hour << endl;  //print the ours
    cout << "the amount of minutes is: " << minutes << endl;
    cout << "the amount of seconds is: " << seconds % 60 << endl; // the remainder of the divitions are the seconds
    return 0;
}
