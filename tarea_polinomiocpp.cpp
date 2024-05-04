#include <stdio.h>
#include <math.h>

int main() {
    float x, result;

    // In this line in here we are asking the user to insert a number, we just use the function scanf and store that value in ot
    // already declared variable x
    printf("Enter the value of x: ");
    scanf("%f", &x);

    // We know that C does not have any keyword as build-in for exponential like some other languajes for example '^' 
    // But that is the reason of why we include math.h, to do use of the pow function
    result = 3 * pow(x, 5) + 2 * pow(x, 4) - 5 * pow(x, 3) - pow(x, 2) + 7 * x - 6;

    // Display the value of the variable result
    printf("Result of the polynomial for x = %.2f is: %.2f\n", x, result);

    return 0;
}

