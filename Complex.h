#pragma once
#include "Fraction.h"

class Complex{
private:
    Fraction _re;
    Fraction _im;
public:
    Complex(){
        _re = Fraction(0, 1);
        _im = Fraction(0, 1);
    }
    Complex(Fraction re, Fraction im){
        _re = re; _im = im;
    }

    Complex operator+(const Complex& complex) const{
        Fraction new_re = complex._re + _re;
        Fraction new_im = complex._im + _im;
        Complex res = Complex(new_re, new_im);
        return res;
    }

    Complex operator-(const Complex& complex) const{
        Fraction new_re = _re - complex._re;
        Fraction new_im = _im - complex._im;
        return Complex(new_re, new_im);
    }

    Complex operator*(const Complex& complex) const 
    {
        Fraction new_re = _re * complex._re - _im * complex._im;
        Fraction new_im = _re * complex._im + complex._re * _im;

        return Complex(new_re, new_im);
    }

    Complex operator/(const Complex& complex) const 
    {
        Fraction new_re = (_re * complex._re + _im * complex._im) / (complex._im * complex._im + complex._re * complex._re);
        Fraction new_im = (_im * complex._re - complex._im * _re) / (complex._im * complex._im + complex._re * complex._re);

        return Complex(new_re, new_im);
    }
    
    friend std :: ostream& operator<<(std::ostream& os,const Complex comp){
        os << comp._re;
        if (comp._im > 0){
            os << " + ";
        }
        os << comp._im << "*i" << std :: endl;
        return os;
    }
};