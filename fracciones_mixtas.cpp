#include <iostream>
using namespace std;

// Estructura para manejar una fracción mixta: parte entera y parte fraccionaria.
struct Fraction {
    int whole_number;
    int numerator;
    int denominator;
};

// Función para leer los valores de la fracción desde la consola
Fraction enterFractionValue() {
    Fraction _fraction;
    cout << "Enter the whole number for the fraction: ";
    cin >> _fraction.whole_number;

    cout << "Enter the numerator of the fraction: ";
    cin >> _fraction.numerator;

    cout << "Enter the denominator for the fraction (0 is not allowed): ";
    cin >> _fraction.denominator;
    while (_fraction.denominator == 0) {
        cout << "Enter the denominator again: ";
        cin >> _fraction.denominator;
    }

    return _fraction;
}

// Función para reducir la fracción a su forma irreducible (menor términos)
Fraction reduceFraction(Fraction fraction) {
    // 1. Convertimos la fracción mixta a impropia: (parte_entera * denominador) + numerador
    int new_denominator = fraction.denominator;
    int new_numerator = (fraction.whole_number * new_denominator) + fraction.numerator;

    // 2. Obtenemos la nueva parte entera y el resto
    int definitive_whole_number = new_numerator / new_denominator;
    int remainder = new_numerator % new_denominator;

    // Si no hay resto, significa que es un número entero exacto
    if (remainder == 0) {
        fraction.whole_number = definitive_whole_number;
        fraction.numerator = 0;
        fraction.denominator = 1;
        return fraction;
    }

    // 3. Hallamos el máximo común divisor (mcd) "a mano" con un bucle for
    int aux = 1;
    for (int i = 2; i <= remainder; i++) {
        if ((remainder % i == 0) && (new_denominator % i == 0)) {
            aux = i;
        }
    }

    // 4. Dividimos el resto y el denominador por el mcd para reducir la fracción
    int definitive_numerator = remainder / aux;
    int definitive_denominator = new_denominator / aux;

    // 5. Asignamos los valores finales a la estructura
    fraction.whole_number = definitive_whole_number;
    fraction.numerator = definitive_numerator;
    fraction.denominator = definitive_denominator;

    return fraction;
}

// Función para mostrar la fracción reducida en pantalla
void displayFraction(const Fraction &_fraction) {
    cout << "The fraction reduced is: "
         << _fraction.whole_number << " "
         << _fraction.numerator << "/" << _fraction.denominator
         << endl;
}

int main() {
    Fraction fraction;
    fraction = enterFractionValue();      // Ingresar los valores
    fraction = reduceFraction(fraction);  // Reducir (simplificar) la fracción
    displayFraction(fraction);            // Mostrar el resultado
    return 0;
}
