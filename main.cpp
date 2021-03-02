#include <iostream>
#include "complex.h"

using namespace std;
int main() {
    double r1,i1,r2,i2;

    cout << "Enter first number real and imag"<<endl;
    cin >> r1 >> i1;
    cout << "Enter second number real and imag"<<endl;
    cin >> r2 >> i2;
    Complex A(r1,i1);
    Complex B(r2,i2);
    A.out();
    B.out();
    Complex C;
    cout << "Addition"<<endl;
    C = A.add(B);
    C.out();
    cout << "Subtraction" << endl;
    C = A.substract(B);
    C.out();
    cout << "Multiplication" << endl;
    C = A.multiply(B);
    C.out();
    cout << "Division" << endl;
    C = A.divide(B);
    C.out();
    return 0;
}
