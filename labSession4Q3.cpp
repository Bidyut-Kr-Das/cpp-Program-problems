/*
Question:
3. Suppose you have a Piggy Bank with an initial amount of Rs. 50/- and
you have to add some more amount to it.
Create a class AddAmount with a data member named amount with an initial value of Rs. 50/-.
Now make two constructors of this class as follows:

(a) without any parameter no amount will be added to the Piggy Bank

(b) having a parameter which is the amount that will be added to Piggy Bank

Create object of the AddAmount class and display the final amount in Piggy Bank.
*/
#include <iostream>

using namespace std;

class AddAmount
{
    int amount;

public:
    AddAmount()
    { // Constructor to initialize the data member amount.
        amount = 50;
    }
    AddAmount(int value)
    {//Constructor with parameter.
        amount = 50 + value;
    }
    void display()
    {//Display method.
        cout << "The amount in the piggy bank is " << amount << endl;
    }
};
int main()
{
    AddAmount piggybank1;
    int money;
    cout << "Add to piggybank: ";
    cin >> money;
    AddAmount piggybank2(money);
    piggybank1.display();
    piggybank2.display();
    return 0;
}