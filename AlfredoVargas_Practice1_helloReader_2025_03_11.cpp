#include<iostream>  //include the library for cin cout
using namespace std;   //let's avoid writting std::

int main(){
    int numberOfLanguage;   // Variable for the experience
    cout << "Hello Reader!" << endl;
    cout << "Welcome to the C++ programming language Pro Book" << endl;
    cout << "Before we begging, it is very important to know your previews experience" << endl;

    cout<< "Please tell me how many programming languages do you know: " << endl;
    cin >> numberOfLanguage;
// we star or conditional, if the reader does not have experices, he/she should get another book
    if(numberOfLanguage < 1){
        cout << "Please get a begginers book from the same Author, this is a pro book" << endl;
    }
    else{  // if numberOfLanguage is greater than one, then go ahead.
        cout << "Enjoy the book" << endl;
    }
    

    return 0;
}