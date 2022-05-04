#include<iostream>
using namespace std;

int main()
{
    int num1,num2;
    cout<<"Enter the value of num1 :\n"; /* '<<' is called Insertion Operator */
    cin>>num1; /* '>>' is called the Extraction operator */

    cout<<"Enter the value of num2 :\n"; /* '<<' is called Insertion Operator */
    cin>>num2; /* '>>' is called the Extraction operator */

    cout<<"The values of num1 and num2 are :"<<num1 <<" and " <<num2;
    int sum = num1 + num2;
    cout<<"\nThe sum of num1 and num2 is : "<<sum<<endl;

    // int a;
    // cout<<"Enter the value of a : ";
    // a = cin.get();
    // cout<<"The value of a is : "<<a<<endl;
    // cin.get() is used to take input of other characters like space, enter, tab etc. and will print the value in ascii 
}
