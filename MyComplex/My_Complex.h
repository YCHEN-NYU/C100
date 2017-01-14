#ifndef MY_COMPLEX_H
#define MY_COMPLEX_H

class Complex{
    private:
        double real, imag;
    public:
        explicit Complex(double real = 0.0, double imag = 0.0);
        const Complex &operator+(const Complex &add);
        Complex &operator+=(const Complex &add);
        Complex &operator++();
