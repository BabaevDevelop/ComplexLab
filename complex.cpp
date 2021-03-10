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

Complex Complex::add(const Complex& b) {
    Complex add;
    add.real = real + b.real;
    add.imag = imag + b.imag;
    return add;
}

Complex Complex::substract(const Complex& b) {
    Complex sub;
    sub.real = real - b.real;
    sub.imag = imag - b.imag;
    return sub;
}

Complex Complex::multiply(const Complex& b) {
    Complex mult;
    mult.real = real * b.real - imag * b.imag;
    mult.imag = real * b.imag + b.real * imag;
    return mult;
}

Complex Complex::divide(const Complex& b) {
    Complex div;
    div.real = (real * b.real + imag * b.imag) / (b.real * b.real + b.imag * b.imag);
    div.imag = (imag * b.real - real * b.imag) / (b.real * b.real + b.imag * b.imag);
    return div;
}


 Complex Complex::operator+(const Complex &b) {
    Complex addition;
    addition = this->add(b);
    return addition;
}

 Complex Complex::operator-(const Complex &b) {
    Complex sub;
    sub = this->substract(b);
    return sub;
}

Complex Complex::operator*(const Complex &b) {
    Complex mult;
    mult = this->multiply(b);
    return mult;
}

Complex Complex::operator/(const Complex &b) {
    Complex div;
    div = (*this).divide(b);
    return div;
}

Complex &Complex::operator+=(const Complex &b) {
    (*this) = (*this) + b;
    return (*this);
}

Complex &Complex::operator-=(const Complex &b) {
    (*this) = (*this) - b;
    return (*this);
}

Complex &Complex::operator*=(const Complex &b) {
    (*this) = (*this) * b;
    return (*this);
}

Complex &Complex::operator/=(const Complex &b) {
    (*this) = (*this) / b;
    return (*this);
}

std::ostream &operator<<(std::ostream &out, Complex &b) {
    out << b.real << "+" << b.imag << "i" << std::endl;
    return out;
}

