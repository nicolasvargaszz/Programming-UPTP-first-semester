#include<iostream>
using namespace std; 

int main(){
    int grades[100];
    int sum =0;

    cout << "################ 100 Students, uptp GRADES ################" << endl;
    for(int i=0; i < 100; i++){
        cout << "enter the grade for the student number [" << i+1 << "]: " << endl;
        cin >> grades[i];
        sum += grades[i];
    }
    cout << "################ The list of all the scores in the OOP class @ UPTP ################" << endl;
    for(int i = 0 ; i < 100 ; i ++){
        cout << "The grade of the student number [" << i+1 << "] is: "<< grades[i] << endl;
    }


    cout << "######## The average score of the OOP class in UPTP ########" << endl;
    cout << sum / 100 << endl;
    cout << "######## The sum of all score of the OOP class in UPTP ########" << endl;
    cout << sum << endl;

    return 0;
}