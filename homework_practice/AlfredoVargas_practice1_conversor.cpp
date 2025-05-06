#include<iostream>
using namespace std;

int main(){
    
    float dolars, euros, convertion;
    convertion = 0.98;
    cout << "How many dolars do you have: ";  //ask the user
    cin >> dolars;
    euros = dolars * convertion;  //conver the dolars to euros
    cout << "The you have: " << euros << " Euros " <<endl;

    
    return 0;

}
