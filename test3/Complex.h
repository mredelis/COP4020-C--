#include <iostream>

using namespace std;

// Part a.
class Complex
{
private:
    float real;
    float imaginary;

public:
    // sets the real and imaginary parts of the complex number
    void set(float r, float img)
    {
        real = r;
        imaginary = img;
    }

    // displays the complex number
    void disp()
    {
        cout << real << " + i" << imaginary << endl;
    }

    // returns the sum of two complex numbers
    Complex sum(Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.imaginary = imaginary + c.imaginary;

        return temp;
    }
};