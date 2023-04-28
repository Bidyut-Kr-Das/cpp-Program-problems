/*
Question:
3. Write overloaded functions to calculate area according to the declarations given below.
(a) int area (int side); // calculate area of a square
(b) int area (int length, int breadth); // calculate area of a rectangle
(c) float area (float radius); // calculate area of a circle
Write main function to test these functions.
*/
#include <iostream>
#include <cmath>
using namespace std;
inline int area(int side)
{
    return side * side;
}
inline int area(int length, int breadth)
{
    return length * breadth;
}
float area(float radius)
{
    return M_PI * radius * radius;
}
int main()
{
    int squareArea = area(4);
    int rectangleArea = area(4, 5);
    float circleArea = area(3.5f);
    cout << "area of the square is: " << squareArea << endl;
    cout << "area of the triangle is:  " << rectangleArea << endl;
    cout << "area of circle is: " << circleArea << endl;
    return 0;
}