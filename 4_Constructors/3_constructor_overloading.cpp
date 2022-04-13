#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(){ // default constructor
        a = 0;
        b =0;
    }

    Complex(int x, int y)  // parameterized constructor
    {
        a = x;
        b = y;
    }

    Complex(int x){  // parameterized constructor
        a = x;
        b = 0;
    }

  

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};
int main()
{
    Complex c1(4, 6);
    c1.printNumber();

    Complex c2(5);
    c2.printNumber();

    Complex c3;
    c3.printNumber();
    return 0;
}
