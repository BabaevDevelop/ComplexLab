//
// Created by andrey on 02.03.2021.
//

#ifndef COMPLEX_COMPLEX_H
#define COMPLEX_COMPLEX_H

#include <iostream>

class Complex {
private:
    double real;
    double imag;
public:
    Complex() {
        real = imag = 0;
    }
    Complex(double r, double i);

    Complex(Complex &b);

    Complex add(const Complex& b);

    Complex substract(const Complex& b);

    Complex multiply(const Complex& b);

    Complex divide(const Complex& b);

     Complex operator+(const Complex &b);

     Complex operator-(const Complex &b);

    Complex operator*(const Complex &b);

    Complex operator/(const Complex &b);

    Complex &operator+=(const Complex &b);

    Complex &operator-=(const Complex &b);

    Complex &operator*=(const Complex &b);

    Complex &operator/=(const Complex &b);

    friend std::ostream &operator<<(std::ostream &out, Complex &b);

};


#endif //COMPLEX_COMPLEX_H
