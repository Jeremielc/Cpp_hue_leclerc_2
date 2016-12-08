#include <iostream>
#include <cmath>

class Complex {
    float re;
    float im;

    public :
        Complex();
        Complex(float a, float b);
        Complex(const Complex& c);
        //Complex(float, float); //Implémentation impossible
        ~Complex();

        double      arg();
        void        display();
        void        display(Complex& c);
        Complex&    maxModule(Complex&, Complex&);
        double      module();
        Complex     normalize(Complex&);
        void        nRoot(int, Complex*);
        Complex     rotate(Complex&, float);
        void        swap();

        float       getImaginary() const;
        float       getReal() const;
        void        setReal(float);
        void        setImaginary(float);

        //Friends
        friend Complex operator + (Complex& a, Complex& b);
        friend Complex operator - (Complex& a, Complex& b);
        friend Complex operator * (Complex& a, Complex& b);
};
