//
// Created by andrey on 02.03.2021.
//

#include "complex.h"



Complex::Complex(double r, double i) {
    real = r;
    imag = i;
}

Complex::Complex(Complex &b) {
    real = b.real;
    imag = b.imag;
}

Complex Complex::add(Complex b) {
    Complex add;
    add.real = real + b.real;
    add.imag = imag + b.imag;
    return add;
}

Complex Complex::substract(Complex b) {
    Complex sub;
    sub.real = real - b.real;
    sub.imag = imag - b.imag;
    return sub;
}

Complex Complex::multiply(Complex b) {
    Complex mult;
    mult.real = real*b.real - imag*b.imag;
    mult.imag = real*b.imag - b.real*imag;
    return mult;
}

Complex Complex::divide(Complex b) {
    Complex div;
    div.real = (real*b.real + imag*b.imag)/(b.real*b.real + b.imag*b.imag);
    div.imag = (imag*b.real + real*b.imag)/(b.real*b.real + b.imag*b.imag);
    return div;
}

void Complex::out() {
    std::cout << real << "+" << imag << "i" << std::endl;
}

