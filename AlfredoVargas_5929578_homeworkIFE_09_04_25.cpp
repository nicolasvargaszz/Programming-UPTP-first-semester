// #include<iostream>

// using namespace std;

// struct Fraction
// {
//     int wholeNumber;
//     int numerator;
//     int denominator; 
// };

// Fraction fraction_values(Fraction &fraction){  // we sent it by reference, in that way,
//     //all the change that we make to the structure will be stored in memory.
    
//     cout << "Enter wholeNumber number: ";
//     cin >> fraction.wholeNumber;
//     cout << "Enter numerator: ";
//     cin >> fraction.numerator;
//     cout << "Enter denominator: ";
//     cin >> fraction.denominator;
//     while(fraction.denominator == 0){
//         cout << "Error: Divition by zero its NOT define. Please provide another denominator: " << endl;
//         cin >> fraction.denominator; 
//     }

//     // Output to check if the values are correctly passed and returned
//     cout << "Fraction: " << fraction.wholeNumber << " " << fraction.numerator << "/" << fraction.denominator << endl;
//     return fraction;
// }



// Fraction reduceFraction(Fraction reduced){		//function of type Fraction that reduces the fraction
// 	int completeNum; 	//variables declaration
// 	int remainder;
// 	int aux = 1;
	
// 	completeNum = (reduced.wholeNumber * reduced.denominator) + reduced.numerator;		//the numerator part of the improper fraction
// 	remainder = completeNum % reduced.denominator;							//the remainder dividing the numerator and denominator
	
// 	reduced.wholeNumber = completeNum / reduced.denominator;		//new reduced wholeNumber number
	
// 	reduced.numerator = remainder;			//the numerator will first have the value of the remainder
// 	for(int i=2; i<=remainder; i++){
// 		if( (reduced.numerator % i == 0) && (reduced.denominator % i == 0) ){		//enters this loop to take the GCD and simplify if necessary
// 			aux = i;					//stores the GCD in 'aux' variable
// 		}
// 	}
	
// 	reduced.numerator /= aux;		//new reduced numerator
	
// 	reduced.denominator /= aux;		//new reduced denominator
// 	return reduced;		//returns the object created
// }

// void displayFraction(Fraction final){			//function of type Fraction 
// 	//displays the reduced fraction
// 	cout << "The reduced fraction is: ";
// 	cout << final.wholeNumber << " " << final.numerator << "/" << final.denominator << endl;
// }

// int main()
// {
// 	Fraction values;		//create an object of Fraction type
	
// 	while(values.wholeNumber!=0 || values.numerator!=0){		//a loop so the user enters different fraction until the wholeNumber number and numerator is 0
// 		values = fraction_values(values);				//assigns 'values' with the fraction entered 
// 		cout << "The fraction entered is: " << values.wholeNumber << " " << values.numerator << "/" << values.denominator <<endl;		//displays the fraction entered
// 		values = reduceFraction(values);			//assings 'values' to the new reduced fraction and calls the function as well to send the parameters
// 		displayFraction(values);					//displays the Fraction
// 	}
	
// 	if(values.wholeNumber==0 && values.numerator==0){
// 		cout<<"The program has terminated!";		//a message to indicate that the program has ended
// 	}
	
// 	return 0;
// }


#include<iostream>
using namespace std;

struct Point
{
    int positionX;
    int positionY;
};

Point movePoints(Point& p1, Point* p2){
    p1.positionX += 5; 
    p2->positionY += 3;
    return p1;
}


int main(){
    Point point1, point2; 
    point1.positionX = 0;
    point1.positionY = 0; 
    point2.positionX = 0;
    point2.positionY = 0;

    movePoints(point1,&point2);
    cout << "######## Result of the positions ########" << endl;
    cout << "Position1 in X : "<<point1.positionX <<"\n Position1 in Y : "<< point1.positionY<< endl;
    cout << "Position2 in X : "<<point2.positionX <<"\n Position2 in Y : "<< point2.positionY<< endl;

    return 0;
}   
