#include<iostream>
using namespace std;

int main(){
    int dolars, euros;
    float conversor;
    conversor = 0.92;  //this is the convertion factor
    cout << "How many Dolars do you have? ";
    cin >> dolars; 
    euros = dolars * conversor;  //do the convertion

    cout << "Then if you have: " << dolars << "then you have: " <<  euros << " Euros." << endl;
    //print the result


    return 0;
}
