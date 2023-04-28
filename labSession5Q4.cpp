/*
Question:
Create two inline function to compute (i)square of a number (ii)cube of a number.
Write appropriate main function to execute them.
*/

#include <iostream>
using namespace std;
inline int sqNum(int val)
{
    int square = val * val;
    return square;
}
inline int cubeNum(int val)
{
    int cubeNum = val * val * val;
    return cubeNum;
}
int main()
{
    int number;
    cout << "The number is: ";
    cin >> number;
    int square = sqNum(number);
    int cube = cubeNum(number);
    cout << "The square of the number is: " << square << endl;
    cout << "The cube of the number is: " << cube << endl;
    return 0;
}