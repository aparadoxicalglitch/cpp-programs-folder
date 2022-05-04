#include<iostream>
using namespace std;

int main()
{
    char ch = 'a';
    int a = ch;
    cout<<a<<endl; // will return the ascii value of a

    int b =65;
    char c = b;
    cout<<c<<endl; // will return A as A in ascii value is 65

    string s = "77";
    int d = s[0]-'0';
    cout<<d<<endl; 

    return 0;
}