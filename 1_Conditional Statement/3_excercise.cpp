#include<iostream>
using namespace std;
int main()
{
    int i=1,m;
    // for(i=1;i<=10;i++)
    // {
    //     m = i*6;
    //     cout<<"6 X "<<i<<" = "<<m<<endl;
    // }

    // while(i<=10)
    // {
    //     m = i*6;
    //     cout<<"6 X "<<i<<" = "<<m<<endl;
    //     i++;
    // }

    do
    {
        m = i*6;
        cout<<"6 X "<<i<<" = "<<m<<endl;
        i++;
    }while(i<=10);

    return 0;
}