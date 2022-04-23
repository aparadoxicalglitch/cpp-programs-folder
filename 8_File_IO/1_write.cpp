#include<iostream>
#include<fstream>

using namespace std;

int main(){
    string st = "Hey there it's me";
    // Opening files using constructor and writing it
    ofstream out("sample.txt"); // Write operation
    out<<st;

    return 0;
}
