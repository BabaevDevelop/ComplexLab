#include <iostream>
#include "complex.h"

using namespace std;

int main() {
    double r1, i1, r2, i2;

    cout << "Enter first number real and imag" << endl;
    cin >> r1 >> i1;
    cout << "Enter second number real and imag" << endl;
    cin >> r2 >> i2;
    Complex A(r1, i1);
    Complex B(r2, i2);
    std::cout << A << endl << B;
    Complex C;
    cout << "Addition" << endl;
    C = A + B;
    std::cout << C;
    cout << "Subtraction" << endl;
    C = A - B;
    std::cout << C;
    cout << "Multiplication" << endl;
    C = A * B;
    std::cout << C;
    cout << "Division" << endl;
    C = A / B;
    std::cout << C;
    A += B;
    cout << A;
    return 0;
}
