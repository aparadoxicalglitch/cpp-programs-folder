#include<iostream>
#include<fstream>

using namespace std;

int main(){
    string st2;
    // Opening files using constructor and reading it
    ifstream in("sampleb.txt"); // Read operation
    // in>>st2; // it will only print the first word
    getline(in, st2);  // it will print the whole line
    cout<<st2;

    return 0;
}
