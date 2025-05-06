// Include librariesc
#include<iostream>
using namespace std;

int main(){
    int usernumber;

    cout << "Please enter a integer: " <<endl;
    cin >> usernumber;

    if (usernumber % 2 == 0){ // If the remainder of the number when it's divided by two is 0 then it is even
        cout << "The number is even" << endl;
    }
    else{  // Otherwise, the remainder is not zero, then it is odd.
        cout << "Number is odd" << endl;
    }

    return 0;
}