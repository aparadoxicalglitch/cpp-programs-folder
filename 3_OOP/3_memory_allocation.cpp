#include <iostream>
#include<string>
using namespace std;

class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void setPrice(void);
    void displayPrice(void);
    int totalPrice();
        // int TotalBill(int bill) { return bill; };
};

void Shop ::setPrice(void)
{
    cout << "Enter Id of your item no " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter Price of your item" << endl;
    cin >> itemPrice[counter];
    counter++;
}

void Shop ::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The Price of item with Id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int Shop :: totalPrice()
{
        int sum=0;
        for(int i=0; i<counter; i++)
        {
            sum += itemPrice[i];
        }
        return sum;
    }

int main()
{
    Shop dukaan;
    dukaan.initCounter();
    // dukaan.setPrice();
    // dukaan.setPrice();
    // dukaan.setPrice();
    // dukaan.setPrice();
    int a=1;
    char c;
    string choice;
    while(a<=100)
    {
        dukaan.setPrice();
        cout << "Do you want to buy anymore item? - Enter NO or YES" << endl;
        cin >> choice;
        if(choice=="NO")
        {
            break;
        }
        a++;
    }
    dukaan.displayPrice();
    dukaan.totalPrice();
    cout<<"Total Bill is "<<dukaan.totalPrice()<<endl;
    return 0;
}
