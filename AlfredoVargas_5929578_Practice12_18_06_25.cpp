// #include <iostream>
// #include <string>
// using namespace std;

// class Student {
// private:
//     string name;
//     int grade;

// public:
//     // Constructor
//     Student(const string& n, int g) : name(n), grade(g) {}

//     // Overload == to check if both name and grade match
//     bool operator==(const Student& other) const {
//         return (name == other.name && grade == other.grade);
//     }

//     // Overload != as the logical opposite of ==
//     bool operator!=(const Student& other) const {
//         return !(*this == other);
//     }

//     // Overload < to compare based on grade
//     bool operator<(const Student& other) const {
//         return (grade < other.grade);
//     }

//     // Overload > to compare based on grade
//     bool operator>(const Student& other) const {
//         return (grade > other.grade);
//     }
// };

// int main() {
//     Student s1("Alice", 90);
//     Student s2("Bob", 85);
//     Student s3("Alice", 90);

//     cout << boolalpha; // Print "true" or "false" instead of 1 or 0
//     cout << "s1 == s2 ? " << (s1 == s2) << endl;  // false
//     cout << "s1 != s2 ? " << (s1 != s2) << endl;  // true
//     cout << "s1 == s3 ? " << (s1 == s3) << endl;  // true
//     cout << "s1 < s2  ? " << (s1 < s2)  << endl;  // false
//     cout << "s1 > s2  ? " << (s1 > s2)  << endl;  // true
//     return 0;
// }

// code number 2:

// #include <iostream>
// #include <string>
// using namespace std;

// class Vector3
// {
// private:
//     double x, y, z;

// public:
//     // Constructor
//     Vector3(double xVal = 0.0, double yVal = 0.0, double zVal = 0.0)
//         : x(xVal), y(yVal), z(zVal) {}

//     // Overload [] for read-write access
//     double& operator[](int index)
//     {
//         // Static "dummy" used to return a reference when index is invalid
//         static double dummy = 0.0;
//         switch (index)
//         {
//             case 0: return x;
//             case 1: return y;
//             case 2: return z;
//             default: return dummy;
//         }
//     }

//     // Overload [] for read-only access (const objects)
//     const double& operator[](int index) const
//     {
//         static double dummy = 0.0;
//         switch (index)
//         {
//             case 0: return x;
//             case 1: return y;
//             case 2: return z;
//             default: return dummy;
//         }
//     }
// };

// int main()
// {
//     Vector3 v(1.0, 2.0, 3.0);
//     cout << "v[0] = " << v[0] << endl; // x
//     cout << "v[1] = " << v[1] << endl; // y
//     cout << "v[2] = " << v[2] << endl; // z
//     cout << "v[3] (invalid index) = " << v[3] << endl;

//     // Modify vector component using []
//     v[1] = 42.0;
//     cout << "After v[1] = 42.0, v = { "
//          << v[0] << ", " << v[1] << ", " << v[2] << " }" << endl;

//     return 0;
// }

// code number 3:
// #include <iostream>
// using namespace std;

// class Multiplier
// {
// private:
//     int factor; 

// public:
//     // Constructor sets the internal factor
//     Multiplier(int f) : factor(f) {}

//     // Overload () operator to multiply a given number by 'factor'
//     int operator()(int value) const
//     {
//         return value * factor;
//     }
// };

// int main()
// {
//     Multiplier multiplyBy3(3);
//     cout << "multiplyBy3(10) = " << multiplyBy3(10) << endl;  // prints 30

//     Multiplier multiplyBy5(5);
//     cout << "multiplyBy5(2) = " << multiplyBy5(2) << endl;   // prints 10

//     return 0;
// }

// Code number 4:


// #include <iostream>
// using namespace std;

// class Counter
// {
// private:
//     int value;

// public:
//     // Constructor
//     Counter(int initial = 0) : value(initial) {}

//     // Postfix increment (counter++)
//     Counter operator++(int)
//     {
//         Counter temp = *this; // Save current state
//         value++;              // Increment
//         return temp;          // Return original state
//     }

//     // Postfix decrement (counter--)
//     Counter operator--(int)
//     {
//         Counter temp = *this; // Save current state
//         value--;              // Decrement
//         return temp;          // Return original state
//     }

//     // Accessor for demonstration
//     int getValue() const
//     {
//         return value;
//     }
// };

// int main()
// {
//     Counter c(5);
//     cout << "Initial value: " << c.getValue() << endl; // 5

//     // Postfix increment
//     Counter old = c++;
//     cout << "After c++: old = " << old.getValue() 
//          << ", new c = " << c.getValue() << endl;      // old = 5, new = 6

//     // Postfix decrement
//     old = c--;
//     cout << "After c--: old = " << old.getValue()
//          << ", new c = " << c.getValue() << endl;      // old = 6, new = 5

//     return 0;
// }

// //code number 5:

#include <iostream>
using namespace std;

class Score
{
private:
    int value;

public:
    // Constructor
    Score(int initial = 0) : value(initial) {}

    // Prefix increment (++score)
    Score& operator++()
    {
        ++value;     // Increment the internal value
        return *this; // Return a reference to the updated object
    }

    // Prefix decrement (--score)
    Score& operator--()
    {
        --value;      // Decrement the internal value
        return *this; // Return a reference to the updated object
    }

    // Accessor for demonstration
    int getValue() const
    {
        return value;
    }
};

int main()
{
    Score myScore(10);
    cout << "Initial score: " << myScore.getValue() << endl; // 10

    ++myScore;  // prefix increment
    cout << "After ++myScore: " << myScore.getValue() << endl; // 11

    --myScore;  // prefix decrement
    cout << "After --myScore: " << myScore.getValue() << endl; // 10

    return 0;
}