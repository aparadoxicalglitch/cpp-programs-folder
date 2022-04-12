#include<iostream>
#include <string.h>
#include<string>

using namespace std;

class animal
{
    
public:
    string name, colour;
    string legs, speed;
    void num_getdata(void);
    void getdata(void);
    void showdata()
    {
        cout << "Type of animal is " << name << endl;
        cout << name << " has " << legs << " legs" << endl;
        cout << "Its colour is " << colour << endl;
        cout << name << " Runs with the spped of " << speed <<" KMPH" << endl;
    }
};
void animal::num_getdata(void)
{
    legs="4";
    speed="40";
}
void animal::getdata(void)
{
     name= "DOG"; 
     colour= "BLACK";
}
int main()
{
    
    animal dog;
    dog.num_getdata();
    dog.getdata();
    dog.showdata();
}  