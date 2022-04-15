#include<iostream>
#include<cmath>
using namespace std;

class SimpleCalculator
{
    int num1, num2;
    public:
        void getSimpleData();
        void displaySimpleData();
};
void SimpleCalculator:: getSimpleData()
{
    cout<<"Enter 1st number"<<endl;
    cin>>num1;
    cout<<"Enter 2nd number"<<endl;
    cin>>num2;
}
void SimpleCalculator:: displaySimpleData()
{
    int choice;
    cout<<"Enter 1 for addition, 2 for subtraction, 3 for multiplication, 4 for division : ";
    cin>>choice;
    switch(choice)
    {
        case 1:
            cout<<"Sum of "<<num1<<" and "<<num2<<" is : "<<num1+num2<<endl;
            break;
        case 2:
            cout<<"Difference of "<<num1<<" and "<<num2<<" is : "<<num1-num2<<endl;
            break;
        case 3:
            cout<<"Multiplication of "<<num1<<" and "<<num2<<" is : "<<num1*num2<<endl;
            break;
        case 4:
            cout<<"Division of "<<num1<<" and "<<num2<<" is : "<<num1/num2<<endl;
            break;
        default:
            cout<<"Invalid input!"<<endl;
    }
}

class ScientficCalculator 
{
    int num;
    public:
        void getScientificData();
        void displayScientificData();

};
void ScientficCalculator :: getScientificData()
{
    cout<<"Enter the number"<<endl;
    cin>>num;
}
void ScientficCalculator :: displayScientificData()
{
    int c;
    cout<<"Enter 1 for natural log, 2 for commmon log, 3 for suare root, 4 for absolute value : ";
    cin>>c;
    switch(c)
    {
        case 1:
            cout<<"The answer is: " << log(num)<<endl;
            break;
        case 2:
            cout<<"The answer is: " << log10(num)<<endl;
            break;
        case 3:
            cout<<"The answer is: " << sqrt(num) <<endl;
            break;
        case 4:
            cout<<"The answer is: " << abs(num)<<endl;
            break;
        default:
            cout<<"Invalid input!"<<endl;
    }
}

class HybridCalculator: public SimpleCalculator, public ScientficCalculator
{
    public:
       void show()
       {
           getSimpleData();
           displaySimpleData();
           getScientificData();
           displayScientificData();
       }
};

int main()
{
    HybridCalculator obj;
    obj.show();

    return 0;
}