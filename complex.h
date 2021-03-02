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

    Complex add(Complex b);

    Complex substract(Complex b);

    Complex multiply(Complex b);

    Complex divide(Complex b);

    void out();

};


#endif //COMPLEX_COMPLEX_H
