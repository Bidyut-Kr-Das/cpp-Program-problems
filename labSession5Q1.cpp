/*
QUESTION :
Define a class `Point` as following
class Point{
    int x;
    int y;
    int z;
};
Overload the unary - operator to change the sign of all three coordinates.
For example take a Point P as input with values (10,-20,30).Executing -p should return p as
(-10,20,-30)
*/

#include <iostream>

using namespace std;

class Point
{
    int x;
    int y;
    int z;

public:
    void setData(int, int, int); // setter function to set data to private data members
    void display(void);          // getter function to print private data members
    void operator-()             // overloading unary operator '-'
    {
        x = 0 - x;
        y = 0 - y;
        z = 0 - z;
    }
};
void Point::setData(int a, int b, int c)
{
    x = a;
    y = b;
    z = c;
}
void Point ::display()
{
    cout << "the value of x is: " << x << endl;
    cout << "the value of y is: " << y << endl;
    cout << "the value of z is: " << z << endl;
}

int main()
{
    Point p;
    int a, b, c;
    cout << "Enter first Value: ";
    cin >> a;
    cout << "Enter second Value: ";
    cin >> b;
    cout << "Enter third Value: ";
    cin >> c;
    p.setData(a, b, c);
    -p;
    p.display();

    return 0;
}