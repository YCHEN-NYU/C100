#ifndef COMPLEX_H
#define COMPLEX_H

class Complex{
    private:
        double real;
        double imag;
    public:
        Complex(double real = 0.0, double imag = 0.0);

        void get_Complex() const;
        double get_real() const;
        double get_imag() const;

        void set_real(double real);
        void set_imag(double imag);
        void set_Complex(double real, double imag);
        void print_Complex() const;

        bool is_real() const;
        bool is_imag() const;

        // add the give Complex instance into this instance
        // return this instance by reference
        Complex &add_into(const Complex &another);
        Complex &add_into(double real, double imag);
        
        // add the give complex instance and this instance
        // return the sum in a new instance by value
        Complex add_return_new(const Complex &another);
        Complex add_return_new(double real, double imag);

#endif
