#include <iostream>
using namespace std;

int main()
{

    int num = 5;

    cout << num << endl;

    // address of Operator - &

    cout << " address of num is " << &num << endl;

    int *ptr = &num;

    cout << "Address is : " << ptr << endl;
    cout << "value is : " << *ptr << endl;

    double d = 4.3;
    double *p2 = &d;

    cout << "Address is : " << p2 << endl;
    cout << "value is : " << *p2 << endl;

    cout << " size of integer is " << sizeof(num) << endl;
    cout << " size of pointer is " << sizeof(ptr) << endl;
    // whichever datatype it will be the size of the pointer will be same only either 4 or 8 bits only
    cout << " size of double is " << sizeof(d) << endl;
    cout << " size of pointer is " << sizeof(p2) << endl;

    return 0;
}