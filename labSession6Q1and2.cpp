/*
Question:
1. Write overloaded functions to add two numbers depending on the types for
each of the following cases
(a) add two int and return int
(b) add three int and return int
(c) add two floats and return float
(d) add one int to double and return double
(e) add double to int and return double
Write main function to execute these functions.
2. In the above program use default parameters to write one function for (a) and (b).

*/

#include <iostream>
using namespace std;
int add(int, int, int = 0); // function with default parameter

int add(int a, int b, int c)
{
    return a + b + c;
}
float add(float a, float b) // overloaded function for float parameter and float return
{
    return a + b;
}
double add(double a, int b) // overloaded add function with double return type
{
    return a + b;
}
double add(int a, double b) // overloaded add function with interchanged parameters
{
    return a + b;
}
int main()
{
    int sum = add(3, 4, 7);
    cout << sum;
    float sum1 = add(0.5f, 0.5f);
    cout << sum1;
    double sum2 = add(3.555, 3);
    cout << sum2;
    sum2 = add(3, 5.555);
    cout << sum2;
    return 0;
}