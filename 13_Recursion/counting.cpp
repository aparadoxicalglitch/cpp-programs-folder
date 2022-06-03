#include<iostream>
using namespace std;

void print(int n)
{
    //base case
    if(n == 0)
       return;

    // // Tail recursion
    // cout<< n << endl;

    // // Recursive relation 
    // print(n-1);
    
    // Head recursion
    print(n-1); // in this case first this function will run recursively and then start printing the elements

    cout<< n << endl;
}

int main()
{
    int n;
    cin>>n;
    cout<<endl;
    print(n);
    return 0;
}