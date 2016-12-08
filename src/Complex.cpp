#include "../include/Complex.h"

using namespace std;

Complex::Complex() {
    //cout << "+++ Complex() @ " << this << endl;
}

Complex::Complex(float re, float im) {
    //cout << "+++ Complex(" << a << ", " << b << ") @ " << this << endl;
    this->re = re;
    this->im = im;
}

Complex::Complex(const Complex& c) {
    //cout << "rrr Complex(" << c.re << " + i." << c.im << ") @ " << this << endl;
    re = c.getReal();
    im = c.getImaginary();
}

Complex::~Complex() {
    //cout << "rrr Complex(" << re << " + i." << im << ") @ " << this << endl;
}

double Complex::arg() {
    if (re > 0) {
        return atan(im/re);
    } else if (re < 0) {
        return 3.14159 + atan(-im/re);
    } else if (re == 0) {
        return 3.14159 / 2;
    } else {
        return 3.14159 * 1000; //Valeur invalide pour l'argument.
    }
}

void Complex::display() {
    cout << re << " + i." << im << endl;
}

void Complex::display(Complex& c) {
    cout << c.getReal() << " + i." << c.getImaginary() << endl;
}

double Complex::module() {
    return sqrt((re * re) + (im * im));
}

Complex Complex::normalize(Complex& c) {
    Complex r = Complex(c.getReal() / c.module(), c.getImaginary() / c.module());
    return r;
}

void Complex::nRoot(int n, Complex* tab) {
    float a, b;
    for (int i = 0; i < 7; i++) {
        a = cos(2 * i * 3.14159 / n);
        b = sin(2 * i * 3.14159 / n);

        tab[i] = Complex(a, b);
    }
}

Complex Complex::rotate(Complex& c, float alpha) {
    Complex r = Complex();
    Complex rot = Complex(cos(alpha), sin(alpha));
    r = rot * c;

    return r;
}

Complex& Complex::maxModule(Complex& a, Complex& b) {
    if (a.module() >= b.module()) {
        return a;
    } else {
        return b;
    }
}

void Complex::swap() {
    float temp = re;
    re = im;
    im = temp;
}

//Getters and setters
float Complex::getImaginary() const {
    return im;
}

float Complex::getReal() const {
    return re;
}

void Complex::setImaginary(float b) {
    im = b;
}

void Complex::setReal(float a) {
    re = a;
}

Complex operator + (Complex& a, Complex& b) {
    Complex r;
    r.setReal(a.getReal() + b.getReal());
    r.setImaginary(a.getImaginary() + b.getImaginary());
    return r;
}

Complex operator - (Complex& a, Complex& b) {
    Complex r;
    r.setReal(a.getReal() - b.getReal());
    r.setImaginary(a.getImaginary() - b.getImaginary());
    return r;
}

Complex operator * (Complex& a, Complex& b) {
    Complex r;
    r.setReal(a.getReal() * b.getReal() - a.getImaginary() * b.getImaginary());
    r.setImaginary(a.getReal() * b.getImaginary() + a.getImaginary() * b.getReal());
    return r;
}
