#include<iostream>
using namespace std;

int main(){
    int age, days;
    cout << "How old are you? ";
    cin >> age;

    days = 365 * age;  //calculate the days using amount of days per years times years

    cout << "then you are " << days << " days old" << endl;

    return 0;
}

