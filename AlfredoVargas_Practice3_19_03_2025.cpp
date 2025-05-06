/*#include<iostream>
using namespace std;

int main(){
    int number, counter;
    cout << "Please entrer a number of hello's you need" << endl;
    cin >> number;
    while(counter < number){ //
        cout << "Hello, nice to meet you, have a nice day" << endl;
        counter++;
    }
return 0 ;

}
*/

/*#include <iostream>
using namespace std;

int main() {
    int userNumber;
    
    do {
        cout << "Please enter a number between 1 and 10: " << endl;
        cin >> userNumber;
        
        if (userNumber < 1 || userNumber > 10) {
            cout << "That is not a number between 1 and 10" << endl;
        }
    } while (userNumber < 1 || userNumber > 10);

    for(int i =0; i < userNumber; i++){
        cout << "Congratulations, you put a correct number" << endl;
    }

    return 0;
}*/

/*#include<iostream>
using namespace std;
int main(){
    for(int i=1; i <= 100; i ++){ //print the even numbers between 1 and 100
        if(i%2 == 0){
            cout << i << " ";
        }
    }

    return 0;
}*/

/*#include<iostream>
using namespace std;
int main(){
    int sum = 0;
    for(int i; i <= 50; i++){  // conditon untill summ all the numbers
        sum += i;  // sum all
    }
    cout << sum <<endl;
    return 0;
}*/
/*#include <iostream>
using namespace std;

int main() {
    int userNumber, sum = 0;
    cout << "Give me a number between 1 and 50: ";
    cin >> userNumber;

    if (userNumber < 1 || userNumber > 50) {
        cout << "Invalid input! Please enter a number between 1 and 50." << endl;
        return 1; // Exit if out of range
    }

    for (int i = 1; i <= userNumber; i++) {
        sum += i; // Add current number to sum
        cout << "The sum of all numbers till " << i << " is " << sum << " (";

        // Print the sequence of numbers till `i`
        for (int j = 1; j <= i; j++) {
            cout << j;
            if (j < i) cout << ", "; // Add commas between numbers
        }
        cout << ")" << endl;
    }

    return 0;
}
*/

#include<iostream>
using namespace std; 

int main(){
    int start = 1, end = 1000;

    for(int num = start; num <= end; num++){
        int sum = 0;

        for(int i = 1; i*i <= num; i++){
            if(num % i == 0){
                if(num != i){
                sum += i;}
                if (i != num / i && num / i != num) {  
                    sum += num / i; }
        }
            
        }
        if (sum == num) {  // Verificar si es un número perfecto
            cout << "The number "<< num << " is a perfect number. "<<endl;
        }
    }
    return 0;
}