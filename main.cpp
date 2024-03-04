#include "Fraction.h"
#include "Complex.h"

double operator+(int number, const Fraction& fraction){
    int32_t new_num = number * fraction.GetDenominator() 
        + fraction.GetNumerator();
    return static_cast<double>(new_num) / fraction.GetDenominator();
}

int main(){
    Fraction fraction1 = Fraction(1, 2);
    Fraction fraction2 = Fraction(-1, 2);
    Fraction fraction3 = Fraction(3, 2);
    Fraction fraction4 = Fraction(6, 1);

        

    Complex a1 = Complex(fraction1,fraction2);
    Complex a2 = Complex(fraction3, fraction4);
    // a2 = a;

    std :: cout << " +: " << a1 + a2 << std :: endl;
    std :: cout << " -: " << a1 - a2 << std :: endl;
    std :: cout << " *: " << a1 * a2 << std :: endl;
    std :: cout << " /: " << a1 / a2 << std :: endl;
    

    return 0;
}