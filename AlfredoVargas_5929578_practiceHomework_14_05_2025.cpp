#include<iostream>

using namespace std;

// Class to represent a fraction
class Fractions 
{
private:
    int wholeNumber;
    int numerator;
    int denominator;
    bool isAnswerCorrect;
public:
    static const char SEPARATOR;

    // Constructor for improper fraction
    Fractions(int _numerator, int _denominator)
    {
        numerator = _numerator;
        denominator = _denominator;
        wholeNumber = 0;
    }
    // Constructor for mixed number
    Fractions(int wholeNumber, int numerator, int denominator)
    {
        this->wholeNumber = wholeNumber;
        this->numerator = numerator;
        this->denominator = denominator;
    }
    // Default constructor
    Fractions()
    {
        wholeNumber = 0;
        numerator = 0;
        denominator = 1;
    }

    // Overload + operator for Fractions addition
    Fractions operator+(const Fractions& other)
    {
        Fractions result;
        // Convert both to improper fractions
        int thisNumerator = wholeNumber * denominator + numerator;
        int otherNumerator = other.wholeNumber * other.denominator + other.numerator;
        // Find common denominator and add
        result.denominator = denominator * other.denominator;
        result.numerator = thisNumerator * other.denominator + otherNumerator * denominator;
        // Convert back to mixed number
        result.wholeNumber = result.numerator / result.denominator;
        result.numerator = result.numerator % result.denominator;
        result.reduceFraction();
        return result;
    }
    // Overload * operator for Fractions multiplication
    Fractions operator*(const Fractions& other)
    {
        Fractions result;
        // Convert both to improper fractions
        int thisNumerator = wholeNumber * denominator + numerator;
        int otherNumerator = other.wholeNumber * other.denominator + other.numerator;
        // Multiply numerators and denominators
        result.numerator = thisNumerator * otherNumerator;
        result.denominator = denominator * other.denominator;
        // Convert back to mixed number
        result.wholeNumber = result.numerator / result.denominator;
        result.numerator = result.numerator % result.denominator;
        result.reduceFraction();
        return result;
    }
    // Overload == operator for Fractions comparison
    bool operator==(const Fractions& other) const
    {
        // Convert both to improper fractions and compare cross-multiplied values
        int leftNumerator = wholeNumber * denominator + numerator;
        int rightNumerator = other.wholeNumber * other.denominator + other.numerator;
        int leftDenominator = denominator;
        int rightDenominator = other.denominator;
        return (leftNumerator * rightDenominator) == (rightNumerator * leftDenominator);
    }

    // Friend function to allow cout << Fractions
    friend ostream& operator<<(ostream& os, const Fractions& frac);

    // Funtion to enter fraction values
    void enterFractionValue()
    {
        cout << "\n----------------------------------------\n";
        cout << " Enter a fraction (mixed number allowed)\n";
        cout << "----------------------------------------\n";
        cout << "Whole number part (enter 0 if none): ";
        cin >> wholeNumber;
        cout << "Numerator: ";
        cin >> numerator;
        cout << "Denominator (cannot be 0): ";
        cin >> denominator;
        while (denominator == 0)
        {
            cout << "Denominator cannot be zero. Please enter a valid denominator: ";
            cin >> denominator;
        }
        cout << "You entered: " << *this << endl;
    }

    // Function to reduce the fraction to its simplest form
    void reduceFraction()
    {
        int absNum = abs(numerator);
        int absDen = abs(denominator);
        int gcd = 1;
        for (int i = 1; i <= absNum && i <= absDen; i++)
        {
            if (absNum % i == 0 && absDen % i == 0)
            {
                gcd = i;
            }
        }
        if (gcd != 0) {
            numerator /= gcd;
            denominator /= gcd;
        }
    }

    // Function to display the fraction and its decimal value
    void displayFraction()
    {
        cout << "\n----------------------------------------\n";
        cout << " Reduced Fraction: ";
        if (wholeNumber != 0)
            cout << wholeNumber << " ";
        cout << numerator << SEPARATOR << denominator << endl;
        cout << " Decimal Value: " << (wholeNumber + static_cast<double>(numerator) / denominator) << endl;
        cout << "----------------------------------------\n";
    }
};

// Overload << operator for Fractions output
ostream& operator<<(ostream& os, const Fractions& frac) {
    if (frac.wholeNumber != 0)
        os << frac.wholeNumber << " ";
    os << frac.numerator << Fractions::SEPARATOR << frac.denominator;
    return os;
}

// Class to represent a math problem with fractions
class MathProblem
{
private:
    Fractions Operant1;
    Fractions Operant2;
    Fractions CorrectAnswer;
    Fractions UserAnswer;
public:
    static const char ADDER, MULTIPLIER;

    // Set up the problem with two fractions and an operation
    void setProblem(Fractions Operant1, Fractions Operant2, char operation)
    {
        this->Operant1 = Operant1;
        this->Operant2 = Operant2;
        if (operation == ADDER)
        {
            CorrectAnswer = Operant1 + Operant2;
        }
        else if (operation == MULTIPLIER)
        {
            CorrectAnswer = Operant1 * Operant2;
        }
        else
        {
            cout << "Invalid operation. Please use + or *." << endl;
            return;
        }
    }

    // Display the math problem to the user
    void displayProblem(Fractions Operant1, Fractions Operant2)
    {
        cout << "\n========================================\n";
        cout << " Solve the following problem:\n";
        cout << "   " << Operant1 << " " << ADDER << " " << Operant2 << " = ?" << endl;
        cout << "========================================\n";
    }

    // Ask the user for their answer and check if it is correct
    void askUserForAnswer()
    {
        cout << "\nPlease enter your answer for the problem above." << endl;
        Fractions UserAnswer;
        UserAnswer.enterFractionValue();
        UserAnswer.reduceFraction();
        cout << "\n----------------------------------------\n";
        cout << " Your Answer: " << UserAnswer << endl;
        if (UserAnswer == CorrectAnswer) {
            cout << "✅ Congratulations! Your answer is correct!" << endl;
        } else {
            cout << "❌ Sorry, your answer is incorrect." << endl;
            cout << " The correct answer is: " << CorrectAnswer << endl;
        }
        cout << "----------------------------------------\n";
    }
};

// Define static constants
const char Fractions::SEPARATOR = '/';
const char MathProblem::ADDER = '+';
const char MathProblem::MULTIPLIER = '*';

// Main function
int main()
{
    cout << "========================================\n";
    cout << "      Fraction Math Practice Program    \n";
    cout << "========================================\n";

    MathProblem mathProblem;
    Fractions Operant1, Operant2;

    // Input and display for first fraction
    Operant1.enterFractionValue();
    Operant1.reduceFraction();
    Operant1.displayFraction();

    // Input and display for second fraction
    Operant2.enterFractionValue();
    Operant2.reduceFraction();
    Operant2.displayFraction();

    // Set up and display the problem, then ask for the user's answer
    mathProblem.setProblem(Operant1, Operant2, MathProblem::ADDER);
    mathProblem.displayProblem(Operant1, Operant2);
    mathProblem.askUserForAnswer();

    cout << "\nThank you for using the Fraction Math Practice Program!\n";
    cout << "========================================\n";
    return 0;
}