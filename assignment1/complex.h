#include <iostream>
using namespace std;
class Complex
{
private:
    float real;
    float imaginary;

public:
    void set(float r, float img)
    {
        real = r;
        imaginary = img;
    }

    void disp()
    {
        cout << real << " + i" << imaginary << endl;
    }

    Complex sum(Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.imaginary = imaginary + c.imaginary;

        return temp;
    }
};
