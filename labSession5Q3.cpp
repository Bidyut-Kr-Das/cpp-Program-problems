/*
Question: Create two classes A and B both having one unsigned integer data member. Use  a friend
function add() to add two objects of classes A and B.
*/

#include <iostream>
using namespace std;
class B;
class A
{
public:
    unsigned int data1;
    friend int add(A, B);
};
class B
{
public:
    unsigned int data2;
    friend int add(A, B);
};
int add(A a1, B b1)
{
    int sum = a1.data1 + b1.data2;
    return sum;
}
int main()
{
    A a1;
    B b1;
    cout << "Enter first number: ";
    cin >> a1.data1;
    cout << "Enter second number: ";
    cin >> b1.data2;
    int sum = add(a1, b1);
    cout << "The sum of 2 object is: " << sum;

    return 0;
}